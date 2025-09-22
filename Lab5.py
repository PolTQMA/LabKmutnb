array = [123, 125.4, 123.00246, 125.4003, 125, 127.27]
n = len(array)
num = float(input("Enter num :"))
max = min = array[0]
indexMax = indexMin = sum = 0
variance = 0
for i in range(n):
    if array[i] > max:
        max = array[i]
        indexMax = i
    elif array[i] < min:
        min = array[i]
        indexMin = i
    if array[i] == num:
        print("Your index :", i)
    sum += array[i]
print(f"max : {max:.2f} at index : {indexMax}")
print(f"min : {min:.2f} at index : {indexMin}")
print("average :", "{:.2f}".format(sum/n))

for i in range(n):
    variance += (array[i] - sum/n) * (array[i] - sum/n)
variance /= n
print("variance :", "{:.2f}".format(variance))