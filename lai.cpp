#include <lua.hpp>
#include <lifeai.h>
#include "wrapper.h"
#include "lailib.h"

#if defined(_WIN32)
	#define OS_WINDOWS
#elif defined(__APPLE__) && defined(__MACH__)
	#include "TargetConditionals.h"

	#if TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR
		#define OS_IOS
	#elif TARGET_OS_MAC
		#define OS_MACOS
	#else
		#error This Apple operating system is not supported
	#endif
#elif defined(__unix__)
	#if defined(__ANDROID__)
		#define OS_ANDROID
	#elif defined(__linux__)
		#define OS_LINUX
	#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
		#define OS_FREEBSD
	#else
		#error This UNIX operating system is not supported
	#endif
#else
	#error This operating system is not supported
#endif

#if defined(OS_WINDOWS)
	#define LUALAI_API __declspec(dllexport)
#else
	#if __GNUC__ >= 4
		#define LUALAI_API __attribute__ ((__visibility__ ("default")))
	#else
		#define LUALAI_API
	#endif
#endif

static const luaL_Reg lailib[] = {
#define WRAPPER_REG
#include "wrapper.h"
#include "lailib.h"
	{ NULL, NULL }
};

extern "C" LUALAI_API int luaopen_lifeai(lua_State *L)
{
	luaL_register(L, "lai", lailib);

#define FIELD(type) \
	lua_pushnumber(L, (lua_Number)lai_##type); \
	lua_setfield(L, -2, #type);

	// enum lai_types
	FIELD(none); FIELD(type); FIELD(num); FIELD(float); FIELD(all);
	FIELD(make); FIELD(remove); FIELD(clone); FIELD(set);
	FIELD(var); FIELD(stat); FIELD(estat); FIELD(astat); FIELD(str); FIELD(temp); FIELD(best); FIELD(status);
	FIELD(ent); FIELD(act); FIELD(role); FIELD(co_role); FIELD(ENT); FIELD(ACT); FIELD(error); FIELD(actor); FIELD(role_val);
	FIELD(var_req); FIELD(req); FIELD(mod); FIELD(mod_val); FIELD(inf); FIELD(val_inf);
	FIELD(name); FIELD(active); FIELD(manual); FIELD(manual_val); FIELD(save); FIELD(val_ent);
	FIELD(op); FIELD(amt); FIELD(amt); FIELD(min); FIELD(max); FIELD(norm); FIELD(link);
	FIELD(equal); FIELD(not_equal); FIELD(less); FIELD(greater);
	FIELD(less_or_equal); FIELD(greater_or_equal); FIELD(plus); FIELD(minus);
	FIELD(hist); FIELD(hist_ct); FIELD(hist_best); FIELD(hist_low); FIELD(hist_high); FIELD(hist_avg); FIELD(hist_sum);
	FIELD(sect_main); FIELD(sect_sub); FIELD(unknown);
	// enum lai_statuses
	FIELD(fail); FIELD(pass); FIELD(wait_update); FIELD(wait_reply);
	
	return 1;
}