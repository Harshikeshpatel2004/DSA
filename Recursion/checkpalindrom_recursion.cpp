# include<iostream>
using namespace std;
bool checkpalindrom(string name,int start,int end){
    //base condition
    if(start>=end){
        return 1;
    }
    //not matched
    if(name[start]!=name[end]){
        return 0;
    }
    else
    //matched
    return checkpalindrom(name,start+1,end-1);

}
int main(){
    string name="naman";
    cout<<checkpalindrom(name,0,4)<<endl;

}