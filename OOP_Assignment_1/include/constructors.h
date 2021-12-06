// CPP Program illustrating the different types of constructors

using namespace std;

class def_construct {
    public:
        int a, b;
        def_construct() {
            a = 10;
            b = 20;
        }
};

class parameter_construct {
    private:
        int a, b;
    public:
        parameter_construct(int x, int y) {
            a = x;
            b = y;
        }
        int get_a() {
            return a;
        }
        int get_b() {
            return b;
        }
};

class copy_construct {
    private:
        double a, b;
    public:
        copy_construct(double x, double y) {
            a = x;
            b = y;
        }
        copy_construct(const copy_construct &obj) {
            a = obj.a;
            b = obj.b;
        }
        double get_a() {
            return a;
        }
        double get_b() {
            return b;
        }
};

int Constructors() {

    //default constructor
    def_construct obj1;
    cout << "a = " << obj1.a << endl;
    cout << "b = " << obj1.b << endl;

    // parameterized constructor
    parameter_construct obj2(100, 200);
    cout << "a = " << obj2.get_a() << endl;
    cout << "b = " << obj2.get_b() << endl;

    // Copy constructor
    // Copy constructor is used to copy the value of one object to another object.
    copy_construct obj3(10.0, 20.0);
    copy_construct obj4(obj3);
    // Lets us assigned the value of obj2 to obj1
    cout << "a.get_a() = " << obj3.get_a() << endl;
    cout << "b.get_b() = " << obj4.get_b() << endl;

    return 0;
}