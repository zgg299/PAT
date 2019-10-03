#include<iostream>
#include<cstdlib>
#include<sstream>
#include<string>

char Compare_1(std::string str1,std::string str2){
	 char c;
	 int length1=str1.length();
	 int length2=str2.length();
	 int min_len=length1<length2?length1:length2;
	 for(int i=0;i<min_len;++i){
	 	if((str1[i]==str2[i])&&(str1[i]>='A'&&str1[i]<='Z')){
	 	   c=str1[i];
	 	   break;
		 }
	 }
	return c;
}


char Compare_2(std::string str1,std::string str2){
	 char c;
	 int length1=str1.length();
	 int length2=str2.length();
	 int count=0;
	 int min_len=length1<length2?length1:length2;
	 for(int i=0;i<min_len;++i){
	 	if(count==0){
	 		if((str1[i]==str2[i])&&(str1[i]>='A'&&str1[i]<='Z')){
	 			count++;
	 			continue;
			 }
		 }
		 else if(count==1){
		 	if((str1[i]==str2[i])&&((str1[i]>='A'&&str1[i]<='Z')||(str1[i]>='0'&&str1[i]<='9'))){
		 		c=str1[i];
		 		break;
			 }
		 }
		 else
		 	std::cout<<"wrong number"<<std::endl;
	 	/*if((str1[i]==str2[i])&&(str1[i]>='A'&&str1[i]<='Z')){
           if(count==0){
           	  count++;
           	  continue;
		   }
		   else if(count==1){
		   	
		   	  if((str1[i]==str2[i])&&((str1[i]>='A'&&str1[i]<='Z')||(str1[i]>='0'&&str1[i]<='9'))){
			   	  c=str1[i];
	     	      break;
				 }

		   }
		   else{
		   	std::cout<<"wrong number"<<std::endl;
		   }
		 }*/
	 }
	return c;
}

int Compare_3(std::string str1,std::string str2){
	 char c;
	 int length1=str1.length();
	 int length2=str2.length();
	 int count=0;
	 int min_len=length1<length2?length1:length2;
	 for(int i=0;i<min_len;++i){
	 	count+=1;
	 	if((str1[i]==str2[i])&&((str1[i]>='A'&&str1[i]<='Z')||(str1[i]>='a'&&str1[i]<='z'))){
             c=str1[i];
             break;
		 }
	 }

	return count-1;
}
std::string int_to_string(int n){
	std::stringstream ss;
	std::string str;
	ss<<n;
	ss>>str;
	return str;
}
int main(){
	std::string str1,str2,str3,str6;
	std::cin>>str1;
	std::cin>>str2;
	std::cin>>str3;
	std::cin>>str6;	
	char timetemp_1=Compare_1(str1,str2);
	char timetemp_2=Compare_2(str1,str2);
	int temp_2=Compare_3(str3,str6);
	std::string str4;
	std::string str5;
	std::string str7;
	int temp;
	switch(timetemp_1-'A'+0){
		case 0:
			str4="MON";
			break;
		case 1:
			str4="TUE";
			break;
		case 2:
			str4="WED";
			break;
		case 3:
			str4="THU";
			break;
		case 4:
			str4="FRI";
			break;
		case 5:
			str4="SAT";
			break;
		case 6:
			str4="SUN";
			break;
		default:
			break;
			
	}
	
	if(timetemp_2>='0'&&timetemp_2<='9'){
		temp=timetemp_2-'0';				
	}
	else if(timetemp_2>='A'&&timetemp_2<='N'){
		temp=timetemp_2-'A'+10;
	}
	else 
		;
	
	if(temp>=0&&temp<=9){
		str7="0"+int_to_string(temp);
	}
	else{
		str7=int_to_string(temp);
	}
		
	if(temp_2>=0&&temp_2<=9){
		str5="0"+int_to_string(temp_2);
	}
	else{
		str5=int_to_string(temp_2);
	}
	
	std::cout<<str4<<" "<<str7<<":"<<str5;
	return 0;
}
