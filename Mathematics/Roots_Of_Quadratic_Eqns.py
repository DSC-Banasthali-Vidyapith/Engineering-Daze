#Python program to find roots of a given quadratic equation.
#Given a quadratic equation. Write a program to find its roots.

#Algorithm- 
#1. Start
#2. Take input for coefficients of x^2, x, and constant term. 
#3. Store it in variables a,b,c.
#4. Find discriminant and store it in another variable d.
#5. Find square root of discriminant and store it in another variable sq.
#6. Compare values of d with respect to 0.
#7. Find roots.
#8. Print value of roots.
#9. Stop

print("A Python program to find roots of a given quadratic equation:")
print("__________________________________________________________________")

#Importing the math library to use its functions
import math  
  
# User-Defined Function Body containing logic:   
def findingRoots(a, b, c):  
    #defining discriminant
    d = b * b - 4 * a * c 
    #finding square root of discriminant
    sq = math.sqrt(abs(d))  
  
    
    if d > 0:  
        print("Roots are real and have different values.")  
        print((-b + sq) / (2 * a))  
        print((-b - sq) / (2 * a))  
  
    elif d == 0:  
        print("Roots are real and have same value.")  
        print(- b / (2 * a))
  
  
    else:  
        print("Complex Roots.")  
        print(- b / (2 * a), " + i", sq)  
        print(- b / (2 * a), " - i", sq)  
  
  
a = int(input('Enter a(Coefficient of x^2):'))  
b = int(input('Enter b(Coefficient of x):'))  
c = int(input('Enter c(Constant Term):'))  
  
# If a is 0, then equation is no longer quadratic.  
if a == 0:  
    print("Input correct quadratic equation") 

# If a is not 0, then equation is quadratic.  
else:  
    findingRoots(a, b, c) 

#TEST CASES:

#Test Case 1:

#Input:
#Enter a(Coefficient of x^2): 3
#Enter b(Coefficient of x): 6
#Enter c(Constant Term): 2

#Output:
#Roots are real and have different values.
#-0.42264973081037427
#-1.5773502691896255

#Test Case 2:

#Input:
#Enter a(Coefficient of x^2): 44
#Enter b(Coefficient of x): 23 
#Enter c(Constant Term): 55

#Output:
#Complex Roots.
#-0.26136363636363635  + i 95.66085928947116
#-0.26136363636363635  - i 95.66085928947116

#Time Complexity: O(1)
#Space Complexity: O(1)

#___________________________________________________________________________________________________________