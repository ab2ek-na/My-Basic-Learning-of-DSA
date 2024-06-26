#include<iostream>
#include<string>
using namespace std;
string answer[9000];
int count = 0;

void permutation(string &s, int i){
    if(i == s.size()){
        answer[count++] = s;
        return;
    }
    for(int j=i ;j<s.size() ;j++){
        swap(s[i],s[j]);
        permutation(s, i+1);
        swap(s[i],s[j]);
    }
    return;
}

int main(){
    string s = "abcde";
    permutation(s,0);
    for(int i=0;i<count;i++) cout<<answer[i]<<"\t";
    return 0;
}