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

#include <tencentcloud/intlpartnersmgt/v20220928/model/ForceQNResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

ForceQNResponse::ForceQNResponse() :
    m_cHasBeenSet(false),
    m_mHasBeenSet(false)
{
}

CoreInternalOutcome ForceQNResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("C") && !rsp["C"].IsNull())
    {
        if (!rsp["C"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `C` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_c = rsp["C"].GetInt64();
        m_cHasBeenSet = true;
    }

    if (rsp.HasMember("M") && !rsp["M"].IsNull())
    {
        if (!rsp["M"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `M` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_m = string(rsp["M"].GetString());
        m_mHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ForceQNResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "C";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_c, allocator);
    }

    if (m_mHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "M";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_m.c_str(), allocator).Move(), allocator);
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


int64_t ForceQNResponse::GetC() const
{
    return m_c;
}

bool ForceQNResponse::CHasBeenSet() const
{
    return m_cHasBeenSet;
}

string ForceQNResponse::GetM() const
{
    return m_m;
}

bool ForceQNResponse::MHasBeenSet() const
{
    return m_mHasBeenSet;
}


