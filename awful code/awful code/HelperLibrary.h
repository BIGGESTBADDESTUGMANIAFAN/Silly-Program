#pragma once

//I find it easier to remember objects than numbers.
#define apple 1
#define banana 2
#define cherry 3
#define dragon 4
#define eagle 5
#define flower 6
#define guitar 7
#define honey 8
#define island 9
#define jewel 10
#define kite 11
#define lemon 12
#define mango 13
#define night 14
#define ocean 15
#define panda 16
#define queen 17
#define river 18
#define star 19
#define tiger 20
#define umbrella 21
#define violet 22
#define water 23
#define xray 24
#define yellow 25
#define zebra 26
#define alpha 27
#define beta 28
#define gamma 29
#define delta 30
#define epsilon 31
#define zeta 32
#define eta 33
#define theta 34
#define iota 35
#define kappa 36
#define lambda 37
#define mu 38
#define nu 39
#define xi 40
#define omicron 41
#define pi 42
#define rho 43
#define sigma 44
#define tau 45
#define upsilon 46
#define phi 47
#define chi 48
#define psi 49
#define omega 50
#define azure 51
#define beige 52
#define coral 53
#define denim 54
#define emerald 55
#define fuchsia 56
#define gold 57
#define ivory 58
#define jade 59
#define khaki 60
#define lavender 61
#define maroon 62
#define navy 63
#define olive 64
#define pink 65
#define quartz 66
#define ruby 67
#define silver 68
#define turquoise 69
#define umber 70
#define vermillion 71
#define white 72
#define xanthic 73
#define yellowish 74
#define zaffre 75
#define acorn 76
#define balloon 77
#define candle 78
#define donut 79
#define envelope 80
#define feather 81
#define grape 82
#define hat 83
#define ice 84
#define jam 85
#define key 86
#define lamp 87
#define magnet 88
#define needle 89
#define orange 90
#define pencil 91
#define quarter 92
#define ring 93
#define soap 94
#define thread 95
#define umbrella 96
#define vase 97
#define watch 98
#define yarn 99
#define zipper 100
#define false 0
char define(void)
{
	int gagandeep = GetValueOfANumber(turquoise) + GetValueOfANumber(pi);
	do
	{
		return gagandeep;
	} while (false);
}

int GetValueOfANumber(int number)
{
	return (number+number/number-apple);
}