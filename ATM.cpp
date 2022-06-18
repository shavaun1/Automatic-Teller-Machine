#include<iostream>
#include<string>
#include<ios>
#include<iostream>
#include<iomanip>
#include<vector>
#include <algorithm>
#include<stdexcept>
#include<fstream>
#include<memory>
#include<map>
using namespace std;
//saying what standard-library names we use
using std::map;  using std::vector;  using std::setprecision; using std::streamsize; using std::cin; using std::cout; using std::endl; using std::string; using std::domain_error; using std::istream;

int bal;
int main() {

	int out, in;
	char op, y;

	cout << "Welcome!" << endl;
	cout << "Enter your balance ";
	cin >> bal;



	do {





		cout << "-----------------------------------------" << endl;
		cout << "Select an option: \n"
			<< "1. Withdraw Amount \n"
			<< "2. Deposit Amount\n"
			<< "3. Exit \n";
		cout << "-----------------------------------------" << endl;
		cin >> op;

		switch (op)
		{
		case '1': cout << "How much amount you want to withdraw from your account? ";
			cin >> out;
			if (out <= bal) {
				cout << "Amount withdrawn: " << out << endl;
				bal = bal - out;
				cout << "Your new balance is: " << bal << endl;
			}
			else {
				cout << "You do not have enough funds." << endl;
			}
			break;
		case '2': cout << "How much you want to deposit in your account? ";
			cin >> in;
			cout << "Deposited: " << in << endl;
			bal = bal + in;
			cout << "Your new balance is: " << bal << endl;
			break;
		case '3': cout << "Thank you for using the system!" << endl;
			break;
		default: cout << "Invalid entry " << op << " is not a valid option" << endl;
		}


		cout << "Would you like to make another transaction(y/n):  " << endl;
		cin >> y;


		if (y != 'Y' && y != 'y' && y != 'N' && y != 'n')
			cout << y << " is not a valid option. Try again." << endl;



	}


	while ((!('3')) || (y != 'N' && y != 'n'));


	return 0;





}