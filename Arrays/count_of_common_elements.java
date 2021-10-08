/* We will make a hash table of the smaller array
 so that our searching becomes faster and all elements appear only once. 
Now for each element of the bigger array, we will perform a search operation of that element in the hash table.
The search operation in a hash table is, in an average case, O(1).


 Approach- 
 
1:   Create a hash table of size n.

2:  Add all elements of array B[] in the hash table.

3:  For each element of A[], search for that element in the hash table. 
    If found, add the element to the answer list.

4:  Return answer list's size.    



Complexity Analysis-:
     Time Complexity = Inserting n elements of A[] in hash table + Time complexity of searching m elements of B[] in the hash table

     = m* O(1) + n * O(1)) = O(m+n)

Space Complexity = O(n), for storing the auxiliary hash table


*/
 // Sample Test cases
/* 
    Sample Input-: 5 4
                   1 2 3 4 5
                   2 3 6 5
    Sample Output-: 3       common elements are 2, 3 , 5  

    Sample Input-: 4 7
                   1 2 3 4 
                   2 3 6 5 4 7 8
    Sample Output-: 3      common elements are 2, 3 , 4

*/
// Solution Code

import java.util.*;
public class count_of_common_elements
{
    public static void name(String[] args) 
    {
        Scanner in= new Scanner(System.in);
        System.out.println("enter size of both arrays");
        int n=in.nextInt(), m=in.nextInt();
        ArrayList<Integer> ans=new ArrayList<>();
        HashSet<Integer> hs=new HashSet<>();
        int a[]=new int[n],b[]=new int[m];
        for(int i=0;i<n;i++)
        a[i]=in.nextInt();
        for(int i=0;i<m;i++)
        b[i]=in.nextInt();
        if(n>m)       // creating hashSet of smaller size array
        {
            for(int i=0;i<m;i++)
            hs.add(b[i]);
            for(int i=0;i<n;i++)
            {
                if(hs.contains(a[i]))
                ans.add(a[i]);
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            hs.add(a[i]);
            for(int i=0;i<m;i++)
            {
                if(hs.contains(b[i]))
                ans.add(b[i]);   // adding common elements in ans list
            }
        }
        System.out.println(ans.size());
        in.close();
    }
}
