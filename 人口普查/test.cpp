#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
struct Person{
	std::string name;
	int year;
	int month;
	int day;
}; 

int string_to_int(std::string str){
	int temp;
	std::stringstream ss;
	ss<<str;
	ss>>temp;
	return temp;
}

bool compare(Person a,Person b){
	if(a.year!=b.year)
	return a.year>b.year;
	if(a.year==b.year){
		if(a.month!=b.month){
			return a.month>b.month;
		}else{
			return a.day>b.day;
		}
	}
}
int main(){
	int n;
	std::string tempname,tempbirth;
	std::cin>>n;
	std::vector<Person>a;
	for(int i=0;i<n;++i){
		std::cin>>tempname>>tempbirth;
		int tempbirthyear=string_to_int(tempbirth.substr(0,4));
		int tempbirthmonth=string_to_int(tempbirth.substr(5,2));
		int tempbirthday=string_to_int(tempbirth.substr(8,2));
		if((tempbirthyear>2014)||((tempbirthyear==2014)&&(tempbirthmonth>9))||((tempbirthyear==2014)&&(tempbirthmonth==9)&&(tempbirthday>6))){
			continue;
		}
		if((tempbirthyear<1814)||((tempbirthyear==1814)&&(tempbirthmonth<9))||((tempbirthyear==1814)&&(tempbirthmonth==9)&&(tempbirthday<6))){
			continue;
		}
		else{
			a.push_back({tempname,tempbirthyear,tempbirthmonth,tempbirthday});
		}

	}
	std::cout<<a.size()<<" ";
	sort(a.begin(),a.end(),compare);
	std::cout<<a[a.size()-1].name<<" "<<a[0].name;
	
	
	return 0;
}





