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

#include <tencentcloud/dlc/v20210125/model/DescribeJobResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeJobResponse::DescribeJobResponse() :
    m_jobNameHasBeenSet(false),
    m_statisticInfoHasBeenSet(false),
    m_jobConfigurationHasBeenSet(false),
    m_jobStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeJobResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("JobName") && !rsp["JobName"].IsNull())
    {
        if (!rsp["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(rsp["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (rsp.HasMember("StatisticInfo") && !rsp["StatisticInfo"].IsNull())
    {
        if (!rsp["StatisticInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_statisticInfo.Deserialize(rsp["StatisticInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statisticInfoHasBeenSet = true;
    }

    if (rsp.HasMember("JobConfiguration") && !rsp["JobConfiguration"].IsNull())
    {
        if (!rsp["JobConfiguration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobConfiguration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobConfiguration = string(rsp["JobConfiguration"].GetString());
        m_jobConfigurationHasBeenSet = true;
    }

    if (rsp.HasMember("JobStatus") && !rsp["JobStatus"].IsNull())
    {
        if (!rsp["JobStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobStatus = rsp["JobStatus"].GetInt64();
        m_jobStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeJobResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeJobResponse::GetJobName() const
{
    return m_jobName;
}

bool DescribeJobResponse::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

StatisticInfo DescribeJobResponse::GetStatisticInfo() const
{
    return m_statisticInfo;
}

bool DescribeJobResponse::StatisticInfoHasBeenSet() const
{
    return m_statisticInfoHasBeenSet;
}

string DescribeJobResponse::GetJobConfiguration() const
{
    return m_jobConfiguration;
}

bool DescribeJobResponse::JobConfigurationHasBeenSet() const
{
    return m_jobConfigurationHasBeenSet;
}

int64_t DescribeJobResponse::GetJobStatus() const
{
    return m_jobStatus;
}

bool DescribeJobResponse::JobStatusHasBeenSet() const
{
    return m_jobStatusHasBeenSet;
}


