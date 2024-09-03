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

#include <tencentcloud/car/v20220110/model/UserApplicationVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

UserApplicationVersion::UserApplicationVersion() :
    m_applicationVersionIdHasBeenSet(false),
    m_applicationVersionSizeHasBeenSet(false),
    m_applicationVersionStatusHasBeenSet(false),
    m_applicationVersionNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_applicationVersionRegionsHasBeenSet(false),
    m_applicationVersionUpdateModeHasBeenSet(false)
{
}

CoreInternalOutcome UserApplicationVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationVersionId") && !value["ApplicationVersionId"].IsNull())
    {
        if (!value["ApplicationVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationVersion.ApplicationVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationVersionId = string(value["ApplicationVersionId"].GetString());
        m_applicationVersionIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationVersionSize") && !value["ApplicationVersionSize"].IsNull())
    {
        if (!value["ApplicationVersionSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationVersion.ApplicationVersionSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationVersionSize = value["ApplicationVersionSize"].GetInt64();
        m_applicationVersionSizeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationVersionStatus") && !value["ApplicationVersionStatus"].IsNull())
    {
        if (!value["ApplicationVersionStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationVersion.ApplicationVersionStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationVersionStatus = string(value["ApplicationVersionStatus"].GetString());
        m_applicationVersionStatusHasBeenSet = true;
    }

    if (value.HasMember("ApplicationVersionName") && !value["ApplicationVersionName"].IsNull())
    {
        if (!value["ApplicationVersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationVersion.ApplicationVersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationVersionName = string(value["ApplicationVersionName"].GetString());
        m_applicationVersionNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationVersion.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationVersionRegions") && !value["ApplicationVersionRegions"].IsNull())
    {
        if (!value["ApplicationVersionRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserApplicationVersion.ApplicationVersionRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["ApplicationVersionRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_applicationVersionRegions.push_back((*itr).GetString());
        }
        m_applicationVersionRegionsHasBeenSet = true;
    }

    if (value.HasMember("ApplicationVersionUpdateMode") && !value["ApplicationVersionUpdateMode"].IsNull())
    {
        if (!value["ApplicationVersionUpdateMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationVersion.ApplicationVersionUpdateMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationVersionUpdateMode = string(value["ApplicationVersionUpdateMode"].GetString());
        m_applicationVersionUpdateModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserApplicationVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationVersionSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationVersionSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationVersionSize, allocator);
    }

    if (m_applicationVersionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationVersionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationVersionStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationVersionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationVersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationVersionName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationVersionRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationVersionRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_applicationVersionRegions.begin(); itr != m_applicationVersionRegions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_applicationVersionUpdateModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationVersionUpdateMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationVersionUpdateMode.c_str(), allocator).Move(), allocator);
    }

}


string UserApplicationVersion::GetApplicationVersionId() const
{
    return m_applicationVersionId;
}

void UserApplicationVersion::SetApplicationVersionId(const string& _applicationVersionId)
{
    m_applicationVersionId = _applicationVersionId;
    m_applicationVersionIdHasBeenSet = true;
}

bool UserApplicationVersion::ApplicationVersionIdHasBeenSet() const
{
    return m_applicationVersionIdHasBeenSet;
}

int64_t UserApplicationVersion::GetApplicationVersionSize() const
{
    return m_applicationVersionSize;
}

void UserApplicationVersion::SetApplicationVersionSize(const int64_t& _applicationVersionSize)
{
    m_applicationVersionSize = _applicationVersionSize;
    m_applicationVersionSizeHasBeenSet = true;
}

bool UserApplicationVersion::ApplicationVersionSizeHasBeenSet() const
{
    return m_applicationVersionSizeHasBeenSet;
}

string UserApplicationVersion::GetApplicationVersionStatus() const
{
    return m_applicationVersionStatus;
}

void UserApplicationVersion::SetApplicationVersionStatus(const string& _applicationVersionStatus)
{
    m_applicationVersionStatus = _applicationVersionStatus;
    m_applicationVersionStatusHasBeenSet = true;
}

bool UserApplicationVersion::ApplicationVersionStatusHasBeenSet() const
{
    return m_applicationVersionStatusHasBeenSet;
}

string UserApplicationVersion::GetApplicationVersionName() const
{
    return m_applicationVersionName;
}

void UserApplicationVersion::SetApplicationVersionName(const string& _applicationVersionName)
{
    m_applicationVersionName = _applicationVersionName;
    m_applicationVersionNameHasBeenSet = true;
}

bool UserApplicationVersion::ApplicationVersionNameHasBeenSet() const
{
    return m_applicationVersionNameHasBeenSet;
}

string UserApplicationVersion::GetCreateTime() const
{
    return m_createTime;
}

void UserApplicationVersion::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UserApplicationVersion::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<string> UserApplicationVersion::GetApplicationVersionRegions() const
{
    return m_applicationVersionRegions;
}

void UserApplicationVersion::SetApplicationVersionRegions(const vector<string>& _applicationVersionRegions)
{
    m_applicationVersionRegions = _applicationVersionRegions;
    m_applicationVersionRegionsHasBeenSet = true;
}

bool UserApplicationVersion::ApplicationVersionRegionsHasBeenSet() const
{
    return m_applicationVersionRegionsHasBeenSet;
}

string UserApplicationVersion::GetApplicationVersionUpdateMode() const
{
    return m_applicationVersionUpdateMode;
}

void UserApplicationVersion::SetApplicationVersionUpdateMode(const string& _applicationVersionUpdateMode)
{
    m_applicationVersionUpdateMode = _applicationVersionUpdateMode;
    m_applicationVersionUpdateModeHasBeenSet = true;
}

bool UserApplicationVersion::ApplicationVersionUpdateModeHasBeenSet() const
{
    return m_applicationVersionUpdateModeHasBeenSet;
}

