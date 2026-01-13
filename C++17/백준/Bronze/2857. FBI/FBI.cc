#include <iostream>
#include <string>
using namespace std;
int main() {
    int i=1;
    string str;
    int flag=0;
    while(i<6) {
        getline(cin, str);
        
        if(str.find("FBI") != string::npos) {
            cout << i << ' ';
            flag++;
        }
        i++;
    }
    if(flag == 0) cout << "HE GOT AWAY!";
}