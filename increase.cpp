#include <iostream>

using namespace std;

int main() {
  int n;
  int array[1000];
  int answer = 0;
  int difference=0;
  int count = 0;

  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> array[i];
	  
  }
  for (int i = 1; i < n; i++ ){
  	difference = array[i] - array[i-1];
  		if (difference > 0){
  			count += difference;
  		}
  } 

  // now compute the answer and put it into the "answer" variable
  // good luck :) you've got this!
  // p.s. don't forget your semi-colons

  

  // output the result
  cout << count << endl;

  return 0;
}
