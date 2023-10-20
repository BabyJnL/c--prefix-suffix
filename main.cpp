#include <iostream>
#include <string>

using namespace std;

void prefix(string str) {
    for(short i = 0; i <= str.size(); i++) {
        cout << str.substr(0, i) << endl;
    }
}

void suffix(string str) {
    for(short i = 1; i <= str.length(); i++) {
        for(short j = 1; j <= i; j++) {
            cout << " ";
        }
        cout << str.substr(i, str.length() - 1) << endl;
    }
}

int main() {
    string prefixSuffix("HELEN");

    prefix(prefixSuffix);
    suffix(prefixSuffix);

    /*
        Output:
        H
        HE
        HEL
        HELE
        HELEN
         ELEN
          LEN
           EN
            N
    */

    return 0;
}