import random

# Perfect nums question
for n in range (1, 10000):
    sum = 1
    for i in range (2, n // 2 + 1):
        if n % i == 0:
            sum += i
    if(sum == n):
        print(n)

# Guess num question
num = random.randint(0, 100)
while True:
    guess = int(input("Guess: "))
    if guess == 0:
        print(f"the number is : {num}")
        break
    if guess < num:
        print("The number is greater than predicted")
    if guess > num:
        print("The number is less than predicted")
    if guess == num:
        print("The number is correct!")
        break


# Durian qusetion
ans = count = 0
while True:
    durian = int(input("Please input Durian weight: "))
    if durian == 0:break
    count += 1
    ans += durian
print(f"Total of {count} Durians")
print(f"Avrage weight is {ans / count}")

# Exchange coins qusetion
while True:
    coin = int(input("Enter exchange value (0 to exit): "))
    if coin == 0:break
    ten = coin // 10
    coin %= 10
    five = coin // 5
    coin %= 5
    print("ten coins:", ten)
    print("five coins:", five)
    print("one coins:", coin)