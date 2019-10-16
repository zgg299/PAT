#include<iostream>
#include<vector>
#include<algorithm>
bool compare(int a,int b){
	return b>a;
}
int main(){
	std::vector<int>number;
	std::vector<int>N;
	for(int i=0;i<10;++i){
		int a;
		std::cin>>a;
		number.push_back(a);
	}
	
	for(int i=0;i<10;++i){
		for(int j=0;j<number[i];++j){
			N.push_back(i);
		}
	}
	int temp;
	if(N[0]==0){
		for(int i=1;i<N.size();++i){
			if(N[i]!=0){
				temp=N[i];
				N[i]=0;
				break;
			}
			
		}
	   N[0]=temp;
	}
	
	for(std::vector<int>::iterator it=N.begin();it<N.end();++it){
		std::cout<<*it;
	}	
	return 0;
}
