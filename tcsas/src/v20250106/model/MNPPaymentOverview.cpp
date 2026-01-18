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

#include <tencentcloud/tcsas/v20250106/model/MNPPaymentOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

MNPPaymentOverview::MNPPaymentOverview() :
    m_orderMNPNumHasBeenSet(false),
    m_orderNumHasBeenSet(false),
    m_orderPaidNumHasBeenSet(false),
    m_orderRefundNumHasBeenSet(false),
    m_orderUnpaidNumHasBeenSet(false),
    m_orderUserNumHasBeenSet(false),
    m_paidUserNumHasBeenSet(false),
    m_paidAmountHasBeenSet(false),
    m_refundAmountHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_unpaidAmountHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_dataTimeHasBeenSet(false)
{
}

CoreInternalOutcome MNPPaymentOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderMNPNum") && !value["OrderMNPNum"].IsNull())
    {
        if (!value["OrderMNPNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPPaymentOverview.OrderMNPNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderMNPNum = value["OrderMNPNum"].GetInt64();
        m_orderMNPNumHasBeenSet = true;
    }

    if (value.HasMember("OrderNum") && !value["OrderNum"].IsNull())
    {
        if (!value["OrderNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPPaymentOverview.OrderNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderNum = value["OrderNum"].GetInt64();
        m_orderNumHasBeenSet = true;
    }

    if (value.HasMember("OrderPaidNum") && !value["OrderPaidNum"].IsNull())
    {
        if (!value["OrderPaidNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPPaymentOverview.OrderPaidNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderPaidNum = value["OrderPaidNum"].GetInt64();
        m_orderPaidNumHasBeenSet = true;
    }

    if (value.HasMember("OrderRefundNum") && !value["OrderRefundNum"].IsNull())
    {
        if (!value["OrderRefundNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPPaymentOverview.OrderRefundNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderRefundNum = value["OrderRefundNum"].GetInt64();
        m_orderRefundNumHasBeenSet = true;
    }

    if (value.HasMember("OrderUnpaidNum") && !value["OrderUnpaidNum"].IsNull())
    {
        if (!value["OrderUnpaidNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPPaymentOverview.OrderUnpaidNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderUnpaidNum = value["OrderUnpaidNum"].GetInt64();
        m_orderUnpaidNumHasBeenSet = true;
    }

    if (value.HasMember("OrderUserNum") && !value["OrderUserNum"].IsNull())
    {
        if (!value["OrderUserNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPPaymentOverview.OrderUserNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderUserNum = value["OrderUserNum"].GetInt64();
        m_orderUserNumHasBeenSet = true;
    }

    if (value.HasMember("PaidUserNum") && !value["PaidUserNum"].IsNull())
    {
        if (!value["PaidUserNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPPaymentOverview.PaidUserNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paidUserNum = value["PaidUserNum"].GetInt64();
        m_paidUserNumHasBeenSet = true;
    }

    if (value.HasMember("PaidAmount") && !value["PaidAmount"].IsNull())
    {
        if (!value["PaidAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPPaymentOverview.PaidAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paidAmount = string(value["PaidAmount"].GetString());
        m_paidAmountHasBeenSet = true;
    }

    if (value.HasMember("RefundAmount") && !value["RefundAmount"].IsNull())
    {
        if (!value["RefundAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPPaymentOverview.RefundAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundAmount = string(value["RefundAmount"].GetString());
        m_refundAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalAmount") && !value["TotalAmount"].IsNull())
    {
        if (!value["TotalAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPPaymentOverview.TotalAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmount = string(value["TotalAmount"].GetString());
        m_totalAmountHasBeenSet = true;
    }

    if (value.HasMember("UnpaidAmount") && !value["UnpaidAmount"].IsNull())
    {
        if (!value["UnpaidAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPPaymentOverview.UnpaidAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unpaidAmount = string(value["UnpaidAmount"].GetString());
        m_unpaidAmountHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPPaymentOverview.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DataTime") && !value["DataTime"].IsNull())
    {
        if (!value["DataTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPPaymentOverview.DataTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataTime = string(value["DataTime"].GetString());
        m_dataTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MNPPaymentOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderMNPNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderMNPNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderMNPNum, allocator);
    }

    if (m_orderNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderNum, allocator);
    }

    if (m_orderPaidNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderPaidNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderPaidNum, allocator);
    }

    if (m_orderRefundNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderRefundNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderRefundNum, allocator);
    }

    if (m_orderUnpaidNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderUnpaidNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderUnpaidNum, allocator);
    }

    if (m_orderUserNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderUserNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderUserNum, allocator);
    }

    if (m_paidUserNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaidUserNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paidUserNum, allocator);
    }

    if (m_paidAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaidAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paidAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_refundAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_totalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_unpaidAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnpaidAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unpaidAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_dataTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t MNPPaymentOverview::GetOrderMNPNum() const
{
    return m_orderMNPNum;
}

void MNPPaymentOverview::SetOrderMNPNum(const int64_t& _orderMNPNum)
{
    m_orderMNPNum = _orderMNPNum;
    m_orderMNPNumHasBeenSet = true;
}

bool MNPPaymentOverview::OrderMNPNumHasBeenSet() const
{
    return m_orderMNPNumHasBeenSet;
}

int64_t MNPPaymentOverview::GetOrderNum() const
{
    return m_orderNum;
}

void MNPPaymentOverview::SetOrderNum(const int64_t& _orderNum)
{
    m_orderNum = _orderNum;
    m_orderNumHasBeenSet = true;
}

bool MNPPaymentOverview::OrderNumHasBeenSet() const
{
    return m_orderNumHasBeenSet;
}

int64_t MNPPaymentOverview::GetOrderPaidNum() const
{
    return m_orderPaidNum;
}

void MNPPaymentOverview::SetOrderPaidNum(const int64_t& _orderPaidNum)
{
    m_orderPaidNum = _orderPaidNum;
    m_orderPaidNumHasBeenSet = true;
}

bool MNPPaymentOverview::OrderPaidNumHasBeenSet() const
{
    return m_orderPaidNumHasBeenSet;
}

int64_t MNPPaymentOverview::GetOrderRefundNum() const
{
    return m_orderRefundNum;
}

void MNPPaymentOverview::SetOrderRefundNum(const int64_t& _orderRefundNum)
{
    m_orderRefundNum = _orderRefundNum;
    m_orderRefundNumHasBeenSet = true;
}

bool MNPPaymentOverview::OrderRefundNumHasBeenSet() const
{
    return m_orderRefundNumHasBeenSet;
}

int64_t MNPPaymentOverview::GetOrderUnpaidNum() const
{
    return m_orderUnpaidNum;
}

void MNPPaymentOverview::SetOrderUnpaidNum(const int64_t& _orderUnpaidNum)
{
    m_orderUnpaidNum = _orderUnpaidNum;
    m_orderUnpaidNumHasBeenSet = true;
}

bool MNPPaymentOverview::OrderUnpaidNumHasBeenSet() const
{
    return m_orderUnpaidNumHasBeenSet;
}

int64_t MNPPaymentOverview::GetOrderUserNum() const
{
    return m_orderUserNum;
}

void MNPPaymentOverview::SetOrderUserNum(const int64_t& _orderUserNum)
{
    m_orderUserNum = _orderUserNum;
    m_orderUserNumHasBeenSet = true;
}

bool MNPPaymentOverview::OrderUserNumHasBeenSet() const
{
    return m_orderUserNumHasBeenSet;
}

int64_t MNPPaymentOverview::GetPaidUserNum() const
{
    return m_paidUserNum;
}

void MNPPaymentOverview::SetPaidUserNum(const int64_t& _paidUserNum)
{
    m_paidUserNum = _paidUserNum;
    m_paidUserNumHasBeenSet = true;
}

bool MNPPaymentOverview::PaidUserNumHasBeenSet() const
{
    return m_paidUserNumHasBeenSet;
}

string MNPPaymentOverview::GetPaidAmount() const
{
    return m_paidAmount;
}

void MNPPaymentOverview::SetPaidAmount(const string& _paidAmount)
{
    m_paidAmount = _paidAmount;
    m_paidAmountHasBeenSet = true;
}

bool MNPPaymentOverview::PaidAmountHasBeenSet() const
{
    return m_paidAmountHasBeenSet;
}

string MNPPaymentOverview::GetRefundAmount() const
{
    return m_refundAmount;
}

void MNPPaymentOverview::SetRefundAmount(const string& _refundAmount)
{
    m_refundAmount = _refundAmount;
    m_refundAmountHasBeenSet = true;
}

bool MNPPaymentOverview::RefundAmountHasBeenSet() const
{
    return m_refundAmountHasBeenSet;
}

string MNPPaymentOverview::GetTotalAmount() const
{
    return m_totalAmount;
}

void MNPPaymentOverview::SetTotalAmount(const string& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool MNPPaymentOverview::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

string MNPPaymentOverview::GetUnpaidAmount() const
{
    return m_unpaidAmount;
}

void MNPPaymentOverview::SetUnpaidAmount(const string& _unpaidAmount)
{
    m_unpaidAmount = _unpaidAmount;
    m_unpaidAmountHasBeenSet = true;
}

bool MNPPaymentOverview::UnpaidAmountHasBeenSet() const
{
    return m_unpaidAmountHasBeenSet;
}

int64_t MNPPaymentOverview::GetUpdateTime() const
{
    return m_updateTime;
}

void MNPPaymentOverview::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool MNPPaymentOverview::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string MNPPaymentOverview::GetDataTime() const
{
    return m_dataTime;
}

void MNPPaymentOverview::SetDataTime(const string& _dataTime)
{
    m_dataTime = _dataTime;
    m_dataTimeHasBeenSet = true;
}

bool MNPPaymentOverview::DataTimeHasBeenSet() const
{
    return m_dataTimeHasBeenSet;
}

