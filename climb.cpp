#include <iostream>
using namespace std;

int main() {
	int n=0;
	cin >> n;
	int array[n]; 
	int count[n];
	int k =0;
	for (int i = 0; i < n; i++){
		cin >> array[i];
		count[i] =0;
	}
	int x = n-1;

	for (int j=x; j >= 0; j--){
		if (array[j] > array[j-1]){
			k++;
			count[j-1]=k;
		}
		if (array[j] <= array[j-1]){
			k=0;
			count[j-1] = k;
		}

	}
	for (int a =0; a<n; a++){
		cout << count[a] << " ";
	}
	return 0;
}