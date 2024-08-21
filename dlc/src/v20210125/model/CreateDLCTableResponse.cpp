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

#include <tencentcloud/dlc/v20210125/model/CreateDLCTableResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateDLCTableResponse::CreateDLCTableResponse() :
    m_dLCTableHasBeenSet(false),
    m_executionHasBeenSet(false)
{
}

CoreInternalOutcome CreateDLCTableResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DLCTable") && !rsp["DLCTable"].IsNull())
    {
        if (!rsp["DLCTable"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DLCTable` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dLCTable.Deserialize(rsp["DLCTable"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dLCTableHasBeenSet = true;
    }

    if (rsp.HasMember("Execution") && !rsp["Execution"].IsNull())
    {
        if (!rsp["Execution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Execution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execution = string(rsp["Execution"].GetString());
        m_executionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateDLCTableResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dLCTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DLCTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dLCTable.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_executionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Execution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_execution.c_str(), allocator).Move(), allocator);
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


DLCTable CreateDLCTableResponse::GetDLCTable() const
{
    return m_dLCTable;
}

bool CreateDLCTableResponse::DLCTableHasBeenSet() const
{
    return m_dLCTableHasBeenSet;
}

string CreateDLCTableResponse::GetExecution() const
{
    return m_execution;
}

bool CreateDLCTableResponse::ExecutionHasBeenSet() const
{
    return m_executionHasBeenSet;
}


