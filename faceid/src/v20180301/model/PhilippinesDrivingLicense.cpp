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

#include <tencentcloud/faceid/v20180301/model/PhilippinesDrivingLicense.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

PhilippinesDrivingLicense::PhilippinesDrivingLicense() :
    m_nameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_middleNameHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_licenseNoHasBeenSet(false),
    m_expiresDateHasBeenSet(false),
    m_agencyCodeHasBeenSet(false),
    m_birthdayHasBeenSet(false)
{
}

CoreInternalOutcome PhilippinesDrivingLicense::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesDrivingLicense.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("LastName") && !value["LastName"].IsNull())
    {
        if (!value["LastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesDrivingLicense.LastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastName = string(value["LastName"].GetString());
        m_lastNameHasBeenSet = true;
    }

    if (value.HasMember("FirstName") && !value["FirstName"].IsNull())
    {
        if (!value["FirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesDrivingLicense.FirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstName = string(value["FirstName"].GetString());
        m_firstNameHasBeenSet = true;
    }

    if (value.HasMember("MiddleName") && !value["MiddleName"].IsNull())
    {
        if (!value["MiddleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesDrivingLicense.MiddleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_middleName = string(value["MiddleName"].GetString());
        m_middleNameHasBeenSet = true;
    }

    if (value.HasMember("Nationality") && !value["Nationality"].IsNull())
    {
        if (!value["Nationality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesDrivingLicense.Nationality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationality = string(value["Nationality"].GetString());
        m_nationalityHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesDrivingLicense.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesDrivingLicense.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("LicenseNo") && !value["LicenseNo"].IsNull())
    {
        if (!value["LicenseNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesDrivingLicense.LicenseNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNo = string(value["LicenseNo"].GetString());
        m_licenseNoHasBeenSet = true;
    }

    if (value.HasMember("ExpiresDate") && !value["ExpiresDate"].IsNull())
    {
        if (!value["ExpiresDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesDrivingLicense.ExpiresDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiresDate = string(value["ExpiresDate"].GetString());
        m_expiresDateHasBeenSet = true;
    }

    if (value.HasMember("AgencyCode") && !value["AgencyCode"].IsNull())
    {
        if (!value["AgencyCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesDrivingLicense.AgencyCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agencyCode = string(value["AgencyCode"].GetString());
        m_agencyCodeHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesDrivingLicense.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PhilippinesDrivingLicense::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_middleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiddleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_middleName.c_str(), allocator).Move(), allocator);
    }

    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseNo.c_str(), allocator).Move(), allocator);
    }

    if (m_expiresDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiresDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiresDate.c_str(), allocator).Move(), allocator);
    }

    if (m_agencyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgencyCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agencyCode.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

}


string PhilippinesDrivingLicense::GetName() const
{
    return m_name;
}

void PhilippinesDrivingLicense::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PhilippinesDrivingLicense::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PhilippinesDrivingLicense::GetLastName() const
{
    return m_lastName;
}

void PhilippinesDrivingLicense::SetLastName(const string& _lastName)
{
    m_lastName = _lastName;
    m_lastNameHasBeenSet = true;
}

bool PhilippinesDrivingLicense::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

string PhilippinesDrivingLicense::GetFirstName() const
{
    return m_firstName;
}

void PhilippinesDrivingLicense::SetFirstName(const string& _firstName)
{
    m_firstName = _firstName;
    m_firstNameHasBeenSet = true;
}

bool PhilippinesDrivingLicense::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

string PhilippinesDrivingLicense::GetMiddleName() const
{
    return m_middleName;
}

void PhilippinesDrivingLicense::SetMiddleName(const string& _middleName)
{
    m_middleName = _middleName;
    m_middleNameHasBeenSet = true;
}

bool PhilippinesDrivingLicense::MiddleNameHasBeenSet() const
{
    return m_middleNameHasBeenSet;
}

string PhilippinesDrivingLicense::GetNationality() const
{
    return m_nationality;
}

void PhilippinesDrivingLicense::SetNationality(const string& _nationality)
{
    m_nationality = _nationality;
    m_nationalityHasBeenSet = true;
}

bool PhilippinesDrivingLicense::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string PhilippinesDrivingLicense::GetSex() const
{
    return m_sex;
}

void PhilippinesDrivingLicense::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool PhilippinesDrivingLicense::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string PhilippinesDrivingLicense::GetAddress() const
{
    return m_address;
}

void PhilippinesDrivingLicense::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool PhilippinesDrivingLicense::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string PhilippinesDrivingLicense::GetLicenseNo() const
{
    return m_licenseNo;
}

void PhilippinesDrivingLicense::SetLicenseNo(const string& _licenseNo)
{
    m_licenseNo = _licenseNo;
    m_licenseNoHasBeenSet = true;
}

bool PhilippinesDrivingLicense::LicenseNoHasBeenSet() const
{
    return m_licenseNoHasBeenSet;
}

string PhilippinesDrivingLicense::GetExpiresDate() const
{
    return m_expiresDate;
}

void PhilippinesDrivingLicense::SetExpiresDate(const string& _expiresDate)
{
    m_expiresDate = _expiresDate;
    m_expiresDateHasBeenSet = true;
}

bool PhilippinesDrivingLicense::ExpiresDateHasBeenSet() const
{
    return m_expiresDateHasBeenSet;
}

string PhilippinesDrivingLicense::GetAgencyCode() const
{
    return m_agencyCode;
}

void PhilippinesDrivingLicense::SetAgencyCode(const string& _agencyCode)
{
    m_agencyCode = _agencyCode;
    m_agencyCodeHasBeenSet = true;
}

bool PhilippinesDrivingLicense::AgencyCodeHasBeenSet() const
{
    return m_agencyCodeHasBeenSet;
}

string PhilippinesDrivingLicense::GetBirthday() const
{
    return m_birthday;
}

void PhilippinesDrivingLicense::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool PhilippinesDrivingLicense::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

