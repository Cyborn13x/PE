#include <stdio.h>
#include <math.h>

typedef struct Point {
	double x, y;
} P;

typedef struct Triangle {
	P a, b, c;
} T;

const double eps = 1e-10;
const P p0 = {0.0, 0.0};

inline int isvalid(T);
inline double triArea(T);

int main() {
	T m;
	int cnt = 0;
	while(scanf("%lf,%lf,%lf,%lf,%lf,%lf",&m.a.x,&m.a.y,&m.b.x,&m.b.y,&m.c.x,&m.c.y)==6)
		if(isvalid(m))
			cnt++;
	printf("%d\n", cnt);
	return 0;
}

inline int isvalid(T tt) {
	T t1 = {tt.a, tt.b, p0}, t2 = {tt.b, tt.c, p0}, t3 = {tt.c, tt.a, p0};
	double at = triArea(tt);
	double a1 = triArea(t1);
	double a2 = triArea(t2);
	double a3 = triArea(t3);
	if(fabs(a1 + a2 + a3 - at) < eps) return 1;
	return 0;
}

inline double triArea(T m) {
	return fabs(m.a.x*(m.b.y-m.c.y) + m.b.x*(m.c.y-m.a.y) + m.c.x*(m.a.y-m.b.y));
}
