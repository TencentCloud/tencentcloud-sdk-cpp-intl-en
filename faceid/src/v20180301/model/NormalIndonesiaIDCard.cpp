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

#include <tencentcloud/faceid/v20180301/model/NormalIndonesiaIDCard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

NormalIndonesiaIDCard::NormalIndonesiaIDCard() :
    m_licenseNumberHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_bloodTypeHasBeenSet(false),
    m_formattedAddressHasBeenSet(false),
    m_streetHasBeenSet(false),
    m_villageHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_religionHasBeenSet(false),
    m_maritalStatusHasBeenSet(false),
    m_occupationHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_dueDateHasBeenSet(false),
    m_issuedDateHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false)
{
}

CoreInternalOutcome NormalIndonesiaIDCard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LicenseNumber") && !value["LicenseNumber"].IsNull())
    {
        if (!value["LicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.LicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNumber = string(value["LicenseNumber"].GetString());
        m_licenseNumberHasBeenSet = true;
    }

    if (value.HasMember("FullName") && !value["FullName"].IsNull())
    {
        if (!value["FullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.FullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullName = string(value["FullName"].GetString());
        m_fullNameHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("BloodType") && !value["BloodType"].IsNull())
    {
        if (!value["BloodType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.BloodType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bloodType = string(value["BloodType"].GetString());
        m_bloodTypeHasBeenSet = true;
    }

    if (value.HasMember("FormattedAddress") && !value["FormattedAddress"].IsNull())
    {
        if (!value["FormattedAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.FormattedAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formattedAddress = string(value["FormattedAddress"].GetString());
        m_formattedAddressHasBeenSet = true;
    }

    if (value.HasMember("Street") && !value["Street"].IsNull())
    {
        if (!value["Street"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.Street` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_street = string(value["Street"].GetString());
        m_streetHasBeenSet = true;
    }

    if (value.HasMember("Village") && !value["Village"].IsNull())
    {
        if (!value["Village"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.Village` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_village = string(value["Village"].GetString());
        m_villageHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Religion") && !value["Religion"].IsNull())
    {
        if (!value["Religion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.Religion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_religion = string(value["Religion"].GetString());
        m_religionHasBeenSet = true;
    }

    if (value.HasMember("MaritalStatus") && !value["MaritalStatus"].IsNull())
    {
        if (!value["MaritalStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.MaritalStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maritalStatus = string(value["MaritalStatus"].GetString());
        m_maritalStatusHasBeenSet = true;
    }

    if (value.HasMember("Occupation") && !value["Occupation"].IsNull())
    {
        if (!value["Occupation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.Occupation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_occupation = string(value["Occupation"].GetString());
        m_occupationHasBeenSet = true;
    }

    if (value.HasMember("Nationality") && !value["Nationality"].IsNull())
    {
        if (!value["Nationality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.Nationality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationality = string(value["Nationality"].GetString());
        m_nationalityHasBeenSet = true;
    }

    if (value.HasMember("DueDate") && !value["DueDate"].IsNull())
    {
        if (!value["DueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.DueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dueDate = string(value["DueDate"].GetString());
        m_dueDateHasBeenSet = true;
    }

    if (value.HasMember("IssuedDate") && !value["IssuedDate"].IsNull())
    {
        if (!value["IssuedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.IssuedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedDate = string(value["IssuedDate"].GetString());
        m_issuedDateHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalIndonesiaIDCard.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NormalIndonesiaIDCard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_bloodTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BloodType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bloodType.c_str(), allocator).Move(), allocator);
    }

    if (m_formattedAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormattedAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formattedAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_streetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Street";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_street.c_str(), allocator).Move(), allocator);
    }

    if (m_villageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Village";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_village.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_religionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Religion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_religion.c_str(), allocator).Move(), allocator);
    }

    if (m_maritalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaritalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maritalStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_occupationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Occupation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_occupation.c_str(), allocator).Move(), allocator);
    }

    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
    }

    if (m_dueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_issuedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedDate.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

}


string NormalIndonesiaIDCard::GetLicenseNumber() const
{
    return m_licenseNumber;
}

void NormalIndonesiaIDCard::SetLicenseNumber(const string& _licenseNumber)
{
    m_licenseNumber = _licenseNumber;
    m_licenseNumberHasBeenSet = true;
}

bool NormalIndonesiaIDCard::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

string NormalIndonesiaIDCard::GetFullName() const
{
    return m_fullName;
}

void NormalIndonesiaIDCard::SetFullName(const string& _fullName)
{
    m_fullName = _fullName;
    m_fullNameHasBeenSet = true;
}

bool NormalIndonesiaIDCard::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

string NormalIndonesiaIDCard::GetBirthday() const
{
    return m_birthday;
}

void NormalIndonesiaIDCard::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool NormalIndonesiaIDCard::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string NormalIndonesiaIDCard::GetSex() const
{
    return m_sex;
}

void NormalIndonesiaIDCard::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool NormalIndonesiaIDCard::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string NormalIndonesiaIDCard::GetBloodType() const
{
    return m_bloodType;
}

void NormalIndonesiaIDCard::SetBloodType(const string& _bloodType)
{
    m_bloodType = _bloodType;
    m_bloodTypeHasBeenSet = true;
}

bool NormalIndonesiaIDCard::BloodTypeHasBeenSet() const
{
    return m_bloodTypeHasBeenSet;
}

string NormalIndonesiaIDCard::GetFormattedAddress() const
{
    return m_formattedAddress;
}

void NormalIndonesiaIDCard::SetFormattedAddress(const string& _formattedAddress)
{
    m_formattedAddress = _formattedAddress;
    m_formattedAddressHasBeenSet = true;
}

bool NormalIndonesiaIDCard::FormattedAddressHasBeenSet() const
{
    return m_formattedAddressHasBeenSet;
}

string NormalIndonesiaIDCard::GetStreet() const
{
    return m_street;
}

void NormalIndonesiaIDCard::SetStreet(const string& _street)
{
    m_street = _street;
    m_streetHasBeenSet = true;
}

bool NormalIndonesiaIDCard::StreetHasBeenSet() const
{
    return m_streetHasBeenSet;
}

string NormalIndonesiaIDCard::GetVillage() const
{
    return m_village;
}

void NormalIndonesiaIDCard::SetVillage(const string& _village)
{
    m_village = _village;
    m_villageHasBeenSet = true;
}

bool NormalIndonesiaIDCard::VillageHasBeenSet() const
{
    return m_villageHasBeenSet;
}

string NormalIndonesiaIDCard::GetArea() const
{
    return m_area;
}

void NormalIndonesiaIDCard::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool NormalIndonesiaIDCard::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string NormalIndonesiaIDCard::GetReligion() const
{
    return m_religion;
}

void NormalIndonesiaIDCard::SetReligion(const string& _religion)
{
    m_religion = _religion;
    m_religionHasBeenSet = true;
}

bool NormalIndonesiaIDCard::ReligionHasBeenSet() const
{
    return m_religionHasBeenSet;
}

string NormalIndonesiaIDCard::GetMaritalStatus() const
{
    return m_maritalStatus;
}

void NormalIndonesiaIDCard::SetMaritalStatus(const string& _maritalStatus)
{
    m_maritalStatus = _maritalStatus;
    m_maritalStatusHasBeenSet = true;
}

bool NormalIndonesiaIDCard::MaritalStatusHasBeenSet() const
{
    return m_maritalStatusHasBeenSet;
}

string NormalIndonesiaIDCard::GetOccupation() const
{
    return m_occupation;
}

void NormalIndonesiaIDCard::SetOccupation(const string& _occupation)
{
    m_occupation = _occupation;
    m_occupationHasBeenSet = true;
}

bool NormalIndonesiaIDCard::OccupationHasBeenSet() const
{
    return m_occupationHasBeenSet;
}

string NormalIndonesiaIDCard::GetNationality() const
{
    return m_nationality;
}

void NormalIndonesiaIDCard::SetNationality(const string& _nationality)
{
    m_nationality = _nationality;
    m_nationalityHasBeenSet = true;
}

bool NormalIndonesiaIDCard::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string NormalIndonesiaIDCard::GetDueDate() const
{
    return m_dueDate;
}

void NormalIndonesiaIDCard::SetDueDate(const string& _dueDate)
{
    m_dueDate = _dueDate;
    m_dueDateHasBeenSet = true;
}

bool NormalIndonesiaIDCard::DueDateHasBeenSet() const
{
    return m_dueDateHasBeenSet;
}

string NormalIndonesiaIDCard::GetIssuedDate() const
{
    return m_issuedDate;
}

void NormalIndonesiaIDCard::SetIssuedDate(const string& _issuedDate)
{
    m_issuedDate = _issuedDate;
    m_issuedDateHasBeenSet = true;
}

bool NormalIndonesiaIDCard::IssuedDateHasBeenSet() const
{
    return m_issuedDateHasBeenSet;
}

string NormalIndonesiaIDCard::GetProvince() const
{
    return m_province;
}

void NormalIndonesiaIDCard::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool NormalIndonesiaIDCard::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string NormalIndonesiaIDCard::GetCity() const
{
    return m_city;
}

void NormalIndonesiaIDCard::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool NormalIndonesiaIDCard::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

