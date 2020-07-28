#ifndef MATH_VERSION_INCLUDED
#define MATH_VERSION_INCLUDED

#define MAKE_STR_HELPER(a_str) #a_str
#define MAKE_STR(a_str) MAKE_STR_HELPER(a_str)

#define MATH_VERSION_MAJOR 1
#define MATH_VERSION_MINOR 0
#define MATH_VERSION_PATCH 0
#define MATH_VERSION_BETA 0
#define MATH_VERSION_VERSTRING   \
	MAKE_STR(MYFP_VERSION_MAJOR) \
	"." MAKE_STR(MYFP_VERSION_MINOR) "." MAKE_STR(MYFP_VERSION_PATCH) "." MAKE_STR(MYFP_VERSION_BETA)

#endif
