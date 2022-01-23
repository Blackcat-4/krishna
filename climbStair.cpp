#include<unordered_map>
#include<iostream>
using namespace std;
int climbStairs(int n) {
    if(n==1)return 1;
    if(n==2)return 2;
    int l=1, r=2;
    while(n-2>0){
        int temp = l+r;
        l=r;
        r=temp;
        n--;
    }
    return r;
}
int main(){
    while(true)break;
    cout<<"fbfjkfdb";
}
