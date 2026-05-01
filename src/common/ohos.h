#ifndef LOVE_OHOS_H
#define LOVE_OHOS_H

#include <string>

namespace love
{
namespace ohos
{

using VibrateCallback = void (*)(double seconds);
using HasBackgroundMusicCallback = bool (*)();

void setSandboxPath(const char *path);
const std::string &getSandboxPath();

void setGameResourcePath(const char *path);
const std::string &getGameResourcePath();

void setSystemCallbacks(VibrateCallback vibrate, HasBackgroundMusicCallback hasBackgroundMusic);
void vibrate(double seconds);
bool hasBackgroundMusic();

bool createStorageDirectories();

} // namespace ohos
} // namespace love

#endif
