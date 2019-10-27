#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
int IsUpper(char c){
	if(c>='A'&&c<='Z')
	   return 1;
	else
	   return 0;
}

int IsInString(std::string str,char c){
	if(c>='a'&&c<='z'){
		c=c+'A'-'a';
	}
	int temp=0;
	temp=std::count(str.begin(),str.end(),c);
	if(temp)
	return 1;
	else
	return 0;
}
int main(){
	std::string str1,str2;
	std::cin>>str1>>str2;

	std::vector<char>tempstr2;

	int flag=0;
	int nRet=std::count(str1.begin(),str1.end(),'+');
	if(nRet!=0) flag=1;
	
    if(flag){
    	for(int i=0;i<str2.length();++i){
    		if(IsUpper(str2[i])){
    			continue;
			}else{
				tempstr2.push_back(str2[i]);
			}
		}
	}
	
	else{
		for(int i=0;i<str2.length();++i){
			tempstr2.push_back(str2[i]);
		}
	}
	for(int i=0;i<tempstr2.size();++i){
		int temp=IsInString(str1,tempstr2[i]);
		if(temp)
		continue;
		else
		std::cout<<tempstr2[i];
	}
}
