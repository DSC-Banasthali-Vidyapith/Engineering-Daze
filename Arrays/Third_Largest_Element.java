import java.util.*;

class ThirdLargestElement
{

//find the first, then second and then the third largest element.
static void thirdLargestElement(int arr[])
{

	int firstLargest = Integer.MIN_VALUE;
	for (int i = 0; i < arr.length ; i++)
		if (arr[i] > firstLargest)
			firstLargest = arr[i];


	int secondLargest = Integer.MIN_VALUE;
	for (int i = 0; i < arr.length ; i++)
		if (arr[i] > secondLargest && arr[i] < firstLargest) 
			secondLargest = arr[i];


	int thirdLargest = Integer.MIN_VALUE;
	for (int i = 0; i < arr.length ; i++)
		if (arr[i] > thirdLargest && arr[i] < secondLargest)
			thirdLargest = arr[i];

	System.out.println("Third Largest Element:: "+ thirdLargest);
}

// main method
public static void main(String args[])
{
	int len;  
	Scanner sc=new Scanner(System.in);  
	System.out.print("Enter the number of elements:: ");
	len=sc.nextInt();
	int elements[] = new int[len];
	System.out.println("Enter the elements of the array:: ");  
	for(int i=0; i<len; i++)  
	{     
	elements[i]=sc.nextInt();  
	}
	
	thirdLargestElement(elements);
}
}

/*Test Cases

Enter the number of elements::
5
Enter the elements of the array::
1 200 34 48 59
Third Largest Element:: 48

Enter the number of elements::
7
Enter the elements of the array::
9 8 13 15 21 98 50
Third Largest Element:: 21

*/

