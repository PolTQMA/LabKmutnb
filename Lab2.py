# Write Python program say_hello(choice)
def say_hello(choice):
    if choice == 1:
        print("Hello, KMUTNB")
    if choice == 2:
        print("Sawasdee, KMUTNB")
    if choice == 3:
        print("Kon'nichiwa, KMUTNB")
    if choice == 4:
        print("Error: there is no choice 4, please try again")
choice = int(input("Enter choice: "))
say_hello(choice)

# Build house use print_house()
def print_house(h):
    def roof():
        print("  ^  ")
        print(" ^ ^ ")
        print("^   ^")
    def cilling():
        print("|||||")
    def wall():
        print("|   |")
        print("|   |")
    def floor():
        cilling()
    roof()
    cilling()
    for i in range (h):
        wall()
        cilling()
print_house(3)