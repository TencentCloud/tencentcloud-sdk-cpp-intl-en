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

#include <tencentcloud/domain/v20180808/model/PriceInfoNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

PriceInfoNew::PriceInfoNew() :
    m_tldHasBeenSet(false),
    m_yearHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_realPriceHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

CoreInternalOutcome PriceInfoNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tld") && !value["Tld"].IsNull())
    {
        if (!value["Tld"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PriceInfoNew.Tld` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tld = string(value["Tld"].GetString());
        m_tldHasBeenSet = true;
    }

    if (value.HasMember("Year") && !value["Year"].IsNull())
    {
        if (!value["Year"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PriceInfoNew.Year` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_year = value["Year"].GetUint64();
        m_yearHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PriceInfoNew.Price` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_price = value["Price"].GetDouble();
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("RealPrice") && !value["RealPrice"].IsNull())
    {
        if (!value["RealPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PriceInfoNew.RealPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_realPrice = value["RealPrice"].GetDouble();
        m_realPriceHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PriceInfoNew.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PriceInfoNew.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PriceInfoNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tld";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tld.c_str(), allocator).Move(), allocator);
    }

    if (m_yearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Year";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_year, allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_realPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realPrice, allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

}


string PriceInfoNew::GetTld() const
{
    return m_tld;
}

void PriceInfoNew::SetTld(const string& _tld)
{
    m_tld = _tld;
    m_tldHasBeenSet = true;
}

bool PriceInfoNew::TldHasBeenSet() const
{
    return m_tldHasBeenSet;
}

uint64_t PriceInfoNew::GetYear() const
{
    return m_year;
}

void PriceInfoNew::SetYear(const uint64_t& _year)
{
    m_year = _year;
    m_yearHasBeenSet = true;
}

bool PriceInfoNew::YearHasBeenSet() const
{
    return m_yearHasBeenSet;
}

double PriceInfoNew::GetPrice() const
{
    return m_price;
}

void PriceInfoNew::SetPrice(const double& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool PriceInfoNew::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

double PriceInfoNew::GetRealPrice() const
{
    return m_realPrice;
}

void PriceInfoNew::SetRealPrice(const double& _realPrice)
{
    m_realPrice = _realPrice;
    m_realPriceHasBeenSet = true;
}

bool PriceInfoNew::RealPriceHasBeenSet() const
{
    return m_realPriceHasBeenSet;
}

string PriceInfoNew::GetOperation() const
{
    return m_operation;
}

void PriceInfoNew::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool PriceInfoNew::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string PriceInfoNew::GetTitle() const
{
    return m_title;
}

void PriceInfoNew::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool PriceInfoNew::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

