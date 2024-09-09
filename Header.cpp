#include "Header.h"

#include <vector>

std::vector<int> increaseVecElements(const std::vector<int>& vec, int n) {
    std::vector<int> res = vec;
    for (auto& element : res) {
        element += n;
    }
    return res;
}
