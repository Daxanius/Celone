#include "pch.h"
#include "EditTool.h"
#include "GameDefines.h"
#include "ResourceUtils.h"

EditTool::EditTool(const std::string& name, const InputManager* inputManagerPtr)
  : m_InputManagerPtr(inputManagerPtr)
{
  // Load the texture for the name, the texturemanager will not be used in this case
  m_NameTexturePtr = new Texture(name, ResourceUtils::ResourceToFontPath(SYNE_FONT), EditToolTextSize, EditToolTextColor);
}

EditTool::~EditTool()
{
  delete m_NameTexturePtr;
}

void EditTool::Draw(const Camera* cameraPtr) const
{
  // Draw the name of the current tool
  m_NameTexturePtr->Draw(Point2f{ 10.f, WINDOW_HEIGHT - 10.f - m_NameTexturePtr->GetHeight() });
}
