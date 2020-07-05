"""
Consider a list (list = []). You can perform the following commands:

insert i e: Insert integer  at position .
print: Print the list.
remove e: Delete the first occurrence of integer .
append e: Insert integer  at the end of the list.
sort: Sort the list.
pop: Pop the last element from the list.
reverse: Reverse the list.
Initialize your list and read in the value of  followed by  lines of commands where each command will be of the  types listed above. Iterate through each command in order and perform the corresponding operation on your list.

Input Format

The first line contains an integer, n denoting the number of commands.
Each line i of the n subsequent lines contains one of the commands described above.

Constraints

The elements added to the list must be integers.
Output Format

For each command of type print, print the list on a new line.

"""

li = []
N = int(input())
for _ in range(0, N):
    cmd = input().split()
    if cmd[0] == 'insert':
       li.insert(int(cmd[1]), int(cmd[2]))
    elif cmd[0] == 'print':
        print ("li")
    elif cmd[0] == 'remove':
       li.remove(int(cmd[1]))
    elif cmd[0] == 'append':
       li.append(int(cmd[1]))
    elif cmd[0] == 'sort':
       li.sort()
    elif cmd[0] == 'pop':
       li.pop()
    elif cmd[0] == 'reverse':
       li.reverse()