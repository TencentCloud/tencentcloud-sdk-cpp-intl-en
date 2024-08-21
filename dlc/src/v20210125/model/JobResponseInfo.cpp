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

#include <tencentcloud/dlc/v20210125/model/JobResponseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

JobResponseInfo::JobResponseInfo() :
    m_jobNameHasBeenSet(false),
    m_statisticInfoHasBeenSet(false),
    m_jobConfigurationHasBeenSet(false),
    m_jobStatusHasBeenSet(false)
{
}

CoreInternalOutcome JobResponseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobResponseInfo.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("StatisticInfo") && !value["StatisticInfo"].IsNull())
    {
        if (!value["StatisticInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JobResponseInfo.StatisticInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_statisticInfo.Deserialize(value["StatisticInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statisticInfoHasBeenSet = true;
    }

    if (value.HasMember("JobConfiguration") && !value["JobConfiguration"].IsNull())
    {
        if (!value["JobConfiguration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobResponseInfo.JobConfiguration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobConfiguration = string(value["JobConfiguration"].GetString());
        m_jobConfigurationHasBeenSet = true;
    }

    if (value.HasMember("JobStatus") && !value["JobStatus"].IsNull())
    {
        if (!value["JobStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobResponseInfo.JobStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobStatus = value["JobStatus"].GetInt64();
        m_jobStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobResponseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_statisticInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_statisticInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_jobConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobConfiguration.c_str(), allocator).Move(), allocator);
    }

    if (m_jobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobStatus, allocator);
    }

}


string JobResponseInfo::GetJobName() const
{
    return m_jobName;
}

void JobResponseInfo::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool JobResponseInfo::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

StatisticInfo JobResponseInfo::GetStatisticInfo() const
{
    return m_statisticInfo;
}

void JobResponseInfo::SetStatisticInfo(const StatisticInfo& _statisticInfo)
{
    m_statisticInfo = _statisticInfo;
    m_statisticInfoHasBeenSet = true;
}

bool JobResponseInfo::StatisticInfoHasBeenSet() const
{
    return m_statisticInfoHasBeenSet;
}

string JobResponseInfo::GetJobConfiguration() const
{
    return m_jobConfiguration;
}

void JobResponseInfo::SetJobConfiguration(const string& _jobConfiguration)
{
    m_jobConfiguration = _jobConfiguration;
    m_jobConfigurationHasBeenSet = true;
}

bool JobResponseInfo::JobConfigurationHasBeenSet() const
{
    return m_jobConfigurationHasBeenSet;
}

int64_t JobResponseInfo::GetJobStatus() const
{
    return m_jobStatus;
}

void JobResponseInfo::SetJobStatus(const int64_t& _jobStatus)
{
    m_jobStatus = _jobStatus;
    m_jobStatusHasBeenSet = true;
}

bool JobResponseInfo::JobStatusHasBeenSet() const
{
    return m_jobStatusHasBeenSet;
}

