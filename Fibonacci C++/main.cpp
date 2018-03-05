#include <iostream>

using namespace std;

int main()
{
	int a_int=0;
	int b_int=1;
	int while_i=0;
	while(while_i<10){
		int i=while_i*1;
		for(;i<(while_i + 1) * 1000000;i++){
			if(b_int<0 && while_i<9){
				cout<<"OverFlow de int en i = ";
				cout<<(i+1);
                while_i = 9;
			}
			b_int = b_int + a_int;
			a_int = b_int - a_int;
		}
		while_i++;
	}
	char a_chart=0;
	char b_chart=1;
	while_i=0;
	while(while_i<10){
		int i=while_i*1;
		for(;i<(while_i + 1) * 1000000;i++){
			if(b_chart<0 and while_i<9){
				cout<<"\nOverFlow de char en i = ";
				cout<<(i+1);
                while_i = 9;
			}else{
				b_chart = b_chart + a_chart;
				a_chart = b_chart - a_chart;
			}
		}
		while_i++;
	}
	short a_short=0;
	short b_short=1;
	while_i=0;
	while(while_i<10){
		int i=while_i*1;
		for(;i<(while_i + 1) * 1000000;i++){
			if(b_short<0 and while_i<9){
				cout<<"\nOverFlow de short en i = ";
				cout<<(i+1);
                while_i = 9;
			}else{
				b_short = b_short + a_short;
				a_short = b_short - a_short;
			}
		}
		while_i++;
	}
	long long a_long=0;
	long long b_long=1;
	while_i=0;
	while(while_i<10){
		int i=while_i*1;
		for(;i<(while_i + 1) * 1000000;i++){
			if(b_long<0 and while_i<9){
				cout<<"\nOverFlow de long en i = ";
				cout<<(i+1);
                while_i = 9;
			}else{
				b_long = b_long + a_long;
				a_long = b_long - a_long;
			}
		}
		while_i++;
	}
    return 0;
}

