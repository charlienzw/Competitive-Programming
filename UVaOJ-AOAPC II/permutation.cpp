#include <bits/stdc++.h>
using namespace std;

void print_permutation(int n,vector<int> P,vector<int> A, int cur)
{
	if (cur == n)
	{
		for (int i = 0; i < n; i++) printf("%d ", A[i]);
		printf("\n");
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (!i || P[i] != P[i - 1])
			{
				int c1 = 0, c2 = 0;
				for (int j = 0; j < cur; j++)
				{
					if (A[j] == P[i]) c1++;
				}
				for (int j = 0; j < n; j++)
				{
					if (P[i] == P[j]) c2++;
				}
				if (c1 < c2)
				{
					A[cur] = P[i];
					print_permutation(n, P, A, cur + 1);
				}
			}
		}
	}
}

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		vector<int> P(n);
		for (int i = 0; i < n; i++) scanf("%d", &P[i]);
		vector<int> A(n);
		print_permutation(n, P, A, 0);
	}
}