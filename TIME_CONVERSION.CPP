#include <iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    //int a = (s-'0');
    // if (s[8]=='A'){

    // }
    int hour= ((s[0]-'0') * 10) + (s[1]-'0');
    int min= ((s[3]-'0') * 10) + (s[4]-'0');
    int sec= ((s[6]-'0') * 10) + (s[7]-'0');
    if(s[8]=='P' && hour<12){
        hour += 12;
        
    }
    if(s[8]=='A' && hour == 12){
        hour = 00;
    }
    printf("%02d:%02d:%02d\n",hour,min,sec);
    
    
    }
