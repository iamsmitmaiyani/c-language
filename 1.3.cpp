#include <iostream> 
using namespace std; 
  
float Calculate_GST(float org_cost, float N_price) 
{ 
    return (((N_price - org_cost) * 5000) / org_cost); 
} 

int main() 
{ 
    float org_cost = 5000; 
    float N_price = 18; 
    cout << "GST = "
         << Calculate_GST(org_cost, N_price) 
         << " % "; 
    return 0; 
} 
