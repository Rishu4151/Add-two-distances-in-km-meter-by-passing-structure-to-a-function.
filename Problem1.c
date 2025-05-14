#include <stdio.h>
struct Distance 
{
    int km;
    int m;
};
struct Distance addDistances(struct Distance d1, struct Distance d2) 
{
    struct Distance result;
    result.km = d1.km+ d2.km;
    result.m = d1.m + d2.m;
    if (result.m >= 1000) 
    {
        result.km += result.m/1000;
        result.m%= 1000;
    }
    return result;
}
int main() 
{
    struct Distance dist1, dist2, total;
    printf("Enter the first distance (km M): ");
    scanf("%d %d", &dist1.km, &dist1.m);
    printf("Enter the second distance (km M): ");
    scanf("%d %d", &dist2.km, &dist2.m);
    total = addDistances(dist1, dist2);
    printf("Sum of the distance: %d kilometers and %d meters\n", total.km, total.m);
    return 0;
}