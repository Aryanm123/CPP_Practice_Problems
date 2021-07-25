#include <bits/stdc++.h>
using namespace std;

void arrange(long long arr[], int n) {
        // Your code here
        for (int i=0; i < n; i++)
		arr[i] += (arr[arr[i]]%n)*n;

	// Second Step: Divide all values by n
	for (int i=0; i<n; i++)
		arr[i] /= n;
    }
int main(){
	
	return 0;
}
