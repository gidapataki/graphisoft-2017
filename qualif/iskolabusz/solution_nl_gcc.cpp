#import <ios>

main(int h, int n) {
    for (scanf("%d", &n);n > h;) h *= 2;
    printf("%d", 2 * n - h);
}
