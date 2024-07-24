#include "stats.h"
#include <limits>
Statistics::Stats Statistics::ComputeStatistics(const std::vector<double>& in) {
    //Implement statistics here
    Stats st;
    int len = in.size();
    if (len == 0)
    {
        st.min = std::numeric_limits<double>::quiet_NaN();
        st.max = std::numeric_limits<double>::quiet_NaN();
        st.average = std::numeric_limits<double>::quiet_NaN();
        return st;
    }
    else
    {
        double sum = 0.0; //sum of the vector elements
        st.min = in[0];
        st.max = in[0];
        //  st.average = 0.0;
        for (int i = 0;i < len;i++)
        {
            if (in[i] < st.min)
                st.min = in[i];
            if (in[i] > st.max)
                st.max = in[i];
            sum += in[i];
        }
        st.average = sum / len;
        return st;
    }
}
