### Multiple Assignment for Variables
```python
a , b = 7 , 8
print(a,b)
print(type(a))
print(type(b))
Output
7 8
<class 'int'>
<class 'int'>
```
```python
a , *b = 7 , 8 , 9
print(a)
print(b)
print(type(a))
print(type(b))
Output
7
[8, 9]
<class 'int'>
<class 'list'>
```
```python
a = b = c = 7
print(a,b,c)
print(type(a))
print(type(b))
print(type(c))
Output
7 7 7
<class 'int'>
<class 'int'>
<class 'int'>
```
### Swapping Two Variables
```python
a , b = 7 , 8
print(a,b)
a , b = b , a
print("After swapping",a,b)
Output
7 8
After swapping 8 7
```
### Reversing a String
```python
my_string = "MY STRING"
rev_string = my_string[::-1]
print(rev_string)
Output
GNIRTS YM
```
### Splitting Words in a Line
```python
my_string = "This is a string in Python"
my_list = my_string.split(' ')
print(my_list)
Output
['This ', 'is ', 'a ', 'string ', 'in ', 'Python']
```
### List of words into a line

```pythonmy_list = ['This' , 'is' , 'a' , 'string' , 'in' , 'Python']
my_string = " ".join(my_list)
Output
This is a string in Python
```
### Printing a string multiple times


```python
n = int(input("How many times you need to repeat:"))
my_string = "constusername\n"
print(my_string*n)
Output
How many times you need to repeat:3
constusername
constusername
constusername
```
### Joining Two strings using addition operator


```python
a = "I Love "
b = "Python"
print(a+b)
Output
I Love Python
```
### More than one Conditional Operators

```python
a = 100
if (50 < a < 200):
    print("Hi")
Output
Hi
```

### Find most frequent element in a list


```python
my_list = [6,8,3,6,6,4,8,6]
most_frequent = max(set(my_list),key=my_list.count)
print(most_frequent)
Output
6

```

### Find Occurrence of all elements in list


```python
my_list = [1,2,3,1,4,1,5,5]
print(Counter(my_list))
Output
Counter({1: 3, 5: 2, 2: 1, 3: 1, 4: 1})
```

### Checking for Anagram of Two strings


```python
from collections import Counter
my_string_1 = "TACOCAT"
my_string_2 = "TACOCAT"
if(Counter(my_string_1) == Counter(my_string_2)):
    print("Anagram")
else:
    print("Not Anagram")
Output
Anagram
```

### Create Number Sequence with range

```python

my_list = list(range(2,20,2))
print(my_list)
Output
[2, 4, 6, 8, 10, 12, 14, 16, 18]
```

### Repeating the element multiple times


```python
my_list = [8]
my_list = my_list*5
print(my_list)
Output
[8, 8, 8, 8, 8]
```

### Using Conditions in Ternary Operator


```python
age = 25
print("Eligible") if age>20 else print("Not Eligible")
Output
Eligible
```

### List Comprehension with Python


```python
square_list = [x**2 for x in range(1,10)]
print(square_list)
Output
[1, 4, 9, 16, 25, 36, 49, 64, 81]
```

### Convert Mutable into Immutable

```python
my_list = [1,2,3,4,5]
my_list = frozenset(my_list)
my_list[3]=7
print(my_list)
Output
Traceback (most recent call last):
  File "<string>", line 3, in <module>
TypeError: 'frozenset' object does not support item assignment
```


### Rounding off with Floor and Ceil

```python
import math
my_number = 18.7
print(math.floor(my_number))
print(math.ceil(my_number))
Output
18
19
```

### Returning Boolean Values


```python
def function(n):
    return n>10
n = int(input())
print("Eligible") if function(n) else print("Not Eligible")
Output
11
Eligible
```

### Create functions in one line


```python
x = lambda a,b,c : a+b+c
print(x(10,20,30))
Output
60
```

### Apply function for all elements in list


```python
my_list = ["priyanshu", "may"]
new_list = map(str.capitalize,my_list)
print(list(new_list))
Output
['Priyanshu', 'May']
```

### Using Lambda with Map function


```python
my_list = [1, 2, 3, 4, 5]
new_list = map(lambda x: x*x, my_list)
print(list(new_list))
Output
[1, 4, 9, 16, 25]
```


### Return multiple values from a function


```python
def function(n):
    return 1,2,3,4
a,b,c,d = function(5)
print(a,b,c,d)
Output
1 2 3 4
```

### Filtering the values using filter function


```python

def eligibility(age):
    return age>=24
list_of_age = [10, 24, 27, 33, 30, 18, 17, 21, 26, 25]
age = filter(eligibility, list_of_age)print(list(age))
Output
[2antony
Antony4, 27, 33, 30, 26, 25]
```

### Merging Two Dictionaries in Python


```python
dict_1 = {'One':1, 'Two':2}
dict_2 = {'Two':2, 'Three':3}
dictionary = {**dict_1, **dict_2}
print(dictionary)
Output
{'One': 1, 'Two': 2, 'Three': 3}
```

### Getting size of an object

```python
import sys
a = 5
print(sys.getsizeof(a))
Output
28
```

### Combining two lists into dictionary

```python
list_1 = ["One","Two","Three"]
list_2 = [1,2,3]
dictionary = dict(zip(list_1, list_2))
print(dictionary)
Output
{'Two': 2, 'One': 1, 'Three': 3}
```

### Calculating execution time for a program

```python
import time
start = time.clock()
for x in range(1000):
    pass
end = time.clock()
total = end - start
print(total)
Output
0.00011900000000000105
```

### Removing Duplicate elements in list

```python
my_list = [1,4,1,8,2,8,4,5]
my_list = list(set(my_list))
print(my_list)
Output
[8, 1, 2, 4, 5]
```

### Iterating with zip function

```python
list_1 = ['a','b','c']
list_2 = [1,2,3]
for x,y in zip(list_1, list_2):
    print(x,y)
Output
a 1
b 2
c 3
```
