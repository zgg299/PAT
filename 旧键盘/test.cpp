#include<iostream>
#include<string>
#include<vector> 

int IsInString(std::string str,char c){
	int flag=0;
	for(int i=0;i<str.length();++i){
		if((str[i]==c)||(str[i]==c+'a'-'A')||(str[i]==c-'a'+'A')){
			flag=1;
			break;
		}
	}
	return flag;
}

int IsInVector(std::vector<char>a,char c){
	int flag=0;
	for(std::vector<char>::iterator it=a.begin();it<a.end();++it){
		if(*it==c){
			flag=1;
			return flag;
		}
	}
	return flag;
}
int main(){
	std::string str1,str2;
	std::cin>>str1>>str2;
	std::vector<char>a;
	for(int i=0,j=0;i<str1.length();++i,++j){
		if(str1[i]==str2[j]){
			continue;
		}else{
			--j;
			if(IsInString(str2,str1[i])){
				continue;
			}else{
				a.push_back(toupper(str1[i]));
			}	
		}
	}
	
	std::vector<char> b;
	for(std::vector<char>::iterator iter=a.begin();iter!=a.end();iter++){
		if(!IsInVector(b,*iter)){
		b.push_back(*iter);
		std::cout<<*iter;	
		}
		
	}
	
	return 0;
}
