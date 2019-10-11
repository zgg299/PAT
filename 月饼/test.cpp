#include<iostream>
#include<string.h>
#include<vector>
#include<stdlib.h>
#include<algorithm>

struct Cake{
	int save_num;
	int price;
	double ave_price;
}; 


bool cmp(Cake cake_1,Cake cake_2){
	if(cake_1.ave_price>cake_2.ave_price)
	   return true;
	else
	   return false;
}
int main(){
	int N,D;
	std::cin>>N>>D;
	std::vector<Cake>a;
	Cake *s=new Cake();
	for(int i=0;i<N;++i){
		std::cin>>s->save_num;
		a.push_back(*s);
	}
	
	for(int i=0;i<N;++i){
		std::cin>>a[i].price;
		a[i].ave_price=float(a[i].price)/a[i].save_num;
	}
    
    
    sort(a.begin(),a.end(),cmp);
     int count=0;
     int temp=0;
     double money=0;
     int t=N;
     do{
     	count+=a[temp].save_num;
     	money+=a[temp].price;
     	temp++;
     	N--;
	 }while(count<D&&t);
	if(t==0){
	 	printf("%.2f",money);
	 }
	 if(count==D)
	 printf("%.2f",money);
	 else if(count>D){
	 	temp--;
	 	money=money-a[temp].price;
	 	count=count-a[temp].save_num;
	 	money=money+(D-count)*a[temp].ave_price;
	 	printf("%.2f",money);
	 }

	
	return 0;
}
