#include <iostream>
using namespace std;

int main(){
    int n,sum=1;
    while(true){
        cout<<"Enter cut count(n):";
        cin>>n;

        if(n<=0)break;

        for(int i=1; i<=n; i++)
            sum+=i;
        cout<<sum<<" pices";
    }
}

/*
    刀數|0 1 2 3 4
    片數|1 2 4 7 11
    每多切一刀 片數會多新增刀數量
    推理:切五刀，會有1+1+2+3+4+5=16片

    套入等差級數公式:1+(1+n)n/2
*/