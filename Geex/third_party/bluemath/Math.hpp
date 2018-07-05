/*
  Math.hpp

  a collection of math routines

  Li-Yi Wei
  05/25/2008

*/

#ifndef _MATH_HPP
#define _MATH_HPP

#include <Geex/third_party/misc/linkage.h>

#include <vector>
using namespace std;

class GEEX_API Math
{
public:
    static int AllInteger(const vector<float> & input);
    static int GreatestCommonDivisor(const int a_in, const int b_in);
    static int GreatestCommonDivisor(const vector<int> & input);

    // packing density stuff from BlueNoise project
    static float MaxPackingDensity(const int dimension);
    static float ComputeMaxMinDistance(const int dimension, const float num_samples);
    static int ComputeMaxNumSamples(const int dimension, const float min_distance);

    static double HyperSphereVolume(const int dimension, const float radius);
    static double HyperSphereRadius(const int dimension, const float volume);
    
    // compute Gamma(n/2+1) as in http://en.wikipedia.org/wiki/Hypersphere
    static double Gamma(const int n);
    
    static double Factorial(const int n);
    static double DoubleFactorial(const int n);

    template<class T>
    static int IsNAN(const T & input) {return (input != input);};

    template<class T>
    static int IsINF(const T & input) {return (!IsNAN(input) && !(input < INF));};

public:
    static const double PI;
    static const double INF;
    //static const double NAN;
};

template <class T>
T mod(const T a, const T b)
{
    return (a-floor(a/b)*b);
}

#endif
