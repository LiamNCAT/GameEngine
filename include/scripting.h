#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <string>

using namespace std;

template <typename T>
class ScriptManager{
private:
	lua_State *L;
public:
	ScriptManager();
	T run_script(string, string);
	~ScriptManager();
	T lua_get(const string)
}

