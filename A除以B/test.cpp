#include<iostream>
#include<vector>
#include<string>

int main(){
	std::vector<char>Q;
    int R;
	std::string str;
	int B;
	std::cin>>str>>B;
	int res=0;
	for(int i=0;i<str.length();++i){
		char a=((str.at(i)-48)+res*10)/B+48;
		Q.push_back(a);
		res = (res * 10 + (str.at(i) - 48)) % B;
	}
	R=res;
	if(Q[0]==48){
		for(int i=1;i<Q.size();++i)
		   std::cout<<Q[i];
	}else{
	    for(int i=0;i<Q.size();++i){
    	std::cout<<Q[i];
	}	
	}

	std::cout<<" "<<R;
	return 0;
}
