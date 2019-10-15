#include<iostream>
#include<string>
#include<sstream>


int main(){
	std::string str;
	std::cin>>str;
	int count_0=0;
	int count_1=0;
	int count_2=0;
	int count_3=0;
	int count_4=0;
	int count_5=0;
	int count_6=0;
	int count_7=0;
	int count_8=0;
	int count_9=0;
	for(int i=0;i<str.length();++i){
		char c=str.at(i);
		switch(c){
			case '0': ++count_0;break;
			case '1': ++count_1;break;
			case '2': ++count_2;break;
			case '3': ++count_3;break;
			case '4': ++count_4;break;
			case '5': ++count_5;break;
			case '6': ++count_6;break;
			case '7': ++count_7;break;
			case '8': ++count_8;break;
			case '9': ++count_9;break;
			default:std::cout<<"wrong number!"<<std::endl;
		}
	}
	if(count_0!=0){
		std::cout<<"0"<<":"<<count_0<<std::endl;
	}
	if(count_1!=0){
		std::cout<<"1"<<":"<<count_1<<std::endl;
	}
	if(count_2!=0){
		std::cout<<"2"<<":"<<count_2<<std::endl;
	}
	if(count_3!=0){
		std::cout<<"3"<<":"<<count_3<<std::endl;
	}
	if(count_4!=0){
		std::cout<<"4"<<":"<<count_4<<std::endl;
	}
	if(count_5!=0){
		std::cout<<"5"<<":"<<count_5<<std::endl;
	}
	if(count_6!=0){
		std::cout<<"6"<<":"<<count_6<<std::endl;
	}
	if(count_7!=0){
		std::cout<<"7"<<":"<<count_7<<std::endl;
	}
	if(count_8!=0){
		std::cout<<"8"<<":"<<count_8<<std::endl;
	}
	if(count_9!=0){
		std::cout<<"9"<<":"<<count_9<<std::endl;
	}
	return 0;
}
