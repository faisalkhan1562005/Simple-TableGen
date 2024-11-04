#include <iostream>
#include <limits> 
using namespace std;

int main()
{
    int num, range;

    cout << "*** Multiplication Table Generator ***\n";
    cout << "**************************************\n";

    while (true) 
    {
        cout << "Enter the number for which you want the multiplication table: ";
        cin >> num;

        // Validate numeric input for num
        while (cin.fail()) 
        {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a valid integer: ";
            cin >> num;
        }

        cout << "Enter the range for the multiplication table: ";
        cin >> range;

        // Validate numeric input for range
        while (cin.fail() || range <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a positive integer for the range: ";
            cin >> range;
        }

        cout << "\n** Multiplication Table for ** " << num << ":\n";
        cout << "************************************\n";
        for (int i = 1; i <= range; ++i) 
        {
            cout << num << " x " << i << " = " << num * i << endl;
        }
            cout << "***********************************\n";


        // Ask if user wants to see tables for other numbers
        char cont;
        cout << "Would you like to generate another multiplication table? (y/n): ";
        cin >> cont;

        // Validate input for continuation
        while (cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N') {
            cout << "Invalid input. Please enter 'y' or 'n': ";
            cin >> cont;
        }

        if (cont == 'n' || cont == 'N') {
            break; 
        }
    }

    cout << "** Thank you for using the Multiplication Table Generator **\n";
    return 0;
}
