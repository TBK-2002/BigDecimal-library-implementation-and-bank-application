#include "bigDec.h"
#include "bigDec.cpp"

int main(){
BigDecimalInt int1("20");
BigDecimalInt int2 ("-200");
BigDecimalInt int3 = int1 - int2;
cout<<int3.getFull();

}