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

#include <tencentcloud/intlpartnersmgt/v20220928/model/SummaryDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

SummaryDetails::SummaryDetails() :
    m_businessHasBeenSet(false),
    m_originalCostHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_rICostHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_groupKeyHasBeenSet(false),
    m_groupValueHasBeenSet(false)
{
}

CoreInternalOutcome SummaryDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Business") && !value["Business"].IsNull())
    {
        if (!value["Business"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SummaryDetails.Business` is not array type"));

        const rapidjson::Value &tmpValue = value["Business"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BusinessInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_business.push_back(item);
        }
        m_businessHasBeenSet = true;
    }

    if (value.HasMember("OriginalCost") && !value["OriginalCost"].IsNull())
    {
        if (!value["OriginalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetails.OriginalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = string(value["OriginalCost"].GetString());
        m_originalCostHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetails.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("RICost") && !value["RICost"].IsNull())
    {
        if (!value["RICost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetails.RICost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rICost = string(value["RICost"].GetString());
        m_rICostHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetails.TotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = string(value["TotalCost"].GetString());
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("GroupKey") && !value["GroupKey"].IsNull())
    {
        if (!value["GroupKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetails.GroupKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupKey = string(value["GroupKey"].GetString());
        m_groupKeyHasBeenSet = true;
    }

    if (value.HasMember("GroupValue") && !value["GroupValue"].IsNull())
    {
        if (!value["GroupValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryDetails.GroupValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupValue = string(value["GroupValue"].GetString());
        m_groupValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SummaryDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_business.begin(); itr != m_business.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_groupKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupKey.c_str(), allocator).Move(), allocator);
    }

    if (m_groupValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupValue.c_str(), allocator).Move(), allocator);
    }

}


vector<BusinessInfo> SummaryDetails::GetBusiness() const
{
    return m_business;
}

void SummaryDetails::SetBusiness(const vector<BusinessInfo>& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool SummaryDetails::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string SummaryDetails::GetOriginalCost() const
{
    return m_originalCost;
}

void SummaryDetails::SetOriginalCost(const string& _originalCost)
{
    m_originalCost = _originalCost;
    m_originalCostHasBeenSet = true;
}

bool SummaryDetails::OriginalCostHasBeenSet() const
{
    return m_originalCostHasBeenSet;
}

string SummaryDetails::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void SummaryDetails::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool SummaryDetails::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string SummaryDetails::GetRICost() const
{
    return m_rICost;
}

void SummaryDetails::SetRICost(const string& _rICost)
{
    m_rICost = _rICost;
    m_rICostHasBeenSet = true;
}

bool SummaryDetails::RICostHasBeenSet() const
{
    return m_rICostHasBeenSet;
}

string SummaryDetails::GetTotalCost() const
{
    return m_totalCost;
}

void SummaryDetails::SetTotalCost(const string& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool SummaryDetails::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

string SummaryDetails::GetGroupKey() const
{
    return m_groupKey;
}

void SummaryDetails::SetGroupKey(const string& _groupKey)
{
    m_groupKey = _groupKey;
    m_groupKeyHasBeenSet = true;
}

bool SummaryDetails::GroupKeyHasBeenSet() const
{
    return m_groupKeyHasBeenSet;
}

string SummaryDetails::GetGroupValue() const
{
    return m_groupValue;
}

void SummaryDetails::SetGroupValue(const string& _groupValue)
{
    m_groupValue = _groupValue;
    m_groupValueHasBeenSet = true;
}

bool SummaryDetails::GroupValueHasBeenSet() const
{
    return m_groupValueHasBeenSet;
}

