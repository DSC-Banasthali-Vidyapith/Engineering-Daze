import java.util.*;

/***
The problem is to count all the possible paths from top left to bottom right of a MxN matrix with the constraints that from each cell you can either move to right or down.

Author: b49tan
***/

public class Number_of_Paths
{
	static int numberOfPaths(int m, int n)
	{
		//If not a valid matrix, 0 paths
		if(m<=0 || n<=0)
			return 0; 

		int[][] dp = new int[m][n];

		//Base case
		for(int rowNum=0;rowNum<m;rowNum++)
			dp[rowNum][0] = 1;

		for(int colNum=0;colNum<n;colNum++)
			dp[0][colNum] = 1;

		//Bottom up DP with memoization
		for(int rowNum=1; rowNum<m;rowNum++)
		{
			for(int colNum=1;colNum<n;colNum++)
			{
				dp[rowNum][colNum] = dp[rowNum][colNum-1] + dp[rowNum-1][colNum];
			}
		}

		return dp[m-1][n-1];
	}

	public static void main(String[] args)
	{
		System.out.println("Number of paths from top left to bottom right");

		//Test case 1
		System.out.println("T1: Row=3, Col=7, number of paths = " + numberOfPaths(3,7));

		//Test case 2
		System.out.println("T1: Row=-1, Col=7, number of paths = " + numberOfPaths(-1,7));

	}

	/***

	Code complexity: O(MXN)

	Input: 
		T1: rows=3, columns=7
		T2: rows=-1, columns=7

	Output:
		T1: 28
		T2: 0

	***/
}
