#include <stdio.h>

int main() {
	// Constants use an underbar between words and Upper Case
	const float RATE_USD = 1233.10;    
	const float RATE_JPY = 9.87;
	const float RATE_CNY = 193.20;
	const float RATE_EUR = 1342.53;
	const float RATE_GBP = 1605.22;
	
	int inputWon;
	printf("Please enter the amount you want to exchange : ");
	scanf("%d", &inputWon);
	
	int menuNumber;
	do{
		printf("Please Select a foriegn currency to exchange (1:USD, 2:JPY, 3:CNY, 4:EUR, 5:GBP)");
		scanf("%d", &menuNumber);
	} while(menuNumber < 1 || menuNumber > 5);
	
	int CoinExchange;
	int nOf1000;
	int nOf500;
	int nOf100;
	int nOf50;
	int nOf10;
	int nOf1;
	
	// Dollar
	if (menuNumber == 1) {
		float outputDollar = inputWon / RATE_USD;
		CoinExchange = (int)((outputDollar - (int)outputDollar) * RATE_USD);
		printf("%d Won -> %d Dollar, Change %d Won\n", inputWon, (int)outputDollar, CoinExchange);
	}
	
	// JPY
	if (menuNumber == 2) {
		float outputJPY = inputWon / RATE_JPY;
		CoinExchange = (int)((outputJPY - (int)outputJPY) * RATE_JPY);
		printf("%d Won -> %d JPY, Change %d Won\n", inputWon, (int)outputJPY, CoinExchange);
	}
	
	// CNY
	if (menuNumber == 3) {
		float outputCNY = inputWon / RATE_CNY;
		CoinExchange = (int)((outputCNY - (int)outputCNY) * RATE_CNY);
		printf("%d Won -> %d CNY, Change %d Won\n", inputWon, (int)outputCNY, CoinExchange);
	}
	
	// EUR
	if (menuNumber == 4) {
		float outputEUR = inputWon / RATE_EUR;
		CoinExchange = (int)((outputEUR - (int)outputEUR) * RATE_EUR);
		printf("%d Won -> %d EUR, Change %d Won\n", inputWon, (int)outputEUR, CoinExchange);
	}
	
	// GBP
	if (menuNumber == 5) {
		float outputGBP = inputWon / RATE_GBP;
		CoinExchange = (int)((outputGBP - (int)outputGBP) * RATE_GBP);
		printf("%d Won -> %d GBP, Change %d Won\n", inputWon, (int)outputGBP, CoinExchange);
	}
	
	nOf1000 = CoinExchange / 1000;
	nOf500 = (CoinExchange % 1000) / 500;
	nOf100 = (CoinExchange % 500) / 100;
	nOf50 = (CoinExchange % 100) / 50;
	nOf10 = (CoinExchange % 50) / 10;
	nOf1 = (CoinExchange % 10) / 1;
	printf("1000 Won : %d Paper\n500 Won : %d Count\n100 Won: %d Count\n50 Won: %d Count\n10 Won: %d Count\n1 Won : %d Count\n",
	nOf1000, nOf500, nOf100, nOf50, nOf10, nOf1);
	return 0;
}
