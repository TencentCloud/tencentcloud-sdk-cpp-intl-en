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

#include <tencentcloud/domain/v20180808/model/CheckIntlDomainNewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

CheckIntlDomainNewResponse::CheckIntlDomainNewResponse() :
    m_domainNameHasBeenSet(false),
    m_availableHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_premiumHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_blackWordHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_feeRenewHasBeenSet(false),
    m_realPriceHasBeenSet(false),
    m_feeTransferHasBeenSet(false),
    m_feeRestoreHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_reasonZhHasBeenSet(false),
    m_resCodeHasBeenSet(false)
{
}

CoreInternalOutcome CheckIntlDomainNewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DomainName") && !rsp["DomainName"].IsNull())
    {
        if (!rsp["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(rsp["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (rsp.HasMember("Available") && !rsp["Available"].IsNull())
    {
        if (!rsp["Available"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Available` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_available = rsp["Available"].GetBool();
        m_availableHasBeenSet = true;
    }

    if (rsp.HasMember("Reason") && !rsp["Reason"].IsNull())
    {
        if (!rsp["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(rsp["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (rsp.HasMember("Premium") && !rsp["Premium"].IsNull())
    {
        if (!rsp["Premium"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Premium` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_premium = rsp["Premium"].GetBool();
        m_premiumHasBeenSet = true;
    }

    if (rsp.HasMember("Price") && !rsp["Price"].IsNull())
    {
        if (!rsp["Price"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Price` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_price = rsp["Price"].GetDouble();
        m_priceHasBeenSet = true;
    }

    if (rsp.HasMember("BlackWord") && !rsp["BlackWord"].IsNull())
    {
        if (!rsp["BlackWord"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BlackWord` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_blackWord = rsp["BlackWord"].GetBool();
        m_blackWordHasBeenSet = true;
    }

    if (rsp.HasMember("Describe") && !rsp["Describe"].IsNull())
    {
        if (!rsp["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(rsp["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (rsp.HasMember("FeeRenew") && !rsp["FeeRenew"].IsNull())
    {
        if (!rsp["FeeRenew"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FeeRenew` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_feeRenew = rsp["FeeRenew"].GetDouble();
        m_feeRenewHasBeenSet = true;
    }

    if (rsp.HasMember("RealPrice") && !rsp["RealPrice"].IsNull())
    {
        if (!rsp["RealPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RealPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_realPrice = rsp["RealPrice"].GetDouble();
        m_realPriceHasBeenSet = true;
    }

    if (rsp.HasMember("FeeTransfer") && !rsp["FeeTransfer"].IsNull())
    {
        if (!rsp["FeeTransfer"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FeeTransfer` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_feeTransfer = rsp["FeeTransfer"].GetDouble();
        m_feeTransferHasBeenSet = true;
    }

    if (rsp.HasMember("FeeRestore") && !rsp["FeeRestore"].IsNull())
    {
        if (!rsp["FeeRestore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FeeRestore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_feeRestore = rsp["FeeRestore"].GetDouble();
        m_feeRestoreHasBeenSet = true;
    }

    if (rsp.HasMember("Period") && !rsp["Period"].IsNull())
    {
        if (!rsp["Period"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Period` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_period = rsp["Period"].GetUint64();
        m_periodHasBeenSet = true;
    }

    if (rsp.HasMember("ReasonZh") && !rsp["ReasonZh"].IsNull())
    {
        if (!rsp["ReasonZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReasonZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reasonZh = string(rsp["ReasonZh"].GetString());
        m_reasonZhHasBeenSet = true;
    }

    if (rsp.HasMember("ResCode") && !rsp["ResCode"].IsNull())
    {
        if (!rsp["ResCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resCode = string(rsp["ResCode"].GetString());
        m_resCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CheckIntlDomainNewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_premiumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Premium";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_premium, allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_blackWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlackWord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blackWord, allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_feeRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_feeRenew, allocator);
    }

    if (m_realPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realPrice, allocator);
    }

    if (m_feeTransferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeTransfer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_feeTransfer, allocator);
    }

    if (m_feeRestoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeRestore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_feeRestore, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_reasonZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasonZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reasonZh.c_str(), allocator).Move(), allocator);
    }

    if (m_resCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resCode.c_str(), allocator).Move(), allocator);
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


string CheckIntlDomainNewResponse::GetDomainName() const
{
    return m_domainName;
}

bool CheckIntlDomainNewResponse::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

bool CheckIntlDomainNewResponse::GetAvailable() const
{
    return m_available;
}

bool CheckIntlDomainNewResponse::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

string CheckIntlDomainNewResponse::GetReason() const
{
    return m_reason;
}

bool CheckIntlDomainNewResponse::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

bool CheckIntlDomainNewResponse::GetPremium() const
{
    return m_premium;
}

bool CheckIntlDomainNewResponse::PremiumHasBeenSet() const
{
    return m_premiumHasBeenSet;
}

double CheckIntlDomainNewResponse::GetPrice() const
{
    return m_price;
}

bool CheckIntlDomainNewResponse::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

bool CheckIntlDomainNewResponse::GetBlackWord() const
{
    return m_blackWord;
}

bool CheckIntlDomainNewResponse::BlackWordHasBeenSet() const
{
    return m_blackWordHasBeenSet;
}

string CheckIntlDomainNewResponse::GetDescribe() const
{
    return m_describe;
}

bool CheckIntlDomainNewResponse::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

double CheckIntlDomainNewResponse::GetFeeRenew() const
{
    return m_feeRenew;
}

bool CheckIntlDomainNewResponse::FeeRenewHasBeenSet() const
{
    return m_feeRenewHasBeenSet;
}

double CheckIntlDomainNewResponse::GetRealPrice() const
{
    return m_realPrice;
}

bool CheckIntlDomainNewResponse::RealPriceHasBeenSet() const
{
    return m_realPriceHasBeenSet;
}

double CheckIntlDomainNewResponse::GetFeeTransfer() const
{
    return m_feeTransfer;
}

bool CheckIntlDomainNewResponse::FeeTransferHasBeenSet() const
{
    return m_feeTransferHasBeenSet;
}

double CheckIntlDomainNewResponse::GetFeeRestore() const
{
    return m_feeRestore;
}

bool CheckIntlDomainNewResponse::FeeRestoreHasBeenSet() const
{
    return m_feeRestoreHasBeenSet;
}

uint64_t CheckIntlDomainNewResponse::GetPeriod() const
{
    return m_period;
}

bool CheckIntlDomainNewResponse::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string CheckIntlDomainNewResponse::GetReasonZh() const
{
    return m_reasonZh;
}

bool CheckIntlDomainNewResponse::ReasonZhHasBeenSet() const
{
    return m_reasonZhHasBeenSet;
}

string CheckIntlDomainNewResponse::GetResCode() const
{
    return m_resCode;
}

bool CheckIntlDomainNewResponse::ResCodeHasBeenSet() const
{
    return m_resCodeHasBeenSet;
}


