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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QuerySubAgentsDetailV2ResponseData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QuerySubAgentsDetailV2ResponseData::QuerySubAgentsDetailV2ResponseData() :
    m_subAgentUinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_countOfCustomersHasBeenSet(false),
    m_bindTimeHasBeenSet(false),
    m_creditHasBeenSet(false),
    m_remainingCreditHasBeenSet(false),
    m_voucherHasBeenSet(false),
    m_remainingVoucherHasBeenSet(false)
{
}

CoreInternalOutcome QuerySubAgentsDetailV2ResponseData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubAgentUin") && !value["SubAgentUin"].IsNull())
    {
        if (!value["SubAgentUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySubAgentsDetailV2ResponseData.SubAgentUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subAgentUin = value["SubAgentUin"].GetInt64();
        m_subAgentUinHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySubAgentsDetailV2ResponseData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySubAgentsDetailV2ResponseData.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySubAgentsDetailV2ResponseData.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySubAgentsDetailV2ResponseData.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("CountOfCustomers") && !value["CountOfCustomers"].IsNull())
    {
        if (!value["CountOfCustomers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySubAgentsDetailV2ResponseData.CountOfCustomers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_countOfCustomers = value["CountOfCustomers"].GetInt64();
        m_countOfCustomersHasBeenSet = true;
    }

    if (value.HasMember("BindTime") && !value["BindTime"].IsNull())
    {
        if (!value["BindTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySubAgentsDetailV2ResponseData.BindTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindTime = string(value["BindTime"].GetString());
        m_bindTimeHasBeenSet = true;
    }

    if (value.HasMember("Credit") && !value["Credit"].IsNull())
    {
        if (!value["Credit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySubAgentsDetailV2ResponseData.Credit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_credit = value["Credit"].GetDouble();
        m_creditHasBeenSet = true;
    }

    if (value.HasMember("RemainingCredit") && !value["RemainingCredit"].IsNull())
    {
        if (!value["RemainingCredit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySubAgentsDetailV2ResponseData.RemainingCredit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainingCredit = value["RemainingCredit"].GetDouble();
        m_remainingCreditHasBeenSet = true;
    }

    if (value.HasMember("Voucher") && !value["Voucher"].IsNull())
    {
        if (!value["Voucher"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySubAgentsDetailV2ResponseData.Voucher` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_voucher = value["Voucher"].GetDouble();
        m_voucherHasBeenSet = true;
    }

    if (value.HasMember("RemainingVoucher") && !value["RemainingVoucher"].IsNull())
    {
        if (!value["RemainingVoucher"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySubAgentsDetailV2ResponseData.RemainingVoucher` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainingVoucher = value["RemainingVoucher"].GetDouble();
        m_remainingVoucherHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuerySubAgentsDetailV2ResponseData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subAgentUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAgentUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subAgentUin, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_countOfCustomersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountOfCustomers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_countOfCustomers, allocator);
    }

    if (m_bindTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Credit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_credit, allocator);
    }

    if (m_remainingCreditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingCredit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingCredit, allocator);
    }

    if (m_voucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Voucher";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voucher, allocator);
    }

    if (m_remainingVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingVoucher";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingVoucher, allocator);
    }

}


int64_t QuerySubAgentsDetailV2ResponseData::GetSubAgentUin() const
{
    return m_subAgentUin;
}

void QuerySubAgentsDetailV2ResponseData::SetSubAgentUin(const int64_t& _subAgentUin)
{
    m_subAgentUin = _subAgentUin;
    m_subAgentUinHasBeenSet = true;
}

bool QuerySubAgentsDetailV2ResponseData::SubAgentUinHasBeenSet() const
{
    return m_subAgentUinHasBeenSet;
}

string QuerySubAgentsDetailV2ResponseData::GetName() const
{
    return m_name;
}

void QuerySubAgentsDetailV2ResponseData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool QuerySubAgentsDetailV2ResponseData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string QuerySubAgentsDetailV2ResponseData::GetRemark() const
{
    return m_remark;
}

void QuerySubAgentsDetailV2ResponseData::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool QuerySubAgentsDetailV2ResponseData::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string QuerySubAgentsDetailV2ResponseData::GetMobile() const
{
    return m_mobile;
}

void QuerySubAgentsDetailV2ResponseData::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool QuerySubAgentsDetailV2ResponseData::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string QuerySubAgentsDetailV2ResponseData::GetEmail() const
{
    return m_email;
}

void QuerySubAgentsDetailV2ResponseData::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool QuerySubAgentsDetailV2ResponseData::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

int64_t QuerySubAgentsDetailV2ResponseData::GetCountOfCustomers() const
{
    return m_countOfCustomers;
}

void QuerySubAgentsDetailV2ResponseData::SetCountOfCustomers(const int64_t& _countOfCustomers)
{
    m_countOfCustomers = _countOfCustomers;
    m_countOfCustomersHasBeenSet = true;
}

bool QuerySubAgentsDetailV2ResponseData::CountOfCustomersHasBeenSet() const
{
    return m_countOfCustomersHasBeenSet;
}

string QuerySubAgentsDetailV2ResponseData::GetBindTime() const
{
    return m_bindTime;
}

void QuerySubAgentsDetailV2ResponseData::SetBindTime(const string& _bindTime)
{
    m_bindTime = _bindTime;
    m_bindTimeHasBeenSet = true;
}

bool QuerySubAgentsDetailV2ResponseData::BindTimeHasBeenSet() const
{
    return m_bindTimeHasBeenSet;
}

double QuerySubAgentsDetailV2ResponseData::GetCredit() const
{
    return m_credit;
}

void QuerySubAgentsDetailV2ResponseData::SetCredit(const double& _credit)
{
    m_credit = _credit;
    m_creditHasBeenSet = true;
}

bool QuerySubAgentsDetailV2ResponseData::CreditHasBeenSet() const
{
    return m_creditHasBeenSet;
}

double QuerySubAgentsDetailV2ResponseData::GetRemainingCredit() const
{
    return m_remainingCredit;
}

void QuerySubAgentsDetailV2ResponseData::SetRemainingCredit(const double& _remainingCredit)
{
    m_remainingCredit = _remainingCredit;
    m_remainingCreditHasBeenSet = true;
}

bool QuerySubAgentsDetailV2ResponseData::RemainingCreditHasBeenSet() const
{
    return m_remainingCreditHasBeenSet;
}

double QuerySubAgentsDetailV2ResponseData::GetVoucher() const
{
    return m_voucher;
}

void QuerySubAgentsDetailV2ResponseData::SetVoucher(const double& _voucher)
{
    m_voucher = _voucher;
    m_voucherHasBeenSet = true;
}

bool QuerySubAgentsDetailV2ResponseData::VoucherHasBeenSet() const
{
    return m_voucherHasBeenSet;
}

double QuerySubAgentsDetailV2ResponseData::GetRemainingVoucher() const
{
    return m_remainingVoucher;
}

void QuerySubAgentsDetailV2ResponseData::SetRemainingVoucher(const double& _remainingVoucher)
{
    m_remainingVoucher = _remainingVoucher;
    m_remainingVoucherHasBeenSet = true;
}

bool QuerySubAgentsDetailV2ResponseData::RemainingVoucherHasBeenSet() const
{
    return m_remainingVoucherHasBeenSet;
}

