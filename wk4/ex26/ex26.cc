class Dog
{
    size_t d_age;                    // Not public - hidden

    public:

        size_t humanAge() const;        // Encapsulation, the user doesn't have to
                                        // know how humanAge is calculated


        size_t Age() const;             // Data hiding, the user can only get
        void setAge();                  // Data members through member functions

};
