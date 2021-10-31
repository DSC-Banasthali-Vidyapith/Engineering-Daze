/* 

C Program to Find the Roots of the Quadratic Equation 

quadratic equations are the polynomial equation of type f(x)=ax^2+bx+c
where a,b,c belongs to R and a!=0

roots of quadratic equation:x=(-b+-D^1/2)/2a where D=b^2-4ac

nature of roots:
 D > 0, roots are real and distinct (unequal)
 D = 0, roots are real and equal (coincident)
 D < 0, roots are imaginary , unequal and conjugate.

 Algorithm- 
 1. Start
 2. Take input for coefficients of x^2, x, and constant term. 
 3. Store it in variables a,b,c.
 4. Find discriminant and store it in another variable .
 5. Compare values of d with respect to 0.
 6. Find roots using the formula.
 7. Print value of roots.
 8. Stop

*/ 
 
#include<stdio.h>  
#include<math.h>  // it is used for mathematical calculations 
#include<conio.h> 
 
int main ()  
{  
    float a, b, c, det, root1, root2, real, img;  
    printf("\n Enter the value of coefficient a, b and c in ax^2+bx+c: ");  
    scanf("%f %f %f", &a, &b, &c);  
    
	//calculating determinant D as det
    det = (b*b) - (4*a*c);
	  
    // defines the conditions for real and different roots of the quadratic equation  
    if (det > 0)  
    {  
    root1 = (-b + sqrt(det)) / (2 * a);  
    root2 = (-b - sqrt(det)) / (2 * a); 
	
    printf("\n Roots are real and distinct \n Value of root 1 = %.2f and value of root 2 = %.2f", root1, root2);  
    }  
    // elseif condition defines both roots ( real and equal root) are equal in the quadratic equation  
    else if (det == 0)  
    {  
        root1 = root2 = -b / (2 * a); // both roots are equal; 
        printf("\n Roots are real and equal \n Value of root 1 = %.2f and Value of root 2 = %.2f", root1, root2);  
    }  
    // if det < 0, means both roots are real and imaginary in the quadratic equation.  
    else
	{  
        real = -b / (2 * a);  
        img = sqrt(-det) / (2 * a);  
        
        printf("\n Roots are imaginary and conjugate \n value of root 1 = %.2f + %.2fi and value of root 2 = %.2f - %.2fi ", real, img, real, img);  
        //as roots are conjugate
    }  
  
}  

/*

 input1 : Enter the value of coefficient a, b and c in ax^2+bx+c: 1 5 6

 output1:  Roots are real and distinct
           Value of root 1 = -2.00 and value of root 2 = -3.00

 input2 : Enter the value of coefficient a, b and c in ax^2+bx+c:  4 -4 1

 output2: Roots are real and equal
          Value of root 1 = 0.50 and Value of root 2 = 0.50


 intput3: Enter the value of coefficient a, b and c in ax^2+bx+c: 1 4 5

 output3: Roots are imaginary and conjugate
          value of root 1 = -2.00 + 1.00i and value of root 2 = -2.00 - 1.00i


Time Complexity: O(1)
Space Complexity: O(1)

*/
