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

#include <tencentcloud/intlpartnersmgt/v20220928/model/RegionSummaryOverviewItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

RegionSummaryOverviewItem::RegionSummaryOverviewItem() :
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_originalCostHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_totalCostHasBeenSet(false)
{
}

CoreInternalOutcome RegionSummaryOverviewItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionSummaryOverviewItem.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionSummaryOverviewItem.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("OriginalCost") && !value["OriginalCost"].IsNull())
    {
        if (!value["OriginalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionSummaryOverviewItem.OriginalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = string(value["OriginalCost"].GetString());
        m_originalCostHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionSummaryOverviewItem.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionSummaryOverviewItem.TotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = string(value["TotalCost"].GetString());
        m_totalCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionSummaryOverviewItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
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

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCost.c_str(), allocator).Move(), allocator);
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

string RegionSummaryOverviewItem::GetOriginalCost() const
{
    return m_originalCost;
}

void RegionSummaryOverviewItem::SetOriginalCost(const string& _originalCost)
{
    m_originalCost = _originalCost;
    m_originalCostHasBeenSet = true;
}

bool RegionSummaryOverviewItem::OriginalCostHasBeenSet() const
{
    return m_originalCostHasBeenSet;
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

string RegionSummaryOverviewItem::GetTotalCost() const
{
    return m_totalCost;
}

void RegionSummaryOverviewItem::SetTotalCost(const string& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool RegionSummaryOverviewItem::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

