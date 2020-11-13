#include <scripting.h>
#include <iostream>

ScriptManager::ScriptManager(){
	L = lua_open();
	luaopen_base(L);             /* opens the basic library */
	luaopen_table(L);            /* opens the table library */
	luaopen_io(L);               /* opens the I/O library */
	luaopen_string(L);           /* opens the string lib. */
	luaopen_math(L);             /* opens the math lib. */
}

ScriptManager::~ScriptManager(){
	lua_close(L);
}

template <typename T>
T run_script(string filename, string result){
	if (luaL_loadfile(L, filename.c_str()) || lua_pcall(L, 0, 0, 0)) {
		
	}
}

template<>
inline float ScriptManager::get_lua(const string variable_name){
    if(!lua_isnumber(L, -1)) {
      printError(variableName, "Not a number");
    }
    return (float)lua_tonumber(L, -1);
}

template<>
inline int ScriptManager::get_lua(const string variable_name){
    if(!lua_isnumber(L, -1)) {
      printError(variable_name, "Not a number");
    }
    return (int)lua_tonumber(L, -1);
}

template<>
inline string ScriptManager::get_lua(const string variable_name){
    string s = "null";
    if(lua_isstring(L, -1)) {
      s = std::string(lua_tostring(L, -1));
    } else {
      printError(variableName, "Not a string");
    }
    return s;
}

template<>
inline bool ScriptManager::get_lua(const string variable_name){
	return (bool)lua_toboolean(L, -1);
}