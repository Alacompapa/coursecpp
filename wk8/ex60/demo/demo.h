#ifndef INCLUDED_DEMO_
#define INCLUDED_DEMO_

// TODO: Define members in this file?

class Demo
{
    public:
        Demo();
        Demo(Demo const &other); // copy constructor
        Demo(Demo &&tmp); // move constructor
        ~Demo();
        Demo &operator=(Demo const &other); // copy assignment
        Demo &operator=(Demo &&tmp);    // move assignment
        void swap(Demo &other);

        static Demo factory();
};
        
#endif
