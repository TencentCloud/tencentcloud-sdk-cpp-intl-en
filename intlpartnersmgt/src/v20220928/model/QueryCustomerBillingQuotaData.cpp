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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomerBillingQuotaData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QueryCustomerBillingQuotaData::QueryCustomerBillingQuotaData() :
    m_totalCreditHasBeenSet(false),
    m_remainingCreditHasBeenSet(false),
    m_remainingVoucherHasBeenSet(false),
    m_forceHasBeenSet(false),
    m_prepayFrozenHasBeenSet(false),
    m_postpayFrozenHasBeenSet(false)
{
}

CoreInternalOutcome QueryCustomerBillingQuotaData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCredit") && !value["TotalCredit"].IsNull())
    {
        if (!value["TotalCredit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomerBillingQuotaData.TotalCredit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCredit = value["TotalCredit"].GetDouble();
        m_totalCreditHasBeenSet = true;
    }

    if (value.HasMember("RemainingCredit") && !value["RemainingCredit"].IsNull())
    {
        if (!value["RemainingCredit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomerBillingQuotaData.RemainingCredit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainingCredit = value["RemainingCredit"].GetDouble();
        m_remainingCreditHasBeenSet = true;
    }

    if (value.HasMember("RemainingVoucher") && !value["RemainingVoucher"].IsNull())
    {
        if (!value["RemainingVoucher"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomerBillingQuotaData.RemainingVoucher` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainingVoucher = value["RemainingVoucher"].GetDouble();
        m_remainingVoucherHasBeenSet = true;
    }

    if (value.HasMember("Force") && !value["Force"].IsNull())
    {
        if (!value["Force"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomerBillingQuotaData.Force` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_force = value["Force"].GetInt64();
        m_forceHasBeenSet = true;
    }

    if (value.HasMember("PrepayFrozen") && !value["PrepayFrozen"].IsNull())
    {
        if (!value["PrepayFrozen"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomerBillingQuotaData.PrepayFrozen` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_prepayFrozen = value["PrepayFrozen"].GetDouble();
        m_prepayFrozenHasBeenSet = true;
    }

    if (value.HasMember("PostpayFrozen") && !value["PostpayFrozen"].IsNull())
    {
        if (!value["PostpayFrozen"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomerBillingQuotaData.PostpayFrozen` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_postpayFrozen = value["PostpayFrozen"].GetDouble();
        m_postpayFrozenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryCustomerBillingQuotaData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_remainingVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingVoucher";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingVoucher, allocator);
    }

    if (m_forceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Force";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_force, allocator);
    }

    if (m_prepayFrozenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepayFrozen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_prepayFrozen, allocator);
    }

    if (m_postpayFrozenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostpayFrozen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postpayFrozen, allocator);
    }

}


double QueryCustomerBillingQuotaData::GetTotalCredit() const
{
    return m_totalCredit;
}

void QueryCustomerBillingQuotaData::SetTotalCredit(const double& _totalCredit)
{
    m_totalCredit = _totalCredit;
    m_totalCreditHasBeenSet = true;
}

bool QueryCustomerBillingQuotaData::TotalCreditHasBeenSet() const
{
    return m_totalCreditHasBeenSet;
}

double QueryCustomerBillingQuotaData::GetRemainingCredit() const
{
    return m_remainingCredit;
}

void QueryCustomerBillingQuotaData::SetRemainingCredit(const double& _remainingCredit)
{
    m_remainingCredit = _remainingCredit;
    m_remainingCreditHasBeenSet = true;
}

bool QueryCustomerBillingQuotaData::RemainingCreditHasBeenSet() const
{
    return m_remainingCreditHasBeenSet;
}

double QueryCustomerBillingQuotaData::GetRemainingVoucher() const
{
    return m_remainingVoucher;
}

void QueryCustomerBillingQuotaData::SetRemainingVoucher(const double& _remainingVoucher)
{
    m_remainingVoucher = _remainingVoucher;
    m_remainingVoucherHasBeenSet = true;
}

bool QueryCustomerBillingQuotaData::RemainingVoucherHasBeenSet() const
{
    return m_remainingVoucherHasBeenSet;
}

int64_t QueryCustomerBillingQuotaData::GetForce() const
{
    return m_force;
}

void QueryCustomerBillingQuotaData::SetForce(const int64_t& _force)
{
    m_force = _force;
    m_forceHasBeenSet = true;
}

bool QueryCustomerBillingQuotaData::ForceHasBeenSet() const
{
    return m_forceHasBeenSet;
}

double QueryCustomerBillingQuotaData::GetPrepayFrozen() const
{
    return m_prepayFrozen;
}

void QueryCustomerBillingQuotaData::SetPrepayFrozen(const double& _prepayFrozen)
{
    m_prepayFrozen = _prepayFrozen;
    m_prepayFrozenHasBeenSet = true;
}

bool QueryCustomerBillingQuotaData::PrepayFrozenHasBeenSet() const
{
    return m_prepayFrozenHasBeenSet;
}

double QueryCustomerBillingQuotaData::GetPostpayFrozen() const
{
    return m_postpayFrozen;
}

void QueryCustomerBillingQuotaData::SetPostpayFrozen(const double& _postpayFrozen)
{
    m_postpayFrozen = _postpayFrozen;
    m_postpayFrozenHasBeenSet = true;
}

bool QueryCustomerBillingQuotaData::PostpayFrozenHasBeenSet() const
{
    return m_postpayFrozenHasBeenSet;
}

