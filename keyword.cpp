#include<bits/stdc++.h>
#include<iostream>
#include <vector>
using namespace std;
int main(){
	int flag=0,res=0,i,j;
	
      
   
   vector<string>keyword{"auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"};

	string s;
	string line;
	cout<<"For break input q"<<endl;
	while(getline(cin,line)){
		if(line=="q")
		break;
		
		s+=line;
	}
	string temp="";
for(int i=0;i<=s.length();i++){
    
    if(s[i]!=' '&&i<s.length()){
        temp+=s[i];
      
    }
    else{
    if(find(keyword.begin(),keyword.end(),temp)!=keyword.end()){
        res++;}
    temp="";
            
    }
    if(i==s.length()){
        if(find(keyword.begin(),keyword.end(),temp)!=keyword.end()){
            
            res++;
    }
}
}

    cout<<"Total keywords are:"<<res<<endl;
return 0;
}
