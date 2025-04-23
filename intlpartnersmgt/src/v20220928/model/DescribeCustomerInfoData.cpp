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

#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerInfoData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

DescribeCustomerInfoData::DescribeCustomerInfoData() :
    m_customerUinHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_markHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_bindTimeHasBeenSet(false),
    m_accountStatusHasBeenSet(false),
    m_authStatusHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_cidRegisterTimeHasBeenSet(false),
    m_uinRegisterTimeHasBeenSet(false),
    m_authPassTimeHasBeenSet(false),
    m_hasExpenseHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCustomerInfoData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerUin") && !value["CustomerUin"].IsNull())
    {
        if (!value["CustomerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerInfoData.CustomerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerUin = string(value["CustomerUin"].GetString());
        m_customerUinHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerInfoData.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerInfoData.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Mark") && !value["Mark"].IsNull())
    {
        if (!value["Mark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerInfoData.Mark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mark = string(value["Mark"].GetString());
        m_markHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerInfoData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("BindTime") && !value["BindTime"].IsNull())
    {
        if (!value["BindTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerInfoData.BindTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindTime = string(value["BindTime"].GetString());
        m_bindTimeHasBeenSet = true;
    }

    if (value.HasMember("AccountStatus") && !value["AccountStatus"].IsNull())
    {
        if (!value["AccountStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerInfoData.AccountStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountStatus = string(value["AccountStatus"].GetString());
        m_accountStatusHasBeenSet = true;
    }

    if (value.HasMember("AuthStatus") && !value["AuthStatus"].IsNull())
    {
        if (!value["AuthStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerInfoData.AuthStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authStatus = string(value["AuthStatus"].GetString());
        m_authStatusHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerInfoData.AuthType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authType = value["AuthType"].GetInt64();
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("CidRegisterTime") && !value["CidRegisterTime"].IsNull())
    {
        if (!value["CidRegisterTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerInfoData.CidRegisterTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidRegisterTime = string(value["CidRegisterTime"].GetString());
        m_cidRegisterTimeHasBeenSet = true;
    }

    if (value.HasMember("UinRegisterTime") && !value["UinRegisterTime"].IsNull())
    {
        if (!value["UinRegisterTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerInfoData.UinRegisterTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uinRegisterTime = string(value["UinRegisterTime"].GetString());
        m_uinRegisterTimeHasBeenSet = true;
    }

    if (value.HasMember("AuthPassTime") && !value["AuthPassTime"].IsNull())
    {
        if (!value["AuthPassTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerInfoData.AuthPassTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authPassTime = string(value["AuthPassTime"].GetString());
        m_authPassTimeHasBeenSet = true;
    }

    if (value.HasMember("HasExpense") && !value["HasExpense"].IsNull())
    {
        if (!value["HasExpense"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerInfoData.HasExpense` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hasExpense = value["HasExpense"].GetInt64();
        m_hasExpenseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeCustomerInfoData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_markHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mark.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_bindTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindTime.c_str(), allocator).Move(), allocator);
    }

    if (m_accountStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_authStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authType, allocator);
    }

    if (m_cidRegisterTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidRegisterTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidRegisterTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uinRegisterTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UinRegisterTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uinRegisterTime.c_str(), allocator).Move(), allocator);
    }

    if (m_authPassTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthPassTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authPassTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hasExpenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasExpense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasExpense, allocator);
    }

}


string DescribeCustomerInfoData::GetCustomerUin() const
{
    return m_customerUin;
}

void DescribeCustomerInfoData::SetCustomerUin(const string& _customerUin)
{
    m_customerUin = _customerUin;
    m_customerUinHasBeenSet = true;
}

bool DescribeCustomerInfoData::CustomerUinHasBeenSet() const
{
    return m_customerUinHasBeenSet;
}

string DescribeCustomerInfoData::GetEmail() const
{
    return m_email;
}

void DescribeCustomerInfoData::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool DescribeCustomerInfoData::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string DescribeCustomerInfoData::GetPhone() const
{
    return m_phone;
}

void DescribeCustomerInfoData::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool DescribeCustomerInfoData::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string DescribeCustomerInfoData::GetMark() const
{
    return m_mark;
}

void DescribeCustomerInfoData::SetMark(const string& _mark)
{
    m_mark = _mark;
    m_markHasBeenSet = true;
}

bool DescribeCustomerInfoData::MarkHasBeenSet() const
{
    return m_markHasBeenSet;
}

string DescribeCustomerInfoData::GetName() const
{
    return m_name;
}

void DescribeCustomerInfoData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeCustomerInfoData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeCustomerInfoData::GetBindTime() const
{
    return m_bindTime;
}

void DescribeCustomerInfoData::SetBindTime(const string& _bindTime)
{
    m_bindTime = _bindTime;
    m_bindTimeHasBeenSet = true;
}

bool DescribeCustomerInfoData::BindTimeHasBeenSet() const
{
    return m_bindTimeHasBeenSet;
}

string DescribeCustomerInfoData::GetAccountStatus() const
{
    return m_accountStatus;
}

void DescribeCustomerInfoData::SetAccountStatus(const string& _accountStatus)
{
    m_accountStatus = _accountStatus;
    m_accountStatusHasBeenSet = true;
}

bool DescribeCustomerInfoData::AccountStatusHasBeenSet() const
{
    return m_accountStatusHasBeenSet;
}

string DescribeCustomerInfoData::GetAuthStatus() const
{
    return m_authStatus;
}

void DescribeCustomerInfoData::SetAuthStatus(const string& _authStatus)
{
    m_authStatus = _authStatus;
    m_authStatusHasBeenSet = true;
}

bool DescribeCustomerInfoData::AuthStatusHasBeenSet() const
{
    return m_authStatusHasBeenSet;
}

int64_t DescribeCustomerInfoData::GetAuthType() const
{
    return m_authType;
}

void DescribeCustomerInfoData::SetAuthType(const int64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool DescribeCustomerInfoData::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string DescribeCustomerInfoData::GetCidRegisterTime() const
{
    return m_cidRegisterTime;
}

void DescribeCustomerInfoData::SetCidRegisterTime(const string& _cidRegisterTime)
{
    m_cidRegisterTime = _cidRegisterTime;
    m_cidRegisterTimeHasBeenSet = true;
}

bool DescribeCustomerInfoData::CidRegisterTimeHasBeenSet() const
{
    return m_cidRegisterTimeHasBeenSet;
}

string DescribeCustomerInfoData::GetUinRegisterTime() const
{
    return m_uinRegisterTime;
}

void DescribeCustomerInfoData::SetUinRegisterTime(const string& _uinRegisterTime)
{
    m_uinRegisterTime = _uinRegisterTime;
    m_uinRegisterTimeHasBeenSet = true;
}

bool DescribeCustomerInfoData::UinRegisterTimeHasBeenSet() const
{
    return m_uinRegisterTimeHasBeenSet;
}

string DescribeCustomerInfoData::GetAuthPassTime() const
{
    return m_authPassTime;
}

void DescribeCustomerInfoData::SetAuthPassTime(const string& _authPassTime)
{
    m_authPassTime = _authPassTime;
    m_authPassTimeHasBeenSet = true;
}

bool DescribeCustomerInfoData::AuthPassTimeHasBeenSet() const
{
    return m_authPassTimeHasBeenSet;
}

int64_t DescribeCustomerInfoData::GetHasExpense() const
{
    return m_hasExpense;
}

void DescribeCustomerInfoData::SetHasExpense(const int64_t& _hasExpense)
{
    m_hasExpense = _hasExpense;
    m_hasExpenseHasBeenSet = true;
}

bool DescribeCustomerInfoData::HasExpenseHasBeenSet() const
{
    return m_hasExpenseHasBeenSet;
}

