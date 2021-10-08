import java.util.*;

/***
The problem is to count all the possible paths from top left to bottom right of a MxN matrix with the constraints that from each cell you can either move to right or down.

Author: b49tan
***/

public class number_of_paths
{

	/* Explanation:
	Based on the contraints in the question, from every cell, we can either move right or down. 
	Thinking in a bottom up manner, if we are at cell[i][j], we would have come from either adjacent cell above or adjacent left cell.

	Thus, number of ways to reach cell[i][j] would be - 
	
			above cell      left cell
	cell[i][j] = cell[i-1][j] + cell[i][j-1];

	To reach starting cell - (0,0) - number of ways = 1.
	So to reach cell(0,1) would be (using recursion defined above)
	= cell(-1,1) + cell(0,0)
	=     X      +     1
	=       1

	The recursion shows that we can divide the problem in optimal subproblems and those sub problems are overlapping. 
	Therefore we can solve this optimally using Dynamic Programming + Memoization.

	The below solution follows the bottom up approach for DP - 
		1. start by defining the base cases
		2. Iterate over the grid and calculate number of ways @ cell[i][j] using the above defined recursion
		3. Values are stored in dp[i][j] for achieving memoization
	*/

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
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number of rows in matrix");
		int m=sc.nextInt();
		System.out.println("Enter number of columns in matrix");
		int n=sc.nextInt();
		System.out.println("Row=" + m + ", Col=" + n + ", number of paths = " + numberOfPaths(m,n));

	}

	/***

	Code complexity: O(MXN)
	M = Number of rows in matrix
	N = Number of columns in matrix

	Input: 
		T1: rows=3, columns=7
		T2: rows=-1, columns=7

	Output:
		T1: 28
		T2: 0

	***/
}
