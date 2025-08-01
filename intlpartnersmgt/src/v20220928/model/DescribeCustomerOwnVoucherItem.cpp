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

#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerOwnVoucherItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

DescribeCustomerOwnVoucherItem::DescribeCustomerOwnVoucherItem() :
    m_voucherIdHasBeenSet(false),
    m_customerUinHasBeenSet(false),
    m_voucherStatusHasBeenSet(false),
    m_remainingAmountHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_paymentModeHasBeenSet(false),
    m_productScopeHasBeenSet(false),
    m_effectiveTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCustomerOwnVoucherItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoucherId") && !value["VoucherId"].IsNull())
    {
        if (!value["VoucherId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerOwnVoucherItem.VoucherId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_voucherId = value["VoucherId"].GetInt64();
        m_voucherIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerUin") && !value["CustomerUin"].IsNull())
    {
        if (!value["CustomerUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerOwnVoucherItem.CustomerUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_customerUin = value["CustomerUin"].GetInt64();
        m_customerUinHasBeenSet = true;
    }

    if (value.HasMember("VoucherStatus") && !value["VoucherStatus"].IsNull())
    {
        if (!value["VoucherStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerOwnVoucherItem.VoucherStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherStatus = string(value["VoucherStatus"].GetString());
        m_voucherStatusHasBeenSet = true;
    }

    if (value.HasMember("RemainingAmount") && !value["RemainingAmount"].IsNull())
    {
        if (!value["RemainingAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerOwnVoucherItem.RemainingAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainingAmount = value["RemainingAmount"].GetDouble();
        m_remainingAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalAmount") && !value["TotalAmount"].IsNull())
    {
        if (!value["TotalAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerOwnVoucherItem.TotalAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmount = value["TotalAmount"].GetDouble();
        m_totalAmountHasBeenSet = true;
    }

    if (value.HasMember("PaymentMode") && !value["PaymentMode"].IsNull())
    {
        if (!value["PaymentMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerOwnVoucherItem.PaymentMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentMode = string(value["PaymentMode"].GetString());
        m_paymentModeHasBeenSet = true;
    }

    if (value.HasMember("ProductScope") && !value["ProductScope"].IsNull())
    {
        if (!value["ProductScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerOwnVoucherItem.ProductScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productScope = string(value["ProductScope"].GetString());
        m_productScopeHasBeenSet = true;
    }

    if (value.HasMember("EffectiveTime") && !value["EffectiveTime"].IsNull())
    {
        if (!value["EffectiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerOwnVoucherItem.EffectiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveTime = string(value["EffectiveTime"].GetString());
        m_effectiveTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerOwnVoucherItem.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeCustomerOwnVoucherItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


int64_t DescribeCustomerOwnVoucherItem::GetVoucherId() const
{
    return m_voucherId;
}

void DescribeCustomerOwnVoucherItem::SetVoucherId(const int64_t& _voucherId)
{
    m_voucherId = _voucherId;
    m_voucherIdHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherItem::VoucherIdHasBeenSet() const
{
    return m_voucherIdHasBeenSet;
}

int64_t DescribeCustomerOwnVoucherItem::GetCustomerUin() const
{
    return m_customerUin;
}

void DescribeCustomerOwnVoucherItem::SetCustomerUin(const int64_t& _customerUin)
{
    m_customerUin = _customerUin;
    m_customerUinHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherItem::CustomerUinHasBeenSet() const
{
    return m_customerUinHasBeenSet;
}

string DescribeCustomerOwnVoucherItem::GetVoucherStatus() const
{
    return m_voucherStatus;
}

void DescribeCustomerOwnVoucherItem::SetVoucherStatus(const string& _voucherStatus)
{
    m_voucherStatus = _voucherStatus;
    m_voucherStatusHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherItem::VoucherStatusHasBeenSet() const
{
    return m_voucherStatusHasBeenSet;
}

double DescribeCustomerOwnVoucherItem::GetRemainingAmount() const
{
    return m_remainingAmount;
}

void DescribeCustomerOwnVoucherItem::SetRemainingAmount(const double& _remainingAmount)
{
    m_remainingAmount = _remainingAmount;
    m_remainingAmountHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherItem::RemainingAmountHasBeenSet() const
{
    return m_remainingAmountHasBeenSet;
}

double DescribeCustomerOwnVoucherItem::GetTotalAmount() const
{
    return m_totalAmount;
}

void DescribeCustomerOwnVoucherItem::SetTotalAmount(const double& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherItem::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

string DescribeCustomerOwnVoucherItem::GetPaymentMode() const
{
    return m_paymentMode;
}

void DescribeCustomerOwnVoucherItem::SetPaymentMode(const string& _paymentMode)
{
    m_paymentMode = _paymentMode;
    m_paymentModeHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherItem::PaymentModeHasBeenSet() const
{
    return m_paymentModeHasBeenSet;
}

string DescribeCustomerOwnVoucherItem::GetProductScope() const
{
    return m_productScope;
}

void DescribeCustomerOwnVoucherItem::SetProductScope(const string& _productScope)
{
    m_productScope = _productScope;
    m_productScopeHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherItem::ProductScopeHasBeenSet() const
{
    return m_productScopeHasBeenSet;
}

string DescribeCustomerOwnVoucherItem::GetEffectiveTime() const
{
    return m_effectiveTime;
}

void DescribeCustomerOwnVoucherItem::SetEffectiveTime(const string& _effectiveTime)
{
    m_effectiveTime = _effectiveTime;
    m_effectiveTimeHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherItem::EffectiveTimeHasBeenSet() const
{
    return m_effectiveTimeHasBeenSet;
}

string DescribeCustomerOwnVoucherItem::GetExpireTime() const
{
    return m_expireTime;
}

void DescribeCustomerOwnVoucherItem::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DescribeCustomerOwnVoucherItem::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

