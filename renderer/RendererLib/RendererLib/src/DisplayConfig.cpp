//  -------------------------------------------------------------------------
//  Copyright (C) 2014 BMW Car IT GmbH
//  -------------------------------------------------------------------------
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at https://mozilla.org/MPL/2.0/.
//  -------------------------------------------------------------------------

#include "RendererLib/DisplayConfig.h"
#include <array>

namespace ramses_internal
{
    EDeviceType DisplayConfig::getDeviceType() const
    {
        return m_deviceType;
    }

    void DisplayConfig::setDeviceType(EDeviceType deviceType)
    {
        m_deviceType = deviceType;
    }

    EWindowType DisplayConfig::getWindowType() const
    {
        return m_windowType;
    }

    void DisplayConfig::setWindowType(EWindowType windowType)
    {
        m_windowType = windowType;
    }

    void DisplayConfig::setAntialiasingSampleCount(uint32_t samples)
    {
        assert(ramses_internal::contains_c<uint32_t>({ 1u, 2u, 4u, 8u }, samples));
        m_antiAliasingSamples = samples;
    }

    WaylandIviLayerId DisplayConfig::getWaylandIviLayerID() const
    {
        return m_waylandIviLayerID;
    }

    void DisplayConfig::setWaylandIviLayerID(WaylandIviLayerId waylandIviLayerID)
    {
        m_waylandIviLayerID = waylandIviLayerID;
    }

    WaylandIviSurfaceId DisplayConfig::getWaylandIviSurfaceID() const
    {
        return m_waylandIviSurfaceID;
    }

    void DisplayConfig::setWaylandIviSurfaceID(WaylandIviSurfaceId waylandIviSurfaceID)
    {
        m_waylandIviSurfaceID = waylandIviSurfaceID;
    }

    AndroidNativeWindowPtr DisplayConfig::getAndroidNativeWindow() const
    {
        return m_androidNativeWindowPtr;
    }

    void DisplayConfig::setAndroidNativeWindow(AndroidNativeWindowPtr nativeWindowPtr)
    {
        m_androidNativeWindowPtr = nativeWindowPtr;
    }

    bool DisplayConfig::getStartVisibleIvi() const
    {
        return m_startVisibleIvi;
    }

    void DisplayConfig::setStartVisibleIvi(bool startVisible)
    {
        m_startVisibleIvi = startVisible;
    }

    bool DisplayConfig::getFullscreenState() const
    {
        return m_fullscreen;
    }

    void DisplayConfig::setFullscreenState(bool state)
    {
        m_fullscreen = state;
    }

    bool DisplayConfig::getBorderlessState() const
    {
        return m_borderless;
    }

    void DisplayConfig::setBorderlessState(bool state)
    {
        m_borderless = state;
    }

    uint32_t DisplayConfig::getAntialiasingSampleCount() const
    {
        return m_antiAliasingSamples;
    }

    uint32_t DisplayConfig::getDesiredWindowWidth() const
    {
        return m_desiredWindowWidth;
    }

    void DisplayConfig::setDesiredWindowWidth(uint32_t width)
    {
        assert(width != 0u);
        m_desiredWindowWidth = width;
    }

    uint32_t DisplayConfig::getDesiredWindowHeight() const
    {
        return m_desiredWindowHeight;
    }

    void DisplayConfig::setDesiredWindowHeight(uint32_t height)
    {
        assert(height != 0u);
        m_desiredWindowHeight = height;
    }

    int32_t DisplayConfig::getWindowPositionX() const
    {
        return m_windowPositionX;
    }

    void DisplayConfig::setWindowPositionX(int32_t posx)
    {
        m_windowPositionX = posx;
    }

    int32_t DisplayConfig::getWindowPositionY() const
    {
        return m_windowPositionY;
    }

    void DisplayConfig::setWindowPositionY(int32_t posy)
    {
        m_windowPositionY = posy;
    }

    void DisplayConfig::setKeepEffectsUploaded(bool enabled)
    {
        m_keepEffectsUploaded = enabled;
    }

    bool DisplayConfig::getKeepEffectsUploaded() const
    {
        return m_keepEffectsUploaded;
    }

    bool DisplayConfig::isResizable() const
    {
        return m_resizable;
    }

    void DisplayConfig::setResizable(bool resizable)
    {
        m_resizable = resizable;
    }

    uint64_t DisplayConfig::getGPUMemoryCacheSize() const
    {
        return m_gpuMemoryCacheSize;
    }

    void DisplayConfig::setGPUMemoryCacheSize(uint64_t size)
    {
        m_gpuMemoryCacheSize = size;
    }

    void DisplayConfig::setClearColor(const glm::vec4& clearColor)
    {
        m_clearColor = clearColor;
    }

    const glm::vec4& DisplayConfig::getClearColor() const
    {
        return m_clearColor;
    }

    void DisplayConfig::setDepthStencilBufferType(ERenderBufferType depthStencilBufferType)
    {
        m_depthStencilBufferType = depthStencilBufferType;
    }

    ERenderBufferType DisplayConfig::getDepthStencilBufferType() const
    {
        return m_depthStencilBufferType;
    }

    void DisplayConfig::setWaylandDisplay(std::string_view waylandDisplay)
    {
        m_waylandDisplay.assign(waylandDisplay);
    }

    std::string_view DisplayConfig::getWaylandDisplay() const
    {
        return m_waylandDisplay;
    }

    void DisplayConfig::setWindowsWindowHandle(WindowsWindowHandle hwnd)
    {
        m_windowsWindowHandle = hwnd;
    }

    WindowsWindowHandle DisplayConfig::getWindowsWindowHandle() const
    {
        return m_windowsWindowHandle;
    }

    void DisplayConfig::setX11WindowHandle(X11WindowHandle windowHandle)
    {
        m_x11WindowHandle = windowHandle;
    }

    X11WindowHandle DisplayConfig::getX11WindowHandle() const
    {
        return m_x11WindowHandle;
    }

    void DisplayConfig::setAsyncEffectUploadEnabled(bool enabled)
    {
        m_asyncEffectUploadEnabled = enabled;
    }

    bool DisplayConfig::isAsyncEffectUploadEnabled() const
    {
        return m_asyncEffectUploadEnabled;
    }
    void DisplayConfig::setWaylandEmbeddedCompositingSocketName(std::string_view socket)
    {
        m_waylandSocketEmbedded = socket;
    }

    void DisplayConfig::setWaylandEmbeddedCompositingSocketFD(int fd)
    {
        m_waylandSocketEmbeddedFD = fd;
    }

    std::string_view DisplayConfig::getWaylandSocketEmbedded() const
    {
        return m_waylandSocketEmbedded;
    }

    std::string_view DisplayConfig::getWaylandSocketEmbeddedGroup() const
    {
        return m_waylandSocketEmbeddedGroupName;
    }

    int DisplayConfig::getWaylandSocketEmbeddedFD() const
    {
        return m_waylandSocketEmbeddedFD;
    }

    void DisplayConfig::setWaylandEmbeddedCompositingSocketGroup(std::string_view groupNameForSocketPermissions)
    {
        m_waylandSocketEmbeddedGroupName = groupNameForSocketPermissions;
    }

    bool DisplayConfig::setWaylandEmbeddedCompositingSocketPermissions(uint32_t permissions)
    {
        if (permissions == 0)
            return false;
        m_waylandSocketEmbeddedPermissions = permissions;
        return true;
    }

    uint32_t DisplayConfig::getWaylandSocketEmbeddedPermissions() const
    {
        return m_waylandSocketEmbeddedPermissions;
    }

    void DisplayConfig::setPlatformRenderNode(std::string_view renderNode)
    {
        m_platformRenderNode = renderNode;
    }

    std::string_view DisplayConfig::getPlatformRenderNode() const
    {
        return m_platformRenderNode;
    }

    void DisplayConfig::setSwapInterval(int32_t interval)
    {
        m_swapInterval = interval;
    }

    int32_t DisplayConfig::getSwapInterval() const
    {
        return m_swapInterval;
    }

    void DisplayConfig::setScenePriority(SceneId sceneId, int32_t priority)
    {
        m_scenePriorities[sceneId] = priority;
    }

    int32_t DisplayConfig::getScenePriority(SceneId sceneId) const
    {
        const auto it = m_scenePriorities.find(sceneId);
        if (it != m_scenePriorities.end())
        {
            return it->second;
        }
        return 0;
    }

    const std::unordered_map<SceneId, int32_t>& DisplayConfig::getScenePriorities() const
    {
        return m_scenePriorities;
    }

    void DisplayConfig::setResourceUploadBatchSize(uint32_t batchSize)
    {
        m_resourceUploadBatchSize = batchSize;
    }

    uint32_t DisplayConfig::getResourceUploadBatchSize() const
    {
        return m_resourceUploadBatchSize;
    }

    bool DisplayConfig::operator == (const DisplayConfig& other) const
    {
        return
            m_deviceType                 == other.m_deviceType &&
            m_windowType                 == other.m_windowType &&
            m_fullscreen                 == other.m_fullscreen &&
            m_borderless                 == other.m_borderless &&
            m_antiAliasingSamples        == other.m_antiAliasingSamples &&
            m_desiredWindowWidth         == other.m_desiredWindowWidth &&
            m_desiredWindowHeight        == other.m_desiredWindowHeight &&
            m_windowPositionX            == other.m_windowPositionX &&
            m_windowPositionY            == other.m_windowPositionY &&
            m_waylandIviLayerID          == other.m_waylandIviLayerID &&
            m_waylandIviSurfaceID        == other.m_waylandIviSurfaceID &&
            m_startVisibleIvi            == other.m_startVisibleIvi &&
            m_resizable                  == other.m_resizable &&
            m_gpuMemoryCacheSize         == other.m_gpuMemoryCacheSize &&
            m_clearColor                 == other.m_clearColor &&
            m_windowsWindowHandle        == other.m_windowsWindowHandle &&
            m_waylandDisplay             == other.m_waylandDisplay &&
            m_depthStencilBufferType     == other.m_depthStencilBufferType &&
            m_asyncEffectUploadEnabled   == other.m_asyncEffectUploadEnabled &&
            m_waylandSocketEmbedded      == other.m_waylandSocketEmbedded &&
            m_waylandSocketEmbeddedGroupName    == other.m_waylandSocketEmbeddedGroupName &&
            m_waylandSocketEmbeddedPermissions  == other.m_waylandSocketEmbeddedPermissions &&
            m_waylandSocketEmbeddedFD    == other.m_waylandSocketEmbeddedFD &&
            m_platformRenderNode         == other.m_platformRenderNode &&
            m_swapInterval               == other.m_swapInterval &&
            m_scenePriorities            == other.m_scenePriorities &&
            m_resourceUploadBatchSize    == other.m_resourceUploadBatchSize;
    }

    bool DisplayConfig::operator != (const DisplayConfig& other) const
    {
        return !operator==(other);
    }
}
