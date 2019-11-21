#ifndef INCLUDED_DEMO_
#define INCLUDED_DEMO_

class Demo
{
    public:
        Demo();
        Demo(Demo const &other);            // Copy ctor
        Demo(Demo &&tmp);                   // Move ctor
        ~Demo();
        Demo &operator=(Demo const &other); // Copy assign
        Demo &operator=(Demo &&tmp);        // Move assign
        
    private:
};
        
#endif
