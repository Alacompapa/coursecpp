#ifndef INCLUDED_DEMO_
#define INCLUDED_DEMO_

// TODO: Define members in this file?

class Demo
{
    public:
        Demo();
        Demo(Demo const &other);
        Demo(Demo &&tmp);
        ~Demo();
        Demo &operator=(Demo const &other);
        Demo &operator=(Demo &&tmp);
        void swap(Demo &other)

    private:
};
        
#endif
