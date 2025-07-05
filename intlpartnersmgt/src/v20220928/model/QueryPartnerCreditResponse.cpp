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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryPartnerCreditResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QueryPartnerCreditResponse::QueryPartnerCreditResponse() :
    m_allocatedCreditHasBeenSet(false),
    m_totalCreditHasBeenSet(false),
    m_remainingCreditHasBeenSet(false),
    m_customerTotalCreditHasBeenSet(false),
    m_customerRemainingCreditHasBeenSet(false)
{
}

CoreInternalOutcome QueryPartnerCreditResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AllocatedCredit") && !rsp["AllocatedCredit"].IsNull())
    {
        if (!rsp["AllocatedCredit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AllocatedCredit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_allocatedCredit = rsp["AllocatedCredit"].GetDouble();
        m_allocatedCreditHasBeenSet = true;
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

    if (rsp.HasMember("RemainingCredit") && !rsp["RemainingCredit"].IsNull())
    {
        if (!rsp["RemainingCredit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RemainingCredit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainingCredit = rsp["RemainingCredit"].GetDouble();
        m_remainingCreditHasBeenSet = true;
    }

    if (rsp.HasMember("CustomerTotalCredit") && !rsp["CustomerTotalCredit"].IsNull())
    {
        if (!rsp["CustomerTotalCredit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerTotalCredit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_customerTotalCredit = rsp["CustomerTotalCredit"].GetDouble();
        m_customerTotalCreditHasBeenSet = true;
    }

    if (rsp.HasMember("CustomerRemainingCredit") && !rsp["CustomerRemainingCredit"].IsNull())
    {
        if (!rsp["CustomerRemainingCredit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerRemainingCredit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_customerRemainingCredit = rsp["CustomerRemainingCredit"].GetDouble();
        m_customerRemainingCreditHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryPartnerCreditResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_allocatedCreditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocatedCredit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allocatedCredit, allocator);
    }

    if (m_totalCreditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCredit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCredit, allocator);
    }

    if (m_remainingCreditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingCredit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingCredit, allocator);
    }

    if (m_customerTotalCreditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerTotalCredit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerTotalCredit, allocator);
    }

    if (m_customerRemainingCreditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerRemainingCredit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerRemainingCredit, allocator);
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


double QueryPartnerCreditResponse::GetAllocatedCredit() const
{
    return m_allocatedCredit;
}

bool QueryPartnerCreditResponse::AllocatedCreditHasBeenSet() const
{
    return m_allocatedCreditHasBeenSet;
}

double QueryPartnerCreditResponse::GetTotalCredit() const
{
    return m_totalCredit;
}

bool QueryPartnerCreditResponse::TotalCreditHasBeenSet() const
{
    return m_totalCreditHasBeenSet;
}

double QueryPartnerCreditResponse::GetRemainingCredit() const
{
    return m_remainingCredit;
}

bool QueryPartnerCreditResponse::RemainingCreditHasBeenSet() const
{
    return m_remainingCreditHasBeenSet;
}

double QueryPartnerCreditResponse::GetCustomerTotalCredit() const
{
    return m_customerTotalCredit;
}

bool QueryPartnerCreditResponse::CustomerTotalCreditHasBeenSet() const
{
    return m_customerTotalCreditHasBeenSet;
}

double QueryPartnerCreditResponse::GetCustomerRemainingCredit() const
{
    return m_customerRemainingCredit;
}

bool QueryPartnerCreditResponse::CustomerRemainingCreditHasBeenSet() const
{
    return m_customerRemainingCreditHasBeenSet;
}


