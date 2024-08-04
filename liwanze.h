#ifndef LIWANZE_H
#define LIWANZE_H
#include <string>
#include <vector>
using namespace std;

class Liwanze
{
public:
    enum Region
    {
        ndef, amer, apac, emea
    };
public:
    Liwanze();
    Liwanze(string Name , Region Loc);
    virtual ~Liwanze();

    virtual void getname();
    string GenreToString(Region) const;
    void fill_tags(std::vector<Liwanze>& lin);
    void print()  ;
public:
    string name  ;
    Region loc ;
};

#endif // LIWANZE_H
