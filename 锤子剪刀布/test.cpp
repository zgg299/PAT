#include<iostream>
#include<string>
#include<vector>
int Compare(char a,char b){
	if(a==b)
	   return 0;
	else{
		if((a=='J'&&b=='B')||(a=='B'&&b=='C')||(a=='C'&&b=='J'))
		  return 1;
		else
	      return -1;
	}
}

int main(){
	int N;
	std::cin>>N;
	std::vector<char>result_1;
	std::vector<char>result_2;
	char player_1,player_2;
	int count_J=0;
	int count_C=0;
	int count_B=0; 
	int count_1=0;
	int count_2=0;
	for(int i=0;i<N;++i){
		std::cin>>player_1>>player_2;
		int temp=Compare(player_1,player_2);
		if(temp!=-1&&temp!=0){
			count_1+=1;
			result_1.push_back(player_1);
		}
		else if(temp==-1){
			count_2+=1;
			result_2.push_back(player_2);
		}
		     
	}
	std::cout<<count_1<<" "<<(N-count_1-count_2)<<" "<<count_2<<std::endl;
	std::cout<<count_2<<" "<<(N-count_1-count_2)<<" "<<count_1<<std::endl;
	
	if(result_1.size()!=0){
		for(int i=0;i<result_1.size();++i){
		if(result_1[i]=='J')
		     count_J+=1;
		else{
			if(result_1[i]=='B')
			  count_B+=1;
			else if(result_1[i]=='C')
			  count_C+=1;
		}
	}
	
	if(count_J>count_B&&count_J>count_C)
	std::cout<<"J"<<" ";
	if(count_C>count_B&&count_J<count_C)
	std::cout<<"C"<<" ";
	if(count_B>count_J&&count_B>count_C)
	std::cout<<"B"<<" ";
	if(count_J==count_C&&count_J>count_B)
	std::cout<<"C"<<" ";
	if(count_J==count_B&&count_J>count_C)
	std::cout<<"B"<<" ";
	if(count_B==count_C&&count_B>count_J)
	std::cout<<"B"<<" ";
	if(count_B==count_C&&count_B==count_J)
	std::cout<<"B"<<" ";			
	}else
	std::cout<<"B"<<" ";

	
	
		
	count_B=0;
	count_C=0;
	count_J=0;
	
	
	
	if(result_2.size()!=0){
				for(int i=0;i<result_2.size();++i){
		if(result_2[i]=='J')
		     count_J+=1;
		else{
			if(result_2[i]=='B')
			  count_B+=1;
			else if(result_2[i]=='C')
			  count_C+=1;
		}
	}
	

	if(count_J>count_B&&count_J>count_C)
	std::cout<<"J";
	if(count_C>count_B&&count_J<count_C)
	std::cout<<"C";
	if(count_B>count_J&&count_B>count_C)
	std::cout<<"B";
	if(count_J==count_C&&count_J>count_B)
	std::cout<<"C";
	if(count_J==count_B&&count_J>count_C)
	std::cout<<"B";
	if(count_B==count_C&&count_B>count_J)
	std::cout<<"B";	
		if(count_B==count_C&&count_B==count_J)
	std::cout<<"B";
	}else
	std::cout<<"B";

   
	return 0;
}
