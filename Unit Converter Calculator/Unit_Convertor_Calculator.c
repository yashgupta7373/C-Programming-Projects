// Unit Convertor Calculator...
#include <stdio.h>
// Area Convertor Function...
void Area()
{
	int choiceUnit;
	float value, result;
	char c = 253;

	printf("1. Acres(ac) \t\t\tTo\t Ares(a) \n2. Acres(ac) \t\t\tTo\t Hectares(ha) \n3. Acres(ac) \t\t\tTo\t Square centimeters(cm%c) \n4. Acres(ac) \t\t\tTo\t Square feet(ft%c) \n5. Acres(ac) \t\t\tTo\t Square inches(in%c) \n6. Acres(ac) \t\t\tTo\t Square metres(m%c) \n", c, c, c, c);
	printf("7. Ares(a) \t\t\tTo\t Acres(ac) \n8. Ares(a) \t\t\tTo\t Hectares(ha) \n9. Ares(a) \t\t\tTo\t Square centimeters(cm%c) \n10. Ares(a) \t\t\tTo\t Square feet(ft%c) \n11. Ares(a) \t\t\tTo\t Square inches(in%c) \n12. Ares(a) \t\t\tTo\t Square metres(m%c) \n", c, c, c, c);
	printf("13. Hectares(ha) \t\tTo\t Acres(ac) \n14. Hectares(ha) \t\tTo\t  Ares(a) \n15. Hectares(ha) \t\tTo\t Square centimeters(cm%c) \n16. Hectares(ha) \t\tTo\t Square feet(ft%c) \n17. Hectares(ha) \t\tTo\t Square inches(in%c) \n18. Hectares(ha) \t\tTo\t Square metres(m%c) \n", c, c, c, c);
	printf("19. Square centimeters(cm%c) \tTo\t Acres(ac) \n20. Square centimeters(cm%c) \tTo\t Ares(a) \n21. Square centimeters(cm%c) \tTo\t Hectares(ha) \n22. Square centimeters(cm%c) \tTo\t Square feet(ft%c) \n23. Square centimeters(cm%c) \tTo\t Square inches(in%c) \n24. Square centimeters(cm%c) \tTo\t Square metres(m%c) \n", c, c, c, c, c, c, c, c, c);
	printf("25. Square feet(ft%c) \t\tTo\t Acres(ac) \n26. Square feet(ft%c) \t\tTo\t Ares(a) \n27. Square feet(ft%c) \t\tTo\t Hectares(ha) \n28. Square feet(ft%c) \t\tTo\t Square centimeters(cm%c) \n29. Square feet(ft%c) \t\tTo\t Square inches(in%c) \n30. Square feet(ft%c) \t\tTo\t Square metres(m%c) \n", c, c, c, c, c, c, c, c, c);
	printf("31. Square inches(in%c) \t\tTo\t Acres(ac) \n32. Square inches(in%c) \t\tTo\t Ares(a) \n32. Square inches(in%c) \t\tTo\t Hectares(ha) \n34. Square inches(in%c) \t\tTo\t Square centimeters(cm%c) \n35. Square inches(in%c) \t\tTo\t Square feet(ft%c) \n36. Square inches(in%c) \t\tTo\t Square metres(m%c) \n", c, c, c, c, c, c, c, c, c);
	printf("37. Square metres(m%c) \t\tTo\t Square metres(m%c) \n38. Square metres(m%c) \t\tTo\t Ares(a) \n39. Square metres(m%c) \t\tTo\t Hectares(ha) \n40. Square metres(m%c) \t\tTo\t Square centimeters(cm%c) \n41. Square metres(m%c) \t\tTo\t Square feet(ft%c) \n42. Square metres(m%c) \t\tTo\t Square inches(in%c) \n", c, c, c, c, c, c, c, c, c, c);

	printf("Enter Your Choice(1-42): ");
	scanf("%d", &choiceUnit);

	switch (choiceUnit)
	{
		// Acres(ac)...
	case 1:
		printf("You Chose \"Acres(ac) To Ares(a)\"...\n");
		printf("*************************************************");
		printf("\nEnter Area in Acres(ac): ");
		scanf("%f", &value);
		result = (value * 40.469);
		printf("The Area in Ares(a) is %.4fa \n", result);
		printf("*************************************************");
		break;
	case 2:
		printf("You Chose \"Acres(ac) To Hectares(ha)\"...\n");
		printf("*************************************************");
		printf("\nEnter Area in Acres(ac): ");
		scanf("%f", &value);
		result = (value * 2.47105381);
		printf("The Area in Hectares(ha) is %.4fha \n", result);
		printf("*************************************************");
		break;
	case 3:
		printf("You Chose \"Acres(ac) To Square centimeters(cm%c)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Acres(ac): ");
		scanf("%f", &value);
		result = (value * 40469000);
		printf("The Area in Square centimeters(cm%c) is %.4fcm%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 4:
		printf("You Chose \"Acres(ac) To Square feet(ft%c)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Acres(ac): ");
		scanf("%f", &value);
		result = (value * 43560);
		printf("The Area in Square feet(ft%c) is %.4fft%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 5:
		printf("You Chose \"Acres(ac) To Square inches(in%c)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Acres(ac): ");
		scanf("%f", &value);
		result = (value * 6272640);
		printf("The Area in Square inches(in%c) is %.4fin%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 6:
		printf("You Chose \"Acres(ac) To Square metres(m%c)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Acres(ac): ");
		scanf("%f", &value);
		result = (value * 4046.85642);
		printf("The Area in Square metres(m%c) is %.4fm%c \n", c, result, c);
		printf("*************************************************");
		break;
		// Ares(a)
	case 7:
		printf("You Chose \"Ares(a) To Acres(ac)\"...\n");
		printf("*************************************************");
		printf("\nEnter Area in Ares(a): ");
		scanf("%f", &value);
		result = (value / 40.4685642);
		printf("The Area in Acres(ac) is %.4fac \n", result);
		printf("*************************************************");
		break;
	case 8:
		printf("You Chose \"Ares(a) To Hectares(ha)\"...\n");
		printf("*************************************************");
		printf("\nEnter Area in Ares(a): ");
		scanf("%f", &value);
		result = (value / 100);
		printf("The Area in Hectares(ha) is %.4fha \n", result);
		printf("*************************************************");
		break;
	case 9:
		printf("You Chose \"Ares(a) To Square centimeters(cm%c)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Ares(a): ");
		scanf("%f", &value);
		result = (value * 1000000);
		printf("The Area in Square centimeters(cm%c) is %.4fcm%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 10:
		printf("You Chose \"Ares(a) To Square feet(ft%c)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Ares(a): ");
		scanf("%f", &value);
		result = (value * 1076.39104);
		printf("The Area in Square feet(ft%c) is %.4fft%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 11:
		printf("You Chose \"Ares(a) To Square inches(in%c)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Ares(a): ");
		scanf("%f", &value);
		result = (value * 155000.31);
		printf("The Area in Square inches(in%c) is %.4fin%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 12:
		printf("You Chose \"Ares(a) To Square metres(m%c)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Ares(a): ");
		scanf("%f", &value);
		result = (value * 100);
		printf("The Area in Square metres(m%c) is %.4fm%c \n", c, result, c);
		printf("*************************************************");
		break;
		// Hectares(ha)
	case 13:
		printf("You Chose \"Hectares(ha) To Acres(ac)\"...\n");
		printf("*************************************************");
		printf("\nEnter Area in Hectares(ha): ");
		scanf("%f", &value);
		result = (value * 2.47105381);
		printf("The Area in Acres(ac) is %.4fac \n", result);
		printf("*************************************************");
		break;
	case 14:
		printf("You Chose \"Hectares(ha) To Ares(a)\"...\n");
		printf("*************************************************");
		printf("\nEnter Area in Hectares(ha): ");
		scanf("%f", &value);
		result = (value * 100);
		printf("The Area in Ares(a) is %.4fa \n", result);
		printf("*************************************************");
		break;
	case 15:
		printf("You Chose \"Hectares(ha) To Square centimeters(cm%c)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Hectares(ha): ");
		scanf("%f", &value);
		result = (value * 100000000);
		printf("The Area in Square centimeters(cm%c) is %.4fcm%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 16:
		printf("You Chose \"Hectares(ha) To Square feet(ft%c)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Hectares(ha): ");
		scanf("%f", &value);
		result = (value * 107639.104);
		printf("The Area in Square feet(ft%c) is %.4fft%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 17:
		printf("You Chose \"Hectares(ha) To Square inches(in%c)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Hectares(ha): ");
		scanf("%f", &value);
		result = (value * 15500000);
		printf("The Area in Square inches(in%c) is %.4fin%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 18:
		printf("You Chose \"Hectares(ha) To Square metres(m%c)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Hectares(ha): ");
		scanf("%f", &value);
		result = (value * 10000);
		printf("The Area in Square metres(m%c) is %.4fm%c \n", c, result, c);
		printf("*************************************************");
		break;
		// Square centimeters(cm)//...
	case 19:
		printf("You Chose \"Square centimeters(cm%c) To Acres(ac)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Square centimeters(cm%c): ", c);
		scanf("%f", &value);
		result = (value / 40469000);
		printf("The Area in Acres(ac) is %.4fac \n", result);
		printf("*************************************************");
		break;
	case 20:
		printf("You Chose \"Square centimeters(cm%c) To Ares(a)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Square centimeters(cm%c): ", c);
		scanf("%f", &value);
		result = (value / 1000000);
		printf("The Area in Ares(a) is %.4fa \n", result);
		printf("*************************************************");
		break;
	case 21:
		printf("You Chose \"Square centimeters(cm%c) To Hectares(ha)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Square centimeters(cm%c): ", c);
		scanf("%f", &value);
		result = (value / 100000000);
		printf("The Area in Hectares(ha) is %.4fha \n", result);
		printf("*************************************************");
		break;
	case 22:
		printf("You Chose \"Square centimeters(cm%c) To Square feet(ft%c)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Square centimeters(cm%c): ", c);
		scanf("%f", &value);
		result = (value / 929.0304);
		printf("The Area in Square feet(ft%c) is %.4fft%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 23:
		printf("You Chose \"Square centimeters(cm%c) To Square inches(in%c)\"...\n", c, c);
		printf("*************************************************");
		printf("\nEnter Area in Square centimeters(cm%c): ", c);
		scanf("%f", &value);
		result = (value / 6.4516);
		printf("The Area in Square inches(in%c) is %.4fin%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 24:
		printf("You Chose \"Square centimeters(cm%c) To Square metres(m%c)\"...\n", c, c);
		printf("*************************************************");
		printf("\nEnter Area in Square centimeters(cm%c): ", c);
		scanf("%f", &value);
		result = (value / 10000);
		printf("The Area in Square metres(m%c) is %.4fm%c \n", c, result, c);
		printf("*************************************************");
		break;
		// Square feet(ft)
	case 25:
		printf("You Chose \"Square feet(ft%c) To Acres(ac)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Square feet(ft%c): ", c);
		scanf("%f", &value);
		result = (value / 43560);
		printf("The Area in Acres(ac) is %.4fac \n", result);
		printf("*************************************************");
		break;
	case 26:
		printf("You Chose \"Square feet(ft%c) To Ares(a)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Square feet(ft%c): ", c);
		scanf("%f", &value);
		result = (value / 1076.39104);
		printf("The Area in Ares(a) is %.4fa \n", result);
		printf("*************************************************");
		break;
	case 27:
		printf("You Chose \"Square feet(ft%c) To Hectares(ha)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Square feet(ft%c): ", c);
		scanf("%f", &value);
		result = (value / 107639.104);
		printf("The Area in Hectares(ha) is %.4fha \n", result);
		printf("*************************************************");
		break;
	case 28:
		printf("You Chose \"Square feet(ft%c) To Square centimeters(cm%c)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Square feet(ft%c): ", c);
		scanf("%f", &value);
		result = (value * 929.0304);
		printf("The Area in Square centimeters(cm%c) is %.4fcm%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 29:
		printf("You Chose \"Square feet(ft%c) To Square inches(in%c)\"...\n", c, c);
		printf("*************************************************");
		printf("\nEnter Area in Square feet(ft%c): ", c);
		scanf("%f", &value);
		result = (value * 144);
		printf("The Area in Square inches(in%c) is %.4fin%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 30:
		printf("You Chose \"Square feet(ft%c) To Square metres(m%c)\"...\n", c, c);
		printf("*************************************************");
		printf("\nEnter Area in Square feet(ft%c): ", c);
		scanf("%f", &value);
		result = (value * 92903.04);
		printf("The Area in Square metres(m%c) is %.4fm%c \n", c, result, c);
		printf("*************************************************");
		break;
	// Square inches(in)
	case 31:
		printf("You Chose \"Square inches(in%c) To Acres(ac)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Square inches(in%c): ", c);
		scanf("%f", &value);
		result = (value / 6272600);
		printf("The Area in Acres(ac) is %.4fac \n", result);
		printf("*************************************************");
		break;
	case 32:
		printf("You Chose \"Square inches(in%c) To Ares(a)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Square inches(in%c): ", c);
		scanf("%f", &value);
		result = (value / 155000.31);
		printf("The Area in Ares(a) is %.4fa \n", result);
		printf("*************************************************");
		break;
	case 33:
		printf("You Chose \"Square inches(in%c) To Hectares(ha)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Square inches(in%c): ", c);
		scanf("%f", &value);
		result = (value / 15500000);
		printf("The Area in Hectares(ha) is %.4fha \n", result);
		printf("*************************************************");
		break;
	case 34:
		printf("You Chose \"Square inches(in%c) To Square centimeters(cm%c)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Square inches(in%c): ", c);
		scanf("%f", &value);
		result = (value * 6.4516);
		printf("The Area in Square centimeters(cm%c) is %.4fcm%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 35:
		printf("You Chose \"Square inches(in%c) To Square feet(ft%c)\"...\n", c, c);
		printf("*************************************************");
		printf("\nEnter Area in Square inches(in%c): ", c);
		scanf("%f", &value);
		result = (value * 144);
		printf("The Area in Square feet(ft%c) is %.4fft%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 36:
		printf("You Chose \"Square inches(in%c) To Square metres(m%c)\"...\n", c, c);
		printf("*************************************************");
		printf("\nEnter Area in Square inches(in%c): ", c);
		scanf("%f", &value);
		result = (value / 1550.0031);
		printf("The Area in Square metres(m%c) is %.4fm%c \n", c, result, c);
		printf("*************************************************");
		break;
	// Square metres(m)
	case 37:
		printf("You Chose \"Square metres(m%c) To Acres(ac)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Square metres(m%c): ", c);
		scanf("%f", &value);
		result = (value / 4046.85642);
		printf("The Area in Acres(ac) is %.4fac \n", result);
		printf("*************************************************");
		break;
	case 38:
		printf("You Chose \"Square metres(m%c) To Ares(a)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Square metres(m%c): ", c);
		scanf("%f", &value);
		result = (value / 100);
		printf("The Area in Ares(a) is %.4fa \n", result);
		printf("*************************************************");
		break;
	case 39:
		printf("You Chose \"Square metres(m%c) To Hectares(ha)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Square metres(m%c): ", c);
		scanf("%f", &value);
		result = (value / 10000);
		printf("The Area in Hectares(ha) is %.4fha \n", result);
		printf("*************************************************");
		break;
	case 40:
		printf("You Chose \"Square metres(m%c) To Square centimeters(cm%c)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Area in Square metres(m%c): ", c);
		scanf("%f", &value);
		result = (value * 10000);
		printf("The Area in Square centimeters(cm%c) is %.4fcm%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 41:
		printf("You Chose \"Square metres(m%c) To Square feet(ft%c)\"...\n", c, c);
		printf("*************************************************");
		printf("\nEnter Area in Square metres(m%c): ", c);
		scanf("%f", &value);
		result = (value * 10.7639104);
		printf("The Area in Square feet(ft%c) is %.4fft%c \n", c, result, c);
		printf("*************************************************");
		break;
	case 42:
		printf("You Chose \"Square metres(m%c) To Square inches(in%c)\"...\n", c, c);
		printf("*************************************************");
		printf("\nEnter Area in Square metres(m%c): ", c);
		scanf("%f", &value);
		result = (value * 1550.0031);
		printf("The Area in Square inches(in%c) is %.4fin%c \n", c, result, c);
		printf("*************************************************");
		break;
	default:
		printf("Please chose right option......");
		break;
	}
}

// Length Convertor Function...
void Length() { printf("!!! SORRY !!!\n Currently Length Convertor not available\nPlease Try After Some Time*\n Please choose from Area, Temperature and Time...."); }

// Temperature convertor Fuction...
void Temperature()
{
	int choiceUnit;
	float value, result;
	char c = 248;

	printf("\n1. Celsius(%cC) \t\tTo\t Fahrenheit(%cF) \n2. Celsius(%cC) \t\tTo\t Kelvin(K) \n3. Fahrenheit(%cF) \tTo\t Celsius(%cC) \n4. Fahrenheit(%cF) \tTo\t Kelvin(K) \n5. Kelvin(K) \t\tTo\t Celsius(%cC) \n6. Kelvin(K) \t\tTo\t Fahrenheit(%cF) \n", c, c, c, c, c, c, c, c);
	printf("Enter Your Choice(1-6): ");
	scanf("%d", &choiceUnit);

	switch (choiceUnit)
	{
	case 1:
		printf("You Chose \"Celsius(%cC) To Fahrenheit(%cF)\"...\n", c, c);
		printf("*************************************************");
		printf("\nEnter Temperature in Celsius(%cC): ", c);
		scanf("%f", &value);
		result = (value * 9 / 5) + 32;
		printf("The Temperature in Fahrenheit(%cF) is %.1f%cF\n", c, result, c);
		printf("*************************************************");
		break;
	case 2:
		printf("You Chose \"Celsius(%cC) To Kelvin(K)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Temperature in Celsius(%cC): ", c);
		scanf("%f", &value);
		result = (value + 273.15);
		printf("The Temperature in Kelvin(K) is %.2fK\n", result);
		printf("*************************************************");
		break;
	case 3:
		printf("You Chose \"Fahrenheit(%cF) To Celsius(%cC)\"...\n", c, c);
		printf("*************************************************");
		printf("\nEnter Temperature in Fahrenheit(%cF): ", c);
		scanf("%f", &value);
		result = (value - 32) * 5 / 9;
		printf("The Temperature in Celsius(%cC) is %.4f%cC\n", c, result, c);
		printf("*************************************************");
		break;
	case 4:
		printf("You Chose \"Fahrenheit(%cF) To Kelvin(K)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Temperature in Fahrenheit(%cF): ", c);
		scanf("%f", &value);
		result = (value - 32) * 5 / 9 + 273.15;
		printf("The Temperature in Kelvin(K) is %.4fK\n", result);
		printf("*************************************************");
		break;
	case 5:
		printf("You Chose \"Kelvin(K) To Celsius(%cC)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Temperature in Kelvin(K): ");
		scanf("%f", &value);
		result = (value - 273.15);
		printf("The Temperature in Celsius(%cC) is %.2f%cC\n", c, result, c);
		printf("*************************************************");
		break;
	case 6:
		printf("You Chose \"Kelvin(K) To Fahrenheit(%cF)\"...\n", c);
		printf("*************************************************");
		printf("\nEnter Temperature in Kelvin(K): ");
		scanf("%f", &value);
		result = (value - 273.15) * 9 / 5 + 32;
		printf("The Temperature in Fahrenheit(%cF) is %.2f%cF\n", c, result, c);
		printf("*************************************************");
		break;
	default:
		printf("Please chose right option......");
		break;
	}
}

// Volume Convertor Function...
void Volume() { printf("!!! SORRY !!!\n Currently Volume Convertor not available\nPlease Try After Some Time*\n Please choose from Area, Temperature and Time...."); }

// Mass Convertor Function...
void Mass() { printf("!!! SORRY !!!\n Currently Mass Convertor not available\nPlease Try After Some Time*\n Please choose from Area, Temperature and Time...."); }

// Data Convertor Function...
void Data() { printf("!!! SORRY !!!\n Currently Data Convertor not available\nPlease Try After Some Time*\n Please choose from Area, Temperature and Time...."); }

// Speed Convertor Function...
void Speed() { printf("!!! SORRY !!!\n Currently Speed Convertor not available\nPlease Try After Some Time*\n Please choose from Area, Temperature and Time...."); }

// Time Convertor Function...
void Time()
{
	int choiceUnit;
	float value, result;

	printf("1. Milliseconds(ms) \tTo\t Second(s) \n2. Milliseconds(ms) \tTo\t Minutes(min) \n3. Milliseconds(ms) \tTo\t Hours(h) \n4. Milliseconds(ms) \tTo\t Days(d) \n5. Milliseconds(ms) \tTo\t Weeks(wk) \n");
	printf("6. Second(s) \t\tTo\t Milliseconds(ms) \n7. Second(s) \t\tTo\t Minutes(min) \n8. Second(s) \t\tTo\t Square Hours(h) \n9. Second(s) \t\tTo\t Days(d) \n10. Second(s) \t\tTo\t Weeks(wk) \n");
	printf("11. Minutes(min) \tTo\t Milliseconds(ms) \n12. Minutes(min) \tTo\t  Seconds(s) \n13. Minutes(min) \tTo\t Hours(h) \n14. Minutes(min) \tTo\t Days(d) \n15. Minutes(min) \tTo\t Weeks(wk) \n");
	printf("16. Hours(h) \t\tTo\t Milliseconds(ms) \n17. Hours(h) \t\tTo\t Seconds(s) \n18. Hours(h) \t\tTo\t Minutes(m) \n19. Hours(h) \t\tTo\t Days(d) \n20. Hours(h) \t\tTo\t Weeks(wk) \n");
	printf("21. Days(d) \t\tTo\t Milliseconds(ms) \n22. Days(d) \t\tTo\t Seconds(s) \n23. Days(d) \t\tTo\t Minutes(m) \n24. Days(d) \t\tTo\t Hours(h) \n25. Days(d) \t\tTo\t Weeks(wk) \n");
	printf("26. Weeks(wk) \t\tTo\t Milliseconds(ms) \n27. Weeks(wk) \t\tTo\t Seconds(s) \n28. Weeks(wk) \t\tTo\t Minutes(m) \n29. Weeks(wk) \t\tTo\t Hours(h) \n30. Weeks(wk) \t\tTo\t Days(d) \n");

	printf("Enter Your Choice(1-30): ");
	scanf("%d", &choiceUnit);

	switch (choiceUnit)
	{
		// Millisecond(ms)
	case 1:
		printf("You Chose \"Millisecond(ms) To Seconds(s)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Millisecond(ms): ");
		scanf("%f", &value);
		result = value / 1000;
		printf("The Time in Seconds(s) is %fqs\n", result);
		printf("*************************************************");
		break;
	case 2:
		printf("You Chose \"Millisecond(ms) To Minutes(m)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Millisecond(ms): ");
		scanf("%f", &value);
		result = value / 60000;
		printf("The Time in Minutes(m) is %fm\n", result);
		printf("*************************************************");
		break;
	case 3:
		printf("You Chose \"Millisecond(ms) To Hours(h)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Millisecond(ms): ");
		scanf("%f", &value);
		result = value / 3600000;
		printf("The Time in Hours(h) is %fh\n", result);
		printf("*************************************************");
		break;
	case 4:
		printf("You Chose \"Millisecond(ms) To Days(d)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Millisecond(ms): ");
		scanf("%f", &value);
		result = value / 86400000;
		printf("The Time in Days(d) is %fd\n", result);
		printf("*************************************************");
		break;
	case 5:
		printf("You Chose \"Millisecond(ms) To Weeks(wk)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Millisecond(ms): ");
		scanf("%f", &value);
		result = value / 604800000;
		printf("The Time in Weeks(wk) is %fwk\n", result);
		printf("*************************************************");
		break;
	// Second(s)
	case 6:
		printf("You Chose \"Second(s) To milliseconds(ms)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Second(s): ");
		scanf("%f", &value);
		result = value * 1000;
		printf("The Time in milliseconds(ms) is %fms\n", result);
		printf("*************************************************");
		break;
	case 7:
		printf("You Chose \"Second(s) To Minutes(m)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Second(s): ");
		scanf("%f", &value);
		result = value / 60;
		printf("The Time in Minutes(m) is %fm\n", result);
		printf("*************************************************");
		break;
	case 8:
		printf("You Chose \"Second(s) To Hours(h)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Second(s): ");
		scanf("%f", &value);
		result = value / 3600;
		printf("The Time in Hours(h) is %fh\n", result);
		printf("*************************************************");
		break;
	case 9:
		printf("You Chose \"Second(s) To Days(d)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Second(s): ");
		scanf("%f", &value);
		result = value / 86400;
		printf("The Time in Days(d) is %fd\n", result);
		printf("*************************************************");
		break;
	case 10:
		printf("You Chose \"Second(s) To Weeks(wk)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Second(s): ");
		scanf("%f", &value);
		result = value / 604800;
		printf("The Time in Weeks(wk) is %fwk\n", result);
		printf("*************************************************");
		break;
	// Minutes(m)
	case 11:
		printf("You Chose \"Minutes(m) To milliseconds(ms)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Minutes(m): ");
		scanf("%f", &value);
		result = value * 60000;
		printf("The Time in milliseconds(ms) is %fms\n", result);
		printf("*************************************************");
		break;
	case 12:
		printf("You Chose \"Minutes(m) To Seconds(s)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Minutes(m): ");
		scanf("%f", &value);
		result = value * 60;
		printf("The Time in Seconds(s) is %fs\n", result);
		printf("*************************************************");
		break;
	case 13:
		printf("You Chose \"Minutes(m) To Hours(h)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Minutes(m): ");
		scanf("%f", &value);
		result = value / 60;
		printf("The Time in Hours(h) is %fh\n", result);
		printf("*************************************************");
		break;
	case 14:
		printf("You Chose \"Minutes(m) To Days(d)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Minutes(m): ");
		scanf("%f", &value);
		result = value / 1440;
		printf("The Time in Days(d) is %fd\n", result);
		printf("*************************************************");
		break;
	case 15:
		printf("You Chose \"Minutes(m) To Weeks(wk)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Minutes(m): ");
		scanf("%f", &value);
		result = value / 10080;
		printf("The Time in Weeks(wk) is %fwk\n", result);
		printf("*************************************************");
		break;
	// Hours(h)
	case 16:
		printf("You Chose \"Hours(h) To milliseconds(ms)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Hours(h): ");
		scanf("%f", &value);
		result = value * 3600000;
		printf("The Time in milliseconds(ms) is %fms\n", result);
		printf("*************************************************");
		break;
	case 17:
		printf("You Chose \"Hours(h) To Seconds(s)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Hours(h): ");
		scanf("%f", &value);
		result = value * 3600;
		printf("The Time in Seconds(s) is %fs\n", result);
		printf("*************************************************");
		break;
	case 18:
		printf("You Chose \"Hours(h) To Minutes(m)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Hours(h): ");
		scanf("%f", &value);
		result = value * 60;
		printf("The Time in Minutes(m) is %fm\n", result);
		printf("*************************************************");
		break;
	case 19:
		printf("You Chose \"Hours(h) To Days(d)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Hours(h): ");
		scanf("%f", &value);
		result = value / 24;
		printf("The Time in Days(d) is %fd\n", result);
		printf("*************************************************");
		break;
	case 20:
		printf("You Chose \"Hours(h) To Weeks(wk)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Hours(h): ");
		scanf("%f", &value);
		result = value / 168;
		printf("The Time in Weeks(wk) is %fwk\n", result);
		printf("*************************************************");
		break;
	// Days(d)
	case 21:
		printf("You Chose \"Days(d) To milliseconds(ms)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Days(d): ");
		scanf("%f", &value);
		result = value * 86400000;
		printf("The Time in milliseconds(ms) is %fms\n", result);
		printf("*************************************************");
		break;
	case 22:
		printf("You Chose \"Days(d) To Seconds(s)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Days(d): ");
		scanf("%f", &value);
		result = value * 86400;
		printf("The Time in Seconds(s) is %fs\n", result);
		printf("*************************************************");
		break;
	case 23:
		printf("You Chose \"Days(d) To Minutes(m)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Days(d): ");
		scanf("%f", &value);
		result = value * 1440;
		printf("The Time in Minutes(m) is %fm\n", result);
		printf("*************************************************");
		break;
	case 24:
		printf("You Chose \"Days(d) To Hours(h)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Days(d): ");
		scanf("%f", &value);
		result = value * 24;
		printf("The Time in Hours(h) is %fh\n", result);
		printf("*************************************************");
		break;
	case 25:
		printf("You Chose \"Days(d) To Weeks(wk)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Days(d): ");
		scanf("%f", &value);
		result = value / 7;
		printf("The Time in Weeks(wk) is %fwk\n", result);
		printf("*************************************************");
		break;
	// Weeks(wk)
	case 26:
		printf("You Chose \"Weeks(wk) To milliseconds(ms)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Weeks(wk): ");
		scanf("%f", &value);
		result = value * 604800000;
		printf("The Time in milliseconds(ms) is %fms\n", result);
		printf("*************************************************");
		break;
	case 27:
		printf("You Chose \"Weeks(wk) To Seconds(s)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Weeks(wk): ");
		scanf("%f", &value);
		result = value * 604800;
		printf("The Time in Seconds(s) is %fs\n", result);
		printf("*************************************************");
		break;
	case 28:
		printf("You Chose \"Weeks(wk) To Minutes(m)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Weeks(wk): ");
		scanf("%f", &value);
		result = value * 10080;
		printf("The Time in Minutes(m) is %fm\n", result);
		printf("*************************************************");
		break;
	case 29:
		printf("You Chose \"Weeks(wk) To Hours(h)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Weeks(wk): ");
		scanf("%f", &value);
		result = value * 168;
		printf("The Time in Hours(h) is %fh\n", result);
		printf("*************************************************");
		break;
	case 30:
		printf("You Chose \"Weeks(wk) To Days(d)\"...\n");
		printf("*************************************************");
		printf("\nEnter Time in Weeks(wk): ");
		scanf("%f", &value);
		result = value * 7;
		printf("The Time in Days(d) is %fd\n", result);
		printf("*************************************************");
		break;
	default:
		printf("Please chose right option......");
		break;
	}
}

// Main Function
int main()
{
	int choiceUnit;

	printf("\n   ***** UNIT CONVERTER *****");

	do
	{
		printf("\n\n\t\tMENU\n1. Area \t\t2. Length \n3. Temperature \t\t4. Volume \n5. Mass \t\t6. Data \n7. Speed \t\t8. Time \n9. Exit \n");
		printf("Enter Your Choice(1-9): ");
		scanf("%d", &choiceUnit);
		switch (choiceUnit)
		{
		case 1:
			printf("You Chose Area...\n\n");
			Area();
			break;
		case 2:
			printf("You Chose Length...\n\n");
			Length();
			break;
		case 3:
			printf("You Chose Temperature...\n\n");
			Temperature();
			break;
		case 4:
			printf("You Chose Volume...\n\n");
			Volume();
			break;
		case 5:
			printf("You Chose Mass...\n\n");
			Mass();
			break;
		case 6:
			printf("You Chose Data...\n\n");
			Data();
			break;
		case 7:
			printf("You Chose Speed...\n\n");
			Speed();
			break;
		case 8:
			printf("You Chose Time...\n\n");
			Time();
			break;
		case 9:
			printf("!!! Thank You !!!\n\n");
			break;
		default:
			printf("Please chose right option......\n\n");
			break;
		}
	} while (choiceUnit != 9);
	return 0;
}
