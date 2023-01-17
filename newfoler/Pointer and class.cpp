#ifndef STRING_H
#define STRING_H

#include<stdlib.h>
#include<string.h>

class String{
	private:
		char *str;
		int len;
	public:
	    void init(){
	    	str=NULL;
	    	len=-1;
	    }
	    	char* get() {
	    		return str;
			}	
		int lessThan(String &other){ //this string is less than string other
		return strcmp(str,other.str)<0;
		}
		void set(char*);
		void destory();  //destory memory location create and pointed by str
};
void String::set(char*s){
	if (str!=NULL)free(str);
	len = strlen(s);
	str=(char* )malloc(len+1);
	strcpy(str,s);
}
void String::destory(){
	if(str!=NULL)free(str);
	len=-1;
}
#endif

//-------------------------------------------------------------------------------