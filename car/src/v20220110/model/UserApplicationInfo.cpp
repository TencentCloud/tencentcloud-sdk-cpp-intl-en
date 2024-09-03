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

#include <tencentcloud/car/v20220110/model/UserApplicationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

UserApplicationInfo::UserApplicationInfo() :
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_applicationExePathHasBeenSet(false),
    m_applicationInterListHasBeenSet(false),
    m_applicationParamsHasBeenSet(false),
    m_applicationRunStatusHasBeenSet(false),
    m_applicationUpdateStatusHasBeenSet(false),
    m_applicationCreateTimeHasBeenSet(false),
    m_applicationVersionsHasBeenSet(false),
    m_applicationBaseInfoHasBeenSet(false),
    m_applicationUpdateProgressHasBeenSet(false),
    m_applicationNatureHasBeenSet(false),
    m_applicationStoresHasBeenSet(false)
{
}

CoreInternalOutcome UserApplicationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationInfo.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationInfo.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationInfo.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationExePath") && !value["ApplicationExePath"].IsNull())
    {
        if (!value["ApplicationExePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationInfo.ApplicationExePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationExePath = string(value["ApplicationExePath"].GetString());
        m_applicationExePathHasBeenSet = true;
    }

    if (value.HasMember("ApplicationInterList") && !value["ApplicationInterList"].IsNull())
    {
        if (!value["ApplicationInterList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationInfo.ApplicationInterList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationInterList = string(value["ApplicationInterList"].GetString());
        m_applicationInterListHasBeenSet = true;
    }

    if (value.HasMember("ApplicationParams") && !value["ApplicationParams"].IsNull())
    {
        if (!value["ApplicationParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationInfo.ApplicationParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationParams = string(value["ApplicationParams"].GetString());
        m_applicationParamsHasBeenSet = true;
    }

    if (value.HasMember("ApplicationRunStatus") && !value["ApplicationRunStatus"].IsNull())
    {
        if (!value["ApplicationRunStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationInfo.ApplicationRunStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationRunStatus = string(value["ApplicationRunStatus"].GetString());
        m_applicationRunStatusHasBeenSet = true;
    }

    if (value.HasMember("ApplicationUpdateStatus") && !value["ApplicationUpdateStatus"].IsNull())
    {
        if (!value["ApplicationUpdateStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationInfo.ApplicationUpdateStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationUpdateStatus = string(value["ApplicationUpdateStatus"].GetString());
        m_applicationUpdateStatusHasBeenSet = true;
    }

    if (value.HasMember("ApplicationCreateTime") && !value["ApplicationCreateTime"].IsNull())
    {
        if (!value["ApplicationCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationInfo.ApplicationCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationCreateTime = string(value["ApplicationCreateTime"].GetString());
        m_applicationCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationVersions") && !value["ApplicationVersions"].IsNull())
    {
        if (!value["ApplicationVersions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserApplicationInfo.ApplicationVersions` is not array type"));

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

    if (value.HasMember("ApplicationBaseInfo") && !value["ApplicationBaseInfo"].IsNull())
    {
        if (!value["ApplicationBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationInfo.ApplicationBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_applicationBaseInfo.Deserialize(value["ApplicationBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_applicationBaseInfoHasBeenSet = true;
    }

    if (value.HasMember("ApplicationUpdateProgress") && !value["ApplicationUpdateProgress"].IsNull())
    {
        if (!value["ApplicationUpdateProgress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationInfo.ApplicationUpdateProgress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationUpdateProgress = value["ApplicationUpdateProgress"].GetInt64();
        m_applicationUpdateProgressHasBeenSet = true;
    }

    if (value.HasMember("ApplicationNature") && !value["ApplicationNature"].IsNull())
    {
        if (!value["ApplicationNature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationInfo.ApplicationNature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationNature = string(value["ApplicationNature"].GetString());
        m_applicationNatureHasBeenSet = true;
    }

    if (value.HasMember("ApplicationStores") && !value["ApplicationStores"].IsNull())
    {
        if (!value["ApplicationStores"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserApplicationInfo.ApplicationStores` is not array type"));

        const rapidjson::Value &tmpValue = value["ApplicationStores"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserApplicationStore item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_applicationStores.push_back(item);
        }
        m_applicationStoresHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserApplicationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_applicationExePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationExePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationExePath.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationInterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationInterList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationInterList.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationParams.c_str(), allocator).Move(), allocator);
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

    if (m_applicationBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_applicationBaseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_applicationUpdateProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationUpdateProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationUpdateProgress, allocator);
    }

    if (m_applicationNatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationNature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationNature.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationStoresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationStores";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_applicationStores.begin(); itr != m_applicationStores.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string UserApplicationInfo::GetApplicationId() const
{
    return m_applicationId;
}

void UserApplicationInfo::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool UserApplicationInfo::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string UserApplicationInfo::GetApplicationName() const
{
    return m_applicationName;
}

void UserApplicationInfo::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool UserApplicationInfo::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string UserApplicationInfo::GetApplicationType() const
{
    return m_applicationType;
}

void UserApplicationInfo::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool UserApplicationInfo::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string UserApplicationInfo::GetApplicationExePath() const
{
    return m_applicationExePath;
}

void UserApplicationInfo::SetApplicationExePath(const string& _applicationExePath)
{
    m_applicationExePath = _applicationExePath;
    m_applicationExePathHasBeenSet = true;
}

bool UserApplicationInfo::ApplicationExePathHasBeenSet() const
{
    return m_applicationExePathHasBeenSet;
}

string UserApplicationInfo::GetApplicationInterList() const
{
    return m_applicationInterList;
}

void UserApplicationInfo::SetApplicationInterList(const string& _applicationInterList)
{
    m_applicationInterList = _applicationInterList;
    m_applicationInterListHasBeenSet = true;
}

bool UserApplicationInfo::ApplicationInterListHasBeenSet() const
{
    return m_applicationInterListHasBeenSet;
}

string UserApplicationInfo::GetApplicationParams() const
{
    return m_applicationParams;
}

void UserApplicationInfo::SetApplicationParams(const string& _applicationParams)
{
    m_applicationParams = _applicationParams;
    m_applicationParamsHasBeenSet = true;
}

bool UserApplicationInfo::ApplicationParamsHasBeenSet() const
{
    return m_applicationParamsHasBeenSet;
}

string UserApplicationInfo::GetApplicationRunStatus() const
{
    return m_applicationRunStatus;
}

void UserApplicationInfo::SetApplicationRunStatus(const string& _applicationRunStatus)
{
    m_applicationRunStatus = _applicationRunStatus;
    m_applicationRunStatusHasBeenSet = true;
}

bool UserApplicationInfo::ApplicationRunStatusHasBeenSet() const
{
    return m_applicationRunStatusHasBeenSet;
}

string UserApplicationInfo::GetApplicationUpdateStatus() const
{
    return m_applicationUpdateStatus;
}

void UserApplicationInfo::SetApplicationUpdateStatus(const string& _applicationUpdateStatus)
{
    m_applicationUpdateStatus = _applicationUpdateStatus;
    m_applicationUpdateStatusHasBeenSet = true;
}

bool UserApplicationInfo::ApplicationUpdateStatusHasBeenSet() const
{
    return m_applicationUpdateStatusHasBeenSet;
}

string UserApplicationInfo::GetApplicationCreateTime() const
{
    return m_applicationCreateTime;
}

void UserApplicationInfo::SetApplicationCreateTime(const string& _applicationCreateTime)
{
    m_applicationCreateTime = _applicationCreateTime;
    m_applicationCreateTimeHasBeenSet = true;
}

bool UserApplicationInfo::ApplicationCreateTimeHasBeenSet() const
{
    return m_applicationCreateTimeHasBeenSet;
}

vector<UserApplicationVersion> UserApplicationInfo::GetApplicationVersions() const
{
    return m_applicationVersions;
}

void UserApplicationInfo::SetApplicationVersions(const vector<UserApplicationVersion>& _applicationVersions)
{
    m_applicationVersions = _applicationVersions;
    m_applicationVersionsHasBeenSet = true;
}

bool UserApplicationInfo::ApplicationVersionsHasBeenSet() const
{
    return m_applicationVersionsHasBeenSet;
}

ApplicationBaseInfo UserApplicationInfo::GetApplicationBaseInfo() const
{
    return m_applicationBaseInfo;
}

void UserApplicationInfo::SetApplicationBaseInfo(const ApplicationBaseInfo& _applicationBaseInfo)
{
    m_applicationBaseInfo = _applicationBaseInfo;
    m_applicationBaseInfoHasBeenSet = true;
}

bool UserApplicationInfo::ApplicationBaseInfoHasBeenSet() const
{
    return m_applicationBaseInfoHasBeenSet;
}

int64_t UserApplicationInfo::GetApplicationUpdateProgress() const
{
    return m_applicationUpdateProgress;
}

void UserApplicationInfo::SetApplicationUpdateProgress(const int64_t& _applicationUpdateProgress)
{
    m_applicationUpdateProgress = _applicationUpdateProgress;
    m_applicationUpdateProgressHasBeenSet = true;
}

bool UserApplicationInfo::ApplicationUpdateProgressHasBeenSet() const
{
    return m_applicationUpdateProgressHasBeenSet;
}

string UserApplicationInfo::GetApplicationNature() const
{
    return m_applicationNature;
}

void UserApplicationInfo::SetApplicationNature(const string& _applicationNature)
{
    m_applicationNature = _applicationNature;
    m_applicationNatureHasBeenSet = true;
}

bool UserApplicationInfo::ApplicationNatureHasBeenSet() const
{
    return m_applicationNatureHasBeenSet;
}

vector<UserApplicationStore> UserApplicationInfo::GetApplicationStores() const
{
    return m_applicationStores;
}

void UserApplicationInfo::SetApplicationStores(const vector<UserApplicationStore>& _applicationStores)
{
    m_applicationStores = _applicationStores;
    m_applicationStoresHasBeenSet = true;
}

bool UserApplicationInfo::ApplicationStoresHasBeenSet() const
{
    return m_applicationStoresHasBeenSet;
}

