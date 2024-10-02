#include <iostream>
using namespace std;
int main() {
 int num;
 // Prompt user for input
 cout << "Enter a number: ";
 cin >> num;
 // Check if the number is between 30 and 40 (inclusive)
 if (num >= 30 && num <= 40) {
 cout << "The number " << num << " is between 30 and 40.\n";
 } else {
 cout << "The number " << num << " is not between 30 and 40.\n";
 }
 return 0;
}
