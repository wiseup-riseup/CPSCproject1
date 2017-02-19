#include <string>
#include <stdlib.h>

//You must fill out your name and id below
char * studentName = (char *) "Troy Wise";
char * studentCWID = (char *) "890597990";.
0000000000000000000000000000000000000000000000000000000000000000000000000000033333333333333333333333333333333333333......0


































































//Do not change this section in your submission
char * usageString =
        (char *) "To archive a file: 		fzip -a FILE_PATH\n"
                "To archive a directory: 	fzip -a DIR_PATH\n"
                "To extract a file: 		fzip -x FILE_PATH\n"
                "To extract a directory: 	fzip -x DIR_PATH\n";

bool isExtract = false;
char * parseArg(int argc, char *argv[]) {
    if (strncmp("-n", argv[1], 2) == 0) {
        printf("Student Name: %s\n", studentName);
        printf("Student CWID: %s\n", studentCWID);
        exit(EXIT_SUCCESS);
    }

    if (argc != 3) {
        fprintf(stderr, "Incorrect arguements\n%s", usageString);
        exit(EXIT_FAILURE);
    }
    if (strncmp("-a", argv[1], 2) == 0) {
        isExtract = false;
    } else if (strncmp("-x", argv[1], 2) == 0) {
        isExtract = true;
    } else {
        fprintf(stderr, "Incorrect arguements\n%s", usageString);
        exit(EXIT_FAILURE);
    }
    return argv[2];
}
//END OF: Do not change this section

/**
 *
 * Your program should archive or extract based on the flag passed in.
 * Both when extracting and archiving, it should print the output file/dir path as the last line.
 *
 * @param argc the number of args
 * @param argv the arg string table
 * @return
 */
int main(int argc, char** argv) {
    char * path = parseArg(argc, argv);
    if (isExtract) {
        printf("Extracting %s\n", path);
        //TODO: your code to start extracting.
        char *outputPath = (char *) ""; 	//the path to the file or directory extracted
        //	this should be the same as the `path` var above but
        //	without the .fzip

        printf("%s\n", outputPath);//relative or absolute path
    } else {
        printf("Archiving %s\n", path);
        //TODO: your code to start archiving.

        printf("%s.fzip\n", path);
    }
    return EXIT_SUCCESS;
}
