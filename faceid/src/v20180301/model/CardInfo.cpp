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

#include <tencentcloud/faceid/v20180301/model/CardInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

CardInfo::CardInfo() :
    m_hKIDCardHasBeenSet(false),
    m_mLIDCardHasBeenSet(false),
    m_philippinesVoteIDHasBeenSet(false),
    m_indonesiaIDCardHasBeenSet(false),
    m_philippinesDrivingLicenseHasBeenSet(false),
    m_philippinesTinIDHasBeenSet(false),
    m_philippinesSSSIDHasBeenSet(false),
    m_philippinesUMIDHasBeenSet(false),
    m_internationalIDPassportHasBeenSet(false),
    m_generalCardHasBeenSet(false),
    m_indonesiaDrivingLicenseHasBeenSet(false),
    m_thailandIDCardHasBeenSet(false),
    m_singaporeIDCardHasBeenSet(false)
{
}

CoreInternalOutcome CardInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HKIDCard") && !value["HKIDCard"].IsNull())
    {
        if (!value["HKIDCard"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.HKIDCard` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hKIDCard.Deserialize(value["HKIDCard"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hKIDCardHasBeenSet = true;
    }

    if (value.HasMember("MLIDCard") && !value["MLIDCard"].IsNull())
    {
        if (!value["MLIDCard"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.MLIDCard` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mLIDCard.Deserialize(value["MLIDCard"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mLIDCardHasBeenSet = true;
    }

    if (value.HasMember("PhilippinesVoteID") && !value["PhilippinesVoteID"].IsNull())
    {
        if (!value["PhilippinesVoteID"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.PhilippinesVoteID` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_philippinesVoteID.Deserialize(value["PhilippinesVoteID"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_philippinesVoteIDHasBeenSet = true;
    }

    if (value.HasMember("IndonesiaIDCard") && !value["IndonesiaIDCard"].IsNull())
    {
        if (!value["IndonesiaIDCard"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.IndonesiaIDCard` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_indonesiaIDCard.Deserialize(value["IndonesiaIDCard"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_indonesiaIDCardHasBeenSet = true;
    }

    if (value.HasMember("PhilippinesDrivingLicense") && !value["PhilippinesDrivingLicense"].IsNull())
    {
        if (!value["PhilippinesDrivingLicense"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.PhilippinesDrivingLicense` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_philippinesDrivingLicense.Deserialize(value["PhilippinesDrivingLicense"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_philippinesDrivingLicenseHasBeenSet = true;
    }

    if (value.HasMember("PhilippinesTinID") && !value["PhilippinesTinID"].IsNull())
    {
        if (!value["PhilippinesTinID"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.PhilippinesTinID` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_philippinesTinID.Deserialize(value["PhilippinesTinID"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_philippinesTinIDHasBeenSet = true;
    }

    if (value.HasMember("PhilippinesSSSID") && !value["PhilippinesSSSID"].IsNull())
    {
        if (!value["PhilippinesSSSID"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.PhilippinesSSSID` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_philippinesSSSID.Deserialize(value["PhilippinesSSSID"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_philippinesSSSIDHasBeenSet = true;
    }

    if (value.HasMember("PhilippinesUMID") && !value["PhilippinesUMID"].IsNull())
    {
        if (!value["PhilippinesUMID"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.PhilippinesUMID` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_philippinesUMID.Deserialize(value["PhilippinesUMID"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_philippinesUMIDHasBeenSet = true;
    }

    if (value.HasMember("InternationalIDPassport") && !value["InternationalIDPassport"].IsNull())
    {
        if (!value["InternationalIDPassport"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.InternationalIDPassport` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internationalIDPassport.Deserialize(value["InternationalIDPassport"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internationalIDPassportHasBeenSet = true;
    }

    if (value.HasMember("GeneralCard") && !value["GeneralCard"].IsNull())
    {
        if (!value["GeneralCard"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.GeneralCard` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_generalCard.Deserialize(value["GeneralCard"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_generalCardHasBeenSet = true;
    }

    if (value.HasMember("IndonesiaDrivingLicense") && !value["IndonesiaDrivingLicense"].IsNull())
    {
        if (!value["IndonesiaDrivingLicense"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.IndonesiaDrivingLicense` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_indonesiaDrivingLicense.Deserialize(value["IndonesiaDrivingLicense"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_indonesiaDrivingLicenseHasBeenSet = true;
    }

    if (value.HasMember("ThailandIDCard") && !value["ThailandIDCard"].IsNull())
    {
        if (!value["ThailandIDCard"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.ThailandIDCard` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_thailandIDCard.Deserialize(value["ThailandIDCard"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_thailandIDCardHasBeenSet = true;
    }

    if (value.HasMember("SingaporeIDCard") && !value["SingaporeIDCard"].IsNull())
    {
        if (!value["SingaporeIDCard"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.SingaporeIDCard` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_singaporeIDCard.Deserialize(value["SingaporeIDCard"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_singaporeIDCardHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CardInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hKIDCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HKIDCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hKIDCard.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mLIDCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MLIDCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mLIDCard.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_philippinesVoteIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhilippinesVoteID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_philippinesVoteID.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_indonesiaIDCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndonesiaIDCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_indonesiaIDCard.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_philippinesDrivingLicenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhilippinesDrivingLicense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_philippinesDrivingLicense.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_philippinesTinIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhilippinesTinID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_philippinesTinID.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_philippinesSSSIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhilippinesSSSID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_philippinesSSSID.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_philippinesUMIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhilippinesUMID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_philippinesUMID.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_internationalIDPassportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternationalIDPassport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internationalIDPassport.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_generalCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeneralCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_generalCard.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_indonesiaDrivingLicenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndonesiaDrivingLicense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_indonesiaDrivingLicense.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_thailandIDCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThailandIDCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_thailandIDCard.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_singaporeIDCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingaporeIDCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_singaporeIDCard.ToJsonObject(value[key.c_str()], allocator);
    }

}


HKIDCard CardInfo::GetHKIDCard() const
{
    return m_hKIDCard;
}

void CardInfo::SetHKIDCard(const HKIDCard& _hKIDCard)
{
    m_hKIDCard = _hKIDCard;
    m_hKIDCardHasBeenSet = true;
}

bool CardInfo::HKIDCardHasBeenSet() const
{
    return m_hKIDCardHasBeenSet;
}

MLIDCard CardInfo::GetMLIDCard() const
{
    return m_mLIDCard;
}

void CardInfo::SetMLIDCard(const MLIDCard& _mLIDCard)
{
    m_mLIDCard = _mLIDCard;
    m_mLIDCardHasBeenSet = true;
}

bool CardInfo::MLIDCardHasBeenSet() const
{
    return m_mLIDCardHasBeenSet;
}

PhilippinesVoteID CardInfo::GetPhilippinesVoteID() const
{
    return m_philippinesVoteID;
}

void CardInfo::SetPhilippinesVoteID(const PhilippinesVoteID& _philippinesVoteID)
{
    m_philippinesVoteID = _philippinesVoteID;
    m_philippinesVoteIDHasBeenSet = true;
}

bool CardInfo::PhilippinesVoteIDHasBeenSet() const
{
    return m_philippinesVoteIDHasBeenSet;
}

IndonesiaIDCard CardInfo::GetIndonesiaIDCard() const
{
    return m_indonesiaIDCard;
}

void CardInfo::SetIndonesiaIDCard(const IndonesiaIDCard& _indonesiaIDCard)
{
    m_indonesiaIDCard = _indonesiaIDCard;
    m_indonesiaIDCardHasBeenSet = true;
}

bool CardInfo::IndonesiaIDCardHasBeenSet() const
{
    return m_indonesiaIDCardHasBeenSet;
}

PhilippinesDrivingLicense CardInfo::GetPhilippinesDrivingLicense() const
{
    return m_philippinesDrivingLicense;
}

void CardInfo::SetPhilippinesDrivingLicense(const PhilippinesDrivingLicense& _philippinesDrivingLicense)
{
    m_philippinesDrivingLicense = _philippinesDrivingLicense;
    m_philippinesDrivingLicenseHasBeenSet = true;
}

bool CardInfo::PhilippinesDrivingLicenseHasBeenSet() const
{
    return m_philippinesDrivingLicenseHasBeenSet;
}

PhilippinesTinID CardInfo::GetPhilippinesTinID() const
{
    return m_philippinesTinID;
}

void CardInfo::SetPhilippinesTinID(const PhilippinesTinID& _philippinesTinID)
{
    m_philippinesTinID = _philippinesTinID;
    m_philippinesTinIDHasBeenSet = true;
}

bool CardInfo::PhilippinesTinIDHasBeenSet() const
{
    return m_philippinesTinIDHasBeenSet;
}

PhilippinesSSSID CardInfo::GetPhilippinesSSSID() const
{
    return m_philippinesSSSID;
}

void CardInfo::SetPhilippinesSSSID(const PhilippinesSSSID& _philippinesSSSID)
{
    m_philippinesSSSID = _philippinesSSSID;
    m_philippinesSSSIDHasBeenSet = true;
}

bool CardInfo::PhilippinesSSSIDHasBeenSet() const
{
    return m_philippinesSSSIDHasBeenSet;
}

PhilippinesUMID CardInfo::GetPhilippinesUMID() const
{
    return m_philippinesUMID;
}

void CardInfo::SetPhilippinesUMID(const PhilippinesUMID& _philippinesUMID)
{
    m_philippinesUMID = _philippinesUMID;
    m_philippinesUMIDHasBeenSet = true;
}

bool CardInfo::PhilippinesUMIDHasBeenSet() const
{
    return m_philippinesUMIDHasBeenSet;
}

InternationalIDPassport CardInfo::GetInternationalIDPassport() const
{
    return m_internationalIDPassport;
}

void CardInfo::SetInternationalIDPassport(const InternationalIDPassport& _internationalIDPassport)
{
    m_internationalIDPassport = _internationalIDPassport;
    m_internationalIDPassportHasBeenSet = true;
}

bool CardInfo::InternationalIDPassportHasBeenSet() const
{
    return m_internationalIDPassportHasBeenSet;
}

GeneralCard CardInfo::GetGeneralCard() const
{
    return m_generalCard;
}

void CardInfo::SetGeneralCard(const GeneralCard& _generalCard)
{
    m_generalCard = _generalCard;
    m_generalCardHasBeenSet = true;
}

bool CardInfo::GeneralCardHasBeenSet() const
{
    return m_generalCardHasBeenSet;
}

IndonesiaDrivingLicense CardInfo::GetIndonesiaDrivingLicense() const
{
    return m_indonesiaDrivingLicense;
}

void CardInfo::SetIndonesiaDrivingLicense(const IndonesiaDrivingLicense& _indonesiaDrivingLicense)
{
    m_indonesiaDrivingLicense = _indonesiaDrivingLicense;
    m_indonesiaDrivingLicenseHasBeenSet = true;
}

bool CardInfo::IndonesiaDrivingLicenseHasBeenSet() const
{
    return m_indonesiaDrivingLicenseHasBeenSet;
}

ThailandIDCard CardInfo::GetThailandIDCard() const
{
    return m_thailandIDCard;
}

void CardInfo::SetThailandIDCard(const ThailandIDCard& _thailandIDCard)
{
    m_thailandIDCard = _thailandIDCard;
    m_thailandIDCardHasBeenSet = true;
}

bool CardInfo::ThailandIDCardHasBeenSet() const
{
    return m_thailandIDCardHasBeenSet;
}

SingaporeIDCard CardInfo::GetSingaporeIDCard() const
{
    return m_singaporeIDCard;
}

void CardInfo::SetSingaporeIDCard(const SingaporeIDCard& _singaporeIDCard)
{
    m_singaporeIDCard = _singaporeIDCard;
    m_singaporeIDCardHasBeenSet = true;
}

bool CardInfo::SingaporeIDCardHasBeenSet() const
{
    return m_singaporeIDCardHasBeenSet;
}

