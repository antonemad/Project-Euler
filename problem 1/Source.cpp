#include<bits/stdc++.h>
using namespace std;
int sumDiv_n(int target,int n)
{
	int p = target / n;
	return n*(p * (p + 1)) / 2;
}
int main()
{
	int target = 999;
	cout << sumDiv_n(target, 3) + sumDiv_n(target, 5) - sumDiv_n(target, 15);
}