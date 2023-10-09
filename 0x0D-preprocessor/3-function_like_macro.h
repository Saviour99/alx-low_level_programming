#ifndef ABS(x)

#if ABS(x) < 0
	#define ABS(x) (-(x))
#else
	#define ABS(x) (x)
#endif
