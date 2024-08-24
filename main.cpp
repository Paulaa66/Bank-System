#include <iostream>
#include <string>
#include <cctype> // for isalpha, islower, isupper
#include <algorithm> // for any_of
#include "Person.h"
#include "Client.h"
#include "Employee.h"
using namespace std;

int main()
{

    Client a("marwan", "maroYasser", 333, 3000);

    cout << "Hello world!" << endl;
    a.Display();
}
