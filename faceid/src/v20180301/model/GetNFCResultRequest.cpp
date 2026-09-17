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

#include <tencentcloud/faceid/v20180301/model/GetNFCResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetNFCResultRequest::GetNFCResultRequest() :
    m_nFCTokenHasBeenSet(false),
    m_idNumHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pictureHasBeenSet(false),
    m_birthDateHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_nationHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_enNameHasBeenSet(false),
    m_signingOrganizationHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_machineReadCodeHasBeenSet(false)
{
}

string GetNFCResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nFCTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NFCToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nFCToken.c_str(), allocator).Move(), allocator);
    }

    if (m_idNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idNum.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Picture";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_picture.c_str(), allocator).Move(), allocator);
    }

    if (m_birthDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_birthDate.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_nationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nation.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_enNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enName.c_str(), allocator).Move(), allocator);
    }

    if (m_signingOrganizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SigningOrganization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signingOrganization.c_str(), allocator).Move(), allocator);
    }

    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
    }

    if (m_countryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_countryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_machineReadCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineReadCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_machineReadCode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetNFCResultRequest::GetNFCToken() const
{
    return m_nFCToken;
}

void GetNFCResultRequest::SetNFCToken(const string& _nFCToken)
{
    m_nFCToken = _nFCToken;
    m_nFCTokenHasBeenSet = true;
}

bool GetNFCResultRequest::NFCTokenHasBeenSet() const
{
    return m_nFCTokenHasBeenSet;
}

string GetNFCResultRequest::GetIdNum() const
{
    return m_idNum;
}

void GetNFCResultRequest::SetIdNum(const string& _idNum)
{
    m_idNum = _idNum;
    m_idNumHasBeenSet = true;
}

bool GetNFCResultRequest::IdNumHasBeenSet() const
{
    return m_idNumHasBeenSet;
}

string GetNFCResultRequest::GetName() const
{
    return m_name;
}

void GetNFCResultRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GetNFCResultRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GetNFCResultRequest::GetPicture() const
{
    return m_picture;
}

void GetNFCResultRequest::SetPicture(const string& _picture)
{
    m_picture = _picture;
    m_pictureHasBeenSet = true;
}

bool GetNFCResultRequest::PictureHasBeenSet() const
{
    return m_pictureHasBeenSet;
}

string GetNFCResultRequest::GetBirthDate() const
{
    return m_birthDate;
}

void GetNFCResultRequest::SetBirthDate(const string& _birthDate)
{
    m_birthDate = _birthDate;
    m_birthDateHasBeenSet = true;
}

bool GetNFCResultRequest::BirthDateHasBeenSet() const
{
    return m_birthDateHasBeenSet;
}

string GetNFCResultRequest::GetBeginTime() const
{
    return m_beginTime;
}

void GetNFCResultRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool GetNFCResultRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string GetNFCResultRequest::GetEndTime() const
{
    return m_endTime;
}

void GetNFCResultRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool GetNFCResultRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string GetNFCResultRequest::GetAddress() const
{
    return m_address;
}

void GetNFCResultRequest::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool GetNFCResultRequest::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string GetNFCResultRequest::GetNation() const
{
    return m_nation;
}

void GetNFCResultRequest::SetNation(const string& _nation)
{
    m_nation = _nation;
    m_nationHasBeenSet = true;
}

bool GetNFCResultRequest::NationHasBeenSet() const
{
    return m_nationHasBeenSet;
}

string GetNFCResultRequest::GetSex() const
{
    return m_sex;
}

void GetNFCResultRequest::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool GetNFCResultRequest::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string GetNFCResultRequest::GetEnName() const
{
    return m_enName;
}

void GetNFCResultRequest::SetEnName(const string& _enName)
{
    m_enName = _enName;
    m_enNameHasBeenSet = true;
}

bool GetNFCResultRequest::EnNameHasBeenSet() const
{
    return m_enNameHasBeenSet;
}

string GetNFCResultRequest::GetSigningOrganization() const
{
    return m_signingOrganization;
}

void GetNFCResultRequest::SetSigningOrganization(const string& _signingOrganization)
{
    m_signingOrganization = _signingOrganization;
    m_signingOrganizationHasBeenSet = true;
}

bool GetNFCResultRequest::SigningOrganizationHasBeenSet() const
{
    return m_signingOrganizationHasBeenSet;
}

string GetNFCResultRequest::GetNationality() const
{
    return m_nationality;
}

void GetNFCResultRequest::SetNationality(const string& _nationality)
{
    m_nationality = _nationality;
    m_nationalityHasBeenSet = true;
}

bool GetNFCResultRequest::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string GetNFCResultRequest::GetCountryCode() const
{
    return m_countryCode;
}

void GetNFCResultRequest::SetCountryCode(const string& _countryCode)
{
    m_countryCode = _countryCode;
    m_countryCodeHasBeenSet = true;
}

bool GetNFCResultRequest::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}

string GetNFCResultRequest::GetMachineReadCode() const
{
    return m_machineReadCode;
}

void GetNFCResultRequest::SetMachineReadCode(const string& _machineReadCode)
{
    m_machineReadCode = _machineReadCode;
    m_machineReadCodeHasBeenSet = true;
}

bool GetNFCResultRequest::MachineReadCodeHasBeenSet() const
{
    return m_machineReadCodeHasBeenSet;
}


