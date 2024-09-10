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

#include <tencentcloud/faceid/v20180301/model/TaiWanIDCard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

TaiWanIDCard::TaiWanIDCard() :
    m_fullNameHasBeenSet(false),
    m_licenseNumberHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_issuedCountryHasBeenSet(false),
    m_registrationNumberHasBeenSet(false)
{
}

CoreInternalOutcome TaiWanIDCard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FullName") && !value["FullName"].IsNull())
    {
        if (!value["FullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaiWanIDCard.FullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullName = string(value["FullName"].GetString());
        m_fullNameHasBeenSet = true;
    }

    if (value.HasMember("LicenseNumber") && !value["LicenseNumber"].IsNull())
    {
        if (!value["LicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaiWanIDCard.LicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNumber = string(value["LicenseNumber"].GetString());
        m_licenseNumberHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaiWanIDCard.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("IssuedCountry") && !value["IssuedCountry"].IsNull())
    {
        if (!value["IssuedCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaiWanIDCard.IssuedCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedCountry = string(value["IssuedCountry"].GetString());
        m_issuedCountryHasBeenSet = true;
    }

    if (value.HasMember("RegistrationNumber") && !value["RegistrationNumber"].IsNull())
    {
        if (!value["RegistrationNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaiWanIDCard.RegistrationNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationNumber = string(value["RegistrationNumber"].GetString());
        m_registrationNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaiWanIDCard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullName.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_issuedCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_registrationNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrationNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrationNumber.c_str(), allocator).Move(), allocator);
    }

}


string TaiWanIDCard::GetFullName() const
{
    return m_fullName;
}

void TaiWanIDCard::SetFullName(const string& _fullName)
{
    m_fullName = _fullName;
    m_fullNameHasBeenSet = true;
}

bool TaiWanIDCard::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

string TaiWanIDCard::GetLicenseNumber() const
{
    return m_licenseNumber;
}

void TaiWanIDCard::SetLicenseNumber(const string& _licenseNumber)
{
    m_licenseNumber = _licenseNumber;
    m_licenseNumberHasBeenSet = true;
}

bool TaiWanIDCard::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

string TaiWanIDCard::GetSex() const
{
    return m_sex;
}

void TaiWanIDCard::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool TaiWanIDCard::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string TaiWanIDCard::GetIssuedCountry() const
{
    return m_issuedCountry;
}

void TaiWanIDCard::SetIssuedCountry(const string& _issuedCountry)
{
    m_issuedCountry = _issuedCountry;
    m_issuedCountryHasBeenSet = true;
}

bool TaiWanIDCard::IssuedCountryHasBeenSet() const
{
    return m_issuedCountryHasBeenSet;
}

string TaiWanIDCard::GetRegistrationNumber() const
{
    return m_registrationNumber;
}

void TaiWanIDCard::SetRegistrationNumber(const string& _registrationNumber)
{
    m_registrationNumber = _registrationNumber;
    m_registrationNumberHasBeenSet = true;
}

bool TaiWanIDCard::RegistrationNumberHasBeenSet() const
{
    return m_registrationNumberHasBeenSet;
}

