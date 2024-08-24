#include <iostream>
#include <string>
#include <cctype> // for isalpha, islower, isupper
#include <algorithm> // for any_of
#include "Person.h"
#include "Client.h"
#include "Emolyee.h"
using namespace std;

int main()
{

    Clint a("marwan","maroYasser",333,3000);

    cout << "Hello world!" << endl;
    a.Display();
        // Create an Employee object using the default constructor
    Employee emp1;
    emp1.display();  // Display the employee's details
     cout<<"\n=======================================\n";
    // Create an Employee object using the parameterized constructor
    Employee emp2(2, "JaneDoe", "Secure@123", 7000);
    emp2.display();  // Display the employee's details
   cout<<"\n=======================================\n";
    // Testing invalid inputs
    emp2.setName("Jo");  // Attempt to set an invalid name (too short)
    emp2.setName("JaneDoe123");  // Attempt to set an invalid name (contains digits)
    emp2.setPassword("pass");  // Attempt to set an invalid password (too short)
    emp2.setPassword("password");  // Attempt to set an invalid password (no uppercase, special character)
    emp2.setBalance(4000);  // Attempt to set an invalid balance (less than 5000)
}



