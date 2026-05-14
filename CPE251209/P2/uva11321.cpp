#include <iostream>
#include <random>
#include <algorithm>
#include <vector>
using namespace std;

int n,m;

bool SortRule(int a,int b){
    //sort rule No.1 asce升冪
    //sort rule No.2 當odd與even取模一樣時，odd在前
    //sort rule No.3 當兩個odd取模一樣時，大的odd在前
    //sort rule No.4 當兩個even取模一樣時，小的even在前
    
    if(a%m!=b%m)return a%m<b%m;
    if(abs(a%2)!=abs(b%2))return abs(a%2)>abs(b%2);
    if(a%2)return a>b;
    return a<b;
};

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(1,40000);

    cout<<"Enter number count(n):";
    cin>>n;
    vector<int> numbers(n);
    cout<<"Enter modulo number(m):";
    cin>>m;

    for(int i=0; i<n; i++)
        numbers[i]=dis(gen);

    sort(numbers.begin(),numbers.end(),SortRule);

    for(auto &i:numbers)
        cout<<i<<" ";
    cout<<endl;
    for(auto &i:numbers)
        cout<<i%m<<" ";
}