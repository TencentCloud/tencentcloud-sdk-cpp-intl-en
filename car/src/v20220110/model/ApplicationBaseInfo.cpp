/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/car/v20220110/model/ApplicationBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

ApplicationBaseInfo::ApplicationBaseInfo() :
    m_windowUseTypeHasBeenSet(false),
    m_windowNameHasBeenSet(false),
    m_windowClassNameHasBeenSet(false),
    m_windowCaptureModeHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WindowUseType") && !value["WindowUseType"].IsNull())
    {
        if (!value["WindowUseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationBaseInfo.WindowUseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_windowUseType = string(value["WindowUseType"].GetString());
        m_windowUseTypeHasBeenSet = true;
    }

    if (value.HasMember("WindowName") && !value["WindowName"].IsNull())
    {
        if (!value["WindowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationBaseInfo.WindowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_windowName = string(value["WindowName"].GetString());
        m_windowNameHasBeenSet = true;
    }

    if (value.HasMember("WindowClassName") && !value["WindowClassName"].IsNull())
    {
        if (!value["WindowClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationBaseInfo.WindowClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_windowClassName = string(value["WindowClassName"].GetString());
        m_windowClassNameHasBeenSet = true;
    }

    if (value.HasMember("WindowCaptureMode") && !value["WindowCaptureMode"].IsNull())
    {
        if (!value["WindowCaptureMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationBaseInfo.WindowCaptureMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_windowCaptureMode = string(value["WindowCaptureMode"].GetString());
        m_windowCaptureModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_windowUseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WindowUseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_windowUseType.c_str(), allocator).Move(), allocator);
    }

    if (m_windowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WindowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_windowName.c_str(), allocator).Move(), allocator);
    }

    if (m_windowClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WindowClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_windowClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_windowCaptureModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WindowCaptureMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_windowCaptureMode.c_str(), allocator).Move(), allocator);
    }

}


string ApplicationBaseInfo::GetWindowUseType() const
{
    return m_windowUseType;
}

void ApplicationBaseInfo::SetWindowUseType(const string& _windowUseType)
{
    m_windowUseType = _windowUseType;
    m_windowUseTypeHasBeenSet = true;
}

bool ApplicationBaseInfo::WindowUseTypeHasBeenSet() const
{
    return m_windowUseTypeHasBeenSet;
}

string ApplicationBaseInfo::GetWindowName() const
{
    return m_windowName;
}

void ApplicationBaseInfo::SetWindowName(const string& _windowName)
{
    m_windowName = _windowName;
    m_windowNameHasBeenSet = true;
}

bool ApplicationBaseInfo::WindowNameHasBeenSet() const
{
    return m_windowNameHasBeenSet;
}

string ApplicationBaseInfo::GetWindowClassName() const
{
    return m_windowClassName;
}

void ApplicationBaseInfo::SetWindowClassName(const string& _windowClassName)
{
    m_windowClassName = _windowClassName;
    m_windowClassNameHasBeenSet = true;
}

bool ApplicationBaseInfo::WindowClassNameHasBeenSet() const
{
    return m_windowClassNameHasBeenSet;
}

string ApplicationBaseInfo::GetWindowCaptureMode() const
{
    return m_windowCaptureMode;
}

void ApplicationBaseInfo::SetWindowCaptureMode(const string& _windowCaptureMode)
{
    m_windowCaptureMode = _windowCaptureMode;
    m_windowCaptureModeHasBeenSet = true;
}

bool ApplicationBaseInfo::WindowCaptureModeHasBeenSet() const
{
    return m_windowCaptureModeHasBeenSet;
}

