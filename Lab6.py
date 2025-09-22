#from left

text = input("Enter massage:")
n = len(text)
index = 0
for i in range(n):
    if text[i] == 'a':
        index = i
        break
print(f"Your index: {index}")


#from right

text = input("Enter massage:")
n = len(text)
index = 0
for i in range(n-1, -1, -1):
    if text[i] == 'a':
        index = i
        break
print(f"Your index: {index}")


#palindrome
text = input("Enter massage:")
n = len(text)
bool = True
for i in range(n//2):
    if text[i] != text[n-1-i]:
        bool = False
        break
print(bool)


#count character (want only)

def countChar(char, massage):
    n = len(massage)
    count = 0
    for i in range(n):
        if massage[i] == char:
            count += 1
    return count


#count vowels

def countVowels(massage):
    n = len(massage)
    massage = massage.lower()
    count = 0
    for i in range(n):
        if (massage[i] == 'a' or massage[i] == 'e' or massage[i] == 'i' or massage[i] == 'o' or massage[i] == 'u'):
            count += 1
    return count

print(countChar('a', "thailand"))
print(countVowels("thailand"))