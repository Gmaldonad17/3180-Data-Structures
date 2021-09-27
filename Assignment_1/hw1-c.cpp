#include<iostream>
#include<string>
using namespace std;

int highest(int max, int current){
    if (current > max){return current; }
    else{return max; }
}

int main(){
    int max = 0, current = 0;
    string input;
    cin >> input;

    while (cin){
        if (input == "begin"){current++; }
        else{current--; }

        max = highest(max, current);
        cin >> input;
    }
    cout <<"Max is " << max << endl;
}
