# lower()-lowercase   upper() -uppercase string
# title()-1st letter of everyu word in uppercase
# capatalise()-capatalise only 1st letter of word of string
# find('s',2)-finding index of substring if not found got -1 here 's' is substr and start from 2nd index
# index()-finding index of substring if not give error
# isalpha()-true str contain only letter   
#  isdigit()-true str contain only digit
# isalnum()-true str contain both number or letter no special symbol
s="hello, my name is V"
# print(s.lower())
# print(s.upper())
# print(s.title())
# print(s.capitalize())
print(s.find('e'))
print(s.find('e',2))
print(s.find('z'))#got -1(not found)
print(s.index('e'))
# print(s.index('x'))got value error
a="hi"
print(a.isalpha())
print(s.isalpha())
a="2323121"
print(a.isalpha())
print(a.isdigit())
print(a.isalnum())
print(s.isalnum())