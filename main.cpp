#include <iostream>

using namespace std;

int main() {
    // Showing menu
    cout << "Select your filing status:" << endl;
    cout << "1. Single" << endl;
    cout << "2. Married" << endl;
    cout << "3. Head of household" << endl;
    cout << "Enter 1, 2 or 3: " << endl;
    // Asking user choice of filing status
    int choice; 
    cin >> choice;

    // Asking user the income in 2020
    int income;
    cout << "Enter your annual income in 2020 (in US dollars): ";
    cin >> income;

    // Asking dependents numbers
    int dependents = 0;
    cout << "How many dependents do you have? ";
    cin >> dependents;

    // Initializing stimulus to 0
    int stimulus = 0;
    // Asking Switch choice 
    switch (choice)
    {
        // When the return is based single
        case 1:
            // if the income is greater or equal to 80000 then break out of switch
            if (income >= 80000) {
                break;
            }
            // calculating stimulus
            stimulus = 1400;
            stimulus += (dependents*1400);
            break;
        case 2:
            // if the income is greater or equal to 160000 then break out of switch
            if (income >= 160000) {
                break;
            }
            // calculating stimulus
            stimulus = 2800;
            stimulus += (dependents*1400);
            break;
        case 3:
            // if the income is greater or equal to 120000 then break out of switch
            if (income >= 120000) {
                break;
            }
            // calculating stimulus
            stimulus = 1400;
            stimulus += (dependents*1400);
            break;
        default:
            cout << "Invalid filling status provided!";
            break;
    }
    // Printing the stimulus
    cout << endl << "You are likely to receive a stimulus payment of $" << stimulus << endl << endl;
}