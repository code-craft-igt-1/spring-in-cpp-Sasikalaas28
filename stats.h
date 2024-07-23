#include <vector>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    
    Stats ComputeStatistics(const std::vector<double>& );
    struct Stats{
    double average;
    double max;
    double min;
    };
}
