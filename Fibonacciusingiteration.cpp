#include <iostream>
using namespace std;
void fibbonacci(int num) {
   int x = 0, y = 1, z = 0;
   for (int i = 0; i < num; i++) {
      cout << x << " ";
      z = x + y;
      x = y;
      y = z;
   }
}
int main() {
   int num;
   cout << "Enter the number : ";
   cin >> num;
   cout << "\nThe fibonacci series : " ;
   fibbonacci(num);
   return 0;
