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

#include <tencentcloud/cfw/v20190904/model/AddAcRuleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

AddAcRuleResponse::AddAcRuleResponse() :
    m_ruleUuidHasBeenSet(false),
    m_returnCodeHasBeenSet(false),
    m_returnMsgHasBeenSet(false)
{
}

CoreInternalOutcome AddAcRuleResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RuleUuid") && !rsp["RuleUuid"].IsNull())
    {
        if (!rsp["RuleUuid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleUuid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleUuid = rsp["RuleUuid"].GetInt64();
        m_ruleUuidHasBeenSet = true;
    }

    if (rsp.HasMember("ReturnCode") && !rsp["ReturnCode"].IsNull())
    {
        if (!rsp["ReturnCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReturnCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_returnCode = rsp["ReturnCode"].GetInt64();
        m_returnCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ReturnMsg") && !rsp["ReturnMsg"].IsNull())
    {
        if (!rsp["ReturnMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReturnMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnMsg = string(rsp["ReturnMsg"].GetString());
        m_returnMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string AddAcRuleResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_ruleUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleUuid, allocator);
    }

    if (m_returnCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_returnCode, allocator);
    }

    if (m_returnMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_returnMsg.c_str(), allocator).Move(), allocator);
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


int64_t AddAcRuleResponse::GetRuleUuid() const
{
    return m_ruleUuid;
}

bool AddAcRuleResponse::RuleUuidHasBeenSet() const
{
    return m_ruleUuidHasBeenSet;
}

int64_t AddAcRuleResponse::GetReturnCode() const
{
    return m_returnCode;
}

bool AddAcRuleResponse::ReturnCodeHasBeenSet() const
{
    return m_returnCodeHasBeenSet;
}

string AddAcRuleResponse::GetReturnMsg() const
{
    return m_returnMsg;
}

bool AddAcRuleResponse::ReturnMsgHasBeenSet() const
{
    return m_returnMsgHasBeenSet;
}


