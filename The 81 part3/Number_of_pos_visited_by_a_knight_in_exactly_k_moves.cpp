// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;
int n,k;
int vis[101][101];
int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };

// function that will be called recursively
int solve(int curX, int curY, int steps, int n)
{

	if (steps == 0 && vis[curX][curY] == 0) {

		vis[curX][curY] = 1;
		return 1;
	}

	int res = 0;
	if (steps > 0) {

		for (int i = 0; i < 8; i++) {

			int newX=dx[i]+curX;
			int newY=dy[i]+curY;
			if (newX >= 0
				&& newX <= n - 1
				&& newY >= 0
				&& newY <= n - 1) {

				res += solve(newX, newY,
									steps - 1, n);
			}
		}
	}
	return res;
}


int main()
{
    int i,j;
	cin>>i>>j>>n>>k;

	cout << solve(i, j, k, n);

	return 0;
}
