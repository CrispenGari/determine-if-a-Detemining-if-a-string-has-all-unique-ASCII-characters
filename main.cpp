#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <afxres.h>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

//#include <Crispen.h>
// #include <sqlite3.h/sqlite3>
#include <iostream>
#include <cstdlib>
#include <fstream>
/*
  Is Unique ASCII Character: Implement an algorithm 
 to determine if a string has all unique ASCII characters.
*/
bool is_Unique(string str){
 if(str.length()>128){
    return false;
  }
  for(int i=0; i<str.length(); i++){
    int val = str.at(i);
    for(int j=i+1;j<str.length(); j++){
      if(val==int(str[j])){
        return false;
      }
    }
  }
  return true;
}
int main(){
    string str;
    cout<<"Enter a string: \t";
    cin>>str;
   if(!is_Unique(str)){
     cout<<"The string: "<<str<<" does not contain unique character(s)"<<endl;
     exit(0);
   }
   cout<<"The string: "<<str<<" contains unique character(s) only"<<endl;
  return 0;
}

