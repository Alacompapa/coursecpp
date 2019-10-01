Class
//Encapsulation is the gathering of related data and functions in an independent structure
//where part of the data can be kept away from external manipulation. The hiding of data,
//data hiding,is the act of protecting part or all the data encapsulated from external
//interference. Encapsulation is centered around decreasing the perceived difficulty of the
//system by putting related data and functions in separate containers. Data hiding´s goal
// is to make data more secure by restricting access to it.
//Classes, which are private by default, combine these two ideas of encapsulation and data hiding to create a
//"more secure" struct and thus making a compilation of code maintanable, less cluttered,
//and more secure.

//The necessary Headers and std namespace are assumed to be present.
class Dog
{
  string d_name;                            //name of the dog
  size_t d_age;                             //age in dog years. We want to keep these to data types hidden
                                            //so the system can´t access this private information.

public:
  void setHumanAge(string const &humanAge); //function to convert the dog´s age to human age.


  string const &humanAge() const;           //The humanAge is public because we want to perform further
                                            //further operations with string humanAge.
};
//The implementation is irrelevant because that´s the whole point of Classes, Data Hiding and Encapsulation,
//we want to keep class Dog incharge of the handling of Dog´s data.
