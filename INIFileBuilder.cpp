#include "INIFileBuilder.h"

void INIFileBuilder::AddSection(const std::string &sectionName, const std::map<std::string, std::string> &keys)
{
    if (data.find(sectionName) != data.end())
        throw MyException("Same sections in one file : ", sectionName.c_str());
    data.insert(make_pair(sectionName, keys));
}