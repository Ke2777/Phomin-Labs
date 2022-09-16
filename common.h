	//-- ФАКТОРИАЛ -- //
// (1) stirling`s approximation | f1(x)
float fact1(unsigned int x)
{
	if (x == 0)								// (!при x = 0)
	{
		return 1;
	}

	else if (x > 0)							// (!при x > 0)
	{
		return sqrtf(2 * PI * x) * powf((x / E), x);
	}
}

// (2) ramanujan`s approximation | f2(x)
float fact2(unsigned int x)
{
	if (x == 0)								// (!при x = 0)
	{
		return 1;
	}

	else if (x > 0)							// (!при x > 0)
	{
		return sqrtf(2 * PI * x) * powf((x / E), x) * powf(1 + (1 / (2.0f * x)) + (1 / (8.0f * x * x)), (1.0f / 6.0f));
	}
}


// Linear interpolation (lerp)
float lerf(float a, float b, float t)
{
    return a + (b - a)  t;
} 


// Pi
float pi()
{
    return acosf(-1)
}


// exp (e)
float exp()
{
    return expf(1)
}

float map(float x, float x0, float x1, float a, float b) // linear map
{
    float t = (x - x0) / (x1 - x0);
    return lerp(a, b, t);
}

void cbuffer()  // clear input buffer
{
    int c;
    while ( (c = getchar()) != '\n' && c != EOF ) { }	
}
