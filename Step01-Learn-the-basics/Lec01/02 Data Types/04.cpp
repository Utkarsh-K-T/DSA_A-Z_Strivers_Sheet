/*
4) Enumeration Types
Enum - A user-defined type consisting of a set of named integral constants
*/
#include <iostream>
using namespace std;

// Define an enum named 'Weekday' with constants representing days of the week
enum Weekday 
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    // Declare a variable of type Weekday
    Weekday today = Wednesday;

    int cho = 0;

    while (cho != 8) {
        cout << "Menu" << endl;
        cout << "1. Display Sunday" << endl;
        cout << "2. Display Monday" << endl;
        cout << "3. Display Tuesday" << endl;
        cout << "4. Display Wednesday" << endl;
        cout << "5. Display Thursday" << endl;
        cout << "6. Display Friday" << endl;
        cout << "7. Display Saturday" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> cho;

        switch (cho) {
            case 1:
                today = Sunday;
                break;
            case 2:
                today = Monday;
                break;
            case 3:
                today = Tuesday;
                break;
            case 4:
                today = Wednesday;
                break;
            case 5:
                today = Thursday;
                break;
            case 6:
                today = Friday;
                break;
            case 7:
                today = Saturday;
                break;
            case 8:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 8." << endl;
                break;
        }
        if (cho==8)
        {
            break;
        }

        // Output the day of the week based on the updated 'today' variable
        switch (today) {
            case Sunday:
                cout << "Today is Sunday." << endl;
                break;
            case Monday:
                cout << "Today is Monday." << endl;
                break;
            case Tuesday:
                cout << "Today is Tuesday." << endl;
                break;
            case Wednesday:
                cout << "Today is Wednesday." << endl;
                break;
            case Thursday:
                cout << "Today is Thursday." << endl;
                break;
            case Friday:
                cout << "Today is Friday." << endl;
                break;
            case Saturday:
                cout << "Today is Saturday." << endl;
                break;
            default:
                break; // This case should not occur if input validation is correct
        }
    }

    return 0;
}