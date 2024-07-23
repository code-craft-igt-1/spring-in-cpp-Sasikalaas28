#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<double>& in) {
    //Implement statistics here
    int len = in.size(); //vector size
    double sum = 0.0; //sum of the vector elements
    Stats st;
    st.min = in[0];
    st.max = in[0];
  //  st.average = 0.0;
    for(int i=0;i<len;i++)
        {
            if(in[i] < st.min)
                st.min = in[i];
            if(in[i] > st.max)
                st.max = in[i];
        sum += in[i];   
        }
    st.average = sum/len;
    return st;
}
