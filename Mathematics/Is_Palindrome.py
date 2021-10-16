#Python program to check whether an integer number is palindrome:
#Given an integer number. Check whether it is palindrome or not.

#Algorithm- 
#1. Start
#2. Take input for an integer number from user. 
#3. Store it in a variable named extra.
#4. Reverse the inputted integer.
#5. Compare the extra variable with reversed integer.
#6. If extra=rev, the integer is palindrome. Else it is not.
#7. Stop

print("A Python program to check whether an integer number is palindrome:")
print("__________________________________________________________________")
num=int(input("Enter any integer number to check if it's palindrome:"))
extra=num
rev=0
while(num>0):
    digit=num%10
    rev=rev*10+digit
    num=num//10
if(extra==rev):
    print("The inputted integer number is a palindrome!")
else:
    print("The inputted integer number isn't a palindrome!")


#TEST CASES:

#Test Case 1:
#Input:
#Enter any integer number to check if it's palindrome: 123
#Output:
#The inputted integer number isn't a palindrome!

#Test Case 2:
#Input:
#Enter any integer number to check if it's palindrome: 12321
#Output:
#The inputted integer number is a palindrome!

#Time Complexity: O(N)
#Space Complexity: O(N)

#--------------------------------------------------------------------------------------------------------------