#include <iostream>
using namespace std;
class Student
{

private:
    string name;
    int age;
    int height;

public:
    /**
     * @brief Get the Age object
     *
     * @return int
     */
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    Student First;
    cout << "ok " << endl;
    return 0;
}
