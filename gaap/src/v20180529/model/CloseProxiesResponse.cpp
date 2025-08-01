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

#include <tencentcloud/gaap/v20180529/model/CloseProxiesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CloseProxiesResponse::CloseProxiesResponse() :
    m_invalidStatusInstanceSetHasBeenSet(false),
    m_operationFailedInstanceSetHasBeenSet(false)
{
}

CoreInternalOutcome CloseProxiesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InvalidStatusInstanceSet") && !rsp["InvalidStatusInstanceSet"].IsNull())
    {
        if (!rsp["InvalidStatusInstanceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvalidStatusInstanceSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InvalidStatusInstanceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_invalidStatusInstanceSet.push_back((*itr).GetString());
        }
        m_invalidStatusInstanceSetHasBeenSet = true;
    }

    if (rsp.HasMember("OperationFailedInstanceSet") && !rsp["OperationFailedInstanceSet"].IsNull())
    {
        if (!rsp["OperationFailedInstanceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OperationFailedInstanceSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OperationFailedInstanceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_operationFailedInstanceSet.push_back((*itr).GetString());
        }
        m_operationFailedInstanceSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CloseProxiesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_invalidStatusInstanceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidStatusInstanceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_invalidStatusInstanceSet.begin(); itr != m_invalidStatusInstanceSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operationFailedInstanceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationFailedInstanceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operationFailedInstanceSet.begin(); itr != m_operationFailedInstanceSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


vector<string> CloseProxiesResponse::GetInvalidStatusInstanceSet() const
{
    return m_invalidStatusInstanceSet;
}

bool CloseProxiesResponse::InvalidStatusInstanceSetHasBeenSet() const
{
    return m_invalidStatusInstanceSetHasBeenSet;
}

vector<string> CloseProxiesResponse::GetOperationFailedInstanceSet() const
{
    return m_operationFailedInstanceSet;
}

bool CloseProxiesResponse::OperationFailedInstanceSetHasBeenSet() const
{
    return m_operationFailedInstanceSetHasBeenSet;
}


