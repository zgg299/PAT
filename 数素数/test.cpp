#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<sstream>
#include<string>
#include<math.h>
#include<vector>
int Isprime(int n){
   int temp=1;
   if(n<2)
      temp=0;
    
   	else if(n==2)
   	   temp=1;
   	else
	   {
	       for(int i=2;i<sqrt(n)+1;++i){
    	         if(n%i==0){
    	            temp=0;
    		         break;
		        }
            } 
        }
		return temp;
  
} 

int String_to_int(std::string str){
	std::stringstream ss;
	int temp;
	ss<<str;
	ss>>temp;
	return temp;
}

int main(){
	int m,n;
	std::string str1,str2;
	std::vector<int>number;
	std::cin>>str1;
	std::cin>>str2;
	m=String_to_int(str1);
	n=String_to_int(str2);
	int count_1=0;
	int count_2=m;
	for(int i=2;count_2<=n;++i){
		if(Isprime(i)){
			if(count_1<m-1){
				count_1+=1;
			}
			else{
				count_2+=1;
				number.push_back(i);
			}
		}
		else
		  continue;
	}
	for(int k=0;k<number.size();++k){
        if(k%10==9){
            std::cout<<number[k];
            std::cout<<std::endl;
        }
		else if(k!=number.size()-1)
            std::cout<<number[k]<<" ";
        else
            std::cout<<number[k];
 
	}
	
	return 0;
		
}
