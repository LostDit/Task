#include <algorithm>
#include <array>

bool isBoxFit(std::array<int, 3> externalBox, std::array<int, 3> internalBox)
{  
    std::sort(std::begin(externalBox), std::end(externalBox));
    std::sort(std::begin(internalBox), std::end(internalBox));

    for(size_t i = 0; i < 3; i++)
    {
        if(externalBox[i] < internalBox[i])
        {
            return false;
        }
    }

    return true;
}