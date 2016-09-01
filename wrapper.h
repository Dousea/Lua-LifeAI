#ifndef WRAPPER_REG

#define FUNC(name) \
static int lai_##name(lua_State *L) { \
	int arg_n = lua_gettop(L); \
	int arg = 1; \
	int stack_n = 0;

#define CALL(name, type, ...) \
	type ret = lai##name(__VA_ARGS__);

#define CALL_NO_RET(name, ...) \
	lai##name(__VA_ARGS__);

#define NUM_ARG(type, name)\
	type name = (type)luaL_checknumber(L, arg++);

#define NUM_PTR_ARG(type, name) \
	type numptr_##name = (type)luaL_checknumber(L, arg++); \
	type *name = &(numptr_##name);

#define END_NUM_PTR_ARG(name) \
	if (name != NULL) { \
		lua_pushnumber(L, (lua_Number)(numptr_##name)); \
		stack_n++; \
	}

#define OPT_NUM_ARG(type, name, otherwise) \
	type name = arg <= arg_n ? (type)luaL_checknumber(L, arg++) : otherwise;

#define STR_ARG(name) \
	std::string name = luaL_checkstring(L, arg++);

#define STR_PTR_ARG(name) \
	std::string strptr_##name = luaL_checkstring(L, arg++); \
	std::string *name = &(strptr_##name);

#define END_STR_PTR_ARG(name) \
	if (name != NULL) { \
		lua_pushstring(L, strptr_##name.c_str()); \
		stack_n++; \
	}

#define OPT_STR_ARG(name, otherwise) \
	std::string name = arg <= arg_n ? lua_tostring(L, arg++) : otherwise;

#define BOOL_ARG(name) \
	bool name = (bool)lua_toboolean(L, arg++);

#define OPT_BOOL_ARG(name, otherwise) \
	bool name = arg <= arg_n ? (bool)lua_toboolean(L, arg++) : otherwise;

#define PUSH_NUM(name) \
	lua_pushnumber(L, (lua_Number)name); \
	stack_n++;

#define PUSH_STR(name) \
	const char *temp = name.c_str(); \
	lua_pushstring(L, temp); \
	stack_n++;

#define PUSH_BOOL(name) \
	lua_pushboolean(L, name); \
	stack_n++;

#define END_FUNC \
	return stack_n; \
}

#else

#undef FUNC
#define FUNC(name) { #name, lai_##name },
#undef CALL
#define CALL(name, type, ...)
#undef CALL_NO_RET
#define CALL_NO_RET(name, ...)
#undef NUM_ARG
#define NUM_ARG(type, name)
#undef NUM_PTR_ARG
#define NUM_PTR_ARG(type, name)
#undef END_NUM_PTR_ARG
#define END_NUM_PTR_ARG(name)
#undef OPT_NUM_ARG
#define OPT_NUM_ARG(type, name, otherwise)
#undef STR_ARG
#define STR_ARG(name)
#undef STR_PTR_ARG
#define STR_PTR_ARG(name)
#undef END_STR_PTR_ARG
#define END_STR_PTR_ARG(name)
#undef OPT_STR_ARG
#define OPT_STR_ARG(name, otherwise)
#undef BOOL_ARG
#define BOOL_ARG(name)
#undef OPT_BOOL_ARG
#define OPT_BOOL_ARG(name, otherwise)
#undef PUSH_NUM
#define PUSH_NUM(name)
#undef PUSH_STR
#define PUSH_STR(name)
#undef PUSH_BOOL
#define PUSH_BOOL(name)
#undef END_FUNC
#define END_FUNC

#endif