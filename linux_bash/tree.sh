# matrix to fill from bottom up
declare -A matrix
# you know..
num_rows=63
num_columns=100
# initial length of first trunk
len=16

# roots defines "start points" for trees on the current level
# tree = trunk + branches
declare -a roots
roots[0]=$((num_columns/2))

# init matrix with underscores
for ((i=1;i<=num_rows;i++)) do
    for ((j=1;j<=num_columns;j++)) do
        matrix[$i,$j]='_'
    done
done

# read number of levels
read n
# j is current built row from bottom
j=$num_rows
# i is current level
for ((i=1; i<=n; i++)) do
    # elems is number of roots on current level
    elems=${#roots[@]}
    # temp var to restore current row
    old_j=$j
    for((k=0; k<elems; k++)) do
        # position of root
        pos=${roots[$k]}
        #print the trunk
        for((m=0; m<=len-1; m++)) do
            matrix[$j,$pos]='1'
            ((j--)) # go upper
        done
        #print the branches
        for((m=1; m<=len; m++)) do
            matrix[$j,$((pos-m))]='1'
            matrix[$j,$((pos+m))]='1'
            ((j--)) # go upper
        done
        roots=("${roots[@]}" "$((pos-m+1))" "$((pos+m-1))" )
        # restore j to draw parallel subtree
        (( $k < $((elems-1)) )) && j=$old_j
    done
    # delete already used roots
    for((k=0; k<$elems; k++)) do
        unset roots[$k]
    done
    # refresh array indeces after deletions
    roots=( "${roots[@]}" )
    # short trees length
    len=$((len/2))
done

# print the matrix
for ((i=1;i<=num_rows;i++)) do
    for ((j=1;j<=num_columns;j++)) do
        printf ${matrix[$i,$j]}
    done
    printf "\n"
done
