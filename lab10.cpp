// Polina Maidanova
// Programming Fudamentals
// CS 1436
// 005
// Due Date: 10/07/2024
// Date Completed: 10/03/2024
// Date Submitted: 10/03/2024


// This program calculates the distance traveled by a vehicle per hour.

#include <iostream> // Header file allowing the use of input/output objects.
#include <iomanip>  // Header file allowing manipulations with output.
using namespace std;    // Use standard namespace.

int main()  // Main function, starting point of the program execution.
{
    double fDistance, fSpeed, fTime;    // Declare the variables for distance and time traveled, and speed of the vehicle.
    int iTimeCounter = 1;   // Initialize the counter for the time in hours.

    // Prompt the user to enter the speed of the vehicle.
    cout << "Enter the speed of the vehicle in miles per hour: ";
    cin >> fSpeed;

    // Validate the user input for speed.
    while (fSpeed < 0.0)    // Display the error message until the user enters a valid value.
    {
        cout << "Invalid input. Enter a non-negative value for speed: ";
        cin >> fSpeed;
    }

    // Prompt the user to enter the time traveled in hours.
    cout << "Enter the time traveled in hours: ";
    cin >> fTime;

    // Validate the user input for time.
    while (fTime < 1.0) // Display the error message until the user enters a valid value.
    {
        cout << "Invalid input. Enter a value of at least 1 hour for time: ";
        cin >> fTime;
    }

    // Display the heading for the table.
    cout << "\nDistance Traveled Per Hour\n" << endl;

    // Display the table with the calculated distance for each hour.
    do 
    {
        fDistance = fSpeed * (double)iTimeCounter;  // Calculate the distance for each hour.
        cout << "Hour " << iTimeCounter << setw(10) << fDistance << " Miles"<< endl;    // Display the results.
        iTimeCounter++; // Increment the counter.
    } while ((double)iTimeCounter <= fTime);    // Execute the block until the time counter reaches the integer value of the time entered by the user.

    return 0;
}
