#ifndef SAFEINT_H
#define SAFEINT_H

struct SafeResult
{
    int value;
    int errorflag;
};

struct SafeResult safeadd(long long a, long long b);
struct SafeResult safesubtract(long long a, long long b);
struct SafeResult safemultiply(long long a, long long b);
struct SafeResult safedivide(long long a, long long b);
struct SafeResult safestrtoint(char a[]);

#endif