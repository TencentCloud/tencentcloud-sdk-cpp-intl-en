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

#include <tencentcloud/intlpartnersmgt/v20220928/model/BusinessInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

BusinessInfo::BusinessInfo() :
    m_businessCodeNameHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_originalCostHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_rICostHasBeenSet(false),
    m_totalCostHasBeenSet(false)
{
}

CoreInternalOutcome BusinessInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BusinessCodeName") && !value["BusinessCodeName"].IsNull())
    {
        if (!value["BusinessCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessInfo.BusinessCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCodeName = string(value["BusinessCodeName"].GetString());
        m_businessCodeNameHasBeenSet = true;
    }

    if (value.HasMember("BusinessCode") && !value["BusinessCode"].IsNull())
    {
        if (!value["BusinessCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessInfo.BusinessCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = string(value["BusinessCode"].GetString());
        m_businessCodeHasBeenSet = true;
    }

    if (value.HasMember("OriginalCost") && !value["OriginalCost"].IsNull())
    {
        if (!value["OriginalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessInfo.OriginalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = string(value["OriginalCost"].GetString());
        m_originalCostHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessInfo.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("RICost") && !value["RICost"].IsNull())
    {
        if (!value["RICost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessInfo.RICost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rICost = string(value["RICost"].GetString());
        m_rICostHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessInfo.TotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = string(value["TotalCost"].GetString());
        m_totalCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BusinessInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_businessCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessCode.c_str(), allocator).Move(), allocator);
    }

    if (m_originalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voucherPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_rICostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RICost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rICost.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCost.c_str(), allocator).Move(), allocator);
    }

}


string BusinessInfo::GetBusinessCodeName() const
{
    return m_businessCodeName;
}

void BusinessInfo::SetBusinessCodeName(const string& _businessCodeName)
{
    m_businessCodeName = _businessCodeName;
    m_businessCodeNameHasBeenSet = true;
}

bool BusinessInfo::BusinessCodeNameHasBeenSet() const
{
    return m_businessCodeNameHasBeenSet;
}

string BusinessInfo::GetBusinessCode() const
{
    return m_businessCode;
}

void BusinessInfo::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool BusinessInfo::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string BusinessInfo::GetOriginalCost() const
{
    return m_originalCost;
}

void BusinessInfo::SetOriginalCost(const string& _originalCost)
{
    m_originalCost = _originalCost;
    m_originalCostHasBeenSet = true;
}

bool BusinessInfo::OriginalCostHasBeenSet() const
{
    return m_originalCostHasBeenSet;
}

string BusinessInfo::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void BusinessInfo::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool BusinessInfo::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string BusinessInfo::GetRICost() const
{
    return m_rICost;
}

void BusinessInfo::SetRICost(const string& _rICost)
{
    m_rICost = _rICost;
    m_rICostHasBeenSet = true;
}

bool BusinessInfo::RICostHasBeenSet() const
{
    return m_rICostHasBeenSet;
}

string BusinessInfo::GetTotalCost() const
{
    return m_totalCost;
}

void BusinessInfo::SetTotalCost(const string& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool BusinessInfo::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

