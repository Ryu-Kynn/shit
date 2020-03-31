class ARRAY
{
	public:
		
	int OverflowCounter ;
    int ElementCounter ;
    int* AR;
    
    ARRAY() : OverflowCounter(1), ElementCounter(0)
    {
        AR= create(1);
    }


    int* create(int OverflowCounter)
    {
        int* ar= new int[OverflowCounter*10];
        return ar;
        delete ar;
    }


    void overflow()
    {
        int* ar =create(++OverflowCounter);

        for (int i=0 ; i<=ElementCounter ; i++)
            *(ar+i)=*(AR+i);
	    //hello motherfucker //invites are accepted on email.

        *AR=*ar;
       // delete ar;

    }


    void Insert(int value)
    {
        if ( ElementCounter <= OverflowCounter * 10 )
        {
            *(AR+ElementCounter) = value;
            ElementCounter++;
        }
        else
            overflow();
            *(AR+ElementCounter) = value;
            ElementCounter++;

    }


    ~ARRAY()
    {
        delete AR ;
    }
};
