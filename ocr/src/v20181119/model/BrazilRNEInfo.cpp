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

#include <tencentcloud/ocr/v20181119/model/BrazilRNEInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

BrazilRNEInfo::BrazilRNEInfo() :
    m_rNEHasBeenSet(false),
    m_cLASSIFICATIONHasBeenSet(false),
    m_vALIDADEHasBeenSet(false),
    m_nOMEHasBeenSet(false),
    m_membershipHasBeenSet(false),
    m_nACIONALIDADEHasBeenSet(false),
    m_nATURALIDADEHasBeenSet(false),
    m_issuingAgencyHasBeenSet(false),
    m_dateOfBirthHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_entryDateHasBeenSet(false),
    m_vIAHasBeenSet(false),
    m_dispatchDateHasBeenSet(false),
    m_mRZHasBeenSet(false),
    m_portraitImageHasBeenSet(false)
{
}

CoreInternalOutcome BrazilRNEInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RNE") && !value["RNE"].IsNull())
    {
        if (!value["RNE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNEInfo.RNE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rNE = string(value["RNE"].GetString());
        m_rNEHasBeenSet = true;
    }

    if (value.HasMember("CLASSIFICATION") && !value["CLASSIFICATION"].IsNull())
    {
        if (!value["CLASSIFICATION"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNEInfo.CLASSIFICATION` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cLASSIFICATION = string(value["CLASSIFICATION"].GetString());
        m_cLASSIFICATIONHasBeenSet = true;
    }

    if (value.HasMember("VALIDADE") && !value["VALIDADE"].IsNull())
    {
        if (!value["VALIDADE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNEInfo.VALIDADE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vALIDADE = string(value["VALIDADE"].GetString());
        m_vALIDADEHasBeenSet = true;
    }

    if (value.HasMember("NOME") && !value["NOME"].IsNull())
    {
        if (!value["NOME"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNEInfo.NOME` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nOME = string(value["NOME"].GetString());
        m_nOMEHasBeenSet = true;
    }

    if (value.HasMember("Membership") && !value["Membership"].IsNull())
    {
        if (!value["Membership"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNEInfo.Membership` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_membership = string(value["Membership"].GetString());
        m_membershipHasBeenSet = true;
    }

    if (value.HasMember("NACIONALIDADE") && !value["NACIONALIDADE"].IsNull())
    {
        if (!value["NACIONALIDADE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNEInfo.NACIONALIDADE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nACIONALIDADE = string(value["NACIONALIDADE"].GetString());
        m_nACIONALIDADEHasBeenSet = true;
    }

    if (value.HasMember("NATURALIDADE") && !value["NATURALIDADE"].IsNull())
    {
        if (!value["NATURALIDADE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNEInfo.NATURALIDADE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nATURALIDADE = string(value["NATURALIDADE"].GetString());
        m_nATURALIDADEHasBeenSet = true;
    }

    if (value.HasMember("IssuingAgency") && !value["IssuingAgency"].IsNull())
    {
        if (!value["IssuingAgency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNEInfo.IssuingAgency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuingAgency = string(value["IssuingAgency"].GetString());
        m_issuingAgencyHasBeenSet = true;
    }

    if (value.HasMember("DateOfBirth") && !value["DateOfBirth"].IsNull())
    {
        if (!value["DateOfBirth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNEInfo.DateOfBirth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfBirth = string(value["DateOfBirth"].GetString());
        m_dateOfBirthHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNEInfo.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("EntryDate") && !value["EntryDate"].IsNull())
    {
        if (!value["EntryDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNEInfo.EntryDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entryDate = string(value["EntryDate"].GetString());
        m_entryDateHasBeenSet = true;
    }

    if (value.HasMember("VIA") && !value["VIA"].IsNull())
    {
        if (!value["VIA"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNEInfo.VIA` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vIA = string(value["VIA"].GetString());
        m_vIAHasBeenSet = true;
    }

    if (value.HasMember("DispatchDate") && !value["DispatchDate"].IsNull())
    {
        if (!value["DispatchDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNEInfo.DispatchDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dispatchDate = string(value["DispatchDate"].GetString());
        m_dispatchDateHasBeenSet = true;
    }

    if (value.HasMember("MRZ") && !value["MRZ"].IsNull())
    {
        if (!value["MRZ"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNEInfo.MRZ` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mRZ = string(value["MRZ"].GetString());
        m_mRZHasBeenSet = true;
    }

    if (value.HasMember("PortraitImage") && !value["PortraitImage"].IsNull())
    {
        if (!value["PortraitImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNEInfo.PortraitImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portraitImage = string(value["PortraitImage"].GetString());
        m_portraitImageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BrazilRNEInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rNEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RNE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rNE.c_str(), allocator).Move(), allocator);
    }

    if (m_cLASSIFICATIONHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLASSIFICATION";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cLASSIFICATION.c_str(), allocator).Move(), allocator);
    }

    if (m_vALIDADEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VALIDADE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vALIDADE.c_str(), allocator).Move(), allocator);
    }

    if (m_nOMEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NOME";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nOME.c_str(), allocator).Move(), allocator);
    }

    if (m_membershipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Membership";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_membership.c_str(), allocator).Move(), allocator);
    }

    if (m_nACIONALIDADEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NACIONALIDADE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nACIONALIDADE.c_str(), allocator).Move(), allocator);
    }

    if (m_nATURALIDADEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NATURALIDADE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nATURALIDADE.c_str(), allocator).Move(), allocator);
    }

    if (m_issuingAgencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuingAgency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuingAgency.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfBirthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfBirth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfBirth.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_entryDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entryDate.c_str(), allocator).Move(), allocator);
    }

    if (m_vIAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VIA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vIA.c_str(), allocator).Move(), allocator);
    }

    if (m_dispatchDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DispatchDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dispatchDate.c_str(), allocator).Move(), allocator);
    }

    if (m_mRZHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MRZ";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mRZ.c_str(), allocator).Move(), allocator);
    }

    if (m_portraitImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portraitImage.c_str(), allocator).Move(), allocator);
    }

}


string BrazilRNEInfo::GetRNE() const
{
    return m_rNE;
}

void BrazilRNEInfo::SetRNE(const string& _rNE)
{
    m_rNE = _rNE;
    m_rNEHasBeenSet = true;
}

bool BrazilRNEInfo::RNEHasBeenSet() const
{
    return m_rNEHasBeenSet;
}

string BrazilRNEInfo::GetCLASSIFICATION() const
{
    return m_cLASSIFICATION;
}

void BrazilRNEInfo::SetCLASSIFICATION(const string& _cLASSIFICATION)
{
    m_cLASSIFICATION = _cLASSIFICATION;
    m_cLASSIFICATIONHasBeenSet = true;
}

bool BrazilRNEInfo::CLASSIFICATIONHasBeenSet() const
{
    return m_cLASSIFICATIONHasBeenSet;
}

string BrazilRNEInfo::GetVALIDADE() const
{
    return m_vALIDADE;
}

void BrazilRNEInfo::SetVALIDADE(const string& _vALIDADE)
{
    m_vALIDADE = _vALIDADE;
    m_vALIDADEHasBeenSet = true;
}

bool BrazilRNEInfo::VALIDADEHasBeenSet() const
{
    return m_vALIDADEHasBeenSet;
}

string BrazilRNEInfo::GetNOME() const
{
    return m_nOME;
}

void BrazilRNEInfo::SetNOME(const string& _nOME)
{
    m_nOME = _nOME;
    m_nOMEHasBeenSet = true;
}

bool BrazilRNEInfo::NOMEHasBeenSet() const
{
    return m_nOMEHasBeenSet;
}

string BrazilRNEInfo::GetMembership() const
{
    return m_membership;
}

void BrazilRNEInfo::SetMembership(const string& _membership)
{
    m_membership = _membership;
    m_membershipHasBeenSet = true;
}

bool BrazilRNEInfo::MembershipHasBeenSet() const
{
    return m_membershipHasBeenSet;
}

string BrazilRNEInfo::GetNACIONALIDADE() const
{
    return m_nACIONALIDADE;
}

void BrazilRNEInfo::SetNACIONALIDADE(const string& _nACIONALIDADE)
{
    m_nACIONALIDADE = _nACIONALIDADE;
    m_nACIONALIDADEHasBeenSet = true;
}

bool BrazilRNEInfo::NACIONALIDADEHasBeenSet() const
{
    return m_nACIONALIDADEHasBeenSet;
}

string BrazilRNEInfo::GetNATURALIDADE() const
{
    return m_nATURALIDADE;
}

void BrazilRNEInfo::SetNATURALIDADE(const string& _nATURALIDADE)
{
    m_nATURALIDADE = _nATURALIDADE;
    m_nATURALIDADEHasBeenSet = true;
}

bool BrazilRNEInfo::NATURALIDADEHasBeenSet() const
{
    return m_nATURALIDADEHasBeenSet;
}

string BrazilRNEInfo::GetIssuingAgency() const
{
    return m_issuingAgency;
}

void BrazilRNEInfo::SetIssuingAgency(const string& _issuingAgency)
{
    m_issuingAgency = _issuingAgency;
    m_issuingAgencyHasBeenSet = true;
}

bool BrazilRNEInfo::IssuingAgencyHasBeenSet() const
{
    return m_issuingAgencyHasBeenSet;
}

string BrazilRNEInfo::GetDateOfBirth() const
{
    return m_dateOfBirth;
}

void BrazilRNEInfo::SetDateOfBirth(const string& _dateOfBirth)
{
    m_dateOfBirth = _dateOfBirth;
    m_dateOfBirthHasBeenSet = true;
}

bool BrazilRNEInfo::DateOfBirthHasBeenSet() const
{
    return m_dateOfBirthHasBeenSet;
}

string BrazilRNEInfo::GetSex() const
{
    return m_sex;
}

void BrazilRNEInfo::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool BrazilRNEInfo::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string BrazilRNEInfo::GetEntryDate() const
{
    return m_entryDate;
}

void BrazilRNEInfo::SetEntryDate(const string& _entryDate)
{
    m_entryDate = _entryDate;
    m_entryDateHasBeenSet = true;
}

bool BrazilRNEInfo::EntryDateHasBeenSet() const
{
    return m_entryDateHasBeenSet;
}

string BrazilRNEInfo::GetVIA() const
{
    return m_vIA;
}

void BrazilRNEInfo::SetVIA(const string& _vIA)
{
    m_vIA = _vIA;
    m_vIAHasBeenSet = true;
}

bool BrazilRNEInfo::VIAHasBeenSet() const
{
    return m_vIAHasBeenSet;
}

string BrazilRNEInfo::GetDispatchDate() const
{
    return m_dispatchDate;
}

void BrazilRNEInfo::SetDispatchDate(const string& _dispatchDate)
{
    m_dispatchDate = _dispatchDate;
    m_dispatchDateHasBeenSet = true;
}

bool BrazilRNEInfo::DispatchDateHasBeenSet() const
{
    return m_dispatchDateHasBeenSet;
}

string BrazilRNEInfo::GetMRZ() const
{
    return m_mRZ;
}

void BrazilRNEInfo::SetMRZ(const string& _mRZ)
{
    m_mRZ = _mRZ;
    m_mRZHasBeenSet = true;
}

bool BrazilRNEInfo::MRZHasBeenSet() const
{
    return m_mRZHasBeenSet;
}

string BrazilRNEInfo::GetPortraitImage() const
{
    return m_portraitImage;
}

void BrazilRNEInfo::SetPortraitImage(const string& _portraitImage)
{
    m_portraitImage = _portraitImage;
    m_portraitImageHasBeenSet = true;
}

bool BrazilRNEInfo::PortraitImageHasBeenSet() const
{
    return m_portraitImageHasBeenSet;
}

