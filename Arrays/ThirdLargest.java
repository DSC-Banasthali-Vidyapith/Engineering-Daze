class ThirdLargest
{
static void thirdLargest(int arr[],int arr_size)
{
    /* There should be
    atleast three elements */
    if (arr_size < 3)
    {
        System.out.printf(" Invalid Input ");
        return;
    }
 
    // Sort the array in descending order
    for(int i=0;i<arr_size-1;i++)
    {
        for(int j=0;j<arr_size-1-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    System.out.println("The Third Largest Element:"+arr[2]);
}
 
// Driver code
public static void main(String []args)
{
    int arr[] = {12, 13, 1,10, 34, 16};
    int n = arr.length;
    thirdLargest(arr, n);
}
}
// arr={12,13,1,10,34,16}
// Output 13
// Complexity of the code is O(n^2)
