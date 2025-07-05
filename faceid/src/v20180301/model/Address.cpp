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

#include <tencentcloud/faceid/v20180301/model/Address.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

Address::Address() :
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

CoreInternalOutcome Address::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("PostalCode") && !value["PostalCode"].IsNull())
    {
        if (!value["PostalCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.PostalCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postalCode = string(value["PostalCode"].GetString());
        m_postalCodeHasBeenSet = true;
    }

    if (value.HasMember("Subdivision") && !value["Subdivision"].IsNull())
    {
        if (!value["Subdivision"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.Subdivision` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subdivision = string(value["Subdivision"].GetString());
        m_subdivisionHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("FormattedAddress") && !value["FormattedAddress"].IsNull())
    {
        if (!value["FormattedAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.FormattedAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formattedAddress = string(value["FormattedAddress"].GetString());
        m_formattedAddressHasBeenSet = true;
    }

    if (value.HasMember("LineOne") && !value["LineOne"].IsNull())
    {
        if (!value["LineOne"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.LineOne` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineOne = string(value["LineOne"].GetString());
        m_lineOneHasBeenSet = true;
    }

    if (value.HasMember("LineTwo") && !value["LineTwo"].IsNull())
    {
        if (!value["LineTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.LineTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineTwo = string(value["LineTwo"].GetString());
        m_lineTwoHasBeenSet = true;
    }

    if (value.HasMember("LineThree") && !value["LineThree"].IsNull())
    {
        if (!value["LineThree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.LineThree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineThree = string(value["LineThree"].GetString());
        m_lineThreeHasBeenSet = true;
    }

    if (value.HasMember("LineFour") && !value["LineFour"].IsNull())
    {
        if (!value["LineFour"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.LineFour` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineFour = string(value["LineFour"].GetString());
        m_lineFourHasBeenSet = true;
    }

    if (value.HasMember("LineFive") && !value["LineFive"].IsNull())
    {
        if (!value["LineFive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.LineFive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineFive = string(value["LineFive"].GetString());
        m_lineFiveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Address::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string Address::GetCountry() const
{
    return m_country;
}

void Address::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool Address::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string Address::GetPostalCode() const
{
    return m_postalCode;
}

void Address::SetPostalCode(const string& _postalCode)
{
    m_postalCode = _postalCode;
    m_postalCodeHasBeenSet = true;
}

bool Address::PostalCodeHasBeenSet() const
{
    return m_postalCodeHasBeenSet;
}

string Address::GetSubdivision() const
{
    return m_subdivision;
}

void Address::SetSubdivision(const string& _subdivision)
{
    m_subdivision = _subdivision;
    m_subdivisionHasBeenSet = true;
}

bool Address::SubdivisionHasBeenSet() const
{
    return m_subdivisionHasBeenSet;
}

string Address::GetCity() const
{
    return m_city;
}

void Address::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool Address::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string Address::GetFormattedAddress() const
{
    return m_formattedAddress;
}

void Address::SetFormattedAddress(const string& _formattedAddress)
{
    m_formattedAddress = _formattedAddress;
    m_formattedAddressHasBeenSet = true;
}

bool Address::FormattedAddressHasBeenSet() const
{
    return m_formattedAddressHasBeenSet;
}

string Address::GetLineOne() const
{
    return m_lineOne;
}

void Address::SetLineOne(const string& _lineOne)
{
    m_lineOne = _lineOne;
    m_lineOneHasBeenSet = true;
}

bool Address::LineOneHasBeenSet() const
{
    return m_lineOneHasBeenSet;
}

string Address::GetLineTwo() const
{
    return m_lineTwo;
}

void Address::SetLineTwo(const string& _lineTwo)
{
    m_lineTwo = _lineTwo;
    m_lineTwoHasBeenSet = true;
}

bool Address::LineTwoHasBeenSet() const
{
    return m_lineTwoHasBeenSet;
}

string Address::GetLineThree() const
{
    return m_lineThree;
}

void Address::SetLineThree(const string& _lineThree)
{
    m_lineThree = _lineThree;
    m_lineThreeHasBeenSet = true;
}

bool Address::LineThreeHasBeenSet() const
{
    return m_lineThreeHasBeenSet;
}

string Address::GetLineFour() const
{
    return m_lineFour;
}

void Address::SetLineFour(const string& _lineFour)
{
    m_lineFour = _lineFour;
    m_lineFourHasBeenSet = true;
}

bool Address::LineFourHasBeenSet() const
{
    return m_lineFourHasBeenSet;
}

string Address::GetLineFive() const
{
    return m_lineFive;
}

void Address::SetLineFive(const string& _lineFive)
{
    m_lineFive = _lineFive;
    m_lineFiveHasBeenSet = true;
}

bool Address::LineFiveHasBeenSet() const
{
    return m_lineFiveHasBeenSet;
}

