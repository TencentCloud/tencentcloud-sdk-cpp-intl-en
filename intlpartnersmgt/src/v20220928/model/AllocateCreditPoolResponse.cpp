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

#include <tencentcloud/intlpartnersmgt/v20220928/model/AllocateCreditPoolResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

AllocateCreditPoolResponse::AllocateCreditPoolResponse() :
    m_remainingCreditHasBeenSet(false),
    m_totalCreditHasBeenSet(false)
{
}

CoreInternalOutcome AllocateCreditPoolResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RemainingCredit") && !rsp["RemainingCredit"].IsNull())
    {
        if (!rsp["RemainingCredit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RemainingCredit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainingCredit = rsp["RemainingCredit"].GetDouble();
        m_remainingCreditHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCredit") && !rsp["TotalCredit"].IsNull())
    {
        if (!rsp["TotalCredit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCredit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCredit = rsp["TotalCredit"].GetDouble();
        m_totalCreditHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string AllocateCreditPoolResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_remainingCreditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingCredit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingCredit, allocator);
    }

    if (m_totalCreditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCredit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCredit, allocator);
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


double AllocateCreditPoolResponse::GetRemainingCredit() const
{
    return m_remainingCredit;
}

bool AllocateCreditPoolResponse::RemainingCreditHasBeenSet() const
{
    return m_remainingCreditHasBeenSet;
}

double AllocateCreditPoolResponse::GetTotalCredit() const
{
    return m_totalCredit;
}

bool AllocateCreditPoolResponse::TotalCreditHasBeenSet() const
{
    return m_totalCreditHasBeenSet;
}


