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

#include <tencentcloud/tcmpp/v20240801/model/ApplicationSimpleInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

ApplicationSimpleInfoResp::ApplicationSimpleInfoResp() :
    m_applicationIDHasBeenSet(false),
    m_appIdentityIDHasBeenSet(false),
    m_applicationNameHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationSimpleInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationID") && !value["ApplicationID"].IsNull())
    {
        if (!value["ApplicationID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationSimpleInfoResp.ApplicationID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationID = string(value["ApplicationID"].GetString());
        m_applicationIDHasBeenSet = true;
    }

    if (value.HasMember("AppIdentityID") && !value["AppIdentityID"].IsNull())
    {
        if (!value["AppIdentityID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationSimpleInfoResp.AppIdentityID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appIdentityID = value["AppIdentityID"].GetInt64();
        m_appIdentityIDHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationSimpleInfoResp.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationSimpleInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationID.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdentityIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIdentityID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appIdentityID, allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

}


string ApplicationSimpleInfoResp::GetApplicationID() const
{
    return m_applicationID;
}

void ApplicationSimpleInfoResp::SetApplicationID(const string& _applicationID)
{
    m_applicationID = _applicationID;
    m_applicationIDHasBeenSet = true;
}

bool ApplicationSimpleInfoResp::ApplicationIDHasBeenSet() const
{
    return m_applicationIDHasBeenSet;
}

int64_t ApplicationSimpleInfoResp::GetAppIdentityID() const
{
    return m_appIdentityID;
}

void ApplicationSimpleInfoResp::SetAppIdentityID(const int64_t& _appIdentityID)
{
    m_appIdentityID = _appIdentityID;
    m_appIdentityIDHasBeenSet = true;
}

bool ApplicationSimpleInfoResp::AppIdentityIDHasBeenSet() const
{
    return m_appIdentityIDHasBeenSet;
}

string ApplicationSimpleInfoResp::GetApplicationName() const
{
    return m_applicationName;
}

void ApplicationSimpleInfoResp::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ApplicationSimpleInfoResp::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

