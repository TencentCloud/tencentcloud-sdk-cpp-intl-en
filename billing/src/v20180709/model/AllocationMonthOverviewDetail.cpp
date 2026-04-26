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

#include <tencentcloud/billing/v20180709/model/AllocationMonthOverviewDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AllocationMonthOverviewDetail::AllocationMonthOverviewDetail() :
    m_gatherCashPayAmountHasBeenSet(false),
    m_gatherVoucherPayAmountHasBeenSet(false),
    m_gatherIncentivePayAmountHasBeenSet(false),
    m_gatherTransferPayAmountHasBeenSet(false),
    m_allocateCashPayAmountHasBeenSet(false),
    m_allocateVoucherPayAmountHasBeenSet(false),
    m_allocateIncentivePayAmountHasBeenSet(false),
    m_allocateTransferPayAmountHasBeenSet(false),
    m_totalCashPayAmountHasBeenSet(false),
    m_totalVoucherPayAmountHasBeenSet(false),
    m_totalIncentivePayAmountHasBeenSet(false),
    m_totalTransferPayAmountHasBeenSet(false),
    m_gatherRealCostHasBeenSet(false),
    m_allocateRealCostHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_ratioHasBeenSet(false),
    m_trendHasBeenSet(false),
    m_trendTypeHasBeenSet(false),
    m_allocateCostBeforeTaxHasBeenSet(false),
    m_gatherCostBeforeTaxHasBeenSet(false),
    m_totalCostBeforeTaxHasBeenSet(false),
    m_allocateTaxHasBeenSet(false),
    m_gatherTaxHasBeenSet(false),
    m_totalTaxHasBeenSet(false)
{
}

CoreInternalOutcome AllocationMonthOverviewDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatherCashPayAmount") && !value["GatherCashPayAmount"].IsNull())
    {
        if (!value["GatherCashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.GatherCashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatherCashPayAmount = string(value["GatherCashPayAmount"].GetString());
        m_gatherCashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("GatherVoucherPayAmount") && !value["GatherVoucherPayAmount"].IsNull())
    {
        if (!value["GatherVoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.GatherVoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatherVoucherPayAmount = string(value["GatherVoucherPayAmount"].GetString());
        m_gatherVoucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("GatherIncentivePayAmount") && !value["GatherIncentivePayAmount"].IsNull())
    {
        if (!value["GatherIncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.GatherIncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatherIncentivePayAmount = string(value["GatherIncentivePayAmount"].GetString());
        m_gatherIncentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("GatherTransferPayAmount") && !value["GatherTransferPayAmount"].IsNull())
    {
        if (!value["GatherTransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.GatherTransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatherTransferPayAmount = string(value["GatherTransferPayAmount"].GetString());
        m_gatherTransferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("AllocateCashPayAmount") && !value["AllocateCashPayAmount"].IsNull())
    {
        if (!value["AllocateCashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.AllocateCashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocateCashPayAmount = string(value["AllocateCashPayAmount"].GetString());
        m_allocateCashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("AllocateVoucherPayAmount") && !value["AllocateVoucherPayAmount"].IsNull())
    {
        if (!value["AllocateVoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.AllocateVoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocateVoucherPayAmount = string(value["AllocateVoucherPayAmount"].GetString());
        m_allocateVoucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("AllocateIncentivePayAmount") && !value["AllocateIncentivePayAmount"].IsNull())
    {
        if (!value["AllocateIncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.AllocateIncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocateIncentivePayAmount = string(value["AllocateIncentivePayAmount"].GetString());
        m_allocateIncentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("AllocateTransferPayAmount") && !value["AllocateTransferPayAmount"].IsNull())
    {
        if (!value["AllocateTransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.AllocateTransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocateTransferPayAmount = string(value["AllocateTransferPayAmount"].GetString());
        m_allocateTransferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalCashPayAmount") && !value["TotalCashPayAmount"].IsNull())
    {
        if (!value["TotalCashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.TotalCashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCashPayAmount = string(value["TotalCashPayAmount"].GetString());
        m_totalCashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalVoucherPayAmount") && !value["TotalVoucherPayAmount"].IsNull())
    {
        if (!value["TotalVoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.TotalVoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalVoucherPayAmount = string(value["TotalVoucherPayAmount"].GetString());
        m_totalVoucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalIncentivePayAmount") && !value["TotalIncentivePayAmount"].IsNull())
    {
        if (!value["TotalIncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.TotalIncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalIncentivePayAmount = string(value["TotalIncentivePayAmount"].GetString());
        m_totalIncentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalTransferPayAmount") && !value["TotalTransferPayAmount"].IsNull())
    {
        if (!value["TotalTransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.TotalTransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalTransferPayAmount = string(value["TotalTransferPayAmount"].GetString());
        m_totalTransferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("GatherRealCost") && !value["GatherRealCost"].IsNull())
    {
        if (!value["GatherRealCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.GatherRealCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatherRealCost = string(value["GatherRealCost"].GetString());
        m_gatherRealCostHasBeenSet = true;
    }

    if (value.HasMember("AllocateRealCost") && !value["AllocateRealCost"].IsNull())
    {
        if (!value["AllocateRealCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.AllocateRealCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocateRealCost = string(value["AllocateRealCost"].GetString());
        m_allocateRealCostHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.Ratio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = string(value["Ratio"].GetString());
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("Trend") && !value["Trend"].IsNull())
    {
        if (!value["Trend"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.Trend` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trend = string(value["Trend"].GetString());
        m_trendHasBeenSet = true;
    }

    if (value.HasMember("TrendType") && !value["TrendType"].IsNull())
    {
        if (!value["TrendType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.TrendType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trendType = string(value["TrendType"].GetString());
        m_trendTypeHasBeenSet = true;
    }

    if (value.HasMember("AllocateCostBeforeTax") && !value["AllocateCostBeforeTax"].IsNull())
    {
        if (!value["AllocateCostBeforeTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.AllocateCostBeforeTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocateCostBeforeTax = string(value["AllocateCostBeforeTax"].GetString());
        m_allocateCostBeforeTaxHasBeenSet = true;
    }

    if (value.HasMember("GatherCostBeforeTax") && !value["GatherCostBeforeTax"].IsNull())
    {
        if (!value["GatherCostBeforeTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.GatherCostBeforeTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatherCostBeforeTax = string(value["GatherCostBeforeTax"].GetString());
        m_gatherCostBeforeTaxHasBeenSet = true;
    }

    if (value.HasMember("TotalCostBeforeTax") && !value["TotalCostBeforeTax"].IsNull())
    {
        if (!value["TotalCostBeforeTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.TotalCostBeforeTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCostBeforeTax = string(value["TotalCostBeforeTax"].GetString());
        m_totalCostBeforeTaxHasBeenSet = true;
    }

    if (value.HasMember("AllocateTax") && !value["AllocateTax"].IsNull())
    {
        if (!value["AllocateTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.AllocateTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocateTax = string(value["AllocateTax"].GetString());
        m_allocateTaxHasBeenSet = true;
    }

    if (value.HasMember("GatherTax") && !value["GatherTax"].IsNull())
    {
        if (!value["GatherTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.GatherTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatherTax = string(value["GatherTax"].GetString());
        m_gatherTaxHasBeenSet = true;
    }

    if (value.HasMember("TotalTax") && !value["TotalTax"].IsNull())
    {
        if (!value["TotalTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationMonthOverviewDetail.TotalTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalTax = string(value["TotalTax"].GetString());
        m_totalTaxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AllocationMonthOverviewDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatherCashPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatherCashPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatherCashPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_gatherVoucherPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatherVoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatherVoucherPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_gatherIncentivePayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatherIncentivePayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatherIncentivePayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_gatherTransferPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatherTransferPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatherTransferPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_allocateCashPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocateCashPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocateCashPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_allocateVoucherPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocateVoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocateVoucherPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_allocateIncentivePayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocateIncentivePayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocateIncentivePayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_allocateTransferPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocateTransferPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocateTransferPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCashPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCashPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCashPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_totalVoucherPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalVoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalVoucherPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_totalIncentivePayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalIncentivePayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalIncentivePayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_totalTransferPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTransferPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalTransferPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_gatherRealCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatherRealCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatherRealCost.c_str(), allocator).Move(), allocator);
    }

    if (m_allocateRealCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocateRealCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocateRealCost.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realTotalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ratio.c_str(), allocator).Move(), allocator);
    }

    if (m_trendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trend.c_str(), allocator).Move(), allocator);
    }

    if (m_trendTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrendType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trendType.c_str(), allocator).Move(), allocator);
    }

    if (m_allocateCostBeforeTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocateCostBeforeTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocateCostBeforeTax.c_str(), allocator).Move(), allocator);
    }

    if (m_gatherCostBeforeTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatherCostBeforeTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatherCostBeforeTax.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCostBeforeTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCostBeforeTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCostBeforeTax.c_str(), allocator).Move(), allocator);
    }

    if (m_allocateTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocateTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocateTax.c_str(), allocator).Move(), allocator);
    }

    if (m_gatherTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatherTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatherTax.c_str(), allocator).Move(), allocator);
    }

    if (m_totalTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalTax.c_str(), allocator).Move(), allocator);
    }

}


string AllocationMonthOverviewDetail::GetGatherCashPayAmount() const
{
    return m_gatherCashPayAmount;
}

void AllocationMonthOverviewDetail::SetGatherCashPayAmount(const string& _gatherCashPayAmount)
{
    m_gatherCashPayAmount = _gatherCashPayAmount;
    m_gatherCashPayAmountHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::GatherCashPayAmountHasBeenSet() const
{
    return m_gatherCashPayAmountHasBeenSet;
}

string AllocationMonthOverviewDetail::GetGatherVoucherPayAmount() const
{
    return m_gatherVoucherPayAmount;
}

void AllocationMonthOverviewDetail::SetGatherVoucherPayAmount(const string& _gatherVoucherPayAmount)
{
    m_gatherVoucherPayAmount = _gatherVoucherPayAmount;
    m_gatherVoucherPayAmountHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::GatherVoucherPayAmountHasBeenSet() const
{
    return m_gatherVoucherPayAmountHasBeenSet;
}

string AllocationMonthOverviewDetail::GetGatherIncentivePayAmount() const
{
    return m_gatherIncentivePayAmount;
}

void AllocationMonthOverviewDetail::SetGatherIncentivePayAmount(const string& _gatherIncentivePayAmount)
{
    m_gatherIncentivePayAmount = _gatherIncentivePayAmount;
    m_gatherIncentivePayAmountHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::GatherIncentivePayAmountHasBeenSet() const
{
    return m_gatherIncentivePayAmountHasBeenSet;
}

string AllocationMonthOverviewDetail::GetGatherTransferPayAmount() const
{
    return m_gatherTransferPayAmount;
}

void AllocationMonthOverviewDetail::SetGatherTransferPayAmount(const string& _gatherTransferPayAmount)
{
    m_gatherTransferPayAmount = _gatherTransferPayAmount;
    m_gatherTransferPayAmountHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::GatherTransferPayAmountHasBeenSet() const
{
    return m_gatherTransferPayAmountHasBeenSet;
}

string AllocationMonthOverviewDetail::GetAllocateCashPayAmount() const
{
    return m_allocateCashPayAmount;
}

void AllocationMonthOverviewDetail::SetAllocateCashPayAmount(const string& _allocateCashPayAmount)
{
    m_allocateCashPayAmount = _allocateCashPayAmount;
    m_allocateCashPayAmountHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::AllocateCashPayAmountHasBeenSet() const
{
    return m_allocateCashPayAmountHasBeenSet;
}

string AllocationMonthOverviewDetail::GetAllocateVoucherPayAmount() const
{
    return m_allocateVoucherPayAmount;
}

void AllocationMonthOverviewDetail::SetAllocateVoucherPayAmount(const string& _allocateVoucherPayAmount)
{
    m_allocateVoucherPayAmount = _allocateVoucherPayAmount;
    m_allocateVoucherPayAmountHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::AllocateVoucherPayAmountHasBeenSet() const
{
    return m_allocateVoucherPayAmountHasBeenSet;
}

string AllocationMonthOverviewDetail::GetAllocateIncentivePayAmount() const
{
    return m_allocateIncentivePayAmount;
}

void AllocationMonthOverviewDetail::SetAllocateIncentivePayAmount(const string& _allocateIncentivePayAmount)
{
    m_allocateIncentivePayAmount = _allocateIncentivePayAmount;
    m_allocateIncentivePayAmountHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::AllocateIncentivePayAmountHasBeenSet() const
{
    return m_allocateIncentivePayAmountHasBeenSet;
}

string AllocationMonthOverviewDetail::GetAllocateTransferPayAmount() const
{
    return m_allocateTransferPayAmount;
}

void AllocationMonthOverviewDetail::SetAllocateTransferPayAmount(const string& _allocateTransferPayAmount)
{
    m_allocateTransferPayAmount = _allocateTransferPayAmount;
    m_allocateTransferPayAmountHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::AllocateTransferPayAmountHasBeenSet() const
{
    return m_allocateTransferPayAmountHasBeenSet;
}

string AllocationMonthOverviewDetail::GetTotalCashPayAmount() const
{
    return m_totalCashPayAmount;
}

void AllocationMonthOverviewDetail::SetTotalCashPayAmount(const string& _totalCashPayAmount)
{
    m_totalCashPayAmount = _totalCashPayAmount;
    m_totalCashPayAmountHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::TotalCashPayAmountHasBeenSet() const
{
    return m_totalCashPayAmountHasBeenSet;
}

string AllocationMonthOverviewDetail::GetTotalVoucherPayAmount() const
{
    return m_totalVoucherPayAmount;
}

void AllocationMonthOverviewDetail::SetTotalVoucherPayAmount(const string& _totalVoucherPayAmount)
{
    m_totalVoucherPayAmount = _totalVoucherPayAmount;
    m_totalVoucherPayAmountHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::TotalVoucherPayAmountHasBeenSet() const
{
    return m_totalVoucherPayAmountHasBeenSet;
}

string AllocationMonthOverviewDetail::GetTotalIncentivePayAmount() const
{
    return m_totalIncentivePayAmount;
}

void AllocationMonthOverviewDetail::SetTotalIncentivePayAmount(const string& _totalIncentivePayAmount)
{
    m_totalIncentivePayAmount = _totalIncentivePayAmount;
    m_totalIncentivePayAmountHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::TotalIncentivePayAmountHasBeenSet() const
{
    return m_totalIncentivePayAmountHasBeenSet;
}

string AllocationMonthOverviewDetail::GetTotalTransferPayAmount() const
{
    return m_totalTransferPayAmount;
}

void AllocationMonthOverviewDetail::SetTotalTransferPayAmount(const string& _totalTransferPayAmount)
{
    m_totalTransferPayAmount = _totalTransferPayAmount;
    m_totalTransferPayAmountHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::TotalTransferPayAmountHasBeenSet() const
{
    return m_totalTransferPayAmountHasBeenSet;
}

string AllocationMonthOverviewDetail::GetGatherRealCost() const
{
    return m_gatherRealCost;
}

void AllocationMonthOverviewDetail::SetGatherRealCost(const string& _gatherRealCost)
{
    m_gatherRealCost = _gatherRealCost;
    m_gatherRealCostHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::GatherRealCostHasBeenSet() const
{
    return m_gatherRealCostHasBeenSet;
}

string AllocationMonthOverviewDetail::GetAllocateRealCost() const
{
    return m_allocateRealCost;
}

void AllocationMonthOverviewDetail::SetAllocateRealCost(const string& _allocateRealCost)
{
    m_allocateRealCost = _allocateRealCost;
    m_allocateRealCostHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::AllocateRealCostHasBeenSet() const
{
    return m_allocateRealCostHasBeenSet;
}

string AllocationMonthOverviewDetail::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void AllocationMonthOverviewDetail::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

string AllocationMonthOverviewDetail::GetRatio() const
{
    return m_ratio;
}

void AllocationMonthOverviewDetail::SetRatio(const string& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

string AllocationMonthOverviewDetail::GetTrend() const
{
    return m_trend;
}

void AllocationMonthOverviewDetail::SetTrend(const string& _trend)
{
    m_trend = _trend;
    m_trendHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::TrendHasBeenSet() const
{
    return m_trendHasBeenSet;
}

string AllocationMonthOverviewDetail::GetTrendType() const
{
    return m_trendType;
}

void AllocationMonthOverviewDetail::SetTrendType(const string& _trendType)
{
    m_trendType = _trendType;
    m_trendTypeHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::TrendTypeHasBeenSet() const
{
    return m_trendTypeHasBeenSet;
}

string AllocationMonthOverviewDetail::GetAllocateCostBeforeTax() const
{
    return m_allocateCostBeforeTax;
}

void AllocationMonthOverviewDetail::SetAllocateCostBeforeTax(const string& _allocateCostBeforeTax)
{
    m_allocateCostBeforeTax = _allocateCostBeforeTax;
    m_allocateCostBeforeTaxHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::AllocateCostBeforeTaxHasBeenSet() const
{
    return m_allocateCostBeforeTaxHasBeenSet;
}

string AllocationMonthOverviewDetail::GetGatherCostBeforeTax() const
{
    return m_gatherCostBeforeTax;
}

void AllocationMonthOverviewDetail::SetGatherCostBeforeTax(const string& _gatherCostBeforeTax)
{
    m_gatherCostBeforeTax = _gatherCostBeforeTax;
    m_gatherCostBeforeTaxHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::GatherCostBeforeTaxHasBeenSet() const
{
    return m_gatherCostBeforeTaxHasBeenSet;
}

string AllocationMonthOverviewDetail::GetTotalCostBeforeTax() const
{
    return m_totalCostBeforeTax;
}

void AllocationMonthOverviewDetail::SetTotalCostBeforeTax(const string& _totalCostBeforeTax)
{
    m_totalCostBeforeTax = _totalCostBeforeTax;
    m_totalCostBeforeTaxHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::TotalCostBeforeTaxHasBeenSet() const
{
    return m_totalCostBeforeTaxHasBeenSet;
}

string AllocationMonthOverviewDetail::GetAllocateTax() const
{
    return m_allocateTax;
}

void AllocationMonthOverviewDetail::SetAllocateTax(const string& _allocateTax)
{
    m_allocateTax = _allocateTax;
    m_allocateTaxHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::AllocateTaxHasBeenSet() const
{
    return m_allocateTaxHasBeenSet;
}

string AllocationMonthOverviewDetail::GetGatherTax() const
{
    return m_gatherTax;
}

void AllocationMonthOverviewDetail::SetGatherTax(const string& _gatherTax)
{
    m_gatherTax = _gatherTax;
    m_gatherTaxHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::GatherTaxHasBeenSet() const
{
    return m_gatherTaxHasBeenSet;
}

string AllocationMonthOverviewDetail::GetTotalTax() const
{
    return m_totalTax;
}

void AllocationMonthOverviewDetail::SetTotalTax(const string& _totalTax)
{
    m_totalTax = _totalTax;
    m_totalTaxHasBeenSet = true;
}

bool AllocationMonthOverviewDetail::TotalTaxHasBeenSet() const
{
    return m_totalTaxHasBeenSet;
}

