
# Datatypes lict
# 1.numeric
#   Integer 
#   float
#   complex Number
# 2.Sequence type
#  string
#  list
#  tuple
# 3.dictionary
# 4.set
# 🎇Mutable Data types
#   list 
#   dictionary
#   byte array
# 🎇 Immutable
#   Number
#   string 
#   tuple
#   set
 
#  Number
a=4
print(a, type(a))
a=3.3
print(a,type(a))
a=5+3j
print(a, type(a))

# string (collection of character)
# str represent:'str1' ,"str",'''multi-line str'''
s="hello it's me"
print(s, type(s))
s=''' 
    hello , 
    My name is V

'''
print(s)

# List[] - ordered sequence of item
# [2,'n'] list are mutable datatype
l=[10,'v',4.3]
print(l, type(l))
l[2]=5
print(l)

# Tuple()- ordered sequence item same as list
# immutable datatype -(3,"h")-faster access than list
# t=(10) if tuple having one item type will be as element
t=(10,40,"hello")
print(t, type(t))
t=(10)
print(t, type(t))

# Dictionary{} -unordered collection key-value pair
# key must be unique and immutable datatype
d={
    "name":"V",
    'company':'hybe'
}
print(d, type(d))
d['position']='visual,vocalist'
print(d)
print(d['company'])

# set{}- unordered collection of items 
# set is unique(no duplicate) and immutable
s={10,49,'hi'}
print(s, type(s))






