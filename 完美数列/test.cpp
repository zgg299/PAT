#include<iostream>
#include<algorithm>
#include<vector>
int main(){
	long long n,p;
	std::cin>>n>>p;
	std::vector<long long>number;
	for(long long i=0;i<n;++i){
		long long temp;
		std::cin>>temp;
		number.push_back(temp);
	}
	//从小到大排序 
	sort(number.begin(),number.end());
	int ans=0;
	for(int j=0;j<n;++j){
		for(int i=j+ans;i<n;++i){
			if(number[i]>number[j]*p){
			   break;	
			}
			if(i-j+1>ans)
			 ans=i-j+1;
	   }	   
	}

     std::cout<<ans;		
	return 0;
}
