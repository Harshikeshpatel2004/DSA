# include<iostream>
using namespace std;

int count(string str,int index){
    if(index==-1){
        return 0;
    }
    // Check for vowels using logical OR (||)
    if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u'){
    return 1+count(str,index-1);
    }
    else{
    return count(str,index-1);
    }
}
int main(){
    string str="harshikesh";
    cout<<count(str,str.length()-1)<<" ";

}