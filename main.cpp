#include<iostream>

using namespace std;

int main(int argc, char ** argv) {
  int test_case = 0;
  int T = 0;
  int num = 0;
  cin >> T;
  for (test_case = 1; test_case <= T; ++test_case) {
    int total_odd = 0;
    for (int i = 1; i <= 10; i++) {
      cin >> num;
      num % 2 == 1 ? total_odd += num : 0;
    }
    cout << "#" << test_case << " " << total_odd << endl;
  }
  return 0;
}