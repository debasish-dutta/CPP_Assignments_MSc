// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
template <typename T>
T myMax(T x, T y)
{
   return (x > y)? x: y;
}


template<class R, class S>
class X  {
    R x;
    S y;
public:
    X() {    cout<<"Constructor Called"<<endl;   }
};
 
int Templates()
{
    cout << myMax<int>(3, 7) << endl;  // Call myMax for int
    cout << myMax<double>(3.0, 7.0) << endl; // call myMax for double
    cout << myMax<char>('g', 'e') << endl;   // call myMax for char

    X<char, char> a;
    X<int, double> b;
    return 0;
}