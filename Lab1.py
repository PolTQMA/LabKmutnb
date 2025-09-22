import math

# Calculate circumference and area of a circle from its diameter (not radius)
r = int(input("Enter diameter: "))/2
circumference = 2 * math.pi * r
area = math.pi * r**2
print("{:.3f}".format(circumference), "{:.3f}".format(area))

# Calculate Body Mass Index (BMI) from weight and height
weight = int(input("Enter weight: "))
high = int(input("Enter high: "))
BMI = weight / (high / 100) ** 2
print(BMI)

# Convert temperature in Celsius to Fahrenheit
C = int(input("Enter Celsius: "))
F = (C * 1.8) + 32
print("{:.3f}".format(F))

# คำนวณพื้นที่ของที่ดินรูปสี่เหลี่ยม จากความกว้างและความยาว (หน่วยเป็นเมตร)แสดงพื้นที่ในหน่วยตารางเมตร และตารางวา
weight = int(input("โปรดกรอกความกว้าง: "))
hight = int(input("โปรดกรอกความสูง: "))
squareMeter = weight * hight
squareWa = squareMeter / 4
print(squareMeter, squareWa)