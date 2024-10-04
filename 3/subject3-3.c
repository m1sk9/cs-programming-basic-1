#include <stdio.h>

int main() {
    int price_orange = 170;
    int price_grapefruit = 150;
    int price_banana = 120;

    int oranges, grapefruits, bananas;
    printf("Please enter the number of oranges, grapefruits, and bananas in order: ");
    scanf("%d %d %d", &oranges, &grapefruits, &bananas);

    int total_fruits = oranges + grapefruits + bananas;

    int total_cost = (oranges * price_orange) + (grapefruits * price_grapefruit) + (bananas * price_banana);
    if (total_fruits >= 10) {
        char* fruit_message = "1 orange";
        int min_price = price_orange;

        if (price_grapefruit < min_price && grapefruits > 0) {
            fruit_message = "1 grapefruit";
            min_price = price_grapefruit;
        }
        if (price_banana < min_price && bananas > 0) {
            fruit_message = "1 bunch of bananas";
            min_price = price_banana;
        }

        total_cost -= min_price;
        printf("%s for free, ", fruit_message);
    }

    printf("The total cost is %d yen.\n", total_cost);
    return 0;
}
