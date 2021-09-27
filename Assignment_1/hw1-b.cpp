#include <iostream>
using namespace std;

int main(){
    int input, sum, num, last [3];

    cin >> input;
    while (cin){
        sum += input;

        last [2] = last [1];
        last [1] = last [0];
        last [0] = input;
        
        num++;
        cin >> input;
    }
    cout << "number-of-inputs = " << num << "    sum = " << sum << endl;

    for (int i = 3 ; i > 0 ; i--){
        cout << last[i - 1] << endl;
    }
    return 0;
}
