
//Question Link - https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/xsquare-and-double-strings-1/
//Xsquare And Double Strings

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        bool sam =0;
        int a[26];
        for(int i=0;i<26;i++){
            a[i]=0;
        }
        for(int i=0;i<s.size();i++){
            a[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a[i]>1){
                sam=1;
                break;
            }
        }
        if(sam==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
}