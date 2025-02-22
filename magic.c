#include "stdio.h"
#include "math.h"
#include "magic.h"


int get_mime(const char* path){
	char *actual_file = path;
	const char *magic_full;
	magic_t magic_cookie;
    
	/* MAGIC_MIME tells magic to return a mime of the file,
   	but you can specify different things	*/
	magic_cookie = magic_open(MAGIC_MIME);
    
	if (magic_cookie == NULL) {
    	printf("unable to initialize magic library\n");
    	return 1;
	}
    
	printf("Loading default magic database\n");
    
	if (magic_load(magic_cookie, NULL) != 0) {
    	printf("cannot load magic database - %s\n", magic_error(magic_cookie));
    	magic_close(magic_cookie);
    	return 1;
	}
    
	magic_full = magic_file(magic_cookie, actual_file);
	printf("%s\n", magic_full);
	magic_close(magic_cookie);

}

int main(int argc, const char ** argv){
	if(argc > 1){return 1;}
	get_mime(argv[1]);
}
