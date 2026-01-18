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

#include <tencentcloud/tcsas/v20250106/model/CreateApplicationConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

CreateApplicationConfigRequest::CreateApplicationConfigRequest() :
    m_applicationIdHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_applicationPlatformTypeHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_appURLHasBeenSet(false)
{
}

string CreateApplicationConfigRequest::ToJsonString() const
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

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applicationType, allocator);
    }

    if (m_applicationPlatformTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationPlatformType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applicationPlatformType, allocator);
    }

    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_appURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appURL.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateApplicationConfigRequest::GetApplicationId() const
{
    return m_applicationId;
}

void CreateApplicationConfigRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool CreateApplicationConfigRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string CreateApplicationConfigRequest::GetPlatformId() const
{
    return m_platformId;
}

void CreateApplicationConfigRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool CreateApplicationConfigRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

int64_t CreateApplicationConfigRequest::GetApplicationType() const
{
    return m_applicationType;
}

void CreateApplicationConfigRequest::SetApplicationType(const int64_t& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool CreateApplicationConfigRequest::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

int64_t CreateApplicationConfigRequest::GetApplicationPlatformType() const
{
    return m_applicationPlatformType;
}

void CreateApplicationConfigRequest::SetApplicationPlatformType(const int64_t& _applicationPlatformType)
{
    m_applicationPlatformType = _applicationPlatformType;
    m_applicationPlatformTypeHasBeenSet = true;
}

bool CreateApplicationConfigRequest::ApplicationPlatformTypeHasBeenSet() const
{
    return m_applicationPlatformTypeHasBeenSet;
}

string CreateApplicationConfigRequest::GetAppKey() const
{
    return m_appKey;
}

void CreateApplicationConfigRequest::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool CreateApplicationConfigRequest::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string CreateApplicationConfigRequest::GetAppURL() const
{
    return m_appURL;
}

void CreateApplicationConfigRequest::SetAppURL(const string& _appURL)
{
    m_appURL = _appURL;
    m_appURLHasBeenSet = true;
}

bool CreateApplicationConfigRequest::AppURLHasBeenSet() const
{
    return m_appURLHasBeenSet;
}


