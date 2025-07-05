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

#include <tencentcloud/faceid/v20180301/model/PhilippinesVoteID.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

PhilippinesVoteID::PhilippinesVoteID() :
    m_vINHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_civilStatusHasBeenSet(false),
    m_citizenshipHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_precinctNoHasBeenSet(false)
{
}

CoreInternalOutcome PhilippinesVoteID::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VIN") && !value["VIN"].IsNull())
    {
        if (!value["VIN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesVoteID.VIN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vIN = string(value["VIN"].GetString());
        m_vINHasBeenSet = true;
    }

    if (value.HasMember("FirstName") && !value["FirstName"].IsNull())
    {
        if (!value["FirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesVoteID.FirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstName = string(value["FirstName"].GetString());
        m_firstNameHasBeenSet = true;
    }

    if (value.HasMember("LastName") && !value["LastName"].IsNull())
    {
        if (!value["LastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesVoteID.LastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastName = string(value["LastName"].GetString());
        m_lastNameHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesVoteID.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("CivilStatus") && !value["CivilStatus"].IsNull())
    {
        if (!value["CivilStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesVoteID.CivilStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_civilStatus = string(value["CivilStatus"].GetString());
        m_civilStatusHasBeenSet = true;
    }

    if (value.HasMember("Citizenship") && !value["Citizenship"].IsNull())
    {
        if (!value["Citizenship"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesVoteID.Citizenship` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_citizenship = string(value["Citizenship"].GetString());
        m_citizenshipHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesVoteID.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("PrecinctNo") && !value["PrecinctNo"].IsNull())
    {
        if (!value["PrecinctNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesVoteID.PrecinctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_precinctNo = string(value["PrecinctNo"].GetString());
        m_precinctNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PhilippinesVoteID::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vINHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VIN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vIN.c_str(), allocator).Move(), allocator);
    }

    if (m_firstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastName.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

    if (m_civilStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CivilStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_civilStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_citizenshipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Citizenship";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_citizenship.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_precinctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrecinctNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_precinctNo.c_str(), allocator).Move(), allocator);
    }

}


string PhilippinesVoteID::GetVIN() const
{
    return m_vIN;
}

void PhilippinesVoteID::SetVIN(const string& _vIN)
{
    m_vIN = _vIN;
    m_vINHasBeenSet = true;
}

bool PhilippinesVoteID::VINHasBeenSet() const
{
    return m_vINHasBeenSet;
}

string PhilippinesVoteID::GetFirstName() const
{
    return m_firstName;
}

void PhilippinesVoteID::SetFirstName(const string& _firstName)
{
    m_firstName = _firstName;
    m_firstNameHasBeenSet = true;
}

bool PhilippinesVoteID::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

string PhilippinesVoteID::GetLastName() const
{
    return m_lastName;
}

void PhilippinesVoteID::SetLastName(const string& _lastName)
{
    m_lastName = _lastName;
    m_lastNameHasBeenSet = true;
}

bool PhilippinesVoteID::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

string PhilippinesVoteID::GetBirthday() const
{
    return m_birthday;
}

void PhilippinesVoteID::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool PhilippinesVoteID::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string PhilippinesVoteID::GetCivilStatus() const
{
    return m_civilStatus;
}

void PhilippinesVoteID::SetCivilStatus(const string& _civilStatus)
{
    m_civilStatus = _civilStatus;
    m_civilStatusHasBeenSet = true;
}

bool PhilippinesVoteID::CivilStatusHasBeenSet() const
{
    return m_civilStatusHasBeenSet;
}

string PhilippinesVoteID::GetCitizenship() const
{
    return m_citizenship;
}

void PhilippinesVoteID::SetCitizenship(const string& _citizenship)
{
    m_citizenship = _citizenship;
    m_citizenshipHasBeenSet = true;
}

bool PhilippinesVoteID::CitizenshipHasBeenSet() const
{
    return m_citizenshipHasBeenSet;
}

string PhilippinesVoteID::GetAddress() const
{
    return m_address;
}

void PhilippinesVoteID::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool PhilippinesVoteID::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string PhilippinesVoteID::GetPrecinctNo() const
{
    return m_precinctNo;
}

void PhilippinesVoteID::SetPrecinctNo(const string& _precinctNo)
{
    m_precinctNo = _precinctNo;
    m_precinctNoHasBeenSet = true;
}

bool PhilippinesVoteID::PrecinctNoHasBeenSet() const
{
    return m_precinctNoHasBeenSet;
}

