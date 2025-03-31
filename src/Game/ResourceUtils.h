#pragma once

namespace ResourceUtils
{
  std::string ResourceToImagePath(const std::string& resource);
  std::string ResourceToSoundPath(const std::string& resource);
  std::string ResourceToMusicPath(const std::string& resource);
  std::string ResourceToFontPath(const std::string& resource);

  std::string ResourceToTilemapPath(const std::string& resource);

  std::string ResourceToLevelPath(const std::string& resource);
}