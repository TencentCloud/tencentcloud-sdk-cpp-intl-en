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

#include <tencentcloud/faceid/v20180301/model/Company.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

Company::Company() :
    m_companyNameHasBeenSet(false),
    m_companyCertNumberHasBeenSet(false),
    m_companyCountryHasBeenSet(false),
    m_companyAddressHasBeenSet(false)
{
}

CoreInternalOutcome Company::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CompanyName") && !value["CompanyName"].IsNull())
    {
        if (!value["CompanyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Company.CompanyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyName = string(value["CompanyName"].GetString());
        m_companyNameHasBeenSet = true;
    }

    if (value.HasMember("CompanyCertNumber") && !value["CompanyCertNumber"].IsNull())
    {
        if (!value["CompanyCertNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Company.CompanyCertNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyCertNumber = string(value["CompanyCertNumber"].GetString());
        m_companyCertNumberHasBeenSet = true;
    }

    if (value.HasMember("CompanyCountry") && !value["CompanyCountry"].IsNull())
    {
        if (!value["CompanyCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Company.CompanyCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyCountry = string(value["CompanyCountry"].GetString());
        m_companyCountryHasBeenSet = true;
    }

    if (value.HasMember("CompanyAddress") && !value["CompanyAddress"].IsNull())
    {
        if (!value["CompanyAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Company.CompanyAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyAddress = string(value["CompanyAddress"].GetString());
        m_companyAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Company::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_companyCertNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyCertNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyCertNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_companyCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_companyAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyAddress.c_str(), allocator).Move(), allocator);
    }

}


string Company::GetCompanyName() const
{
    return m_companyName;
}

void Company::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool Company::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

string Company::GetCompanyCertNumber() const
{
    return m_companyCertNumber;
}

void Company::SetCompanyCertNumber(const string& _companyCertNumber)
{
    m_companyCertNumber = _companyCertNumber;
    m_companyCertNumberHasBeenSet = true;
}

bool Company::CompanyCertNumberHasBeenSet() const
{
    return m_companyCertNumberHasBeenSet;
}

string Company::GetCompanyCountry() const
{
    return m_companyCountry;
}

void Company::SetCompanyCountry(const string& _companyCountry)
{
    m_companyCountry = _companyCountry;
    m_companyCountryHasBeenSet = true;
}

bool Company::CompanyCountryHasBeenSet() const
{
    return m_companyCountryHasBeenSet;
}

string Company::GetCompanyAddress() const
{
    return m_companyAddress;
}

void Company::SetCompanyAddress(const string& _companyAddress)
{
    m_companyAddress = _companyAddress;
    m_companyAddressHasBeenSet = true;
}

bool Company::CompanyAddressHasBeenSet() const
{
    return m_companyAddressHasBeenSet;
}

