// Friend Classes
class A {
    private:
        int a;
    public:
        A() { a = 0; }
        friend class B; // Friend class
    
};

class B {
    private:
        int b;
    public:
        void showA(A& x) {
            std::cout << "A: :a = " << x.a << endl;
        }
};

// Friend Functions 
// using another class

class D;
class C {
    public:
        void showD(D&);
};
class D {
    private:
        int d;
    public:
        D() { d = 0; }
        friend void C::showD(D& y);
};

void C::showD(D& y) {
    std::cout << "D: :d = " << y.d << endl;
}

// Global Friend Function
class E {
    int e;
    public:
        E() { e = 0; }
        friend void showE(E&);
};

void showE(E& x) {
    std::cout << "E: e = " << x.e << endl;
}

int FriendClass() {
    //Friend CLass
    A a;
    B b;
    b.showA(a);
    return 0;
}

int FriendFunction() {
    //Friend Function
    C c;
    D y;
    c.showD(y);
    //Global Friend Function
    E e;
    showE(e);

    return 0;
}