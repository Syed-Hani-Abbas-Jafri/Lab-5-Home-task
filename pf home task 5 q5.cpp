#include <stdio.h>

int main() {
    int hasPrerequisite, isCourseFull;

    printf("Enter 1 if prerequisite is completed, otherwise 0: ");
    scanf("%d", &hasPrerequisite);

    printf("Enter 1 if course is full, otherwise 0: ");
    scanf("%d", &isCourseFull);

    if (hasPrerequisite == 1) {
        if (isCourseFull == 0) {
            printf("Enrolled successfully\n");
        } else {
            printf("Cannot enroll: course is full\n");
        }
    } else {
        if (isCourseFull == 1) {
            printf("Cannot enroll: prerequisite missing and course is full\n");
        } else {
            printf("Cannot enroll: prerequisite missing\n");
        }
    }

    return 0;
}

