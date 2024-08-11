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

#include <tencentcloud/tcmpp/v20240801/model/ShowCaseRelAppInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

ShowCaseRelAppInfo::ShowCaseRelAppInfo() :
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationAndUrlHasBeenSet(false),
    m_applicationIOSUrlHasBeenSet(false),
    m_applicationIconHasBeenSet(false)
{
}

CoreInternalOutcome ShowCaseRelAppInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShowCaseRelAppInfo.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShowCaseRelAppInfo.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationAndUrl") && !value["ApplicationAndUrl"].IsNull())
    {
        if (!value["ApplicationAndUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShowCaseRelAppInfo.ApplicationAndUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationAndUrl = string(value["ApplicationAndUrl"].GetString());
        m_applicationAndUrlHasBeenSet = true;
    }

    if (value.HasMember("ApplicationIOSUrl") && !value["ApplicationIOSUrl"].IsNull())
    {
        if (!value["ApplicationIOSUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShowCaseRelAppInfo.ApplicationIOSUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationIOSUrl = string(value["ApplicationIOSUrl"].GetString());
        m_applicationIOSUrlHasBeenSet = true;
    }

    if (value.HasMember("ApplicationIcon") && !value["ApplicationIcon"].IsNull())
    {
        if (!value["ApplicationIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShowCaseRelAppInfo.ApplicationIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationIcon = string(value["ApplicationIcon"].GetString());
        m_applicationIconHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShowCaseRelAppInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationAndUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationAndUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationAndUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIOSUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationIOSUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationIOSUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationIcon.c_str(), allocator).Move(), allocator);
    }

}


string ShowCaseRelAppInfo::GetApplicationId() const
{
    return m_applicationId;
}

void ShowCaseRelAppInfo::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ShowCaseRelAppInfo::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ShowCaseRelAppInfo::GetApplicationName() const
{
    return m_applicationName;
}

void ShowCaseRelAppInfo::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ShowCaseRelAppInfo::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string ShowCaseRelAppInfo::GetApplicationAndUrl() const
{
    return m_applicationAndUrl;
}

void ShowCaseRelAppInfo::SetApplicationAndUrl(const string& _applicationAndUrl)
{
    m_applicationAndUrl = _applicationAndUrl;
    m_applicationAndUrlHasBeenSet = true;
}

bool ShowCaseRelAppInfo::ApplicationAndUrlHasBeenSet() const
{
    return m_applicationAndUrlHasBeenSet;
}

string ShowCaseRelAppInfo::GetApplicationIOSUrl() const
{
    return m_applicationIOSUrl;
}

void ShowCaseRelAppInfo::SetApplicationIOSUrl(const string& _applicationIOSUrl)
{
    m_applicationIOSUrl = _applicationIOSUrl;
    m_applicationIOSUrlHasBeenSet = true;
}

bool ShowCaseRelAppInfo::ApplicationIOSUrlHasBeenSet() const
{
    return m_applicationIOSUrlHasBeenSet;
}

string ShowCaseRelAppInfo::GetApplicationIcon() const
{
    return m_applicationIcon;
}

void ShowCaseRelAppInfo::SetApplicationIcon(const string& _applicationIcon)
{
    m_applicationIcon = _applicationIcon;
    m_applicationIconHasBeenSet = true;
}

bool ShowCaseRelAppInfo::ApplicationIconHasBeenSet() const
{
    return m_applicationIconHasBeenSet;
}

