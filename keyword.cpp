#include<bits/stdc++.h>
#include<iostream>
#include <vector>
using namespace std;
int main(){
	int flag=0,res=0,i,j;
	
      
   
   vector<string> keywords{"auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while",};

	string s;
	string line;
	cout<<"For break input q"<<endl;
	while(getline(cin,line)){
		if(line=="q")
		break;
		
		s+=line;
	}
	for(const auto& keyword : keywords)
    {
        auto pos = s.find(keyword);

        cout << keyword
            << " [" << (pos == string::npos ? " not found" : " found") << "]\n";   
    }
	
return 0;
}
