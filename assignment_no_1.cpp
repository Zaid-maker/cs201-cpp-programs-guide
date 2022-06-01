// CS201 Assignment no 1
// Fall 2022
// Zaid Hafeez - bc220212452

#include <iostream>
using namespace std;

int main()
{
    // Declare variables for the required program.

    // nc = number of courses
    int nc = 8;

    // fd = first digit of my VU ID.
    int fd = 2;

    int sum = 0;

    // variable `j` for loop.
    int j = 1;

    // console out my name
    cout << "\nMy name is Zaid Hafeez" << endl;

    // console out my VU ID
    cout << "My VU ID is: bc220212452" << endl;

    // console out my course list
    cout << "\nCourse list in my current semester" << endl;

    // console out all courses
    cout << "1. CS101 - Introduction to computing" << endl;

    cout << "2. CS201 - Introduction to programming" << endl;

    cout << "3. CS201P - Introduction to programming(Practical)" << endl;

    cout << "4. ENG101 - English Comprehension" << endl;

    cout << "5. ISL202 - Islamic Studies" << endl;

    cout << "6. MTH001 - Calculus and Analytical Geometry" << endl;

    cout << "7. PAK301 - Pakistan Studies" << endl;

    cout << "8. VU001 - Introduction to E-Learning" << endl;

    // console out total number of courses
    cout << "\nTotal number of courses = " << nc << endl;

    // console out my first digit of VU ID
    cout << "First digit of my VU ID is: " << fd << endl;

    // add fd and nc
    sum = fd + nc;

    // console out sum
    cout << "Sum of first digit and total number of courses = " << sum << endl;

    // newline
    cout << endl;

    // while loop to print Welcome to CS201 Introduction to Programming
    while (j <= sum)
    {
        // it will execute until the number of sum reached to 10
        cout << "Welcome to CS201 Introduction to Programming" << endl;
        j++;
    }

    return 0;
}