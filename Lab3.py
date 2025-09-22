# Calculate grade from score (A for score 80-100, B for 70-79, C for 60-69 and D for 50-59, F for 0-49)
score = int(input("Enter your score: "))
if score >= 0 and score <= 100: 
    if score >= 80 :
        print("Grade: A\n")
    elif score >= 70 :
        print("Grade: B\n")
    elif score >= 60 :
        print("Grade: C\n")
    elif score >= 50:
        print("Grade: D\n")
    else :
        print("Grade: F\n")        
else :
        print("Invalid score. Please enter a value between 0 and 100.\n")