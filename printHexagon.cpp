// Java program to print hexagonal pattern

class GFG
{
	static void printHexagon(int n)
	{
		int l = 2 * n - 1;

		/**** Print upper part *****/
		for (int i = 0; i < n; i++)
		{
			int elem = i + n;

			// loop for printing the
			// whitespaces and the star
			for (int k = 0; k < elem; k++)
			{
				// prints the star
				if ((k == n + i - 1) ||
					(k == n - i - 1))
					System.out.print("*");
				else
					System.out.print(" ");
			}
			System.out.print("\n");
		}

		/**** Print middle part *****/
		// Here we print two vertical lines
		for (int m = 0; m < n - 2; m++)
		{
			for (int j = 0; j < l; j++)
			{
				if (j == 0 || j == l - 1)
					System.out.print("*");
				else
					System.out.print(" ");
			}
			System.out.print("\n");
		}

		/**** Print Lower part *****/
		int r = n - 1;
		for (int h = r; h >= 0; h--)
		{
			int elem = h + n;
			for (int k = 0; k < elem; k++)
			{
				if ((k == n + h - 1) ||
					(k == n - h - 1))
					System.out.print("*");
				else
					System.out.print(" ");
			}
			System.out.print("\n");
		}
	}

	// Driver code
	public static void main (String[] args)
	{
		// length of a side
		// n >= 2
		int n = 3;
		printHexagon(n);
	}
}

// This code is contributed by Anant Agarwal.

