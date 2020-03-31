#include"DynamicArray.cpp"
#include<iostream>
int main()
{
    std::cout<<"hi"<<std::endl;

	ARRAY a;
	 a.Insert(1);
	 a.Insert(2);
	 a.Insert(1);
	 a.Insert(13);
	 a.Insert(14);
	 a.Insert(16);
	 a.Insert(10);
	 a.Insert(10);
	 a.Insert(14);
	 a.Insert(13);
	 a.Insert(1);
	 a.Insert(100);
	 a.Insert(14);
	
	 for(int i=0 ; i<a.ElementCounter ; i++)
	 std::cout<<*(a.AR+i);

    return 0;
}
