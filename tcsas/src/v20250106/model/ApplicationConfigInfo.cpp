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

#include <tencentcloud/tcsas/v20250106/model/ApplicationConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

ApplicationConfigInfo::ApplicationConfigInfo() :
    m_applicationTypeHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_appURLHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationConfigInfo.ApplicationType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = value["ApplicationType"].GetInt64();
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("AppKey") && !value["AppKey"].IsNull())
    {
        if (!value["AppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationConfigInfo.AppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appKey = string(value["AppKey"].GetString());
        m_appKeyHasBeenSet = true;
    }

    if (value.HasMember("AppURL") && !value["AppURL"].IsNull())
    {
        if (!value["AppURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationConfigInfo.AppURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appURL = string(value["AppURL"].GetString());
        m_appURLHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationConfigInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationType, allocator);
    }

    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_appURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appURL.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

}


int64_t ApplicationConfigInfo::GetApplicationType() const
{
    return m_applicationType;
}

void ApplicationConfigInfo::SetApplicationType(const int64_t& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool ApplicationConfigInfo::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string ApplicationConfigInfo::GetAppKey() const
{
    return m_appKey;
}

void ApplicationConfigInfo::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool ApplicationConfigInfo::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string ApplicationConfigInfo::GetAppURL() const
{
    return m_appURL;
}

void ApplicationConfigInfo::SetAppURL(const string& _appURL)
{
    m_appURL = _appURL;
    m_appURLHasBeenSet = true;
}

bool ApplicationConfigInfo::AppURLHasBeenSet() const
{
    return m_appURLHasBeenSet;
}

int64_t ApplicationConfigInfo::GetId() const
{
    return m_id;
}

void ApplicationConfigInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ApplicationConfigInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

