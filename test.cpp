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
	//	a.Insert(10);
	//	a.Insert(10);
	//	a.Insert(10);
	//	a.Insert(1);
		
		std::cout<<"1"<<std::endl;
	
	for(int i=0 ; i<9 ; i++)
	
	std::cout<<"\n"<<*(a.AR+i);
	
	std::cout<<"2"<<std::endl;
	std::cout<<a.OverflowCounter;
	
	std::cout<<"3"<<std::endl;
	std::cout<<a.ElementCounter;
	
	
	
    return 0;
}
