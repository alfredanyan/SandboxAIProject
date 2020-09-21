#include <iostream>
#include <ios>
#include <iomanip>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::streamsize;
using std::string;

int main()
{

    cout << "Hi, Please enter your name: ";

    string name;
    cin >> name;

    cout << "Hi, " << name << ", Please enter your midterm and final grades" << endl;

    double midterm, final;
    cin >> midterm >> final;

    cout << "Thanks, " << name << ", your midterm and final grades are " << midterm << final << endl;
    cout << "Now please enter your homework grades ending the last one with #" << endl;

    int count = 0;
    double sum = 0;
    double x;

    while (cin >> x)
    {
        ++count;
        sum += x;
    }

    streamsize prec = cout.precision();
    cout << "Your final grade is" << setprecision(3)
         << 0.2 * midterm + 0.4 * final + 0.4 * sum / count
         << setprecision(prec) << endl;

    return 0;
}