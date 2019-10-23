#include<iostream>
#include<vector>
int main(){
	int n;
	char c;
	std::cin>>n>>c;
	std::vector<int>a;
	int count=0;
	int temp=1;
	while(count<n){
		count+=2*(temp+2);
		a.push_back(temp);
		temp=temp+2;
	}

	for(int i=a.size()-1;i>=0;--i){
		for(int m=0;m<(a[a.size()-1]-a[i])/2;++m){
				printf(" ");
		}
		for(int j=0;j<a[i];++j){
			printf("%c",c);
		}
		for(int m=0;m<(a[a.size()-1]-a[i])/2;++m){
				printf(" ");
		}
		printf("\n");
	}
	
	
	for(int i=1;i<a.size();++i){
		for(int m=0;m<(a[a.size()-1]-a[i])/2;++m){
				printf(" ");
		}
		for(int j=0;j<a[i];++j){
			printf("%c",c);
		}
		for(int m=0;m<(a[a.size()-1]-a[i])/2;++m){
				printf(" ");
		}
		printf("\n");
	}
	int result=n;
	for(int i=0;i<a.size();++i){
		result=result-2*a[i];
	}
	result+=1;
	printf("%d",result);
	return 0;
} 
