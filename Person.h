#include <string>

class Person
{
    private:
        std::string firstname;
        std::string lastname;

    public:
        Person(std::string first,
                std::string last,
                    int arbitrary);
        int arbitrarynumber;
        ~Person();
};