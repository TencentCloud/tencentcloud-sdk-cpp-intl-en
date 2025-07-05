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

#include <tencentcloud/tcmpp/v20240801/model/ModifyApplicationAppUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

ModifyApplicationAppUrlRequest::ModifyApplicationAppUrlRequest() :
    m_applicationIdHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_androidAppURLHasBeenSet(false),
    m_iOSAppURLHasBeenSet(false)
{
}

string ModifyApplicationAppUrlRequest::ToJsonString() const
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

    if (m_androidAppURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_androidAppURL.c_str(), allocator).Move(), allocator);
    }

    if (m_iOSAppURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IOSAppURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iOSAppURL.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApplicationAppUrlRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ModifyApplicationAppUrlRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ModifyApplicationAppUrlRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ModifyApplicationAppUrlRequest::GetPlatformId() const
{
    return m_platformId;
}

void ModifyApplicationAppUrlRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool ModifyApplicationAppUrlRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string ModifyApplicationAppUrlRequest::GetAndroidAppURL() const
{
    return m_androidAppURL;
}

void ModifyApplicationAppUrlRequest::SetAndroidAppURL(const string& _androidAppURL)
{
    m_androidAppURL = _androidAppURL;
    m_androidAppURLHasBeenSet = true;
}

bool ModifyApplicationAppUrlRequest::AndroidAppURLHasBeenSet() const
{
    return m_androidAppURLHasBeenSet;
}

string ModifyApplicationAppUrlRequest::GetIOSAppURL() const
{
    return m_iOSAppURL;
}

void ModifyApplicationAppUrlRequest::SetIOSAppURL(const string& _iOSAppURL)
{
    m_iOSAppURL = _iOSAppURL;
    m_iOSAppURLHasBeenSet = true;
}

bool ModifyApplicationAppUrlRequest::IOSAppURLHasBeenSet() const
{
    return m_iOSAppURLHasBeenSet;
}


