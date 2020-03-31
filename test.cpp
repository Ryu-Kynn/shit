#include"DynamicArray.cpp"
#include<iostream>
int main()
{
	
    std::cout<<"hi"<<std::endl;

	ARRAY a;
		
	a.Insert(10);
	a.Insert(10);
		a.Insert(10);
		a.Insert(10);
		a.Insert(10);
		a.Insert(10);
		a.Insert(6);
		a.Insert(10);
		a.Insert(10);
		a.Insert(10);
		a.Insert(10);
		a.Insert(10);
		a.Insert(10);
	
	for(int i=0 ; i<=a.ElementCounter ; i++)
		
	std::cout<<*(a.AR+i);
	
	
    return 0;
}
