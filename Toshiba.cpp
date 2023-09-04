// C++ Program to find the total
// number of distinct years
#include <bits/stdc++.h>
using namespace std;

// function to find the total
// number of distinct years
int distinct_year(string str)
{
	string str2 = "";

	unordered_set<string> uniqueDates;

	for (int i = 0; i < str.length(); i++) {

		if (isdigit(str[i])) {
			str2.push_back(str[i]);
		}

		// if we found - then clear the str2
		else if (str[i] == '-') {
			str2.clear();
		}

		// if length of str2 becomes 4
		// then store it in a set
		else if (str2.length() == 4) {
			uniqueDates.insert(str2);
			str2.clear();
		}
		
		// else clear the string.
		else{
		str2.clear();
		}
	}

	// return the size of set
	return uniqueDates.size();
}

// Driver code
int main()
{
	string str = "UN established on 24-10-1945."
				"India got freedom on 15-08-1947.";

	cout << distinct_year(str);

	return 0;
}
