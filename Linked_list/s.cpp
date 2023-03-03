#include <bits/stdc++.h>
using namespace std;

string removeX(string N, char X)
{

	// Stores the index of X
	// that has to be removed
	int index = -1;

	// Find leftmost occurrence of X
	// such that the digit just after X
	// is greater than X
	for (int i = 0; i < N.length() - 1; i++) {
		if (N[i] == X && N[i] - '0' < N[i + 1] - '0') {

			// Update index and break
			index = i;
			break;
		}
	}

	// If no occurrence of X such that
	// the digit just after X
	// is greater than X is found
	// then find last occurrence of X
	if (index == -1) {
		for (int i = N.length() - 1; i >= 0; i--) {
			if (N[i] == X) {
				index = i;
				break;
			}
		}
	}

	// Construct answer using all characters
	// in string N except index
	string ans = "";
	for (int i = 0; i < N.length(); i++) {
		if (i != index)
			ans = ans + N[i];
	}

	return ans;
}

int main()
{

	string N = "2342";
	char X = '2';
	cout << removeX(N, X) << endl;
	return 0;
}

