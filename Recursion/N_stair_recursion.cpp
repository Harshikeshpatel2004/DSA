# include<iostream>
using namespace std;
int ways(int n){
    if(n<=1){
        return 1;
    }
    return ways(n-1)+ways(n-2);
}
int main(){
    int n=4;
    cout<<ways(n)<<" ";
    return 0;
}
