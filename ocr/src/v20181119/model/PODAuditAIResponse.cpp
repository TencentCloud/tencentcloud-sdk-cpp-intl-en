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

#include <tencentcloud/ocr/v20181119/model/PODAuditAIResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

PODAuditAIResponse::PODAuditAIResponse() :
    m_auditorDecisionHasBeenSet(false),
    m_failCodeHasBeenSet(false),
    m_resultAnalysisHasBeenSet(false),
    m_analyzedLogsHasBeenSet(false)
{
}

CoreInternalOutcome PODAuditAIResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AuditorDecision") && !rsp["AuditorDecision"].IsNull())
    {
        if (!rsp["AuditorDecision"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditorDecision` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditorDecision = rsp["AuditorDecision"].GetInt64();
        m_auditorDecisionHasBeenSet = true;
    }

    if (rsp.HasMember("FailCode") && !rsp["FailCode"].IsNull())
    {
        if (!rsp["FailCode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailCode` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailCode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failCode.push_back((*itr).GetString());
        }
        m_failCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ResultAnalysis") && !rsp["ResultAnalysis"].IsNull())
    {
        if (!rsp["ResultAnalysis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultAnalysis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultAnalysis = string(rsp["ResultAnalysis"].GetString());
        m_resultAnalysisHasBeenSet = true;
    }

    if (rsp.HasMember("AnalyzedLogs") && !rsp["AnalyzedLogs"].IsNull())
    {
        if (!rsp["AnalyzedLogs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnalyzedLogs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AnalyzedLogs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalyzedLog item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_analyzedLogs.push_back(item);
        }
        m_analyzedLogsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string PODAuditAIResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_auditorDecisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditorDecision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditorDecision, allocator);
    }

    if (m_failCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_failCode.begin(); itr != m_failCode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resultAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultAnalysis.c_str(), allocator).Move(), allocator);
    }

    if (m_analyzedLogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalyzedLogs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_analyzedLogs.begin(); itr != m_analyzedLogs.end(); ++itr, ++i)
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


int64_t PODAuditAIResponse::GetAuditorDecision() const
{
    return m_auditorDecision;
}

bool PODAuditAIResponse::AuditorDecisionHasBeenSet() const
{
    return m_auditorDecisionHasBeenSet;
}

vector<string> PODAuditAIResponse::GetFailCode() const
{
    return m_failCode;
}

bool PODAuditAIResponse::FailCodeHasBeenSet() const
{
    return m_failCodeHasBeenSet;
}

string PODAuditAIResponse::GetResultAnalysis() const
{
    return m_resultAnalysis;
}

bool PODAuditAIResponse::ResultAnalysisHasBeenSet() const
{
    return m_resultAnalysisHasBeenSet;
}

vector<AnalyzedLog> PODAuditAIResponse::GetAnalyzedLogs() const
{
    return m_analyzedLogs;
}

bool PODAuditAIResponse::AnalyzedLogsHasBeenSet() const
{
    return m_analyzedLogsHasBeenSet;
}


