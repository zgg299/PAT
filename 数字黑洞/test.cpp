#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<sstream>
#include<algorithm>
void Swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void QuickSort(int* h,int left,int right){
	if(h==NULL) return;
	if(left>=right)return;
	
	srand((unsigned)time(NULL));
	int len=right-left;
	int kindex=rand()%(len+1)+left;
	Swap(h[left],h[kindex]);
	int key=h[left],i=left,j=right;
	while(i<j){
		while(h[j]>=key&&i<j) --j;
		if(i<j) h[i]=h[j];
		while(h[i]<key&&i<j) ++i;
		if(i<j) h[j]=h[i];
	}
	h[i]=key;
	QuickSort(h,left,i-1);
	QuickSort(h,j+1,right);
}

std::string  sort_increase(std::string str){
    int temp[4];
    std::string strtemp;
    if(str.length()==4){
    	for(int i=0;i<4;++i){
    	temp[i]=str.at(i)-'0';
	    }
	}
	if(str.length()==3){
		for(int i=0;i<3;++i){
			temp[i]=str.at(i)-'0';
		}
		temp[3]=0;
	}
		if(str.length()==2){
		for(int i=0;i<2;++i){
			temp[i]=str.at(i)-'0';
		}
		temp[2]=0;
		temp[3]=0;
	}
		if(str.length()==1){
        temp[0]=str.at(0)-'0';
        temp[1]=0;
        temp[2]=0;
		temp[3]=0;
	}
	     QuickSort(temp,0,3);
	     for(int i=0;i<4;++i){
		 strtemp.append(1,temp[i]+'0');
	  } 
     	
	

	return strtemp;
}

std::string sort_decrease(std::string str){
	 std::string str_1,str_2;
	 str_1=sort_increase(str);
	 str_2=str_1;
	 reverse(str_2.begin(),str_2.end());
	 return str_2;
}

int string_to_int(std::string str){
	std::stringstream ss;
	int temp;
	ss<<str;
	ss>>temp;
	return temp;
}

std::string int_to_string(int n){
	std::stringstream ss;
	std::string str;
	ss<<n;
	ss>>str;
	return str;
}
int string_sub(std::string str1,std::string str2){
	int a=string_to_int(str1);
	int b=string_to_int(str2);
	return a-b;
}
int main(){
    std::string str1,str2,str3;
    std::cin>>str1;
    if(str1.length()==4&&str1.at(0)==str1.at(1)&&str1.at(1)==str1.at(2)&&str1.at(2)==str1.at(3)){
    	std::cout<<"N - N = 0000";
	}else{
	    int temp=0;
		do{
			str2=sort_decrease(str1);
			str3=sort_increase(str1);
			temp=string_sub(str2,str3);
			std::cout<<str2<<" - "<<str3<<" = "<<temp<<std::endl;
			str1=int_to_string(temp);
		}while(temp!=6174);	
	}

	return 0;
}
