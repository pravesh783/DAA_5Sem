#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int flag=0,res=0,i,j;
	string s;
	string line;
	cout<<"For break input q"<<endl;
	while(getline(cin,line)){
		if(line=="q")
		break;
		
		s+=line;
	}
	for(i=0;i<s.length();i++){
		if(s[i]=='=='||s[i]=='/'||s[i]=='*'||s[i]=='+'||s[i]=='-'||s[i]=='%'||s[i]=='<'||s[i]=='>'||s[i]=='/'){
			flag=1;
			res++;
			
		}
	}
	if(flag==1){
		cout<<"Operator are present ,Total operator  are :"<<res<<endl;
	}
	else{
		cout<<"operator are not present"<<endl;
	}
return 0;
}
