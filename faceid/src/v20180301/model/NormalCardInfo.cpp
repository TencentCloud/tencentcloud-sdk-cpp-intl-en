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

#include <tencentcloud/faceid/v20180301/model/NormalCardInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

NormalCardInfo::NormalCardInfo() :
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
    m_singaporeIDCardHasBeenSet(false),
    m_macaoIDCardHasBeenSet(false),
    m_mainlandIDCardHasBeenSet(false),
    m_japanIDCardHasBeenSet(false),
    m_taiWanIDCardHasBeenSet(false),
    m_hMTPermitCardHasBeenSet(false)
{
}

CoreInternalOutcome NormalCardInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HKIDCard") && !value["HKIDCard"].IsNull())
    {
        if (!value["HKIDCard"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.HKIDCard` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.MLIDCard` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.PhilippinesVoteID` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.IndonesiaIDCard` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.PhilippinesDrivingLicense` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.PhilippinesTinID` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.PhilippinesSSSID` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.PhilippinesUMID` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.InternationalIDPassport` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.GeneralCard` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.IndonesiaDrivingLicense` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.ThailandIDCard` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.SingaporeIDCard` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_singaporeIDCard.Deserialize(value["SingaporeIDCard"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_singaporeIDCardHasBeenSet = true;
    }

    if (value.HasMember("MacaoIDCard") && !value["MacaoIDCard"].IsNull())
    {
        if (!value["MacaoIDCard"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.MacaoIDCard` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_macaoIDCard.Deserialize(value["MacaoIDCard"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_macaoIDCardHasBeenSet = true;
    }

    if (value.HasMember("MainlandIDCard") && !value["MainlandIDCard"].IsNull())
    {
        if (!value["MainlandIDCard"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.MainlandIDCard` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mainlandIDCard.Deserialize(value["MainlandIDCard"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mainlandIDCardHasBeenSet = true;
    }

    if (value.HasMember("JapanIDCard") && !value["JapanIDCard"].IsNull())
    {
        if (!value["JapanIDCard"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.JapanIDCard` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_japanIDCard.Deserialize(value["JapanIDCard"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_japanIDCardHasBeenSet = true;
    }

    if (value.HasMember("TaiWanIDCard") && !value["TaiWanIDCard"].IsNull())
    {
        if (!value["TaiWanIDCard"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.TaiWanIDCard` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taiWanIDCard.Deserialize(value["TaiWanIDCard"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taiWanIDCardHasBeenSet = true;
    }

    if (value.HasMember("HMTPermitCard") && !value["HMTPermitCard"].IsNull())
    {
        if (!value["HMTPermitCard"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NormalCardInfo.HMTPermitCard` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hMTPermitCard.Deserialize(value["HMTPermitCard"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hMTPermitCardHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NormalCardInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_macaoIDCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MacaoIDCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_macaoIDCard.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mainlandIDCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainlandIDCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mainlandIDCard.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_japanIDCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JapanIDCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_japanIDCard.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taiWanIDCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaiWanIDCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taiWanIDCard.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hMTPermitCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HMTPermitCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hMTPermitCard.ToJsonObject(value[key.c_str()], allocator);
    }

}


NormalHKIDCard NormalCardInfo::GetHKIDCard() const
{
    return m_hKIDCard;
}

void NormalCardInfo::SetHKIDCard(const NormalHKIDCard& _hKIDCard)
{
    m_hKIDCard = _hKIDCard;
    m_hKIDCardHasBeenSet = true;
}

bool NormalCardInfo::HKIDCardHasBeenSet() const
{
    return m_hKIDCardHasBeenSet;
}

NormalMLIDCard NormalCardInfo::GetMLIDCard() const
{
    return m_mLIDCard;
}

void NormalCardInfo::SetMLIDCard(const NormalMLIDCard& _mLIDCard)
{
    m_mLIDCard = _mLIDCard;
    m_mLIDCardHasBeenSet = true;
}

bool NormalCardInfo::MLIDCardHasBeenSet() const
{
    return m_mLIDCardHasBeenSet;
}

PhilippinesVoteID NormalCardInfo::GetPhilippinesVoteID() const
{
    return m_philippinesVoteID;
}

void NormalCardInfo::SetPhilippinesVoteID(const PhilippinesVoteID& _philippinesVoteID)
{
    m_philippinesVoteID = _philippinesVoteID;
    m_philippinesVoteIDHasBeenSet = true;
}

bool NormalCardInfo::PhilippinesVoteIDHasBeenSet() const
{
    return m_philippinesVoteIDHasBeenSet;
}

NormalIndonesiaIDCard NormalCardInfo::GetIndonesiaIDCard() const
{
    return m_indonesiaIDCard;
}

void NormalCardInfo::SetIndonesiaIDCard(const NormalIndonesiaIDCard& _indonesiaIDCard)
{
    m_indonesiaIDCard = _indonesiaIDCard;
    m_indonesiaIDCardHasBeenSet = true;
}

bool NormalCardInfo::IndonesiaIDCardHasBeenSet() const
{
    return m_indonesiaIDCardHasBeenSet;
}

PhilippinesDrivingLicense NormalCardInfo::GetPhilippinesDrivingLicense() const
{
    return m_philippinesDrivingLicense;
}

void NormalCardInfo::SetPhilippinesDrivingLicense(const PhilippinesDrivingLicense& _philippinesDrivingLicense)
{
    m_philippinesDrivingLicense = _philippinesDrivingLicense;
    m_philippinesDrivingLicenseHasBeenSet = true;
}

bool NormalCardInfo::PhilippinesDrivingLicenseHasBeenSet() const
{
    return m_philippinesDrivingLicenseHasBeenSet;
}

PhilippinesTinID NormalCardInfo::GetPhilippinesTinID() const
{
    return m_philippinesTinID;
}

void NormalCardInfo::SetPhilippinesTinID(const PhilippinesTinID& _philippinesTinID)
{
    m_philippinesTinID = _philippinesTinID;
    m_philippinesTinIDHasBeenSet = true;
}

bool NormalCardInfo::PhilippinesTinIDHasBeenSet() const
{
    return m_philippinesTinIDHasBeenSet;
}

PhilippinesSSSID NormalCardInfo::GetPhilippinesSSSID() const
{
    return m_philippinesSSSID;
}

void NormalCardInfo::SetPhilippinesSSSID(const PhilippinesSSSID& _philippinesSSSID)
{
    m_philippinesSSSID = _philippinesSSSID;
    m_philippinesSSSIDHasBeenSet = true;
}

bool NormalCardInfo::PhilippinesSSSIDHasBeenSet() const
{
    return m_philippinesSSSIDHasBeenSet;
}

PhilippinesUMID NormalCardInfo::GetPhilippinesUMID() const
{
    return m_philippinesUMID;
}

void NormalCardInfo::SetPhilippinesUMID(const PhilippinesUMID& _philippinesUMID)
{
    m_philippinesUMID = _philippinesUMID;
    m_philippinesUMIDHasBeenSet = true;
}

bool NormalCardInfo::PhilippinesUMIDHasBeenSet() const
{
    return m_philippinesUMIDHasBeenSet;
}

InternationalIDPassport NormalCardInfo::GetInternationalIDPassport() const
{
    return m_internationalIDPassport;
}

void NormalCardInfo::SetInternationalIDPassport(const InternationalIDPassport& _internationalIDPassport)
{
    m_internationalIDPassport = _internationalIDPassport;
    m_internationalIDPassportHasBeenSet = true;
}

bool NormalCardInfo::InternationalIDPassportHasBeenSet() const
{
    return m_internationalIDPassportHasBeenSet;
}

GeneralCard NormalCardInfo::GetGeneralCard() const
{
    return m_generalCard;
}

void NormalCardInfo::SetGeneralCard(const GeneralCard& _generalCard)
{
    m_generalCard = _generalCard;
    m_generalCardHasBeenSet = true;
}

bool NormalCardInfo::GeneralCardHasBeenSet() const
{
    return m_generalCardHasBeenSet;
}

IndonesiaDrivingLicense NormalCardInfo::GetIndonesiaDrivingLicense() const
{
    return m_indonesiaDrivingLicense;
}

void NormalCardInfo::SetIndonesiaDrivingLicense(const IndonesiaDrivingLicense& _indonesiaDrivingLicense)
{
    m_indonesiaDrivingLicense = _indonesiaDrivingLicense;
    m_indonesiaDrivingLicenseHasBeenSet = true;
}

bool NormalCardInfo::IndonesiaDrivingLicenseHasBeenSet() const
{
    return m_indonesiaDrivingLicenseHasBeenSet;
}

NormalThailandIDCard NormalCardInfo::GetThailandIDCard() const
{
    return m_thailandIDCard;
}

void NormalCardInfo::SetThailandIDCard(const NormalThailandIDCard& _thailandIDCard)
{
    m_thailandIDCard = _thailandIDCard;
    m_thailandIDCardHasBeenSet = true;
}

bool NormalCardInfo::ThailandIDCardHasBeenSet() const
{
    return m_thailandIDCardHasBeenSet;
}

SingaporeIDCard NormalCardInfo::GetSingaporeIDCard() const
{
    return m_singaporeIDCard;
}

void NormalCardInfo::SetSingaporeIDCard(const SingaporeIDCard& _singaporeIDCard)
{
    m_singaporeIDCard = _singaporeIDCard;
    m_singaporeIDCardHasBeenSet = true;
}

bool NormalCardInfo::SingaporeIDCardHasBeenSet() const
{
    return m_singaporeIDCardHasBeenSet;
}

MacaoIDCard NormalCardInfo::GetMacaoIDCard() const
{
    return m_macaoIDCard;
}

void NormalCardInfo::SetMacaoIDCard(const MacaoIDCard& _macaoIDCard)
{
    m_macaoIDCard = _macaoIDCard;
    m_macaoIDCardHasBeenSet = true;
}

bool NormalCardInfo::MacaoIDCardHasBeenSet() const
{
    return m_macaoIDCardHasBeenSet;
}

MainlandIDCard NormalCardInfo::GetMainlandIDCard() const
{
    return m_mainlandIDCard;
}

void NormalCardInfo::SetMainlandIDCard(const MainlandIDCard& _mainlandIDCard)
{
    m_mainlandIDCard = _mainlandIDCard;
    m_mainlandIDCardHasBeenSet = true;
}

bool NormalCardInfo::MainlandIDCardHasBeenSet() const
{
    return m_mainlandIDCardHasBeenSet;
}

JapanIDCard NormalCardInfo::GetJapanIDCard() const
{
    return m_japanIDCard;
}

void NormalCardInfo::SetJapanIDCard(const JapanIDCard& _japanIDCard)
{
    m_japanIDCard = _japanIDCard;
    m_japanIDCardHasBeenSet = true;
}

bool NormalCardInfo::JapanIDCardHasBeenSet() const
{
    return m_japanIDCardHasBeenSet;
}

TaiWanIDCard NormalCardInfo::GetTaiWanIDCard() const
{
    return m_taiWanIDCard;
}

void NormalCardInfo::SetTaiWanIDCard(const TaiWanIDCard& _taiWanIDCard)
{
    m_taiWanIDCard = _taiWanIDCard;
    m_taiWanIDCardHasBeenSet = true;
}

bool NormalCardInfo::TaiWanIDCardHasBeenSet() const
{
    return m_taiWanIDCardHasBeenSet;
}

HMTPermit NormalCardInfo::GetHMTPermitCard() const
{
    return m_hMTPermitCard;
}

void NormalCardInfo::SetHMTPermitCard(const HMTPermit& _hMTPermitCard)
{
    m_hMTPermitCard = _hMTPermitCard;
    m_hMTPermitCardHasBeenSet = true;
}

bool NormalCardInfo::HMTPermitCardHasBeenSet() const
{
    return m_hMTPermitCardHasBeenSet;
}

