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

#include <tencentcloud/ocr/v20181119/model/BrazilRNMInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

BrazilRNMInfo::BrazilRNMInfo() :
    m_sOBRENOMEHasBeenSet(false),
    m_nOMEHasBeenSet(false),
    m_dATADENASCIMENTOHasBeenSet(false),
    m_sEXOHasBeenSet(false),
    m_mEMBERSHIPHasBeenSet(false),
    m_nACIONALIDADEHasBeenSet(false),
    m_vALIDADEHasBeenSet(false),
    m_rNMHasBeenSet(false),
    m_cPFHasBeenSet(false),
    m_cLASSIFICATIONHasBeenSet(false),
    m_pRAZODERESIDENCIAHasBeenSet(false),
    m_iSSUANCEHasBeenSet(false),
    m_aMPAROLEGALHasBeenSet(false),
    m_mRZHasBeenSet(false),
    m_portraitImageHasBeenSet(false),
    m_portraitImageBackHasBeenSet(false)
{
}

CoreInternalOutcome BrazilRNMInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SOBRENOME") && !value["SOBRENOME"].IsNull())
    {
        if (!value["SOBRENOME"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNMInfo.SOBRENOME` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sOBRENOME = string(value["SOBRENOME"].GetString());
        m_sOBRENOMEHasBeenSet = true;
    }

    if (value.HasMember("NOME") && !value["NOME"].IsNull())
    {
        if (!value["NOME"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNMInfo.NOME` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nOME = string(value["NOME"].GetString());
        m_nOMEHasBeenSet = true;
    }

    if (value.HasMember("DATADENASCIMENTO") && !value["DATADENASCIMENTO"].IsNull())
    {
        if (!value["DATADENASCIMENTO"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNMInfo.DATADENASCIMENTO` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dATADENASCIMENTO = string(value["DATADENASCIMENTO"].GetString());
        m_dATADENASCIMENTOHasBeenSet = true;
    }

    if (value.HasMember("SEXO") && !value["SEXO"].IsNull())
    {
        if (!value["SEXO"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNMInfo.SEXO` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sEXO = string(value["SEXO"].GetString());
        m_sEXOHasBeenSet = true;
    }

    if (value.HasMember("MEMBERSHIP") && !value["MEMBERSHIP"].IsNull())
    {
        if (!value["MEMBERSHIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNMInfo.MEMBERSHIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mEMBERSHIP = string(value["MEMBERSHIP"].GetString());
        m_mEMBERSHIPHasBeenSet = true;
    }

    if (value.HasMember("NACIONALIDADE") && !value["NACIONALIDADE"].IsNull())
    {
        if (!value["NACIONALIDADE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNMInfo.NACIONALIDADE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nACIONALIDADE = string(value["NACIONALIDADE"].GetString());
        m_nACIONALIDADEHasBeenSet = true;
    }

    if (value.HasMember("VALIDADE") && !value["VALIDADE"].IsNull())
    {
        if (!value["VALIDADE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNMInfo.VALIDADE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vALIDADE = string(value["VALIDADE"].GetString());
        m_vALIDADEHasBeenSet = true;
    }

    if (value.HasMember("RNM") && !value["RNM"].IsNull())
    {
        if (!value["RNM"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNMInfo.RNM` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rNM = string(value["RNM"].GetString());
        m_rNMHasBeenSet = true;
    }

    if (value.HasMember("CPF") && !value["CPF"].IsNull())
    {
        if (!value["CPF"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNMInfo.CPF` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cPF = string(value["CPF"].GetString());
        m_cPFHasBeenSet = true;
    }

    if (value.HasMember("CLASSIFICATION") && !value["CLASSIFICATION"].IsNull())
    {
        if (!value["CLASSIFICATION"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNMInfo.CLASSIFICATION` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cLASSIFICATION = string(value["CLASSIFICATION"].GetString());
        m_cLASSIFICATIONHasBeenSet = true;
    }

    if (value.HasMember("PRAZODERESIDENCIA") && !value["PRAZODERESIDENCIA"].IsNull())
    {
        if (!value["PRAZODERESIDENCIA"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNMInfo.PRAZODERESIDENCIA` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pRAZODERESIDENCIA = string(value["PRAZODERESIDENCIA"].GetString());
        m_pRAZODERESIDENCIAHasBeenSet = true;
    }

    if (value.HasMember("ISSUANCE") && !value["ISSUANCE"].IsNull())
    {
        if (!value["ISSUANCE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNMInfo.ISSUANCE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSSUANCE = string(value["ISSUANCE"].GetString());
        m_iSSUANCEHasBeenSet = true;
    }

    if (value.HasMember("AMPAROLEGAL") && !value["AMPAROLEGAL"].IsNull())
    {
        if (!value["AMPAROLEGAL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNMInfo.AMPAROLEGAL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aMPAROLEGAL = string(value["AMPAROLEGAL"].GetString());
        m_aMPAROLEGALHasBeenSet = true;
    }

    if (value.HasMember("MRZ") && !value["MRZ"].IsNull())
    {
        if (!value["MRZ"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNMInfo.MRZ` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mRZ = string(value["MRZ"].GetString());
        m_mRZHasBeenSet = true;
    }

    if (value.HasMember("PortraitImage") && !value["PortraitImage"].IsNull())
    {
        if (!value["PortraitImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNMInfo.PortraitImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portraitImage = string(value["PortraitImage"].GetString());
        m_portraitImageHasBeenSet = true;
    }

    if (value.HasMember("PortraitImageBack") && !value["PortraitImageBack"].IsNull())
    {
        if (!value["PortraitImageBack"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilRNMInfo.PortraitImageBack` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portraitImageBack = string(value["PortraitImageBack"].GetString());
        m_portraitImageBackHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BrazilRNMInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sOBRENOMEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SOBRENOME";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sOBRENOME.c_str(), allocator).Move(), allocator);
    }

    if (m_nOMEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NOME";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nOME.c_str(), allocator).Move(), allocator);
    }

    if (m_dATADENASCIMENTOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DATADENASCIMENTO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dATADENASCIMENTO.c_str(), allocator).Move(), allocator);
    }

    if (m_sEXOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SEXO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sEXO.c_str(), allocator).Move(), allocator);
    }

    if (m_mEMBERSHIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MEMBERSHIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mEMBERSHIP.c_str(), allocator).Move(), allocator);
    }

    if (m_nACIONALIDADEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NACIONALIDADE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nACIONALIDADE.c_str(), allocator).Move(), allocator);
    }

    if (m_vALIDADEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VALIDADE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vALIDADE.c_str(), allocator).Move(), allocator);
    }

    if (m_rNMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RNM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rNM.c_str(), allocator).Move(), allocator);
    }

    if (m_cPFHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPF";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cPF.c_str(), allocator).Move(), allocator);
    }

    if (m_cLASSIFICATIONHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLASSIFICATION";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cLASSIFICATION.c_str(), allocator).Move(), allocator);
    }

    if (m_pRAZODERESIDENCIAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PRAZODERESIDENCIA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pRAZODERESIDENCIA.c_str(), allocator).Move(), allocator);
    }

    if (m_iSSUANCEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISSUANCE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSSUANCE.c_str(), allocator).Move(), allocator);
    }

    if (m_aMPAROLEGALHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AMPAROLEGAL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aMPAROLEGAL.c_str(), allocator).Move(), allocator);
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

    if (m_portraitImageBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitImageBack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portraitImageBack.c_str(), allocator).Move(), allocator);
    }

}


string BrazilRNMInfo::GetSOBRENOME() const
{
    return m_sOBRENOME;
}

void BrazilRNMInfo::SetSOBRENOME(const string& _sOBRENOME)
{
    m_sOBRENOME = _sOBRENOME;
    m_sOBRENOMEHasBeenSet = true;
}

bool BrazilRNMInfo::SOBRENOMEHasBeenSet() const
{
    return m_sOBRENOMEHasBeenSet;
}

string BrazilRNMInfo::GetNOME() const
{
    return m_nOME;
}

void BrazilRNMInfo::SetNOME(const string& _nOME)
{
    m_nOME = _nOME;
    m_nOMEHasBeenSet = true;
}

bool BrazilRNMInfo::NOMEHasBeenSet() const
{
    return m_nOMEHasBeenSet;
}

string BrazilRNMInfo::GetDATADENASCIMENTO() const
{
    return m_dATADENASCIMENTO;
}

void BrazilRNMInfo::SetDATADENASCIMENTO(const string& _dATADENASCIMENTO)
{
    m_dATADENASCIMENTO = _dATADENASCIMENTO;
    m_dATADENASCIMENTOHasBeenSet = true;
}

bool BrazilRNMInfo::DATADENASCIMENTOHasBeenSet() const
{
    return m_dATADENASCIMENTOHasBeenSet;
}

string BrazilRNMInfo::GetSEXO() const
{
    return m_sEXO;
}

void BrazilRNMInfo::SetSEXO(const string& _sEXO)
{
    m_sEXO = _sEXO;
    m_sEXOHasBeenSet = true;
}

bool BrazilRNMInfo::SEXOHasBeenSet() const
{
    return m_sEXOHasBeenSet;
}

string BrazilRNMInfo::GetMEMBERSHIP() const
{
    return m_mEMBERSHIP;
}

void BrazilRNMInfo::SetMEMBERSHIP(const string& _mEMBERSHIP)
{
    m_mEMBERSHIP = _mEMBERSHIP;
    m_mEMBERSHIPHasBeenSet = true;
}

bool BrazilRNMInfo::MEMBERSHIPHasBeenSet() const
{
    return m_mEMBERSHIPHasBeenSet;
}

string BrazilRNMInfo::GetNACIONALIDADE() const
{
    return m_nACIONALIDADE;
}

void BrazilRNMInfo::SetNACIONALIDADE(const string& _nACIONALIDADE)
{
    m_nACIONALIDADE = _nACIONALIDADE;
    m_nACIONALIDADEHasBeenSet = true;
}

bool BrazilRNMInfo::NACIONALIDADEHasBeenSet() const
{
    return m_nACIONALIDADEHasBeenSet;
}

string BrazilRNMInfo::GetVALIDADE() const
{
    return m_vALIDADE;
}

void BrazilRNMInfo::SetVALIDADE(const string& _vALIDADE)
{
    m_vALIDADE = _vALIDADE;
    m_vALIDADEHasBeenSet = true;
}

bool BrazilRNMInfo::VALIDADEHasBeenSet() const
{
    return m_vALIDADEHasBeenSet;
}

string BrazilRNMInfo::GetRNM() const
{
    return m_rNM;
}

void BrazilRNMInfo::SetRNM(const string& _rNM)
{
    m_rNM = _rNM;
    m_rNMHasBeenSet = true;
}

bool BrazilRNMInfo::RNMHasBeenSet() const
{
    return m_rNMHasBeenSet;
}

string BrazilRNMInfo::GetCPF() const
{
    return m_cPF;
}

void BrazilRNMInfo::SetCPF(const string& _cPF)
{
    m_cPF = _cPF;
    m_cPFHasBeenSet = true;
}

bool BrazilRNMInfo::CPFHasBeenSet() const
{
    return m_cPFHasBeenSet;
}

string BrazilRNMInfo::GetCLASSIFICATION() const
{
    return m_cLASSIFICATION;
}

void BrazilRNMInfo::SetCLASSIFICATION(const string& _cLASSIFICATION)
{
    m_cLASSIFICATION = _cLASSIFICATION;
    m_cLASSIFICATIONHasBeenSet = true;
}

bool BrazilRNMInfo::CLASSIFICATIONHasBeenSet() const
{
    return m_cLASSIFICATIONHasBeenSet;
}

string BrazilRNMInfo::GetPRAZODERESIDENCIA() const
{
    return m_pRAZODERESIDENCIA;
}

void BrazilRNMInfo::SetPRAZODERESIDENCIA(const string& _pRAZODERESIDENCIA)
{
    m_pRAZODERESIDENCIA = _pRAZODERESIDENCIA;
    m_pRAZODERESIDENCIAHasBeenSet = true;
}

bool BrazilRNMInfo::PRAZODERESIDENCIAHasBeenSet() const
{
    return m_pRAZODERESIDENCIAHasBeenSet;
}

string BrazilRNMInfo::GetISSUANCE() const
{
    return m_iSSUANCE;
}

void BrazilRNMInfo::SetISSUANCE(const string& _iSSUANCE)
{
    m_iSSUANCE = _iSSUANCE;
    m_iSSUANCEHasBeenSet = true;
}

bool BrazilRNMInfo::ISSUANCEHasBeenSet() const
{
    return m_iSSUANCEHasBeenSet;
}

string BrazilRNMInfo::GetAMPAROLEGAL() const
{
    return m_aMPAROLEGAL;
}

void BrazilRNMInfo::SetAMPAROLEGAL(const string& _aMPAROLEGAL)
{
    m_aMPAROLEGAL = _aMPAROLEGAL;
    m_aMPAROLEGALHasBeenSet = true;
}

bool BrazilRNMInfo::AMPAROLEGALHasBeenSet() const
{
    return m_aMPAROLEGALHasBeenSet;
}

string BrazilRNMInfo::GetMRZ() const
{
    return m_mRZ;
}

void BrazilRNMInfo::SetMRZ(const string& _mRZ)
{
    m_mRZ = _mRZ;
    m_mRZHasBeenSet = true;
}

bool BrazilRNMInfo::MRZHasBeenSet() const
{
    return m_mRZHasBeenSet;
}

string BrazilRNMInfo::GetPortraitImage() const
{
    return m_portraitImage;
}

void BrazilRNMInfo::SetPortraitImage(const string& _portraitImage)
{
    m_portraitImage = _portraitImage;
    m_portraitImageHasBeenSet = true;
}

bool BrazilRNMInfo::PortraitImageHasBeenSet() const
{
    return m_portraitImageHasBeenSet;
}

string BrazilRNMInfo::GetPortraitImageBack() const
{
    return m_portraitImageBack;
}

void BrazilRNMInfo::SetPortraitImageBack(const string& _portraitImageBack)
{
    m_portraitImageBack = _portraitImageBack;
    m_portraitImageBackHasBeenSet = true;
}

bool BrazilRNMInfo::PortraitImageBackHasBeenSet() const
{
    return m_portraitImageBackHasBeenSet;
}

