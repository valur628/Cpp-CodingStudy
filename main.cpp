#include <iostream>

using namespace std;

int main(int argc, char ** argv) {
  int T = 0;
  int num[1000];
  int temp = 0;
  cin >> T;
  for (int i = 0; i < T; i++) {
    cin >> num[i];
  }
  for(int i = 0; i<T-1; i++)
  {
	  for(int j = i + 1;j < T;j++)
	  {
		  if(num[i] > num[j])
		  {
			temp = num[j];
			num[j] = num[i];
			num[i] = temp;
		  }
	  }
  }
    for(int i = 0; i < T; i++){
        if(i + 1 < T && num[i] == num[i+1])
            continue;
  	cout << num[i] << endl;
	}
  return 0;
}