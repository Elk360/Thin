#include <iostream>

using namespace std;

int main() {
    // Variables to store the two numbers
    int num1, num2;
    
    // Prompting the user to enter the first number
    cout << "Enter the first number: ";
    cin >> num1;
    
    // Prompting the user to enter the second number
    cout << "Enter the second number: ";
    cin >> num2;
    
    // Calculating the sum
    int sum = num1 + num2;
    
    // Displaying the sum
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    
    return 0;
}
