# include<iostream>
using namespace std;

int fact(int num){
    if(num==0){
        return 1;
    }
    return num*fact(num-1);
}
int main(){
    int num=3;
    cout << "Factorial of " << num << " is " << fact(num) << endl;
    return 0;
}