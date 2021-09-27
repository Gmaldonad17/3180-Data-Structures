#include<iostream>
using namespace std;

int main(){
    int accountNum, expense, currentAcc; int subTotal = 0; int total = 0;

    cout << "Account Number     Expense" << endl << "--------------------------" << endl;
    cin >> accountNum; cin >> expense;
    currentAcc = accountNum;

    while (cin){ 
        if (currentAcc != accountNum){
            cout << "sub-total = " << subTotal << endl << endl;

            total += subTotal;
            subTotal = 0;
            currentAcc = accountNum;
        }

        cout << accountNum << "              " << expense << endl;
        while (currentAcc == accountNum){
            currentAcc = accountNum;
            subTotal += expense;
            break;
        }

        cin >> accountNum; cin >> expense;
    }

    total += subTotal;
    cout << "sub-total = " << subTotal << endl << endl;
    cout << "grand-total = " << total << endl;

    return 0;
}
