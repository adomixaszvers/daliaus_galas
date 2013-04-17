#include <string.h>
#include <stdio.h>

/*int arTinka(const char zodis[], const char galas[]) {
	char *p;
	p = strstr(zodis, galas);
	if (p != NULL) {
		if (strlen(p) == strlen(galas))
			return 1;
	} else
		return 0;
}*/

int arTinka(const char zodis[], const char galas[]) {
    int galo_ilgis, zodzio_ilgis;
    int i;
    int tinka;

    galo_ilgis = strlen(galas);
    zodzio_ilgis = strlen(zodis);

    if (zodzio_ilgis < galo_ilgis)
        return 0;
    tinka = 1;
    for(i=0; (i<galo_ilgis)&&tinka; i++) {
        if (zodis[i+zodzio_ilgis-galo_ilgis] != galas[i])
            tinka=0;
    }
    return tinka;
}

int main(int argc, char * const argv[]) {
    if (argc == 3) {
        if (arTinka(argv[1], argv[2]))
            puts("Tinka");
        else
            puts("Netinka");
    }
    return 0;
}
