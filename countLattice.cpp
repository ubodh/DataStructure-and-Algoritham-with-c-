#include<bits/stdc++.h>
using namespace std;
int countLattice(int r)
{
	if (r <= 0)
		return 0;
	int result =4;
	for (int x=1; x<r; x++)
	{
		int ySquare = r*r - x*x;
		int y = sqrt(ySquare);
		if (y*y == ySquare)
			result += 4;
	}

	return result;
}
int main()
{
	int r = 5;
	cout << countLattice(r);
	return 0;
}

