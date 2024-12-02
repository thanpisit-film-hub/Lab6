#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double x){

    x = (x*M_PI)/180;
    return x;
}

double rad2deg(double y){
    y = (y*180)/M_PI;
    return y;
}

double findXComponent(double l1,double l2,double a1, double a2){

    double x_num1 = l1 * cos(a1);
    double x_num2 = l2 * cos(a2);
    double x_sum = x_num1 + x_num2;
    return x_sum;

}

double findYComponent(double l1,double l2,double a1, double a2){

    double y_num1 = l1 * sin(a1);
    double y_num2 = l2 * sin(a2);
    double y_sum = y_num1 + y_num2;
    return y_sum;

}

double pythagoras(double xcomp, double ycomp){

    double _sizeof = sqrt(xcomp*xcomp + ycomp*ycomp);
    return _sizeof;
}

void showResult(double result_vec_length, double result_vec_direction){

    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << result_vec_length << endl;
    cout << "Direction of the resultant vector (deg) = " << result_vec_direction << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";

}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
