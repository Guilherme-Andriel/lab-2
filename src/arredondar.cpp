#include <iostream>
#include <cmath>
#include "arredondar.h"
#include "complexo.h"

void arredondamento(float &var1, float &var2) {
    int casas_decimais = 2;
    float fator = pow(10, casas_decimais);

    if (var1 != int(var1) && var2 != int(var2)) {
        var1 = std::ceil(var1 * fator) / fator;
        var2 = std::ceil(var2 * fator) / fator;
    } else if (var1 != int(var1) && var2 == int(var2)) {
        var1 = std::ceil(var1 * fator) / fator;
    } else if (var1 == int(var1) && var2 != int(var2)) {
        var2 = std::ceil(var2 * fator) / fator;
    }
}
