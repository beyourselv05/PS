#include <iostream>
#include <string>
using namespace std;
int main() {
    string str ="WelcomeToSMUPC";
    int num, index;
    cin >> num;
    index = (num-1)%14;
    cout << str[index];
}