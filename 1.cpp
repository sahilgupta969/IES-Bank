#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"Welcome to IES Bank "<<endl;
    string oldpin, newpin;
    string pin = "1234"; 
    string inputpin;
    int attempts = 0;
    int balance = 5000; 

    while(true){
        cout << "Enter your password: ";
        cin >> inputpin;

        if(inputpin == pin){
            cout << "Welcome to IES Bank!" << endl;
            break;
        } else {
            attempts++;
            if(attempts < 3){
                cout << "Incorrect password. Please try again." << endl;
            } else {
                cout << "Contact your branch." << endl;
                return 0;
            }
        }
    }
    int choice;
    while(true){
        cout << "Select an option:" << endl;
        cout << "1. Balance Enquiry" << endl;
        cout << "2. Withdraw Cash" << endl;
        cout << "3. Mini Statement" << endl;
        cout << "4. Change Password" << endl;
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Your balance is: " << balance << endl;
                break;
            case 2:
                int withdrawamount;
                cout << "Enter the amount to withdraw: ";
                cin >> withdrawamount;

                if(withdrawamount > 5000){
                    cout << "Insufficient amount in your account." << endl;
                } else if(withdrawamount > balance){
                    cout << "Insufficient balance." << endl;
                } else {
                    balance -= withdrawamount;
                    cout << "Withdrawal successful" << endl;
                }
                break;
            case 3:
                cout<<"You have "<<balance<<" Rupee"<<endl;
                cout<<"Thank You"<<endl;
                break;
            case 4:
                
                cout << "Enter your old pin: ";
                cin >> oldpin;

                if(oldpin == pin){
                    cout << "Enter your new pin: ";
                    cin >> newpin;
                    pin = newpin;
                    cout << "Pin changed successfully." << endl;
                } else {
                    cout << "Incorrect old pin." << endl;
                }
                break;
                
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}