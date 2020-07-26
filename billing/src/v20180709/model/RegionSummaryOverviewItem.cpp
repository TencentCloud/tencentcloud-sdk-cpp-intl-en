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

#include <tencentcloud/billing/v20180709/model/RegionSummaryOverviewItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace rapidjson;
using namespace std;

RegionSummaryOverviewItem::RegionSummaryOverviewItem() :
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_realTotalCostRatioHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_incentivePayAmountHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_billMonthHasBeenSet(false)
{
}

CoreInternalOutcome RegionSummaryOverviewItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionSummaryOverviewItem.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionSummaryOverviewItem.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionSummaryOverviewItem.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCostRatio") && !value["RealTotalCostRatio"].IsNull())
    {
        if (!value["RealTotalCostRatio"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionSummaryOverviewItem.RealTotalCostRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCostRatio = string(value["RealTotalCostRatio"].GetString());
        m_realTotalCostRatioHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionSummaryOverviewItem.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionSummaryOverviewItem.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionSummaryOverviewItem.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("BillMonth") && !value["BillMonth"].IsNull())
    {
        if (!value["BillMonth"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionSummaryOverviewItem.BillMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billMonth = string(value["BillMonth"].GetString());
        m_billMonthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionSummaryOverviewItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_regionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realTotalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalCostRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealTotalCostRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realTotalCostRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_cashPayAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CashPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cashPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_incentivePayAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IncentivePayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_incentivePayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherPayAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_voucherPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_billMonthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BillMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_billMonth.c_str(), allocator).Move(), allocator);
    }

}


string RegionSummaryOverviewItem::GetRegionId() const
{
    return m_regionId;
}

void RegionSummaryOverviewItem::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool RegionSummaryOverviewItem::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string RegionSummaryOverviewItem::GetRegionName() const
{
    return m_regionName;
}

void RegionSummaryOverviewItem::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool RegionSummaryOverviewItem::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string RegionSummaryOverviewItem::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void RegionSummaryOverviewItem::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool RegionSummaryOverviewItem::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

string RegionSummaryOverviewItem::GetRealTotalCostRatio() const
{
    return m_realTotalCostRatio;
}

void RegionSummaryOverviewItem::SetRealTotalCostRatio(const string& _realTotalCostRatio)
{
    m_realTotalCostRatio = _realTotalCostRatio;
    m_realTotalCostRatioHasBeenSet = true;
}

bool RegionSummaryOverviewItem::RealTotalCostRatioHasBeenSet() const
{
    return m_realTotalCostRatioHasBeenSet;
}

string RegionSummaryOverviewItem::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void RegionSummaryOverviewItem::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool RegionSummaryOverviewItem::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string RegionSummaryOverviewItem::GetIncentivePayAmount() const
{
    return m_incentivePayAmount;
}

void RegionSummaryOverviewItem::SetIncentivePayAmount(const string& _incentivePayAmount)
{
    m_incentivePayAmount = _incentivePayAmount;
    m_incentivePayAmountHasBeenSet = true;
}

bool RegionSummaryOverviewItem::IncentivePayAmountHasBeenSet() const
{
    return m_incentivePayAmountHasBeenSet;
}

string RegionSummaryOverviewItem::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void RegionSummaryOverviewItem::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool RegionSummaryOverviewItem::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string RegionSummaryOverviewItem::GetBillMonth() const
{
    return m_billMonth;
}

void RegionSummaryOverviewItem::SetBillMonth(const string& _billMonth)
{
    m_billMonth = _billMonth;
    m_billMonthHasBeenSet = true;
}

bool RegionSummaryOverviewItem::BillMonthHasBeenSet() const
{
    return m_billMonthHasBeenSet;
}

