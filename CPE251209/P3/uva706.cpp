#include <iostream>
#include <map>
using namespace std;

string LCD[5]={
        " -     -  -     -  -  -  -  - ",
        "| |  |  |  || ||  |    || || |",
        "       -  -  -  -  -     -  - ",
        "| |  ||    |  |  || |  || |  |",
        " -     -  -     -  -     -  - "
    };

void show(int row, int size, int number){
    
}

int main(){
    int size,number;
    cout<<LCD[2];
    while(
        cout<<"Enter size of display(s):",
        cin>>size,
        cout<<"Enter displayed number:",
        cin>>number,
        size
    ){
        show(0, size, number);
        show(1, size, number);
        show(2, size, number);
        show(3, size, number);
        show(4, size, number);
    }
    /*
    row s+2 -> s個 "-" + 2個 " "
    colum 2s+3   2s個 "|" + 3個 " "
    */
}