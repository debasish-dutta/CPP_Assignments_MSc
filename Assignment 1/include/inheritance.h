// There are five types of inheritance in C++
// 1. Single inheritance
// 2. Multiple inheritance
// 3. Hierarchical inheritance
// 4. Hybrid inheritance
// 5. Multilevel inheritance

// Sample Inheritance
//Base class
class Parent
{
    public:
      int id_p;
};
  
// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
    public:
      int id_c;
};

// Single inheritance
// base class
class Vehicle {
  public:
    Vehicle()
    {
      std::cout << "This is a Vehicle" << std::endl;
    }
};
 
// sub class derived from a single base classes
class Car: public Vehicle{
 
};


// multiple inheritance
// first base class
class Vehicle1 {
  public:
    Vehicle1()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
// second base class
class FourWheeler {
  public:
    FourWheeler()
    {
      cout << "This is a 4 wheeler Vehicle" << endl;
    }
};
 
// sub class derived from two base classes
class Car1: public Vehicle1, public FourWheeler {
 
};

// Multilevel Inheritance
// base class
class Vehicle2
{
  public:
    Vehicle2()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
// first sub_class derived from class vehicle
class fourWheeler1: public Vehicle2
{  public:
    fourWheeler1()
    {
      cout<<"Objects with 4 wheels are vehicles"<<endl;
    }
};
// sub class derived from the derived base class fourWheeler
class Car2: public fourWheeler1{
   public:
     Car2()
     {
       cout<<"Car has 4 Wheels"<<endl;
     }
};

// Hierarchical Inheritance
// base class
class Vehicle3
{
  public:
    Vehicle3()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
 
// first sub class
class Car3: public Vehicle3
{
 
};
 
// second sub class
class Bus: public Vehicle3
{
     
};

//Hybrid Inheritance
// base class
class Vehicle4
{
  public:
    Vehicle4()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
//base class
class Fare
{
    public:
    Fare()
    {
        cout<<"Fare of Vehicle\n";
    }
};
 
// first sub class
class Car4: public Vehicle4
{
 
};
 
// second sub class
class Bus1: public Vehicle4, public Fare
{
     
};

//main function
int Types_of_Inheritance()
   {
      
        Child obj;
          
        // An object of class child has all data members
        // and member functions of class parent
        obj.id_c = 7;
        obj.id_p = 91;
        cout << "Child id is " <<  obj.id_c << endl;
        cout << "Parent id is " <<  obj.id_p << endl;
        

        // creating object of sub class will
        // invoke the constructor of base classes
        Car obj0;
        // multiple inheritance
        Car1 obj1;
        //multilevel inheritance
        Car2 obj2;
        //hierarchical inheritance
        Car3 obj3;
        Bus obj4;
        //hybrid inheritance
        Bus1 obj5;

        return 0;
   }