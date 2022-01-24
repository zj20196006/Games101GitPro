   

#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

int main(){

    Eigen::Vector3d v (1.0f, 2.0f, 1.0f);
    double theta = (45.0/180.0)*M_PI;
    Eigen::Matrix3d trans;
    trans << 1, 0, 1,
             0, 1, 2,
             0, 0, 1;
    Eigen::Matrix3d rota;
    rota << cos(theta), -sin(theta), 0,
            sin(theta), cos(theta), 0,
                    0, 0, 1;

    v = trans * rota * v;
    std::cout<<v[1]<<std::endl;
    std::cout<<v[2]<<std::endl;
    std::cout<<v[0]<<std::endl;
return 0;
}
