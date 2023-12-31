#include "configargs.h"

#define GCCPLUGIN_VERSION_MAJOR   12
#define GCCPLUGIN_VERSION_MINOR   3
#define GCCPLUGIN_VERSION_PATCHLEVEL   1
#define GCCPLUGIN_VERSION  (GCCPLUGIN_VERSION_MAJOR*1000 + GCCPLUGIN_VERSION_MINOR)

static char basever[] = "12.3.1";
static char datestamp[] = "20230605";
static char devphase[] = "";
static char revision[] = "[releases/gcc-12 revision 256cb821273d328e98d87aae2a061e0e889ec408]";

/* FIXME plugins: We should make the version information more precise.
   One way to do is to add a checksum. */

static struct plugin_gcc_version gcc_version = {basever, datestamp,
						devphase, revision,
						configuration_arguments};
