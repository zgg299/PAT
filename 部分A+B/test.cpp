#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<sstream>
#include<math.h>
int String_to_int(std::string str){
	int temp;
	std::stringstream ss;
	ss<<str;
	ss>>temp;
	return temp;
}
int findchar(std::string str,char c){
	int result=0;
	int count=0;
	for(int i=0;i<str.length();++i){
		if(str.at(i)==c){
			++count;
		}
	}
	for(int i=0;i<count;++i){
		int temp=pow(10,i);
		result+=temp*(c-'0');
	}
	return result;
}
int main(){
	 std::string str_A;
	 std::string str_B;
	 char char_pa,char_pb;
	 std::cin>>str_A>>char_pa>>str_B>>char_pb;
	 int PA=findchar(str_A,char_pa);
	 int PB=findchar(str_B,char_pb);
	 int result=PA+PB;
	 std::cout<<result;
	return 0;
}
