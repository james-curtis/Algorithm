#include "stdio.h"
#include "string.h"

struct stu
{
    char idCard[17];
    int machineCard;
    int setCard;
};

int main()
{
    // freopen("./a.in", "r", stdin);
    int stuCount = 0;
    scanf("%d", &stuCount);
    struct stu stuStruct[1001];
    for (int i = 0; i < stuCount; i++)
    {
        scanf("%s", stuStruct[i].idCard);
        scanf("%d", &stuStruct[i].machineCard);
        scanf("%d", &stuStruct[i].setCard);
    }

    int searchCount = 0;
    scanf("%d", &searchCount);
    char idCard[17];
    int machineCard = 0;
    for (int i = 0; i < searchCount; i++)
    {
        scanf("%d", &machineCard);
        for (int j = 0; j < stuCount; j++)
        {
            if (stuStruct[j].machineCard == machineCard)
            {
                if (i != 0)
                    printf("\n");
                printf("%s %d", stuStruct[j].idCard, stuStruct[j].setCard);
                break;
            }
        }
    }
}