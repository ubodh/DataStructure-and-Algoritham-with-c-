#include <bits/stdc++.h>
using namespace std;

int circle(int x1, int y1, int x2, int y2, int r1, int r2)
{
	double d = sqrt((x1 - x2) * (x1 - x2)
						+ (y1 - y2) * (y1 - y2));

	if (d <= r1 - r2) {
		cout << "Circle B is inside A";
	}
	else if (d <= r2 - r1) {
		cout << "Circle A is inside B";
	}
	else if (d < r1 + r2) {
		cout << "Circle intersect to each other";
	}
	else if (d == r1 + r2) {
		cout << "Circle touch to each other";
	}
	else {
		cout << "Circle not touch to each other";
	}
}

// Driver code
int main()
{
	int x1 = -10, y1 = 8;
	int x2 = 14, y2 = -24;
	int r1 = 30, r2 = 10;
	circle(x1, y1, x2, y2, r1, r2);

	return 0;
}

