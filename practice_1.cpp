#include <iostream>
#include <math.h>
using namespace std;
//직선의 길이를 구하고, 비교하는 함수(어떤 직선이 더 긴지 출력(직선의 길이가 같은 조건은 생각하지 않음.), 첫 번째 직선의 길이가 길면 return true, 두 번째 직선의 길이가 더 길면 false값 반환)
bool line_compare(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, double& x, double& y);

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4, line_1, line_2;

    cout << "첫 번째 좌표를 입력하세요: ";
    cin >> x1 >> y1 >> x2 >> y2;

    cout << "두 번째 좌표를 입력하세요: ";
    cin >> x3 >> y3 >> x4 >> y4;
    
    line_compare(x1, y1, x2, y2, x3, y3, x4, y4, line_1, line_2);
    return 0;
}
bool line_compare(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, double& x, double& y){
    x = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    y = sqrt(pow((x3 - x4), 2) + pow((y3 - y4), 2));

    if(x > y){
        cout << "첫 번째 직선의 길이가 더 깁니다.";
        return true;
    }
    else{
        cout << "두 번째 직선의 길이가 더 깁니다.";
        return false;
    }
}