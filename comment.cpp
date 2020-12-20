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
		if(s[i]=='/'&&s[i+1]=='/'){
			flag=1;
			res++;
			i++;
		}
		else{
			if(s[i]=='/'&&s[i+1]=='*'){
				for(j=i+2;j<=s.length();j++){
					if(s[j]=='*'&&s[j+1]=='/'){
						flag=1;
						res++;
						i++;
					}
				}
			}
		}
	}
	if(flag==1){
		cout<<"Comments are present ,Total comment are :"<<res<<endl;
	}
	else{
		cout<<"Comments are not present"<<endl;
	}
return 0;
}
