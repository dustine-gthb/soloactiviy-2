#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string fullname;
    string cys;
    string birthday;
    string motto;
    
    cout << "Input Full name: ";
    getline(cin, fullname);
    cout << "Input Course, Yr. & Sec.: ";
    getline(cin, cys);
    cout << "Input Birthday: ";
    getline (cin, birthday);
    cout << "Input Motto/Motivation in Life: ";
    getline(cin, motto);
    
    cout << endl << "Hi! I'm " << fullname << " of " << cys << ". Welcome to Data Structures and Algorithm! "<< endl
    << "My Birthday is on " << birthday << ". and my motto/motivation in life is " << motto;
}

