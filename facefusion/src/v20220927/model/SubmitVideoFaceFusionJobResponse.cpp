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

#include <tencentcloud/facefusion/v20220927/model/SubmitVideoFaceFusionJobResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Facefusion::V20220927::Model;
using namespace std;

SubmitVideoFaceFusionJobResponse::SubmitVideoFaceFusionJobResponse() :
    m_jobIdHasBeenSet(false),
    m_estimatedProcessTimeHasBeenSet(false),
    m_jobQueueLengthHasBeenSet(false),
    m_reviewResultSetHasBeenSet(false)
{
}

CoreInternalOutcome SubmitVideoFaceFusionJobResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("JobId") && !rsp["JobId"].IsNull())
    {
        if (!rsp["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(rsp["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (rsp.HasMember("EstimatedProcessTime") && !rsp["EstimatedProcessTime"].IsNull())
    {
        if (!rsp["EstimatedProcessTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `EstimatedProcessTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedProcessTime = rsp["EstimatedProcessTime"].GetDouble();
        m_estimatedProcessTimeHasBeenSet = true;
    }

    if (rsp.HasMember("JobQueueLength") && !rsp["JobQueueLength"].IsNull())
    {
        if (!rsp["JobQueueLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobQueueLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobQueueLength = rsp["JobQueueLength"].GetInt64();
        m_jobQueueLengthHasBeenSet = true;
    }

    if (rsp.HasMember("ReviewResultSet") && !rsp["ReviewResultSet"].IsNull())
    {
        if (!rsp["ReviewResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReviewResultSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ReviewResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FuseFaceReviewResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_reviewResultSet.push_back(item);
        }
        m_reviewResultSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string SubmitVideoFaceFusionJobResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_estimatedProcessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedProcessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_estimatedProcessTime, allocator);
    }

    if (m_jobQueueLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobQueueLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobQueueLength, allocator);
    }

    if (m_reviewResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_reviewResultSet.begin(); itr != m_reviewResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string SubmitVideoFaceFusionJobResponse::GetJobId() const
{
    return m_jobId;
}

bool SubmitVideoFaceFusionJobResponse::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

double SubmitVideoFaceFusionJobResponse::GetEstimatedProcessTime() const
{
    return m_estimatedProcessTime;
}

bool SubmitVideoFaceFusionJobResponse::EstimatedProcessTimeHasBeenSet() const
{
    return m_estimatedProcessTimeHasBeenSet;
}

int64_t SubmitVideoFaceFusionJobResponse::GetJobQueueLength() const
{
    return m_jobQueueLength;
}

bool SubmitVideoFaceFusionJobResponse::JobQueueLengthHasBeenSet() const
{
    return m_jobQueueLengthHasBeenSet;
}

vector<FuseFaceReviewResult> SubmitVideoFaceFusionJobResponse::GetReviewResultSet() const
{
    return m_reviewResultSet;
}

bool SubmitVideoFaceFusionJobResponse::ReviewResultSetHasBeenSet() const
{
    return m_reviewResultSetHasBeenSet;
}


