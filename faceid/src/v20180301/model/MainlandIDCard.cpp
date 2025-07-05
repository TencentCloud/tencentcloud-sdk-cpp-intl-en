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

#include <tencentcloud/faceid/v20180301/model/MainlandIDCard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

MainlandIDCard::MainlandIDCard() :
    m_fullNameHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_nationHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_licenseNumberHasBeenSet(false),
    m_formattedAddressHasBeenSet(false)
{
}

CoreInternalOutcome MainlandIDCard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FullName") && !value["FullName"].IsNull())
    {
        if (!value["FullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandIDCard.FullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullName = string(value["FullName"].GetString());
        m_fullNameHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandIDCard.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("Nation") && !value["Nation"].IsNull())
    {
        if (!value["Nation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandIDCard.Nation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nation = string(value["Nation"].GetString());
        m_nationHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandIDCard.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandIDCard.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("LicenseNumber") && !value["LicenseNumber"].IsNull())
    {
        if (!value["LicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandIDCard.LicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNumber = string(value["LicenseNumber"].GetString());
        m_licenseNumberHasBeenSet = true;
    }

    if (value.HasMember("FormattedAddress") && !value["FormattedAddress"].IsNull())
    {
        if (!value["FormattedAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandIDCard.FormattedAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formattedAddress = string(value["FormattedAddress"].GetString());
        m_formattedAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MainlandIDCard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullName.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_nationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nation.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_formattedAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormattedAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formattedAddress.c_str(), allocator).Move(), allocator);
    }

}


string MainlandIDCard::GetFullName() const
{
    return m_fullName;
}

void MainlandIDCard::SetFullName(const string& _fullName)
{
    m_fullName = _fullName;
    m_fullNameHasBeenSet = true;
}

bool MainlandIDCard::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

string MainlandIDCard::GetSex() const
{
    return m_sex;
}

void MainlandIDCard::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool MainlandIDCard::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string MainlandIDCard::GetNation() const
{
    return m_nation;
}

void MainlandIDCard::SetNation(const string& _nation)
{
    m_nation = _nation;
    m_nationHasBeenSet = true;
}

bool MainlandIDCard::NationHasBeenSet() const
{
    return m_nationHasBeenSet;
}

string MainlandIDCard::GetBirthday() const
{
    return m_birthday;
}

void MainlandIDCard::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool MainlandIDCard::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string MainlandIDCard::GetAddress() const
{
    return m_address;
}

void MainlandIDCard::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool MainlandIDCard::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string MainlandIDCard::GetLicenseNumber() const
{
    return m_licenseNumber;
}

void MainlandIDCard::SetLicenseNumber(const string& _licenseNumber)
{
    m_licenseNumber = _licenseNumber;
    m_licenseNumberHasBeenSet = true;
}

bool MainlandIDCard::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

string MainlandIDCard::GetFormattedAddress() const
{
    return m_formattedAddress;
}

void MainlandIDCard::SetFormattedAddress(const string& _formattedAddress)
{
    m_formattedAddress = _formattedAddress;
    m_formattedAddressHasBeenSet = true;
}

bool MainlandIDCard::FormattedAddressHasBeenSet() const
{
    return m_formattedAddressHasBeenSet;
}

