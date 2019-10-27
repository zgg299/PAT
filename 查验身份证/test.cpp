#include<iostream>
#include<string>
#include<vector>
int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char check[11]={'1','0','X','9','8','7','6','5','4','3','2'};


int IsRightID(std::string IDstr){
	int add=0;
	for(int i=0;i<17;++i){
		int temp=(IDstr[i]-'0')*weight[i];
		add+=temp;
	}
	int result=add%11;
	if(check[result]==IDstr[17])
	  return 1;
	else
	  return 0;
}

int main(){
	int n;
	std::cin>>n;
	std::vector<std::string>IDstr;
	int count=0;
	for(int i=0;i<n;++i){
		std::string temp;
		std::cin>>temp;
		if(IsRightID(temp)){
			++count;
		}
		else
		  IDstr.push_back(temp);
	}
	if(count==n)
	std::cout<<"All passed";
	else{
		for(int i=0;i<IDstr.size();++i)
		  std::cout<<IDstr[i]<<std::endl;
	}
	
	
	return 0;
}

