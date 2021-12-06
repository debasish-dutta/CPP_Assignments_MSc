 //A pure virtual function is declared by assigning 0 in declaration

class Get
{
   int x;
public:
    virtual void fun() = 0;
    int getX() { return x; }
};
  
// This class inherits from Get and implements fun()
class Obtained: public Get
{
    int y;
public:
    void fun() { cout << "fun() called" << endl; }
};
  
int PureVirtualFunction(void)
{
    Obtained d;
    d.fun();
    return 0;
}