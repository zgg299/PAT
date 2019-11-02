#include<iostream>
int main(){
	char c;
	int col,row;
	scanf("%d %c",&col,&c);
	row=(col+1)/2;//四舍五入的取整 
	for(int j=0;j<row;++j){
		for(int i=0;i<col;++i){
			if(i==0||j==0||i==col-1||j==row-1){
				printf("%c",c);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
