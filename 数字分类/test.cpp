#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
#include<vector>
#include<iomanip>
int String_to_int(std::string str){
	int temp;
	std::stringstream ss;
	ss<<str;
	ss>>temp;
	return temp;
	
}
int main(){
    int n;
    std::stringstream ss;
    std::string str;
    std::cin>>str;
    ss<<str;
    ss>>n;
    std::vector<int>a;
    std::vector<int>a1;
    std::vector<int>a2;
    std::vector<int>a3;
    std::vector<int>a4;
    std::vector<int>a5;
    for(int i=0;i<n;++i){
        std::string temp;
        int tempint;
        std::cin>>temp;
        tempint=String_to_int(temp);
        a.push_back(tempint);
    }
        for(std::vector<int>::iterator it=a.begin();it<a.end();++it){
    	switch(*it%5){
    		case 0:
    			if(*it%2==0){
    			    a1.push_back(*it);
    			    break;
				  }
    			else
    			  break;
    		case 1:
    			a2.push_back(*it);
    			break;
    		case 2:
    			a3.push_back(*it);
    			break;
    		case 3:
    			a4.push_back(*it);
    			break;
    		case 4:
    			a5.push_back(*it);
    			break;
            default:
                break;
		}
	}
	
	int sum=0;
	for(int i=0;i<a1.size();++i){
		sum+=a1[i];
	}
    if(a1.empty())
        std::cout<<"N"<<" ";
    else
	    std::cout<<sum<<" ";
	
	int result=0;
	for(int k=0;k<a2.size();++k){
		if(k%2==0)
		   result+=a2[k];
		else
		   result-=a2[k];
	}
    if(a2.empty())
        std::cout<<"N"<<" ";
    else
	    std::cout<<result<<" ";
	
    if(a3.empty())
        std::cout<<"N"<<" ";
    else
	    std::cout<<a3.size()<<" ";
	
	int sum_2=0;
	for(int i=0;i<a4.size();++i){		
		sum_2+=a4[i];
	}
	double sum_3=double(sum_2)/a4.size();
    if(a4.empty())
        std::cout<<"N"<<" ";
    else
	    printf("%.1f ",sum_3);
	int max=0;
	if(!a5.empty()){
		max=a5[0];
	}
	for(int m=0;m<a5.size();++m){
		if(a5[m]>max)
	      max=a5[m];
	}
    if(a5.empty())
        std::cout<<"N";
    else
	    std::cout<<max<<std::endl;
    return 0;
}
