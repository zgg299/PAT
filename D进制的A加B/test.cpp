#include<iostream>
#include<string>
#include<algorithm>

std::string  trans(long n,int d){
	std::string temp;
    long j=n;
    do{
    	j=n/d;
    	char c=(n%d)+'0';
    	n=j;
    	temp.append(1,c);
	}while(j>=d);
	char b=j+'0';
	temp.append(1,b);
	reverse(temp.begin(),temp.end());
    return temp;
	
}

int main(){
	long A,B,C,D;
	std::cin>>A>>B>>D;
	C=A+B;
	std::cout<<trans(C,D);
	return 0;
}
