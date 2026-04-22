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

#include <tencentcloud/tcsas/v20250106/model/ModifyApplicationConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

ModifyApplicationConfigRequest::ModifyApplicationConfigRequest() :
    m_applicationIdHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_appURLHasBeenSet(false)
{
}

string ModifyApplicationConfigRequest::ToJsonString() const
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
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


string ModifyApplicationConfigRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ModifyApplicationConfigRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ModifyApplicationConfigRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ModifyApplicationConfigRequest::GetPlatformId() const
{
    return m_platformId;
}

void ModifyApplicationConfigRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool ModifyApplicationConfigRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

int64_t ModifyApplicationConfigRequest::GetId() const
{
    return m_id;
}

void ModifyApplicationConfigRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyApplicationConfigRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyApplicationConfigRequest::GetAppKey() const
{
    return m_appKey;
}

void ModifyApplicationConfigRequest::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool ModifyApplicationConfigRequest::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string ModifyApplicationConfigRequest::GetAppURL() const
{
    return m_appURL;
}

void ModifyApplicationConfigRequest::SetAppURL(const string& _appURL)
{
    m_appURL = _appURL;
    m_appURLHasBeenSet = true;
}

bool ModifyApplicationConfigRequest::AppURLHasBeenSet() const
{
    return m_appURLHasBeenSet;
}


