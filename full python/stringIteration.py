s="hello guys"
# s=s[-1::-1] by using this can get reverse string
# l=len(s)
# print(l)
# for a in range(l):
#     print(s[a])
l=len(s)
print(l)
for a in range(l):
    print(s[a])

# for reverse string
for a in range(l-1,-1,-1):
    print(s[a])

# string iteration without len() function
x="hi"
for a in x:
    print(a)

# for reverse
for a in x[-1::-1]:
    print(a)