
#include <iostream>
#include "student.h"
#include "book.h"
#include "activity.h"
#include <memory>


int main()
{
    Student s1{"Yuri", graduating};
    //Student * p_s = new Student("Ann", starter);
    //auto p_s = std::make_unique<Student>("Ann");

    //std::cout << s1.getStage() << std::endl;
    //s1.setStage(inbetween);
    //std::cout << s1.getStage() << std::endl;

    //Book math("Introduce to Maths", 34.50f);
    auto math = std::make_shared<Book>("Introduce to Maths", 34.50f);

    //Book advanced_math("Advanced Math", 45.56f, std::shared_ptr<Book>(&math));
    auto advanced_math = std::make_shared<Book>("Advanced math", 45.56f, math);
    //Book b1{"Digital Image Processing", 45.60f};


    std::cout << s1.addOrder(math) << std::endl;
    std::cout << s1.addOrder(advanced_math) << std::endl;

    std::shared_ptr<const Order> tripAntwerp{"WebApps Kickoff", 0.0f, nullptr,
                        QDateTime(QDate(2017, 9, 28), QTime(12, 25)),
                        QDateTime(QDate(2016, 9, 30), QTime(16, 0)), 80};
    std::cout << s1.addOrder(tripAntwerp) << std::endl;
    std::cout << s1.listOrders() << std::endl;
}
/*
#include <iostream>

using namespace std;

void by_value(int a){a+=10;}
void by_ref(int *a){(*a)+=10;}
void by_ref2(int &a){a+=10;}
int main(){
    int x=40;
    by_value(x);
    cout << x << endl;
    by_ref(&x);
    cout << x << endl;
    by_ref2(x);
    cout << x << endl;
    return 0;

}
*/
