
#include <stdio.h>

int main() {
		// Constants use an underbar between words and Upper Case
		const float RATE_USD = 1233.1;  // won Dollar Exchange
		const float RATE_JPY = 9.8716;
		const float RATE_CNY = 193.2;
		const float RATE_EUR = 1342.53;
		const float RATE_GBP = 1605.22;

		// Variable Reset
		// USD
		float outputWon = 0;
		float outputDollar = 0;
		float outputDollar_Bill = 0;
		float outputDollar_Coin = 0;
		float outputDollar_Coin_Cal = 0;
		
		// JPY
		float outputJPY = 0;
		float outputJPY_Bill = 0;
		float outputJPY_Coin = 0;
		float outputJPY_Coin_Cal = 0;
		
		// CNY
		float outputCNY = 0;
		float outputCNY_Bill = 0;
		float outputCNY_Coin = 0;
		float outputCNY_Coin_Cal = 0;
		
		// EUR
		float outputEUR = 0;
		float outputEUR_Bill = 0;
		float outputEUR_Coin = 0;
		float outputEUR_Coin_Cal = 0;
		
		// GBP
		float outputGBP = 0;
		float outputGBP_Bill = 0;
		float outputGBP_Coin = 0;
		float outputGBP_Coin_Cal = 0;
		
		printf("Please enter the amount you want to Exchange : ");
		int inputWon = 0;
		scanf("%d", &inputWon);
		// scanf usage: scanf("Conversion Character", &Variable Name);
		// ex) To enter an integer in an int type variable a
		//     scanf("%d", &a);
		
		int menuNumber = 0;
		
		do {
			printf("Please select a foreign currency to exchange (1: USD, 2. JPY, 3. EUR, 4. CNY, 5. GBP): ");
			scanf("%d", &menuNumber);
		}while(menuNumber < 1|| menuNumber > 5);  
		
		printf("\n");
		
		if (menuNumber == 1)
		{
		
		// Dollar Calculation
			outputDollar = inputWon / RATE_USD;  // Exchange rate
			outputDollar_Bill = (int)outputDollar;
			outputDollar_Coin = outputDollar - (int)outputDollar;
			outputDollar_Coin_Cal = int(outputDollar_Coin * 1233.1);   // A unit of coin multiplied by the exchange rate
			
			// For Change  (Divide to count individually)
			int output1000_USD = outputDollar_Coin_Cal / 1000;
			int outputWon1000_USD = outputDollar_Coin_Cal - output1000_USD * 1000;
			
			int output500_USD = outputWon1000_USD / 500;
			int outputWon500_USD = outputWon1000_USD - output500_USD * 500;
			
			int output100_USD = outputWon500_USD / 100;
			int outputWon100_USD = outputWon500_USD - output100_USD * 100;
			
			int output50_USD = outputWon100_USD / 50;
			int outputWon50_USD = outputWon100_USD - output50_USD * 50;
			
			int output10_USD = outputWon50_USD / 10;
			int outputWon10_USD = outputWon50_USD - output10_USD * 10;
			
			printf("%d Won -> %5.2f Dollar\n", inputWon, outputDollar);
			printf("%5.2f Dollar_Bill\n", outputDollar_Bill);
			printf("%5.2f Dollar_Coin\n", outputDollar_Coin);
			printf("%5.2f Won\n", outputDollar_Coin_Cal);
			printf("1000Won %dNumber, 500Won %dNumber, 100Won %dNumber, 50Won %dNumber, 10Won %dNumber\n", output1000_USD, output500_USD, output100_USD, output50_USD, output10_USD);
			printf("\n");
			printf("********************<Dollar>****************************\n");
		}
		
		if (menuNumber == 2)
		{
		
			// JPY Calculation
			outputJPY = inputWon / RATE_JPY;  // Exchange rate
			outputJPY_Bill = (int)outputJPY;
			outputJPY_Coin = outputJPY - (int)outputJPY;
			outputJPY_Coin_Cal = int(outputJPY_Coin * 1233.1);   // A unit of coin multiplied by the exchange rate
			
			// For Change  (Divide to count individually)
			int output1000_JPY = outputJPY_Coin_Cal / 1000;
			int outputWon1000_JPY = outputJPY_Coin_Cal - output1000_JPY * 1000;
			
			int output500_JPY = outputWon1000_JPY / 500;
			int outputWon500_JPY = outputWon1000_JPY - output500_JPY * 500;
			
			int output100_JPY = outputWon500_JPY / 100;
			int outputWon100_JPY = outputWon500_JPY - output100_JPY * 100;
			
			int output50_JPY = outputWon100_JPY / 50;
			int outputWon50_JPY = outputWon100_JPY - output50_JPY * 50;
			
			int output10_JPY = outputWon50_JPY / 10;
			int outputWon10_JPY = outputWon50_JPY - output10_JPY * 10;
			
			
			printf("%d Won -> %5.2f JPY\n", inputWon, outputJPY);
			printf("%5.2f JPY_Bill\n", outputJPY_Bill);
			printf("%7.2f JPY_Coin\n", outputJPY_Coin);
			printf("%5.2f Won\n", outputJPY_Coin_Cal);
			printf("1000Won %dNumber, 500Won %dNumber, 100Won %dNumber, 50Won %dNumber, 10Won %dNumber\n", output1000_JPY, output500_JPY, output100_JPY, output50_JPY, output10_JPY);
			printf("\n");
			printf("********************<JPY>****************************\n");
		}
		
		if (menuNumber == 3) 
		{
			// CNY Calculation
			outputCNY = inputWon / RATE_CNY;  // Exchange rate
			outputCNY_Bill = (int)outputCNY;
			outputCNY_Coin = outputCNY - (int)outputCNY;
			outputCNY_Coin_Cal = int(outputCNY_Coin * 1233.1);   // A unit of coin multiplied by the exchange rate
			
			// For Change  (Divide to count individually)
			int output1000_CNY = outputCNY_Coin_Cal / 1000;
			int outputWon1000_CNY = outputCNY_Coin_Cal - output1000_CNY * 1000;
			
			int output500_CNY = outputWon1000_CNY / 500;
			int outputWon500_CNY = outputWon1000_CNY - output500_CNY * 500;
			
			int output100_CNY = outputWon500_CNY / 100;
			int outputWon100_CNY = outputWon500_CNY - output100_CNY * 100;
			
			int output50_CNY = outputWon100_CNY / 50;
			int outputWon50_CNY = outputWon100_CNY - output50_CNY * 50;
			
			int output10_CNY = outputWon50_CNY / 10;
			int outputWon10_CNY = outputWon50_CNY - output10_CNY * 10;
			
			printf("%d Won -> %5.2f CNY\n", inputWon, outputCNY);
			printf("%5.2f CNY_Bill\n", outputCNY_Bill);
			printf("%7.2f CNY_Coin\n", outputCNY_Coin);
			printf("%5.2f Won\n", outputCNY_Coin_Cal);
			printf("1000Won %dNumber, 500Won %dNumber, 100Won %dNumber, 50Won %dNumber, 10Won %dNumber\n", output1000_CNY, output500_CNY, output100_CNY, output50_CNY, output10_CNY);
			printf("\n");
			printf("********************<CNY>****************************\n");
		}
		
		if (menuNumber == 4) 
		{
			// EUR Calculation
			outputEUR = inputWon / RATE_EUR;  // Exchange rate
			outputEUR_Bill = (int)outputEUR;
			outputEUR_Coin = outputEUR - (int)outputEUR;
			outputEUR_Coin_Cal = int(outputEUR_Coin * 1233.1);   // A unit of coin multiplied by the exchange rate
			
			// For Change  (Divide to count individually)
			int output1000_EUR = outputEUR_Coin_Cal / 1000;
			int outputWon1000_EUR = outputEUR_Coin_Cal - output1000_EUR * 1000;
			
			int output500_EUR = outputWon1000_EUR / 500;
			int outputWon500_EUR = outputWon1000_EUR - output500_EUR * 500;
			
			int output100_EUR = outputWon500_EUR / 100;
			int outputWon100_EUR = outputWon500_EUR - output100_EUR * 100;
			
			int output50_EUR = outputWon100_EUR / 50;
			int outputWon50_EUR = outputWon100_EUR - output50_EUR * 50;
			
			int output10_EUR = outputWon50_EUR / 10;
			int outputWon10_EUR = outputWon50_EUR - output10_EUR * 10;
			
			printf("%d Won -> %5.2f EUR\n", inputWon, outputEUR);
			printf("%5.2f EUR_Bill\n", outputEUR_Bill);
			printf("%7.2f EUR_Coin\n", outputEUR_Coin);
			printf("%5.2f Won\n", outputEUR_Coin_Cal);
			printf("1000Won %dNumber, 500Won %dNumber, 100Won %dNumber, 50Won %dNumber, 10Won %dNumber\n", output1000_EUR, output500_EUR, output100_EUR, output50_EUR, output10_EUR);
			printf("\n");
			printf("********************<EUR>****************************\n");
		}
		
		
		if (menuNumber == 5)
		{
			// GBP Calculation
			outputGBP = inputWon / RATE_GBP;  // Exchange rate
			outputGBP_Bill = (int)outputGBP;
			outputGBP_Coin = outputGBP - (int)outputGBP;
			outputGBP_Coin_Cal = int(outputGBP_Coin * 1233.1);   // A unit of coin multiplied by the exchange rate
			
			// For Change  (Divide to count individually)
			int output1000_GBP = outputGBP_Coin_Cal / 1000;
			int outputWon1000_GBP = outputGBP_Coin_Cal - output1000_GBP * 1000;
			
			int output500_GBP = outputWon1000_GBP / 500;
			int outputWon500_GBP = outputWon1000_GBP - output500_GBP * 500;
			
			int output100_GBP = outputWon500_GBP / 100;
			int outputWon100_GBP = outputWon500_GBP - output100_GBP * 100;
			
			int output50_GBP = outputWon100_GBP / 50;
			int outputWon50_GBP = outputWon100_GBP - output50_GBP * 50;
			
			int output10_GBP = outputWon50_GBP / 10;
			int outputWon10_GBP = outputWon50_GBP - output10_GBP * 10;
			
			printf("%d Won -> %5.2f GBP\n", inputWon, outputGBP);
			printf("%5.2f GBP_Bill\n", outputGBP_Bill);
			printf("%7.2f GBP_Coin\n", outputGBP_Coin);
			printf("%5.2f Won\n", outputGBP_Coin_Cal);
			printf("1000Won %dNumber, 500Won %dNumber, 100Won %dNumber, 50Won %dNumber, 10Won %dNumber\n", output1000_GBP, output500_GBP, output100_GBP, output50_GBP, output10_GBP);
			printf("\n");
			printf("********************<GBP>****************************\n");
		}
		

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		  
		
}
