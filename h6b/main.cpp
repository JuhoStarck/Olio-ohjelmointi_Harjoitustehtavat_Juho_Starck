#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // ExampleClass *objExampleClass = new ExampleClass;
    // objExampleClass->startToWait();
    // delete objExampleClass;
    // objExampleClass = nullptr;

    ExampleClass objExampleClass;
    objExampleClass.startToWait();

    return a.exec();
}
