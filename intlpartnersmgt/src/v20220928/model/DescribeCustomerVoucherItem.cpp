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

#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerVoucherItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

DescribeCustomerVoucherItem::DescribeCustomerVoucherItem() :
    m_voucherIdHasBeenSet(false),
    m_customerUinHasBeenSet(false),
    m_voucherStatusHasBeenSet(false),
    m_remainingAmountHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_paymentModeHasBeenSet(false),
    m_productScopeHasBeenSet(false),
    m_effectiveTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_applyReasonHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCustomerVoucherItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoucherId") && !value["VoucherId"].IsNull())
    {
        if (!value["VoucherId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerVoucherItem.VoucherId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_voucherId = value["VoucherId"].GetInt64();
        m_voucherIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerUin") && !value["CustomerUin"].IsNull())
    {
        if (!value["CustomerUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerVoucherItem.CustomerUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_customerUin = value["CustomerUin"].GetInt64();
        m_customerUinHasBeenSet = true;
    }

    if (value.HasMember("VoucherStatus") && !value["VoucherStatus"].IsNull())
    {
        if (!value["VoucherStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerVoucherItem.VoucherStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherStatus = string(value["VoucherStatus"].GetString());
        m_voucherStatusHasBeenSet = true;
    }

    if (value.HasMember("RemainingAmount") && !value["RemainingAmount"].IsNull())
    {
        if (!value["RemainingAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerVoucherItem.RemainingAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainingAmount = value["RemainingAmount"].GetDouble();
        m_remainingAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalAmount") && !value["TotalAmount"].IsNull())
    {
        if (!value["TotalAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerVoucherItem.TotalAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmount = value["TotalAmount"].GetDouble();
        m_totalAmountHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerVoucherItem.Usage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usage = string(value["Usage"].GetString());
        m_usageHasBeenSet = true;
    }

    if (value.HasMember("PaymentMode") && !value["PaymentMode"].IsNull())
    {
        if (!value["PaymentMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerVoucherItem.PaymentMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentMode = string(value["PaymentMode"].GetString());
        m_paymentModeHasBeenSet = true;
    }

    if (value.HasMember("ProductScope") && !value["ProductScope"].IsNull())
    {
        if (!value["ProductScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerVoucherItem.ProductScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productScope = string(value["ProductScope"].GetString());
        m_productScopeHasBeenSet = true;
    }

    if (value.HasMember("EffectiveTime") && !value["EffectiveTime"].IsNull())
    {
        if (!value["EffectiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerVoucherItem.EffectiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveTime = string(value["EffectiveTime"].GetString());
        m_effectiveTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerVoucherItem.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplyReason") && !value["ApplyReason"].IsNull())
    {
        if (!value["ApplyReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerVoucherItem.ApplyReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyReason = string(value["ApplyReason"].GetString());
        m_applyReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeCustomerVoucherItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_voucherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voucherId, allocator);
    }

    if (m_customerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerUin, allocator);
    }

    if (m_voucherStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voucherStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_remainingAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingAmount, allocator);
    }

    if (m_totalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAmount, allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usage.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentMode.c_str(), allocator).Move(), allocator);
    }

    if (m_productScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productScope.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_applyReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyReason.c_str(), allocator).Move(), allocator);
    }

}


int64_t DescribeCustomerVoucherItem::GetVoucherId() const
{
    return m_voucherId;
}

void DescribeCustomerVoucherItem::SetVoucherId(const int64_t& _voucherId)
{
    m_voucherId = _voucherId;
    m_voucherIdHasBeenSet = true;
}

bool DescribeCustomerVoucherItem::VoucherIdHasBeenSet() const
{
    return m_voucherIdHasBeenSet;
}

int64_t DescribeCustomerVoucherItem::GetCustomerUin() const
{
    return m_customerUin;
}

void DescribeCustomerVoucherItem::SetCustomerUin(const int64_t& _customerUin)
{
    m_customerUin = _customerUin;
    m_customerUinHasBeenSet = true;
}

bool DescribeCustomerVoucherItem::CustomerUinHasBeenSet() const
{
    return m_customerUinHasBeenSet;
}

string DescribeCustomerVoucherItem::GetVoucherStatus() const
{
    return m_voucherStatus;
}

void DescribeCustomerVoucherItem::SetVoucherStatus(const string& _voucherStatus)
{
    m_voucherStatus = _voucherStatus;
    m_voucherStatusHasBeenSet = true;
}

bool DescribeCustomerVoucherItem::VoucherStatusHasBeenSet() const
{
    return m_voucherStatusHasBeenSet;
}

double DescribeCustomerVoucherItem::GetRemainingAmount() const
{
    return m_remainingAmount;
}

void DescribeCustomerVoucherItem::SetRemainingAmount(const double& _remainingAmount)
{
    m_remainingAmount = _remainingAmount;
    m_remainingAmountHasBeenSet = true;
}

bool DescribeCustomerVoucherItem::RemainingAmountHasBeenSet() const
{
    return m_remainingAmountHasBeenSet;
}

double DescribeCustomerVoucherItem::GetTotalAmount() const
{
    return m_totalAmount;
}

void DescribeCustomerVoucherItem::SetTotalAmount(const double& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool DescribeCustomerVoucherItem::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

string DescribeCustomerVoucherItem::GetUsage() const
{
    return m_usage;
}

void DescribeCustomerVoucherItem::SetUsage(const string& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool DescribeCustomerVoucherItem::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

string DescribeCustomerVoucherItem::GetPaymentMode() const
{
    return m_paymentMode;
}

void DescribeCustomerVoucherItem::SetPaymentMode(const string& _paymentMode)
{
    m_paymentMode = _paymentMode;
    m_paymentModeHasBeenSet = true;
}

bool DescribeCustomerVoucherItem::PaymentModeHasBeenSet() const
{
    return m_paymentModeHasBeenSet;
}

string DescribeCustomerVoucherItem::GetProductScope() const
{
    return m_productScope;
}

void DescribeCustomerVoucherItem::SetProductScope(const string& _productScope)
{
    m_productScope = _productScope;
    m_productScopeHasBeenSet = true;
}

bool DescribeCustomerVoucherItem::ProductScopeHasBeenSet() const
{
    return m_productScopeHasBeenSet;
}

string DescribeCustomerVoucherItem::GetEffectiveTime() const
{
    return m_effectiveTime;
}

void DescribeCustomerVoucherItem::SetEffectiveTime(const string& _effectiveTime)
{
    m_effectiveTime = _effectiveTime;
    m_effectiveTimeHasBeenSet = true;
}

bool DescribeCustomerVoucherItem::EffectiveTimeHasBeenSet() const
{
    return m_effectiveTimeHasBeenSet;
}

string DescribeCustomerVoucherItem::GetExpireTime() const
{
    return m_expireTime;
}

void DescribeCustomerVoucherItem::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DescribeCustomerVoucherItem::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeCustomerVoucherItem::GetApplyReason() const
{
    return m_applyReason;
}

void DescribeCustomerVoucherItem::SetApplyReason(const string& _applyReason)
{
    m_applyReason = _applyReason;
    m_applyReasonHasBeenSet = true;
}

bool DescribeCustomerVoucherItem::ApplyReasonHasBeenSet() const
{
    return m_applyReasonHasBeenSet;
}

