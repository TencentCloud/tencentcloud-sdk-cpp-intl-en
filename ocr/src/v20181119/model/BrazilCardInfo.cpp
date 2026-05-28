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

#include <tencentcloud/ocr/v20181119/model/BrazilCardInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

BrazilCardInfo::BrazilCardInfo() :
    m_rNEHasBeenSet(false),
    m_rNMHasBeenSet(false),
    m_driverLicenseHasBeenSet(false),
    m_iDCardHasBeenSet(false)
{
}

CoreInternalOutcome BrazilCardInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RNE") && !value["RNE"].IsNull())
    {
        if (!value["RNE"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilCardInfo.RNE` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rNE.Deserialize(value["RNE"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rNEHasBeenSet = true;
    }

    if (value.HasMember("RNM") && !value["RNM"].IsNull())
    {
        if (!value["RNM"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilCardInfo.RNM` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rNM.Deserialize(value["RNM"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rNMHasBeenSet = true;
    }

    if (value.HasMember("DriverLicense") && !value["DriverLicense"].IsNull())
    {
        if (!value["DriverLicense"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilCardInfo.DriverLicense` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_driverLicense.Deserialize(value["DriverLicense"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_driverLicenseHasBeenSet = true;
    }

    if (value.HasMember("IDCard") && !value["IDCard"].IsNull())
    {
        if (!value["IDCard"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilCardInfo.IDCard` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iDCard.Deserialize(value["IDCard"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iDCardHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BrazilCardInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rNEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RNE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rNE.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rNMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RNM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rNM.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_driverLicenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverLicense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_driverLicense.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iDCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iDCard.ToJsonObject(value[key.c_str()], allocator);
    }

}


BrazilRNEInfo BrazilCardInfo::GetRNE() const
{
    return m_rNE;
}

void BrazilCardInfo::SetRNE(const BrazilRNEInfo& _rNE)
{
    m_rNE = _rNE;
    m_rNEHasBeenSet = true;
}

bool BrazilCardInfo::RNEHasBeenSet() const
{
    return m_rNEHasBeenSet;
}

BrazilRNMInfo BrazilCardInfo::GetRNM() const
{
    return m_rNM;
}

void BrazilCardInfo::SetRNM(const BrazilRNMInfo& _rNM)
{
    m_rNM = _rNM;
    m_rNMHasBeenSet = true;
}

bool BrazilCardInfo::RNMHasBeenSet() const
{
    return m_rNMHasBeenSet;
}

BrazilDriverLicenseInfo BrazilCardInfo::GetDriverLicense() const
{
    return m_driverLicense;
}

void BrazilCardInfo::SetDriverLicense(const BrazilDriverLicenseInfo& _driverLicense)
{
    m_driverLicense = _driverLicense;
    m_driverLicenseHasBeenSet = true;
}

bool BrazilCardInfo::DriverLicenseHasBeenSet() const
{
    return m_driverLicenseHasBeenSet;
}

BrazilIDCardInfo BrazilCardInfo::GetIDCard() const
{
    return m_iDCard;
}

void BrazilCardInfo::SetIDCard(const BrazilIDCardInfo& _iDCard)
{
    m_iDCard = _iDCard;
    m_iDCardHasBeenSet = true;
}

bool BrazilCardInfo::IDCardHasBeenSet() const
{
    return m_iDCardHasBeenSet;
}

