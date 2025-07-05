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

#include <tencentcloud/faceid/v20180301/model/PhilippinesTinID.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

PhilippinesTinID::PhilippinesTinID() :
    m_licenseNumberHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_issueDateHasBeenSet(false)
{
}

CoreInternalOutcome PhilippinesTinID::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LicenseNumber") && !value["LicenseNumber"].IsNull())
    {
        if (!value["LicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesTinID.LicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNumber = string(value["LicenseNumber"].GetString());
        m_licenseNumberHasBeenSet = true;
    }

    if (value.HasMember("FullName") && !value["FullName"].IsNull())
    {
        if (!value["FullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesTinID.FullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullName = string(value["FullName"].GetString());
        m_fullNameHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesTinID.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesTinID.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("IssueDate") && !value["IssueDate"].IsNull())
    {
        if (!value["IssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesTinID.IssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueDate = string(value["IssueDate"].GetString());
        m_issueDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PhilippinesTinID::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_licenseNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_fullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

    if (m_issueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueDate.c_str(), allocator).Move(), allocator);
    }

}


string PhilippinesTinID::GetLicenseNumber() const
{
    return m_licenseNumber;
}

void PhilippinesTinID::SetLicenseNumber(const string& _licenseNumber)
{
    m_licenseNumber = _licenseNumber;
    m_licenseNumberHasBeenSet = true;
}

bool PhilippinesTinID::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

string PhilippinesTinID::GetFullName() const
{
    return m_fullName;
}

void PhilippinesTinID::SetFullName(const string& _fullName)
{
    m_fullName = _fullName;
    m_fullNameHasBeenSet = true;
}

bool PhilippinesTinID::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

string PhilippinesTinID::GetAddress() const
{
    return m_address;
}

void PhilippinesTinID::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool PhilippinesTinID::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string PhilippinesTinID::GetBirthday() const
{
    return m_birthday;
}

void PhilippinesTinID::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool PhilippinesTinID::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string PhilippinesTinID::GetIssueDate() const
{
    return m_issueDate;
}

void PhilippinesTinID::SetIssueDate(const string& _issueDate)
{
    m_issueDate = _issueDate;
    m_issueDateHasBeenSet = true;
}

bool PhilippinesTinID::IssueDateHasBeenSet() const
{
    return m_issueDateHasBeenSet;
}

