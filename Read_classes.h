//
// Created by Mansur on 12.10.2022.
//

#ifndef UNTITLED_READ_CLASSES_H
#define UNTITLED_READ_CLASSES_H
#include <vector>
#include "Class.h"

class Read_classes {
public:
    explicit Read_classes(const string& input_name_file);
    Read_classes();
    vector<Class> get_classes_T() const;
    vector<Class> get_classes_TP() const;
    vector<Class> get_classes_PL() const;
    vector <Class> Binary_search_of_class_T(Subject key);
    Class Binary_search_of_class_TP(Subject key);
    Class Binary_search_of_class_PL(Subject key);

private:
    vector<Class> classes_T;
    vector<Class> classes_TP;
    vector<Class> classes_PL;
};


#endif //UNTITLED_READ_CLASSES_H