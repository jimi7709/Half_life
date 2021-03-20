#include <stdio.h>

/* 반감기 문제
실행결과
반감기를 입력하시오(년): 10
10년 후에 남은 양 = 50.000000
20년 후에 남은 양 = 25.000000
30년 후에 남은 양 = 12.500000
40년 후에 남은 양 = 6.250000
1/10 이하로 되기까지 걸린 시간=40년
*/

//20 Minutes, 5 Minutes, 12 Minutes, 24 Minutes
// I take 1 hour and 1 minute to solve "half life(radiation)" problem.

int main(void) {

	double material;
	int half_life  ,i  ;
	material = 100;
	printf("반감기를 입력하시오(년): ");
	scanf_s("%d", &half_life);
	

	while (material > 10)
	{
			material = material / 2;
			printf("%d년 후에 남은 양 = %lf\n", half_life, material);
		if (material < 10) {


			break;
		}
		else {
			
			half_life += 10;
		}
	}
	printf("1/10 이하로 되기까지 걸린 시간= %d년", half_life);
	return 0;

}