class AA {
public:
    void display()
    {
        cout << "Hello from AA \n";
    }
};
  
class BB : public virtual AA {
};
  
class CC : public virtual AA {
};
  
class DD : public BB, public CC {
};
  
int VirtualBaseClass()
{
    DD object;
    object.display();
}