#include <stdio.h>

int main() {
	const float RATE_USD = 1233.1;  // 상수는 단어와단어사이는 언더바 그리고 올 대문자로 써준다. (환율 바뀌면 그에 맞게 바꿔주면 계산되니까 상수를 사용한다.) 
	int inputWon = 50000;  
	float outputDollar = 0; 
	float outputDollar2 = 0;
	 
	float outputWon = 0;
	float outputCent = 0;
	float outputDongJeon_USD = 0;
	
	float outputCent2 = 0;
	float outputDongJeon_JPY = 0;
	
	float outputCent3 = 0;
	float outputDongJeon_CNY = 0;
	
	float outputCent4 = 0;
	float outputDongJeon_EUR = 0;
	
	float outputCent5 = 0;
	float outputDongJeon_GBP = 0;

	
	
	printf("환전을 원하는 원화 금액을 입력하세요 : ");
	scanf("%d", &inputWon); 
//	printf("1000원 %d개, 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개\n", output1000, output500, output100, output50, output10);
	// 달러 
	outputDollar = inputWon / RATE_USD;   // input을 환율로 나누면 달러가 나온다. 
	outputDollar2 = (int)outputDollar;
	outputCent = outputDollar - (int)outputDollar;
	outputDongJeon_USD = int(outputCent * 1233.1);
	
	int output1000_USD = outputDongJeon_USD / 1000;
	int outputWon1000_USD = outputDongJeon_USD - output1000_USD * 1000; 
	
	int output500_USD = outputWon1000_USD / 500;
	int outputWon500_USD = outputWon1000_USD - output500_USD * 500;
	
	int output100_USD = outputWon500_USD / 100;
	int outputWon100_USD = outputWon500_USD - output100_USD * 100;
	
	int output50_USD = outputWon100_USD / 50;
	int outputWon50_USD = outputWon100_USD - output50_USD * 50;
	
	int output10_USD = outputWon50_USD / 10;
	int outputWon10_USD = outputWon50_USD - output10_USD * 10;
	 
	printf("%d원-> %10.2f달러\n", inputWon, outputDollar);
	printf("%d원-> %10.2f달러\n", inputWon, outputDollar2);
	printf("%d원-> %10.2f달러\n", inputWon, outputCent);
	printf("%d원-> %10.2f원\n", inputWon, outputDongJeon_USD);
	printf("1000원 %d개, 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개\n", output1000_USD, output500_USD, output100_USD, output50_USD, output10_USD);
	printf("********************************************\n");



	// 엔화 
	const float RATE_JPY = 9.8716;
	float outputJPY = 0;
	float outputJPY2 = 0;
	
	outputJPY = (inputWon / RATE_JPY) ; 
	outputJPY2 = (int)outputJPY;
	outputCent2 = outputJPY - (int)outputJPY; 
	outputDongJeon_JPY = int(outputCent2 * 987.16);
	
	int output1000_JPY = outputDongJeon_JPY / 1000;
	int outputWon1000_JPY = outputDongJeon_JPY - output1000_JPY * 1000; 
	
	int output500_JPY = outputWon1000_JPY / 500;
	int outputWon500_JPY = outputWon1000_JPY - output500_JPY * 500;
	
	int output100_JPY = outputWon500_JPY / 100;
	int outputWon100_JPY = outputWon500_JPY - output100_JPY * 100;
	
	int output50_JPY = outputWon100_JPY / 50;
	int outputWon50_JPY = outputWon100_JPY - output50_JPY * 50;
	
	int output10_JPY = outputWon50_JPY / 10;
	int outputWon10_JPY = outputWon50_JPY - output10_JPY * 10;
	
	printf("%d원-> %10.2f엔\n", inputWon, outputJPY);
	printf("%d원-> %10.2f엔\n", inputWon, outputJPY2);
	printf("%d원-> %10.2f엔\n", inputWon, outputCent2);
	printf("%d원-> %10.2f원\n", inputWon, outputDongJeon_JPY);
	printf("1000원 %d개, 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개\n", output1000_JPY, output500_JPY, output100_JPY, output50_JPY, output10_JPY);
	printf("********************************************\n");
	
	// 위안
	const float RATE_CNY = 193.2;
	float outputCNY = 0;
	float outputCNY2 = 0;
	
	outputCNY = inputWon / RATE_CNY;
	outputCNY2 = (int)outputCNY;
	outputCent3 =  outputCNY - (int)outputCNY;
	outputDongJeon_CNY = int(outputCent3 * 193.2);
	
	int output1000_CNY = outputDongJeon_CNY / 1000;
	int outputWon1000_CNY = outputDongJeon_CNY - output1000_CNY * 1000; 
	
	int output500_CNY = outputWon1000_CNY / 500;
	int outputWon500_CNY = outputWon1000_CNY - output500_CNY * 500;
	
	int output100_CNY = outputWon500_CNY / 100;
	int outputWon100_CNY = outputWon500_CNY - output100_CNY * 100;
	
	int output50_CNY = outputWon100_CNY / 50;
	int outputWon50_CNY = outputWon100_CNY - output50_CNY * 50;
	
	int output10_CNY = outputWon50_CNY / 10;
	int outputWon10_CNY = outputWon50_CNY - output10_CNY * 10;
	
	printf("%d원-> %10f.2위안\n", inputWon, outputCNY);
	printf("%d원-> %10f.2위안\n", inputWon, outputCNY2);
	printf("%d원-> %10f.2위안\n", inputWon, outputCent3);
	printf("%d원-> %10f.2원\n", inputWon, outputDongJeon_CNY);
	printf("1000원 %d개, 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개\n", output1000_CNY, output500_CNY, output100_CNY, output50_CNY, output10_CNY);
	printf("********************************************\n");
	
	// 유로 
	const float RATE_EUR = 1342.53;
	float outputEUR = 0;
	float outputEUR2 = 0;
	
	outputEUR = inputWon / RATE_EUR;
	outputEUR2 = (int)outputEUR;
	outputCent4 = outputEUR - (int)outputEUR;
	outputDongJeon_EUR = int(outputCent4 * 1342.53);
	
	int output1000_EUR = outputDongJeon_EUR / 1000;
	int outputWon1000_EUR = outputDongJeon_EUR - output1000_EUR * 1000; 
	
	int output500_EUR = outputWon1000_EUR / 500;
	int outputWon500_EUR = outputWon1000_EUR - output500_EUR * 500;
	
	int output100_EUR = outputWon500_EUR / 100;
	int outputWon100_EUR = outputWon500_EUR - output100_EUR * 100;
	
	int output50_EUR = outputWon100_EUR / 50;
	int outputWon50_EUR = outputWon100_EUR - output50_EUR * 50;
	
	int output10_EUR = outputWon50_EUR / 10;
	int outputWon10_EUR = outputWon50_EUR - output10_EUR * 10;
	
	printf("%d원-> %10f.2유로\n", inputWon, outputEUR);
	printf("%d원-> %10f.2유로\n", inputWon, outputEUR2);
	printf("%d원-> %10f.2유로\n", inputWon, outputCent4);
	printf("%d원-> %10f.2원\n", inputWon, outputDongJeon_EUR);
	printf("1000원 %d개, 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개\n", output1000_EUR, output500_EUR, output100_EUR, output50_EUR, output10_EUR);
	printf("********************************************\n");
	
	// 파운드
	const float RATE_GBP = 1605.22;
	float outputGBP = 0;
	float outputGBP2 = 0;
	
	outputGBP = inputWon / RATE_GBP;
	outputGBP2 = (int)outputGBP;
	outputCent5 = outputGBP - (int)outputGBP;
	outputDongJeon_GBP = int(outputCent5 * 1605.22);
	
	int output1000_GBP = outputDongJeon_GBP / 1000;
	int outputWon1000_GBP = outputDongJeon_GBP - output1000_GBP * 1000; 
	
	int output500_GBP = outputWon1000_GBP / 500;
	int outputWon500_GBP = outputWon1000_GBP - output500_GBP * 500;
	
	int output100_GBP = outputWon500_GBP / 100;
	int outputWon100_GBP = outputWon500_GBP - output100_GBP * 100;
	
	int output50_GBP = outputWon100_GBP / 50;
	int outputWon50_GBP = outputWon100_GBP - output50_GBP * 50;
	
	int output10_GBP = outputWon50_GBP / 10;
	int outputWon10_GBP = outputWon50_GBP - output10_GBP * 10;
	
	printf("%d원-> %10f.2파운드\n", inputWon, outputGBP);
	printf("%d원-> %10f.2파운드\n", inputWon, outputGBP2);
	printf("%d원-> %10f.2파운드\n", inputWon, outputCent5);
	printf("%d원-> %10f.2원\n", inputWon, outputDongJeon_GBP);
	printf("1000원 %d개, 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개\n", output1000_GBP, output500_GBP, output100_GBP, output50_GBP, output10_GBP);
	printf("********************************************\n");
	 
	return 0;
}







