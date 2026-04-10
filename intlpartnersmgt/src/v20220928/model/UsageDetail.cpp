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

#include <tencentcloud/intlpartnersmgt/v20220928/model/UsageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

UsageDetail::UsageDetail() :
    m_idHasBeenSet(false),
    m_voucherIdHasBeenSet(false),
    m_dealNameHasBeenSet(false),
    m_billIdHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_productCodeNameHasBeenSet(false),
    m_subProductCodeNameHasBeenSet(false),
    m_payTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_ownerUinHasBeenSet(false)
{
}

CoreInternalOutcome UsageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("VoucherId") && !value["VoucherId"].IsNull())
    {
        if (!value["VoucherId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.VoucherId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherId = string(value["VoucherId"].GetString());
        m_voucherIdHasBeenSet = true;
    }

    if (value.HasMember("DealName") && !value["DealName"].IsNull())
    {
        if (!value["DealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.DealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealName = string(value["DealName"].GetString());
        m_dealNameHasBeenSet = true;
    }

    if (value.HasMember("BillId") && !value["BillId"].IsNull())
    {
        if (!value["BillId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.BillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billId = string(value["BillId"].GetString());
        m_billIdHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.Amount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_amount = value["Amount"].GetDouble();
        m_amountHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("SubProductCode") && !value["SubProductCode"].IsNull())
    {
        if (!value["SubProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.SubProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCode = string(value["SubProductCode"].GetString());
        m_subProductCodeHasBeenSet = true;
    }

    if (value.HasMember("ProductCodeName") && !value["ProductCodeName"].IsNull())
    {
        if (!value["ProductCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.ProductCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCodeName = string(value["ProductCodeName"].GetString());
        m_productCodeNameHasBeenSet = true;
    }

    if (value.HasMember("SubProductCodeName") && !value["SubProductCodeName"].IsNull())
    {
        if (!value["SubProductCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.SubProductCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCodeName = string(value["SubProductCodeName"].GetString());
        m_subProductCodeNameHasBeenSet = true;
    }

    if (value.HasMember("PayTime") && !value["PayTime"].IsNull())
    {
        if (!value["PayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.PayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTime = string(value["PayTime"].GetString());
        m_payTimeHasBeenSet = true;
    }

    if (value.HasMember("CompletionTime") && !value["CompletionTime"].IsNull())
    {
        if (!value["CompletionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.CompletionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_completionTime = string(value["CompletionTime"].GetString());
        m_completionTimeHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.OwnerUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = value["OwnerUin"].GetInt64();
        m_ownerUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_voucherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voucherId.c_str(), allocator).Move(), allocator);
    }

    if (m_dealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealName.c_str(), allocator).Move(), allocator);
    }

    if (m_billIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billId.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amount, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_payTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payTime.c_str(), allocator).Move(), allocator);
    }

    if (m_completionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompletionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_completionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerUin, allocator);
    }

}


int64_t UsageDetail::GetId() const
{
    return m_id;
}

void UsageDetail::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UsageDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UsageDetail::GetVoucherId() const
{
    return m_voucherId;
}

void UsageDetail::SetVoucherId(const string& _voucherId)
{
    m_voucherId = _voucherId;
    m_voucherIdHasBeenSet = true;
}

bool UsageDetail::VoucherIdHasBeenSet() const
{
    return m_voucherIdHasBeenSet;
}

string UsageDetail::GetDealName() const
{
    return m_dealName;
}

void UsageDetail::SetDealName(const string& _dealName)
{
    m_dealName = _dealName;
    m_dealNameHasBeenSet = true;
}

bool UsageDetail::DealNameHasBeenSet() const
{
    return m_dealNameHasBeenSet;
}

string UsageDetail::GetBillId() const
{
    return m_billId;
}

void UsageDetail::SetBillId(const string& _billId)
{
    m_billId = _billId;
    m_billIdHasBeenSet = true;
}

bool UsageDetail::BillIdHasBeenSet() const
{
    return m_billIdHasBeenSet;
}

double UsageDetail::GetAmount() const
{
    return m_amount;
}

void UsageDetail::SetAmount(const double& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool UsageDetail::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

string UsageDetail::GetPayMode() const
{
    return m_payMode;
}

void UsageDetail::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool UsageDetail::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string UsageDetail::GetProductCode() const
{
    return m_productCode;
}

void UsageDetail::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool UsageDetail::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string UsageDetail::GetSubProductCode() const
{
    return m_subProductCode;
}

void UsageDetail::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool UsageDetail::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

string UsageDetail::GetProductCodeName() const
{
    return m_productCodeName;
}

void UsageDetail::SetProductCodeName(const string& _productCodeName)
{
    m_productCodeName = _productCodeName;
    m_productCodeNameHasBeenSet = true;
}

bool UsageDetail::ProductCodeNameHasBeenSet() const
{
    return m_productCodeNameHasBeenSet;
}

string UsageDetail::GetSubProductCodeName() const
{
    return m_subProductCodeName;
}

void UsageDetail::SetSubProductCodeName(const string& _subProductCodeName)
{
    m_subProductCodeName = _subProductCodeName;
    m_subProductCodeNameHasBeenSet = true;
}

bool UsageDetail::SubProductCodeNameHasBeenSet() const
{
    return m_subProductCodeNameHasBeenSet;
}

string UsageDetail::GetPayTime() const
{
    return m_payTime;
}

void UsageDetail::SetPayTime(const string& _payTime)
{
    m_payTime = _payTime;
    m_payTimeHasBeenSet = true;
}

bool UsageDetail::PayTimeHasBeenSet() const
{
    return m_payTimeHasBeenSet;
}

string UsageDetail::GetCompletionTime() const
{
    return m_completionTime;
}

void UsageDetail::SetCompletionTime(const string& _completionTime)
{
    m_completionTime = _completionTime;
    m_completionTimeHasBeenSet = true;
}

bool UsageDetail::CompletionTimeHasBeenSet() const
{
    return m_completionTimeHasBeenSet;
}

int64_t UsageDetail::GetOwnerUin() const
{
    return m_ownerUin;
}

void UsageDetail::SetOwnerUin(const int64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool UsageDetail::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

