#include<iostream>
#include<string>
#include<sstream>

int string_to_int(std::string str){
	std::stringstream ss;
	int temp;
	ss<<str;
	ss>>temp;
	return temp;
}
int main(){
	std::string str,temp;
	std::cin>>str;
	int flag_1;
	int flag_2;
	int index;
	if(str[0]=='-'){
		flag_1=0;
	}
	if(str[0]=='+'){
		flag_1=1;
	}
	for(int i=0;i<str.length();++i){
		if(str[i]=='E'){
			if(str[i+1]=='+'){
				flag_2=1;
				index=i;
				for(int j=i+2;j<str.length();++j){
					temp.append(1,str[j]);
				}
				break;
			}
			if(str[i+1]=='-'){
				flag_2=0;
				index=i;
				for(int j=i+2;j<str.length();++j){
					temp.append(1,str[j]);
				}
				break;
			}
		}
	}
	
	int e=string_to_int(temp);
	std::string newstr;
	if(flag_1&&flag_2){
		    if(index-2>=e){
    	    for(int i=1;i<index;++i){
    		if(str[i]!='.'&&i<=e+2){
    			newstr.append(1,str[i]);			
			}
			if(i==e+3){
    		 newstr.append(1,'.');
    		 newstr.append(1,str[i]);
			}else if(i>=e+4&&i<index){
				newstr.append(1,str[i]);
			}
		  }
     	}
	
	  if(index-2<e){
		for(int i=1;i<index;++i){
			if(str[i]!='.'){
				newstr.append(1,str[i]);
			}
		}
		newstr.append(e-index+3,'0');
	  }
	  std::cout<<newstr;
			
	}
	
	
	
	if(flag_2&&!flag_1){
		newstr.append(1,'-');
		 if(index-2>=e){
    	    for(int i=1;i<index;++i){
    		if(str[i]!='.'&&i<=e+2){
    			newstr.append(1,str[i]);			
			}
			if(i==e+3){
    		 newstr.append(1,'.');
    		 newstr.append(1,str[i]);
			}else if(i>=e+4&&i<index){
				newstr.append(1,str[i]);
			}
		  }
     	}
	
	  if(index-2<e){
		for(int i=1;i<index;++i){
			if(str[i]!='.'){
				newstr.append(1,str[i]);
			}
		}
		newstr.append(e-index+3,'0');
	  }
	  std::cout<<newstr;		
	}

    if(flag_1&&!flag_2){
    	newstr.append(1,'0');
    	newstr.append(1,'.');
    	newstr.append(e-1,'0');
    	for(int i=1;i<index;++i){
    		if(str[i]!='.'){
    			newstr.append(1,str[i]);
			}
		}
		std::cout<<newstr;
	}
	if(!flag_1&&!flag_2){
		newstr.append(1,'-');
	    newstr.append(1,'0');
    	newstr.append(1,'.');
    	newstr.append(e-1,'0');
    	for(int i=1;i<index;++i){
    		if(str[i]!='.'){
    			newstr.append(1,str[i]);
			}
		}
		std::cout<<newstr;	
	}
	
	return 0;
}
