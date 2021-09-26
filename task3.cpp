
#include<bits/stdc++.h>
using namespace std;


// Recursive function to find
// minimum number of insertions
int countMin(char str[], int l, int h)
{
	// Base Cases
	if (l > h) return INT_MAX;
	if (l == h) return 0;
	if (l == h - 1) return (str[l] == str[h])? 0 : 1;


	return (str[l] == str[h])?
					findMinInsertions(str, l + 1, h - 1):
					(min(findMinInsertions(str, l, h - 1),
					findMinInsertions(str, l + 1, h)) + 1);
}

// Driver code
int main()
{
	char str[] = "aa";
	cout << findMinInsertions(str, 0, strlen(str) - 1);
	return 0;
}

