/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcsas/v20250106/model/ModifyApplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

ModifyApplicationRequest::ModifyApplicationRequest() :
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_introHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_androidAppKeyHasBeenSet(false),
    m_iosAppKeyHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyApplicationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_introHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Intro";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_intro.c_str(), allocator).Move(), allocator);
    }

    if (m_logoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logo.c_str(), allocator).Move(), allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_androidAppKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_androidAppKey.c_str(), allocator).Move(), allocator);
    }

    if (m_iosAppKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IosAppKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iosAppKey.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApplicationRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ModifyApplicationRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ModifyApplicationRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ModifyApplicationRequest::GetApplicationName() const
{
    return m_applicationName;
}

void ModifyApplicationRequest::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ModifyApplicationRequest::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string ModifyApplicationRequest::GetIntro() const
{
    return m_intro;
}

void ModifyApplicationRequest::SetIntro(const string& _intro)
{
    m_intro = _intro;
    m_introHasBeenSet = true;
}

bool ModifyApplicationRequest::IntroHasBeenSet() const
{
    return m_introHasBeenSet;
}

string ModifyApplicationRequest::GetLogo() const
{
    return m_logo;
}

void ModifyApplicationRequest::SetLogo(const string& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool ModifyApplicationRequest::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

string ModifyApplicationRequest::GetPlatformId() const
{
    return m_platformId;
}

void ModifyApplicationRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool ModifyApplicationRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string ModifyApplicationRequest::GetAndroidAppKey() const
{
    return m_androidAppKey;
}

void ModifyApplicationRequest::SetAndroidAppKey(const string& _androidAppKey)
{
    m_androidAppKey = _androidAppKey;
    m_androidAppKeyHasBeenSet = true;
}

bool ModifyApplicationRequest::AndroidAppKeyHasBeenSet() const
{
    return m_androidAppKeyHasBeenSet;
}

string ModifyApplicationRequest::GetIosAppKey() const
{
    return m_iosAppKey;
}

void ModifyApplicationRequest::SetIosAppKey(const string& _iosAppKey)
{
    m_iosAppKey = _iosAppKey;
    m_iosAppKeyHasBeenSet = true;
}

bool ModifyApplicationRequest::IosAppKeyHasBeenSet() const
{
    return m_iosAppKeyHasBeenSet;
}

string ModifyApplicationRequest::GetRemark() const
{
    return m_remark;
}

void ModifyApplicationRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyApplicationRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


