#include <iostream>

using namespace std;

class Person {
    string first, last;
    int FICO;
    int Salary;

    // all operators derived from less than symbol
    bool operator <(const Person &other) const {
        if(last==other.last)
            return first<other.first;
        else
            return last<other.last;
        return FICO<other.FICO;
    }
    bool operator >(const Person &other) const {
        return other<*this;
    }
    bool operator !=(const Person &other) const {
        return other<*this || *this<other;
    }
    bool operator ==(const Person &other) const {
        return !(*this!=other);
    }
    bool operator <=(const Person &other) const {
        return *this<other || *this==other;
    }
    bool operator >=(const Person &other) const {
        return *this>other || *this==other;
    }

};

int main(){
    
    cout << "hello world" << endl;
    return 0;
}