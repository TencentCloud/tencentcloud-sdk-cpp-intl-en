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

#include <tencentcloud/faceid/v20180301/model/NormalThailandIDCard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

NormalThailandIDCard::NormalThailandIDCard() :
    m_licenseNumberHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_formattedAddressHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_issuedDateHasBeenSet(false),
    m_registrationNumberHasBeenSet(false),
    m_religionHasBeenSet(false),
    m_thaiBirthdayHasBeenSet(false),
    m_thaiExpirationDateHasBeenSet(false),
    m_thaiIssueDateHasBeenSet(false)
{
}

CoreInternalOutcome NormalThailandIDCard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LicenseNumber") && !value["LicenseNumber"].IsNull())
    {
        if (!value["LicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalThailandIDCard.LicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNumber = string(value["LicenseNumber"].GetString());
        m_licenseNumberHasBeenSet = true;
    }

    if (value.HasMember("FullName") && !value["FullName"].IsNull())
    {
        if (!value["FullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalThailandIDCard.FullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullName = string(value["FullName"].GetString());
        m_fullNameHasBeenSet = true;
    }

    if (value.HasMember("LastName") && !value["LastName"].IsNull())
    {
        if (!value["LastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalThailandIDCard.LastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastName = string(value["LastName"].GetString());
        m_lastNameHasBeenSet = true;
    }

    if (value.HasMember("FirstName") && !value["FirstName"].IsNull())
    {
        if (!value["FirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalThailandIDCard.FirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstName = string(value["FirstName"].GetString());
        m_firstNameHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalThailandIDCard.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("FormattedAddress") && !value["FormattedAddress"].IsNull())
    {
        if (!value["FormattedAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalThailandIDCard.FormattedAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formattedAddress = string(value["FormattedAddress"].GetString());
        m_formattedAddressHasBeenSet = true;
    }

    if (value.HasMember("ExpirationDate") && !value["ExpirationDate"].IsNull())
    {
        if (!value["ExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalThailandIDCard.ExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = string(value["ExpirationDate"].GetString());
        m_expirationDateHasBeenSet = true;
    }

    if (value.HasMember("IssuedDate") && !value["IssuedDate"].IsNull())
    {
        if (!value["IssuedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalThailandIDCard.IssuedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedDate = string(value["IssuedDate"].GetString());
        m_issuedDateHasBeenSet = true;
    }

    if (value.HasMember("RegistrationNumber") && !value["RegistrationNumber"].IsNull())
    {
        if (!value["RegistrationNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalThailandIDCard.RegistrationNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationNumber = string(value["RegistrationNumber"].GetString());
        m_registrationNumberHasBeenSet = true;
    }

    if (value.HasMember("Religion") && !value["Religion"].IsNull())
    {
        if (!value["Religion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalThailandIDCard.Religion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_religion = string(value["Religion"].GetString());
        m_religionHasBeenSet = true;
    }

    if (value.HasMember("ThaiBirthday") && !value["ThaiBirthday"].IsNull())
    {
        if (!value["ThaiBirthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalThailandIDCard.ThaiBirthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thaiBirthday = string(value["ThaiBirthday"].GetString());
        m_thaiBirthdayHasBeenSet = true;
    }

    if (value.HasMember("ThaiExpirationDate") && !value["ThaiExpirationDate"].IsNull())
    {
        if (!value["ThaiExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalThailandIDCard.ThaiExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thaiExpirationDate = string(value["ThaiExpirationDate"].GetString());
        m_thaiExpirationDateHasBeenSet = true;
    }

    if (value.HasMember("ThaiIssueDate") && !value["ThaiIssueDate"].IsNull())
    {
        if (!value["ThaiIssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalThailandIDCard.ThaiIssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thaiIssueDate = string(value["ThaiIssueDate"].GetString());
        m_thaiIssueDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NormalThailandIDCard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_lastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastName.c_str(), allocator).Move(), allocator);
    }

    if (m_firstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstName.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

    if (m_formattedAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormattedAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formattedAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expirationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_issuedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedDate.c_str(), allocator).Move(), allocator);
    }

    if (m_registrationNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrationNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrationNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_religionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Religion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_religion.c_str(), allocator).Move(), allocator);
    }

    if (m_thaiBirthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThaiBirthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thaiBirthday.c_str(), allocator).Move(), allocator);
    }

    if (m_thaiExpirationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThaiExpirationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thaiExpirationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_thaiIssueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThaiIssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thaiIssueDate.c_str(), allocator).Move(), allocator);
    }

}


string NormalThailandIDCard::GetLicenseNumber() const
{
    return m_licenseNumber;
}

void NormalThailandIDCard::SetLicenseNumber(const string& _licenseNumber)
{
    m_licenseNumber = _licenseNumber;
    m_licenseNumberHasBeenSet = true;
}

bool NormalThailandIDCard::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

string NormalThailandIDCard::GetFullName() const
{
    return m_fullName;
}

void NormalThailandIDCard::SetFullName(const string& _fullName)
{
    m_fullName = _fullName;
    m_fullNameHasBeenSet = true;
}

bool NormalThailandIDCard::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

string NormalThailandIDCard::GetLastName() const
{
    return m_lastName;
}

void NormalThailandIDCard::SetLastName(const string& _lastName)
{
    m_lastName = _lastName;
    m_lastNameHasBeenSet = true;
}

bool NormalThailandIDCard::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

string NormalThailandIDCard::GetFirstName() const
{
    return m_firstName;
}

void NormalThailandIDCard::SetFirstName(const string& _firstName)
{
    m_firstName = _firstName;
    m_firstNameHasBeenSet = true;
}

bool NormalThailandIDCard::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

string NormalThailandIDCard::GetBirthday() const
{
    return m_birthday;
}

void NormalThailandIDCard::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool NormalThailandIDCard::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string NormalThailandIDCard::GetFormattedAddress() const
{
    return m_formattedAddress;
}

void NormalThailandIDCard::SetFormattedAddress(const string& _formattedAddress)
{
    m_formattedAddress = _formattedAddress;
    m_formattedAddressHasBeenSet = true;
}

bool NormalThailandIDCard::FormattedAddressHasBeenSet() const
{
    return m_formattedAddressHasBeenSet;
}

string NormalThailandIDCard::GetExpirationDate() const
{
    return m_expirationDate;
}

void NormalThailandIDCard::SetExpirationDate(const string& _expirationDate)
{
    m_expirationDate = _expirationDate;
    m_expirationDateHasBeenSet = true;
}

bool NormalThailandIDCard::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

string NormalThailandIDCard::GetIssuedDate() const
{
    return m_issuedDate;
}

void NormalThailandIDCard::SetIssuedDate(const string& _issuedDate)
{
    m_issuedDate = _issuedDate;
    m_issuedDateHasBeenSet = true;
}

bool NormalThailandIDCard::IssuedDateHasBeenSet() const
{
    return m_issuedDateHasBeenSet;
}

string NormalThailandIDCard::GetRegistrationNumber() const
{
    return m_registrationNumber;
}

void NormalThailandIDCard::SetRegistrationNumber(const string& _registrationNumber)
{
    m_registrationNumber = _registrationNumber;
    m_registrationNumberHasBeenSet = true;
}

bool NormalThailandIDCard::RegistrationNumberHasBeenSet() const
{
    return m_registrationNumberHasBeenSet;
}

string NormalThailandIDCard::GetReligion() const
{
    return m_religion;
}

void NormalThailandIDCard::SetReligion(const string& _religion)
{
    m_religion = _religion;
    m_religionHasBeenSet = true;
}

bool NormalThailandIDCard::ReligionHasBeenSet() const
{
    return m_religionHasBeenSet;
}

string NormalThailandIDCard::GetThaiBirthday() const
{
    return m_thaiBirthday;
}

void NormalThailandIDCard::SetThaiBirthday(const string& _thaiBirthday)
{
    m_thaiBirthday = _thaiBirthday;
    m_thaiBirthdayHasBeenSet = true;
}

bool NormalThailandIDCard::ThaiBirthdayHasBeenSet() const
{
    return m_thaiBirthdayHasBeenSet;
}

string NormalThailandIDCard::GetThaiExpirationDate() const
{
    return m_thaiExpirationDate;
}

void NormalThailandIDCard::SetThaiExpirationDate(const string& _thaiExpirationDate)
{
    m_thaiExpirationDate = _thaiExpirationDate;
    m_thaiExpirationDateHasBeenSet = true;
}

bool NormalThailandIDCard::ThaiExpirationDateHasBeenSet() const
{
    return m_thaiExpirationDateHasBeenSet;
}

string NormalThailandIDCard::GetThaiIssueDate() const
{
    return m_thaiIssueDate;
}

void NormalThailandIDCard::SetThaiIssueDate(const string& _thaiIssueDate)
{
    m_thaiIssueDate = _thaiIssueDate;
    m_thaiIssueDateHasBeenSet = true;
}

bool NormalThailandIDCard::ThaiIssueDateHasBeenSet() const
{
    return m_thaiIssueDateHasBeenSet;
}

