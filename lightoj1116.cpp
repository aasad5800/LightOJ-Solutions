#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int times;
    cin>>times;
    for(int i=0; i<times; i++){
        long long int num,result=1;

        cin>>num;

        if(num%2!=0)
            cout<<"Case "<<i+1<<": Impossible"<<endl;

        else{
            while(num%2==0){
                num /=2;
                result *=2;
            }

            cout<<"Case "<<i+1<<": "<<num<<" "<<result<<endl;
        }
    }
}
