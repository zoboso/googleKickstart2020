

// changed languages and moved to Visual studio 
// debugger does not show output
#include <iostream> // includes cin to read from stdin and cout to write to stdout
using namespace std; // since cin and cout are both in namespace std, this saves some text
int main() {
	int t, n, d;

	cin >> t; // read t. cin knows that t is an int, so it reads it as such.
	for (int i = 1; i <= t; ++i) {
		cin >> n >> d; // read n and then m.
		int output = d;


		const int nMax = 1000;
		int x[nMax];

		// input data into array
		for (int j = 0; j < n; ++j)
		{
			cin >> x[j];
		}

		// there is a lot less checking if you go from top to bottom
		for (int j = (n - 1); j >= 0; --j)
		{
			int diff = output - (output % x[j]);
			// the above gets you the earliest you can get on the bus X
			if (diff < output)
				output = diff;
		}


		cout << "Case #" << i << ": " << output << endl;
	}

	return 0;
}