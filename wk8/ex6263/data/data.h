#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <string>

union Data
{
    enum Type 
    {
        DOUBLES,
        WORD,
        VALUE
    };

    private:
        double *u_doubles;
        std::string u_word;
        size_t u_value;

    public:
        ~Data();                            // empty
  
        Data(double *doubles);
        Data(std::string const &word);
        Data(size_t value);

        Data(Data const &other, Type type); // copy ctor
        Data(Data &&tmp, Type type);        // move ctor
        
        void copy(Type current, Data const &other, Type next);
        void move(Type current, Data &&tmp, Type next);
        void swap(Type current, Data &other, Type type);
        void destroy(Type type);        

                                            // accessors
        double const *doubles() const;
        std::string const &word() const;
        size_t value() const;

    private:
                                            // destroy members
        void destroyDoubles(); 
        void destroyWord();                 // calls string destructor 
        void destroyValue();                
                                            // copy members 
        void copyDoubles(Data const &other); 
        void copyWord(Data const &other);   
        void copyValue(Data const &other);  
                                            // move members 
        void moveDoubles(Data &&other); 
        void moveWord(Data &&other);   
        void moveValue(Data &&other);  
                                            // swap members
        void swap2Doubles(Data &other); 
        void swapDoublesWord(Data &other);
        void swapDoublesValue(Data &other);
        void swap2Word(Data &other);
        void swapWordDoubles(Data &other);
        void swapWordValue(Data &other);
        void swap2Value(Data &other);
        void swapValueDoubles(Data &other);
        void swapValueWord(Data &other);
                                            // arrays of ptrs to members
        static void (Data::*s_destroy[])();
        static void (Data::*s_copy[])(Data const &other);
        static void (Data::*s_move[])(Data &&other);
        static void (Data::*s_swap[][3])(Data &other);
};

#endif
