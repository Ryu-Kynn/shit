

class ARRAY
{
   	int OverflowCounter= 1 ;
    int ElementCounter= 0;
    int* AR;


    int* create(int OverflowCounter)
    {
        int* ar= new int[OverflowCounter*10];
        return ar;
        delete ar;
    }



    ARRAY
    {
        AR= create(1);
    }

    void overflow()
    {
        int* ar =create(++OverflowCounter);

        for (int i=0 ; i<=ElementCounter ; i++)
            *(ar+i)=*(AR+i);

        *AR=*ar;
        delete ar;

    }
public:
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
