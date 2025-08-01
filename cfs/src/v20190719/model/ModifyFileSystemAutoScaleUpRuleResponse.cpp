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

#include <tencentcloud/cfs/v20190719/model/ModifyFileSystemAutoScaleUpRuleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

ModifyFileSystemAutoScaleUpRuleResponse::ModifyFileSystemAutoScaleUpRuleResponse() :
    m_fileSystemIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_scaleUpThresholdHasBeenSet(false),
    m_targetThresholdHasBeenSet(false)
{
}

CoreInternalOutcome ModifyFileSystemAutoScaleUpRuleResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FileSystemId") && !rsp["FileSystemId"].IsNull())
    {
        if (!rsp["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(rsp["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("ScaleUpThreshold") && !rsp["ScaleUpThreshold"].IsNull())
    {
        if (!rsp["ScaleUpThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScaleUpThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleUpThreshold = rsp["ScaleUpThreshold"].GetUint64();
        m_scaleUpThresholdHasBeenSet = true;
    }

    if (rsp.HasMember("TargetThreshold") && !rsp["TargetThreshold"].IsNull())
    {
        if (!rsp["TargetThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetThreshold = rsp["TargetThreshold"].GetUint64();
        m_targetThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyFileSystemAutoScaleUpRuleResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_scaleUpThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleUpThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaleUpThreshold, allocator);
    }

    if (m_targetThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetThreshold, allocator);
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


string ModifyFileSystemAutoScaleUpRuleResponse::GetFileSystemId() const
{
    return m_fileSystemId;
}

bool ModifyFileSystemAutoScaleUpRuleResponse::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

uint64_t ModifyFileSystemAutoScaleUpRuleResponse::GetStatus() const
{
    return m_status;
}

bool ModifyFileSystemAutoScaleUpRuleResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ModifyFileSystemAutoScaleUpRuleResponse::GetScaleUpThreshold() const
{
    return m_scaleUpThreshold;
}

bool ModifyFileSystemAutoScaleUpRuleResponse::ScaleUpThresholdHasBeenSet() const
{
    return m_scaleUpThresholdHasBeenSet;
}

uint64_t ModifyFileSystemAutoScaleUpRuleResponse::GetTargetThreshold() const
{
    return m_targetThreshold;
}

bool ModifyFileSystemAutoScaleUpRuleResponse::TargetThresholdHasBeenSet() const
{
    return m_targetThresholdHasBeenSet;
}


