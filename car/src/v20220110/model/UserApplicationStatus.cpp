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

#include <tencentcloud/car/v20220110/model/UserApplicationStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

UserApplicationStatus::UserApplicationStatus() :
    m_applicationIdHasBeenSet(false),
    m_applicationRunStatusHasBeenSet(false),
    m_applicationUpdateStatusHasBeenSet(false),
    m_applicationUpdateProgressHasBeenSet(false)
{
}

CoreInternalOutcome UserApplicationStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationStatus.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationRunStatus") && !value["ApplicationRunStatus"].IsNull())
    {
        if (!value["ApplicationRunStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationStatus.ApplicationRunStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationRunStatus = string(value["ApplicationRunStatus"].GetString());
        m_applicationRunStatusHasBeenSet = true;
    }

    if (value.HasMember("ApplicationUpdateStatus") && !value["ApplicationUpdateStatus"].IsNull())
    {
        if (!value["ApplicationUpdateStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationStatus.ApplicationUpdateStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationUpdateStatus = string(value["ApplicationUpdateStatus"].GetString());
        m_applicationUpdateStatusHasBeenSet = true;
    }

    if (value.HasMember("ApplicationUpdateProgress") && !value["ApplicationUpdateProgress"].IsNull())
    {
        if (!value["ApplicationUpdateProgress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationStatus.ApplicationUpdateProgress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationUpdateProgress = value["ApplicationUpdateProgress"].GetInt64();
        m_applicationUpdateProgressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserApplicationStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
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

    if (m_applicationUpdateProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationUpdateProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationUpdateProgress, allocator);
    }

}


string UserApplicationStatus::GetApplicationId() const
{
    return m_applicationId;
}

void UserApplicationStatus::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool UserApplicationStatus::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string UserApplicationStatus::GetApplicationRunStatus() const
{
    return m_applicationRunStatus;
}

void UserApplicationStatus::SetApplicationRunStatus(const string& _applicationRunStatus)
{
    m_applicationRunStatus = _applicationRunStatus;
    m_applicationRunStatusHasBeenSet = true;
}

bool UserApplicationStatus::ApplicationRunStatusHasBeenSet() const
{
    return m_applicationRunStatusHasBeenSet;
}

string UserApplicationStatus::GetApplicationUpdateStatus() const
{
    return m_applicationUpdateStatus;
}

void UserApplicationStatus::SetApplicationUpdateStatus(const string& _applicationUpdateStatus)
{
    m_applicationUpdateStatus = _applicationUpdateStatus;
    m_applicationUpdateStatusHasBeenSet = true;
}

bool UserApplicationStatus::ApplicationUpdateStatusHasBeenSet() const
{
    return m_applicationUpdateStatusHasBeenSet;
}

int64_t UserApplicationStatus::GetApplicationUpdateProgress() const
{
    return m_applicationUpdateProgress;
}

void UserApplicationStatus::SetApplicationUpdateProgress(const int64_t& _applicationUpdateProgress)
{
    m_applicationUpdateProgress = _applicationUpdateProgress;
    m_applicationUpdateProgressHasBeenSet = true;
}

bool UserApplicationStatus::ApplicationUpdateProgressHasBeenSet() const
{
    return m_applicationUpdateProgressHasBeenSet;
}

