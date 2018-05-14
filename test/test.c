
# include <stdlib.h>
# include <stdio.h>
# include "git-info.h"


/**
 * Test generated header file
 */
int main(void){

    printf("GIT_INFO_ORIGIN: %s\n",                 GIT_INFO_ORIGIN);
    printf("GIT_INFO_BRANCH: %s\n",                 GIT_INFO_BRANCH);
    printf("GIT_INFO_HASH: %s\n",                   GIT_INFO_HASH);
    printf("GIT_INFO_TAG: %s\n",                    GIT_INFO_TAG);
    printf("GIT_INFO_SUBJECT: %s\n",                GIT_INFO_SUBJECT);
    printf("GIT_INFO_BODY: %s\n",                   GIT_INFO_BODY);
    printf("GIT_INFO_NOTES: %s\n",                  GIT_INFO_NOTES);
    printf("GIT_INFO_AUTHOR_NAME: %s\n",            GIT_INFO_AUTHOR_NAME);
    printf("GIT_INFO_AUTHOR_EMAIL: %s\n",           GIT_INFO_AUTHOR_EMAIL);
    printf("GIT_INFO_AUTHOR_TIMESTAMP: %ld\n",      GIT_INFO_AUTHOR_TIMESTAMP);
    printf("GIT_INFO_AUTHOR_DATE: %s\n",            GIT_INFO_AUTHOR_DATE);
    printf("GIT_INFO_AUTHOR_DATE_RFC2822: %s\n",    GIT_INFO_AUTHOR_DATE_RFC2822);
    printf("GIT_INFO_AUTHOR_DATE_ISO8601: %s\n",    GIT_INFO_AUTHOR_DATE_ISO8601);
    printf("GIT_INFO_COMMITTER_NAME: %s\n",         GIT_INFO_COMMITTER_NAME);
    printf("GIT_INFO_COMMITTER_EMAIL: %s\n",        GIT_INFO_COMMITTER_EMAIL);
    printf("GIT_INFO_COMMITTER_TIMESTAMP: %ld\n",   GIT_INFO_COMMITTER_TIMESTAMP);
    printf("GIT_INFO_COMMITTER_DATE: %s\n",         GIT_INFO_COMMITTER_DATE);
    printf("GIT_INFO_COMMITTER_DATE_RFC2822: %s\n", GIT_INFO_COMMITTER_DATE_RFC2822);
    printf("GIT_INFO_COMMITTER_DATE_ISO8601: %s\n", GIT_INFO_COMMITTER_DATE_ISO8601);

    return(EXIT_SUCCESS);
}
