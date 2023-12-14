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

#include <tencentcloud/faceid/v20180301/model/PhilippinesSSSID.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

PhilippinesSSSID::PhilippinesSSSID() :
    m_licenseNumberHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_birthdayHasBeenSet(false)
{
}

CoreInternalOutcome PhilippinesSSSID::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LicenseNumber") && !value["LicenseNumber"].IsNull())
    {
        if (!value["LicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesSSSID.LicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNumber = string(value["LicenseNumber"].GetString());
        m_licenseNumberHasBeenSet = true;
    }

    if (value.HasMember("FullName") && !value["FullName"].IsNull())
    {
        if (!value["FullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesSSSID.FullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullName = string(value["FullName"].GetString());
        m_fullNameHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesSSSID.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PhilippinesSSSID::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string PhilippinesSSSID::GetLicenseNumber() const
{
    return m_licenseNumber;
}

void PhilippinesSSSID::SetLicenseNumber(const string& _licenseNumber)
{
    m_licenseNumber = _licenseNumber;
    m_licenseNumberHasBeenSet = true;
}

bool PhilippinesSSSID::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

string PhilippinesSSSID::GetFullName() const
{
    return m_fullName;
}

void PhilippinesSSSID::SetFullName(const string& _fullName)
{
    m_fullName = _fullName;
    m_fullNameHasBeenSet = true;
}

bool PhilippinesSSSID::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

string PhilippinesSSSID::GetBirthday() const
{
    return m_birthday;
}

void PhilippinesSSSID::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool PhilippinesSSSID::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

