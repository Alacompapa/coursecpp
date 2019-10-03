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
// NOTE(BB): Indentation needs to be 4 spaces
// NOTE(BB): Should public be on the lowest level of indentation?
public:
// NOTE(BB): shouldnt we declare a d_humanAge data member if we want 
// to use these functions
  void setHumanAge(string const &humanAge); //function to convert the dog´s age to human age.
// NOTE(BB): if we return a const reference we can't do 'further operations'
//   on that, right?
  string const &humanAge() const;           //The humanAge is public because we want to perform further
                                            //further operations with string humanAge.
};
//The implementation is irrelevant because that´s the whole point of Classes, Data Hiding and Encapsulation,
//we want to keep class Dog incharge of the handling of Dog´s data.
//
//
// ------ BB ANSWERS ------
// Encapsulation is a concept by which is meant that the inner parts of a
//   class are irrelevant for the user of that class. The class should be able
//   to work as a black box, the user shouldn't have to know how it works,
//   only that it works.
//   It gives rise to a disconnect between interface (the outside) and
//   implementation (the inside)
//
// Data hiding is a principle of class design stating that data members of
//   classes are private (only accessible to the class' member functions).
//   This implies the modification of data members is fully controlled by the
//   member functions. This in turn has the consequence that the class 
//   designer is in total control of how class data members are 
//   accessed and/or modified.
//
// These concepts are important in class design as they limit the way all
//   functions can interact. In a world where each function can access
//   every piece of data, there is the possibility for myriad of unforeseen
//   side effects. Reducing these side effects means reducing the mental load
//   on class designers, who now don't have to think about the endless ways 
//   others will (ab)use their classes. 
