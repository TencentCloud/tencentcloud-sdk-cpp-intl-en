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

#include <tencentcloud/ocr/v20181119/model/AddressInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

AddressInfo::AddressInfo() :
    m_countryHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_subdivisionHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_formattedAddressHasBeenSet(false),
    m_lineOneHasBeenSet(false),
    m_lineTwoHasBeenSet(false),
    m_lineThreeHasBeenSet(false),
    m_lineFourHasBeenSet(false),
    m_lineFiveHasBeenSet(false)
{
}

CoreInternalOutcome AddressInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressInfo.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("PostalCode") && !value["PostalCode"].IsNull())
    {
        if (!value["PostalCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressInfo.PostalCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postalCode = string(value["PostalCode"].GetString());
        m_postalCodeHasBeenSet = true;
    }

    if (value.HasMember("Subdivision") && !value["Subdivision"].IsNull())
    {
        if (!value["Subdivision"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressInfo.Subdivision` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subdivision = string(value["Subdivision"].GetString());
        m_subdivisionHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressInfo.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("FormattedAddress") && !value["FormattedAddress"].IsNull())
    {
        if (!value["FormattedAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressInfo.FormattedAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formattedAddress = string(value["FormattedAddress"].GetString());
        m_formattedAddressHasBeenSet = true;
    }

    if (value.HasMember("LineOne") && !value["LineOne"].IsNull())
    {
        if (!value["LineOne"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressInfo.LineOne` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineOne = string(value["LineOne"].GetString());
        m_lineOneHasBeenSet = true;
    }

    if (value.HasMember("LineTwo") && !value["LineTwo"].IsNull())
    {
        if (!value["LineTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressInfo.LineTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineTwo = string(value["LineTwo"].GetString());
        m_lineTwoHasBeenSet = true;
    }

    if (value.HasMember("LineThree") && !value["LineThree"].IsNull())
    {
        if (!value["LineThree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressInfo.LineThree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineThree = string(value["LineThree"].GetString());
        m_lineThreeHasBeenSet = true;
    }

    if (value.HasMember("LineFour") && !value["LineFour"].IsNull())
    {
        if (!value["LineFour"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressInfo.LineFour` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineFour = string(value["LineFour"].GetString());
        m_lineFourHasBeenSet = true;
    }

    if (value.HasMember("LineFive") && !value["LineFive"].IsNull())
    {
        if (!value["LineFive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressInfo.LineFive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineFive = string(value["LineFive"].GetString());
        m_lineFiveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddressInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_postalCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostalCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_postalCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subdivisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subdivision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subdivision.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_formattedAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormattedAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formattedAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_lineOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineOne";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineOne.c_str(), allocator).Move(), allocator);
    }

    if (m_lineTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_lineThreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineThree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineThree.c_str(), allocator).Move(), allocator);
    }

    if (m_lineFourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineFour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineFour.c_str(), allocator).Move(), allocator);
    }

    if (m_lineFiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineFive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineFive.c_str(), allocator).Move(), allocator);
    }

}


string AddressInfo::GetCountry() const
{
    return m_country;
}

void AddressInfo::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool AddressInfo::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string AddressInfo::GetPostalCode() const
{
    return m_postalCode;
}

void AddressInfo::SetPostalCode(const string& _postalCode)
{
    m_postalCode = _postalCode;
    m_postalCodeHasBeenSet = true;
}

bool AddressInfo::PostalCodeHasBeenSet() const
{
    return m_postalCodeHasBeenSet;
}

string AddressInfo::GetSubdivision() const
{
    return m_subdivision;
}

void AddressInfo::SetSubdivision(const string& _subdivision)
{
    m_subdivision = _subdivision;
    m_subdivisionHasBeenSet = true;
}

bool AddressInfo::SubdivisionHasBeenSet() const
{
    return m_subdivisionHasBeenSet;
}

string AddressInfo::GetCity() const
{
    return m_city;
}

void AddressInfo::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool AddressInfo::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string AddressInfo::GetFormattedAddress() const
{
    return m_formattedAddress;
}

void AddressInfo::SetFormattedAddress(const string& _formattedAddress)
{
    m_formattedAddress = _formattedAddress;
    m_formattedAddressHasBeenSet = true;
}

bool AddressInfo::FormattedAddressHasBeenSet() const
{
    return m_formattedAddressHasBeenSet;
}

string AddressInfo::GetLineOne() const
{
    return m_lineOne;
}

void AddressInfo::SetLineOne(const string& _lineOne)
{
    m_lineOne = _lineOne;
    m_lineOneHasBeenSet = true;
}

bool AddressInfo::LineOneHasBeenSet() const
{
    return m_lineOneHasBeenSet;
}

string AddressInfo::GetLineTwo() const
{
    return m_lineTwo;
}

void AddressInfo::SetLineTwo(const string& _lineTwo)
{
    m_lineTwo = _lineTwo;
    m_lineTwoHasBeenSet = true;
}

bool AddressInfo::LineTwoHasBeenSet() const
{
    return m_lineTwoHasBeenSet;
}

string AddressInfo::GetLineThree() const
{
    return m_lineThree;
}

void AddressInfo::SetLineThree(const string& _lineThree)
{
    m_lineThree = _lineThree;
    m_lineThreeHasBeenSet = true;
}

bool AddressInfo::LineThreeHasBeenSet() const
{
    return m_lineThreeHasBeenSet;
}

string AddressInfo::GetLineFour() const
{
    return m_lineFour;
}

void AddressInfo::SetLineFour(const string& _lineFour)
{
    m_lineFour = _lineFour;
    m_lineFourHasBeenSet = true;
}

bool AddressInfo::LineFourHasBeenSet() const
{
    return m_lineFourHasBeenSet;
}

string AddressInfo::GetLineFive() const
{
    return m_lineFive;
}

void AddressInfo::SetLineFive(const string& _lineFive)
{
    m_lineFive = _lineFive;
    m_lineFiveHasBeenSet = true;
}

bool AddressInfo::LineFiveHasBeenSet() const
{
    return m_lineFiveHasBeenSet;
}

