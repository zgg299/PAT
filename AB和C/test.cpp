#include<iostream>
#include<cstdlib>
#include<string>
#include<sstream>
long String_to_long(std::string str){
	std::stringstream ss;
	long temp;
	ss<<str;
	ss>>temp;
	return temp;
}
std::string Compare(long a, long b, long c){
	if(a+b<=c)
	   return "false";
	else
		return "true";
}
int main(){
	long a[10];
	long b[10];
	long c[10];
	int n;
	std::string str;
	std::string str1;
	std::string str2;
	std::string str3;
	fflush(stdin);
	std::cin>>str;
	std::stringstream ss;
	ss<<str;
	ss>>n;
	
	for(int i=0;i<n;++i){
		fflush(stdin);
		std::cin>>str1;
		a[i]=String_to_long(str1);
		std::cin>>str2;
		b[i]=String_to_long(str2);
		std::cin>>str3;
		c[i]=String_to_long(str3);
	}
	
	for(int k=0;k<n;++k){
		std::string result=Compare(a[k],b[k],c[k]);
		std::cout<<"Case #"<<k+1<<": "<<result<<std::endl;
	}
	
	
	return 0;
}
