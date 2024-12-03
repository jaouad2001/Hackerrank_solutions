

/* Define the exception here */

class BadLengthException : public exception  {
    public:
    int n ; 
    BadLengthException(int a ){
         n=a ;
    }
    int  what()   { return n; }
};
