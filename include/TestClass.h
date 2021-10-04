#pragma once

class TestClass
{

private:
    int x;

public:
    TestClass();
    TestClass(int y);
    int get_item() {return x;}
    ~TestClass();

};