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

#include <tencentcloud/tcsas/v20250106/model/MNGPaymentOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

MNGPaymentOverview::MNGPaymentOverview() :
    m_aRPPuHasBeenSet(false),
    m_dataTimeHasBeenSet(false),
    m_newPaidUseRatioHasBeenSet(false),
    m_newPaidUserNumHasBeenSet(false),
    m_newUserPaidAmountHasBeenSet(false),
    m_paidAmountHasBeenSet(false),
    m_paidUserNumHasBeenSet(false),
    m_refundAmountHasBeenSet(false),
    m_refundNumHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome MNGPaymentOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ARPPu") && !value["ARPPu"].IsNull())
    {
        if (!value["ARPPu"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNGPaymentOverview.ARPPu` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aRPPu = string(value["ARPPu"].GetString());
        m_aRPPuHasBeenSet = true;
    }

    if (value.HasMember("DataTime") && !value["DataTime"].IsNull())
    {
        if (!value["DataTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNGPaymentOverview.DataTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataTime = string(value["DataTime"].GetString());
        m_dataTimeHasBeenSet = true;
    }

    if (value.HasMember("NewPaidUseRatio") && !value["NewPaidUseRatio"].IsNull())
    {
        if (!value["NewPaidUseRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNGPaymentOverview.NewPaidUseRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newPaidUseRatio = string(value["NewPaidUseRatio"].GetString());
        m_newPaidUseRatioHasBeenSet = true;
    }

    if (value.HasMember("NewPaidUserNum") && !value["NewPaidUserNum"].IsNull())
    {
        if (!value["NewPaidUserNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNGPaymentOverview.NewPaidUserNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_newPaidUserNum = value["NewPaidUserNum"].GetInt64();
        m_newPaidUserNumHasBeenSet = true;
    }

    if (value.HasMember("NewUserPaidAmount") && !value["NewUserPaidAmount"].IsNull())
    {
        if (!value["NewUserPaidAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNGPaymentOverview.NewUserPaidAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newUserPaidAmount = string(value["NewUserPaidAmount"].GetString());
        m_newUserPaidAmountHasBeenSet = true;
    }

    if (value.HasMember("PaidAmount") && !value["PaidAmount"].IsNull())
    {
        if (!value["PaidAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNGPaymentOverview.PaidAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paidAmount = string(value["PaidAmount"].GetString());
        m_paidAmountHasBeenSet = true;
    }

    if (value.HasMember("PaidUserNum") && !value["PaidUserNum"].IsNull())
    {
        if (!value["PaidUserNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNGPaymentOverview.PaidUserNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paidUserNum = value["PaidUserNum"].GetInt64();
        m_paidUserNumHasBeenSet = true;
    }

    if (value.HasMember("RefundAmount") && !value["RefundAmount"].IsNull())
    {
        if (!value["RefundAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNGPaymentOverview.RefundAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundAmount = string(value["RefundAmount"].GetString());
        m_refundAmountHasBeenSet = true;
    }

    if (value.HasMember("RefundNum") && !value["RefundNum"].IsNull())
    {
        if (!value["RefundNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNGPaymentOverview.RefundNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_refundNum = value["RefundNum"].GetInt64();
        m_refundNumHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNGPaymentOverview.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MNGPaymentOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aRPPuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ARPPu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aRPPu.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataTime.c_str(), allocator).Move(), allocator);
    }

    if (m_newPaidUseRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewPaidUseRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newPaidUseRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_newPaidUserNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewPaidUserNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newPaidUserNum, allocator);
    }

    if (m_newUserPaidAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewUserPaidAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newUserPaidAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_paidAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaidAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paidAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_paidUserNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaidUserNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paidUserNum, allocator);
    }

    if (m_refundAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_refundNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refundNum, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string MNGPaymentOverview::GetARPPu() const
{
    return m_aRPPu;
}

void MNGPaymentOverview::SetARPPu(const string& _aRPPu)
{
    m_aRPPu = _aRPPu;
    m_aRPPuHasBeenSet = true;
}

bool MNGPaymentOverview::ARPPuHasBeenSet() const
{
    return m_aRPPuHasBeenSet;
}

string MNGPaymentOverview::GetDataTime() const
{
    return m_dataTime;
}

void MNGPaymentOverview::SetDataTime(const string& _dataTime)
{
    m_dataTime = _dataTime;
    m_dataTimeHasBeenSet = true;
}

bool MNGPaymentOverview::DataTimeHasBeenSet() const
{
    return m_dataTimeHasBeenSet;
}

string MNGPaymentOverview::GetNewPaidUseRatio() const
{
    return m_newPaidUseRatio;
}

void MNGPaymentOverview::SetNewPaidUseRatio(const string& _newPaidUseRatio)
{
    m_newPaidUseRatio = _newPaidUseRatio;
    m_newPaidUseRatioHasBeenSet = true;
}

bool MNGPaymentOverview::NewPaidUseRatioHasBeenSet() const
{
    return m_newPaidUseRatioHasBeenSet;
}

int64_t MNGPaymentOverview::GetNewPaidUserNum() const
{
    return m_newPaidUserNum;
}

void MNGPaymentOverview::SetNewPaidUserNum(const int64_t& _newPaidUserNum)
{
    m_newPaidUserNum = _newPaidUserNum;
    m_newPaidUserNumHasBeenSet = true;
}

bool MNGPaymentOverview::NewPaidUserNumHasBeenSet() const
{
    return m_newPaidUserNumHasBeenSet;
}

string MNGPaymentOverview::GetNewUserPaidAmount() const
{
    return m_newUserPaidAmount;
}

void MNGPaymentOverview::SetNewUserPaidAmount(const string& _newUserPaidAmount)
{
    m_newUserPaidAmount = _newUserPaidAmount;
    m_newUserPaidAmountHasBeenSet = true;
}

bool MNGPaymentOverview::NewUserPaidAmountHasBeenSet() const
{
    return m_newUserPaidAmountHasBeenSet;
}

string MNGPaymentOverview::GetPaidAmount() const
{
    return m_paidAmount;
}

void MNGPaymentOverview::SetPaidAmount(const string& _paidAmount)
{
    m_paidAmount = _paidAmount;
    m_paidAmountHasBeenSet = true;
}

bool MNGPaymentOverview::PaidAmountHasBeenSet() const
{
    return m_paidAmountHasBeenSet;
}

int64_t MNGPaymentOverview::GetPaidUserNum() const
{
    return m_paidUserNum;
}

void MNGPaymentOverview::SetPaidUserNum(const int64_t& _paidUserNum)
{
    m_paidUserNum = _paidUserNum;
    m_paidUserNumHasBeenSet = true;
}

bool MNGPaymentOverview::PaidUserNumHasBeenSet() const
{
    return m_paidUserNumHasBeenSet;
}

string MNGPaymentOverview::GetRefundAmount() const
{
    return m_refundAmount;
}

void MNGPaymentOverview::SetRefundAmount(const string& _refundAmount)
{
    m_refundAmount = _refundAmount;
    m_refundAmountHasBeenSet = true;
}

bool MNGPaymentOverview::RefundAmountHasBeenSet() const
{
    return m_refundAmountHasBeenSet;
}

int64_t MNGPaymentOverview::GetRefundNum() const
{
    return m_refundNum;
}

void MNGPaymentOverview::SetRefundNum(const int64_t& _refundNum)
{
    m_refundNum = _refundNum;
    m_refundNumHasBeenSet = true;
}

bool MNGPaymentOverview::RefundNumHasBeenSet() const
{
    return m_refundNumHasBeenSet;
}

int64_t MNGPaymentOverview::GetUpdateTime() const
{
    return m_updateTime;
}

void MNGPaymentOverview::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool MNGPaymentOverview::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

