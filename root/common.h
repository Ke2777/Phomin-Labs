float lerp(float a, float b, float t) // Linear interpolation
{
    return a + (b - a) * t;
} 

float map(float x, float x0, float x1, float a, float b) // linear map
{
    float t = (x - x0) / (x1 - x0);
    return lerp(a, b, t);
}