#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin>> a>>b;

    int sum = a+b;

    if( sum % 2 != 0 ){
        cout<< -1 <<endl;
    }
    else{
        int cookie = sum / 2 ;
        if(a == b)
            cout << 0;
        else 
            cout << a - cookie;

    }


}