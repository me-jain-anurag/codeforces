s = input()
res = ""

vowels = ('a', 'e', 'i', 'o', 'u', 'y'
          , 'A', 'E', 'I', 'O', 'U', 'Y')

for i in range(len(s)):
    if s[i] in vowels:
        continue
    res = res + '.' + s[i].lower()

print(res)