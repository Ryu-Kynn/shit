#include"DynamicArray.cpp"
#include<iostream>
int main()
{
    std::cout<<"hi"<<std::endl;

	ARRAY a;
	a.Insert(10);
	
	std::cout<<*(a.AR+1);//////////////////
	 
	a.Insert(10);

    return 0;
}
