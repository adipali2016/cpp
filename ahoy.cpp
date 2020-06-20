#include <iostream>
using namespace std;
//Calculators Exercise
class SimpleCalculator //Takes input of 2 numbers and performs +, - , *, 
{
    protected:
    int a, b;
    public:
    void add(float, float);
    void subtract(float, float);
    void multiply(float, float);
    void divide(float, float);
};
class ScientificCalculator //Takes input of 2 numbers and performs any 4 scientific operations.
{

};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator;
int main(){
    
    return 0;
}
//Display Respective Results --- && use code reusability