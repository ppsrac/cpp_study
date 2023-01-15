#include <iostream>  
#include <string>

using namespace std;

int main(void) {
    freopen("input.txt","r",stdin);
    string song("Falling in love with you");
    string elvis("Elvis Presley");

    string singer;
    getline(cin,singer);
    if (singer==elvis)
        cout<<"Right!";
    else
        cout<<"Wrong!";
}
