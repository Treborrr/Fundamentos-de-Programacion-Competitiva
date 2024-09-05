#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v;
  int n, var, x, a, b;
  do {
    cin >> n;
  } while (n < 1 || n>100000);

  for (int i = 0; i < n; i++){

    cin >> var;

    v.push_back(var);

  }

  for (auto elem : v)

    cout << elem << " ";
  do {

    cin >> x;

  } while (x<1 || x>n);



  v.erase(v.begin() + x - 1);



  do {

    cin >> a;
    cin >> b;

  } while ((a<1 || a>n) || (b<1 || b>n) || (a > b));

  v.erase(v.begin() + a - 1, v.begin() + b - 1);

  cout << v.size() << "\n";

  for (auto elem : v)

    cout << elem << " ";

  return 0;

}