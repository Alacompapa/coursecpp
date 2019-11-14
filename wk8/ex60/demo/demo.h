#ifndef INCLUDED_DEMO_
#define INCLUDED_DEMO_

class Demo
{
    public:
        Demo();
        Demo(Demo const &other); // copy constructor
        Demo(Demo &&tmp); // move constructor
        ~Demo();
        Demo &operator=(Demo const &other); // copy
        Demo &operator=(Demo &&tmp); // move
        void swap(Demo &other);

    private:
};
        
#endif
