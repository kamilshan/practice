#include <iostream>
using namespace std;

class employee {
    int sal;
    int id;

public:
    void get() {
        cout << "Enter your id and salary: ";
        cin >> id >> sal;
    }

    void disp() {
        cout << "ID: " << id << "\nSalary: " << sal << endl;
    }
};

int main() {
    employee obj;
    obj.get();
    obj.disp();
    return 0;
}