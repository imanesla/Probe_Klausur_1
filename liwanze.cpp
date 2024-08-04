#include "liwanze.h"
#include <iostream>
using namespace std;
Liwanze:: Liwanze():name(" "),loc(ndef){}
Liwanze::Liwanze(string Name, Region Loc):name(Name),loc(Loc) {}
Liwanze::~Liwanze() {}

// Function to convert enum values to strings
string Liwanze:: GenreToString(Region loc) const
{
    switch (loc) {
    case Liwanze::ndef: return "ndef";
    case Liwanze::amer: return "amer";
    case Liwanze::apac: return "apac";
    case Liwanze::emea: return "emea";
    default: return "Unbekannt";
    }
}

void Liwanze :: getname()
{
    cout << "Name: " <<name;
}
void Liwanze:: fill_tags(vector<Liwanze>& liv) {
    liv.push_back(Liwanze("Joey", Liwanze::amer));
    liv.push_back(Liwanze("Johnny", Liwanze::apac));
    liv.push_back(Liwanze("DeeDee", Liwanze::ndef));
    liv.push_back(Liwanze("Tommy", Liwanze::emea));
    liv.push_back(Liwanze("Suzy", Liwanze::ndef));
    liv.push_back(Liwanze("Sheena", Liwanze::ndef));
}

void Liwanze::print() {
    vector<Liwanze> vl;
    fill_tags(vl);
    for (const auto& vls : vl) {
        cout << "Artist: " << vls.name << ", Region: " << GenreToString(vls.loc) << endl;
    }
}
