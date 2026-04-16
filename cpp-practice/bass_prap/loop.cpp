#include<iostream>
#include<string>

int main()
{
	std::string str;
	std::cout<<"enter the string: ";
	std::cin>>str;
	int t = str.length();

	for(int i=0; i <= t; i++)
	{
		if(i % 2 == 0)
		std::cout<< str[i] ;
	}
 	return 0;
}
