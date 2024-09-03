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

#include <tencentcloud/car/v20220110/model/UserMobileApplicationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

UserMobileApplicationInfo::UserMobileApplicationInfo() :
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_applicationRunStatusHasBeenSet(false),
    m_applicationUpdateStatusHasBeenSet(false),
    m_applicationCreateTimeHasBeenSet(false),
    m_applicationVersionsHasBeenSet(false),
    m_applicationNatureHasBeenSet(false)
{
}

CoreInternalOutcome UserMobileApplicationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserMobileApplicationInfo.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserMobileApplicationInfo.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserMobileApplicationInfo.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationRunStatus") && !value["ApplicationRunStatus"].IsNull())
    {
        if (!value["ApplicationRunStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserMobileApplicationInfo.ApplicationRunStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationRunStatus = string(value["ApplicationRunStatus"].GetString());
        m_applicationRunStatusHasBeenSet = true;
    }

    if (value.HasMember("ApplicationUpdateStatus") && !value["ApplicationUpdateStatus"].IsNull())
    {
        if (!value["ApplicationUpdateStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserMobileApplicationInfo.ApplicationUpdateStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationUpdateStatus = string(value["ApplicationUpdateStatus"].GetString());
        m_applicationUpdateStatusHasBeenSet = true;
    }

    if (value.HasMember("ApplicationCreateTime") && !value["ApplicationCreateTime"].IsNull())
    {
        if (!value["ApplicationCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserMobileApplicationInfo.ApplicationCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationCreateTime = string(value["ApplicationCreateTime"].GetString());
        m_applicationCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationVersions") && !value["ApplicationVersions"].IsNull())
    {
        if (!value["ApplicationVersions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserMobileApplicationInfo.ApplicationVersions` is not array type"));

        const rapidjson::Value &tmpValue = value["ApplicationVersions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserApplicationVersion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_applicationVersions.push_back(item);
        }
        m_applicationVersionsHasBeenSet = true;
    }

    if (value.HasMember("ApplicationNature") && !value["ApplicationNature"].IsNull())
    {
        if (!value["ApplicationNature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserMobileApplicationInfo.ApplicationNature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationNature = string(value["ApplicationNature"].GetString());
        m_applicationNatureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserMobileApplicationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationRunStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationRunStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationRunStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationUpdateStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationUpdateStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationUpdateStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_applicationVersions.begin(); itr != m_applicationVersions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_applicationNatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationNature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationNature.c_str(), allocator).Move(), allocator);
    }

}


string UserMobileApplicationInfo::GetApplicationId() const
{
    return m_applicationId;
}

void UserMobileApplicationInfo::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool UserMobileApplicationInfo::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string UserMobileApplicationInfo::GetApplicationName() const
{
    return m_applicationName;
}

void UserMobileApplicationInfo::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool UserMobileApplicationInfo::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string UserMobileApplicationInfo::GetApplicationType() const
{
    return m_applicationType;
}

void UserMobileApplicationInfo::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool UserMobileApplicationInfo::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string UserMobileApplicationInfo::GetApplicationRunStatus() const
{
    return m_applicationRunStatus;
}

void UserMobileApplicationInfo::SetApplicationRunStatus(const string& _applicationRunStatus)
{
    m_applicationRunStatus = _applicationRunStatus;
    m_applicationRunStatusHasBeenSet = true;
}

bool UserMobileApplicationInfo::ApplicationRunStatusHasBeenSet() const
{
    return m_applicationRunStatusHasBeenSet;
}

string UserMobileApplicationInfo::GetApplicationUpdateStatus() const
{
    return m_applicationUpdateStatus;
}

void UserMobileApplicationInfo::SetApplicationUpdateStatus(const string& _applicationUpdateStatus)
{
    m_applicationUpdateStatus = _applicationUpdateStatus;
    m_applicationUpdateStatusHasBeenSet = true;
}

bool UserMobileApplicationInfo::ApplicationUpdateStatusHasBeenSet() const
{
    return m_applicationUpdateStatusHasBeenSet;
}

string UserMobileApplicationInfo::GetApplicationCreateTime() const
{
    return m_applicationCreateTime;
}

void UserMobileApplicationInfo::SetApplicationCreateTime(const string& _applicationCreateTime)
{
    m_applicationCreateTime = _applicationCreateTime;
    m_applicationCreateTimeHasBeenSet = true;
}

bool UserMobileApplicationInfo::ApplicationCreateTimeHasBeenSet() const
{
    return m_applicationCreateTimeHasBeenSet;
}

vector<UserApplicationVersion> UserMobileApplicationInfo::GetApplicationVersions() const
{
    return m_applicationVersions;
}

void UserMobileApplicationInfo::SetApplicationVersions(const vector<UserApplicationVersion>& _applicationVersions)
{
    m_applicationVersions = _applicationVersions;
    m_applicationVersionsHasBeenSet = true;
}

bool UserMobileApplicationInfo::ApplicationVersionsHasBeenSet() const
{
    return m_applicationVersionsHasBeenSet;
}

string UserMobileApplicationInfo::GetApplicationNature() const
{
    return m_applicationNature;
}

void UserMobileApplicationInfo::SetApplicationNature(const string& _applicationNature)
{
    m_applicationNature = _applicationNature;
    m_applicationNatureHasBeenSet = true;
}

bool UserMobileApplicationInfo::ApplicationNatureHasBeenSet() const
{
    return m_applicationNatureHasBeenSet;
}

