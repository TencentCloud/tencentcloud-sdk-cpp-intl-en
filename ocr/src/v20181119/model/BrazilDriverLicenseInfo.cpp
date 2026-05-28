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

#include <tencentcloud/ocr/v20181119/model/BrazilDriverLicenseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

BrazilDriverLicenseInfo::BrazilDriverLicenseInfo() :
    m_nOMEHasBeenSet(false),
    m_catHabHasBeenSet(false),
    m_cNHNumberHasBeenSet(false),
    m_vALIDADEHasBeenSet(false),
    m_qUALIFICATIONHasBeenSet(false),
    m_iDENTIDADEHasBeenSet(false),
    m_cPFHasBeenSet(false),
    m_nASCIMENTOHasBeenSet(false),
    m_mEMBERSHIPHasBeenSet(false),
    m_rEGISTROHasBeenSet(false),
    m_oBSERVATIONSHasBeenSet(false),
    m_issueDateHasBeenSet(false),
    m_lOCALHasBeenSet(false),
    m_backNumberHasBeenSet(false),
    m_portraitImageHasBeenSet(false)
{
}

CoreInternalOutcome BrazilDriverLicenseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NOME") && !value["NOME"].IsNull())
    {
        if (!value["NOME"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilDriverLicenseInfo.NOME` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nOME = string(value["NOME"].GetString());
        m_nOMEHasBeenSet = true;
    }

    if (value.HasMember("CatHab") && !value["CatHab"].IsNull())
    {
        if (!value["CatHab"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilDriverLicenseInfo.CatHab` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catHab = string(value["CatHab"].GetString());
        m_catHabHasBeenSet = true;
    }

    if (value.HasMember("CNHNumber") && !value["CNHNumber"].IsNull())
    {
        if (!value["CNHNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilDriverLicenseInfo.CNHNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cNHNumber = string(value["CNHNumber"].GetString());
        m_cNHNumberHasBeenSet = true;
    }

    if (value.HasMember("VALIDADE") && !value["VALIDADE"].IsNull())
    {
        if (!value["VALIDADE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilDriverLicenseInfo.VALIDADE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vALIDADE = string(value["VALIDADE"].GetString());
        m_vALIDADEHasBeenSet = true;
    }

    if (value.HasMember("QUALIFICATION") && !value["QUALIFICATION"].IsNull())
    {
        if (!value["QUALIFICATION"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilDriverLicenseInfo.QUALIFICATION` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qUALIFICATION = string(value["QUALIFICATION"].GetString());
        m_qUALIFICATIONHasBeenSet = true;
    }

    if (value.HasMember("IDENTIDADE") && !value["IDENTIDADE"].IsNull())
    {
        if (!value["IDENTIDADE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilDriverLicenseInfo.IDENTIDADE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDENTIDADE = string(value["IDENTIDADE"].GetString());
        m_iDENTIDADEHasBeenSet = true;
    }

    if (value.HasMember("CPF") && !value["CPF"].IsNull())
    {
        if (!value["CPF"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilDriverLicenseInfo.CPF` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cPF = string(value["CPF"].GetString());
        m_cPFHasBeenSet = true;
    }

    if (value.HasMember("NASCIMENTO") && !value["NASCIMENTO"].IsNull())
    {
        if (!value["NASCIMENTO"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilDriverLicenseInfo.NASCIMENTO` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nASCIMENTO = string(value["NASCIMENTO"].GetString());
        m_nASCIMENTOHasBeenSet = true;
    }

    if (value.HasMember("MEMBERSHIP") && !value["MEMBERSHIP"].IsNull())
    {
        if (!value["MEMBERSHIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilDriverLicenseInfo.MEMBERSHIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mEMBERSHIP = string(value["MEMBERSHIP"].GetString());
        m_mEMBERSHIPHasBeenSet = true;
    }

    if (value.HasMember("REGISTRO") && !value["REGISTRO"].IsNull())
    {
        if (!value["REGISTRO"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilDriverLicenseInfo.REGISTRO` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rEGISTRO = string(value["REGISTRO"].GetString());
        m_rEGISTROHasBeenSet = true;
    }

    if (value.HasMember("OBSERVATIONS") && !value["OBSERVATIONS"].IsNull())
    {
        if (!value["OBSERVATIONS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilDriverLicenseInfo.OBSERVATIONS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oBSERVATIONS = string(value["OBSERVATIONS"].GetString());
        m_oBSERVATIONSHasBeenSet = true;
    }

    if (value.HasMember("IssueDate") && !value["IssueDate"].IsNull())
    {
        if (!value["IssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilDriverLicenseInfo.IssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueDate = string(value["IssueDate"].GetString());
        m_issueDateHasBeenSet = true;
    }

    if (value.HasMember("LOCAL") && !value["LOCAL"].IsNull())
    {
        if (!value["LOCAL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilDriverLicenseInfo.LOCAL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lOCAL = string(value["LOCAL"].GetString());
        m_lOCALHasBeenSet = true;
    }

    if (value.HasMember("BackNumber") && !value["BackNumber"].IsNull())
    {
        if (!value["BackNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilDriverLicenseInfo.BackNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backNumber = string(value["BackNumber"].GetString());
        m_backNumberHasBeenSet = true;
    }

    if (value.HasMember("PortraitImage") && !value["PortraitImage"].IsNull())
    {
        if (!value["PortraitImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilDriverLicenseInfo.PortraitImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portraitImage = string(value["PortraitImage"].GetString());
        m_portraitImageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BrazilDriverLicenseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nOMEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NOME";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nOME.c_str(), allocator).Move(), allocator);
    }

    if (m_catHabHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatHab";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catHab.c_str(), allocator).Move(), allocator);
    }

    if (m_cNHNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CNHNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cNHNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_vALIDADEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VALIDADE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vALIDADE.c_str(), allocator).Move(), allocator);
    }

    if (m_qUALIFICATIONHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QUALIFICATION";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qUALIFICATION.c_str(), allocator).Move(), allocator);
    }

    if (m_iDENTIDADEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDENTIDADE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDENTIDADE.c_str(), allocator).Move(), allocator);
    }

    if (m_cPFHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPF";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cPF.c_str(), allocator).Move(), allocator);
    }

    if (m_nASCIMENTOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NASCIMENTO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nASCIMENTO.c_str(), allocator).Move(), allocator);
    }

    if (m_mEMBERSHIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MEMBERSHIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mEMBERSHIP.c_str(), allocator).Move(), allocator);
    }

    if (m_rEGISTROHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "REGISTRO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rEGISTRO.c_str(), allocator).Move(), allocator);
    }

    if (m_oBSERVATIONSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OBSERVATIONS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oBSERVATIONS.c_str(), allocator).Move(), allocator);
    }

    if (m_issueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_lOCALHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LOCAL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lOCAL.c_str(), allocator).Move(), allocator);
    }

    if (m_backNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_portraitImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portraitImage.c_str(), allocator).Move(), allocator);
    }

}


string BrazilDriverLicenseInfo::GetNOME() const
{
    return m_nOME;
}

void BrazilDriverLicenseInfo::SetNOME(const string& _nOME)
{
    m_nOME = _nOME;
    m_nOMEHasBeenSet = true;
}

bool BrazilDriverLicenseInfo::NOMEHasBeenSet() const
{
    return m_nOMEHasBeenSet;
}

string BrazilDriverLicenseInfo::GetCatHab() const
{
    return m_catHab;
}

void BrazilDriverLicenseInfo::SetCatHab(const string& _catHab)
{
    m_catHab = _catHab;
    m_catHabHasBeenSet = true;
}

bool BrazilDriverLicenseInfo::CatHabHasBeenSet() const
{
    return m_catHabHasBeenSet;
}

string BrazilDriverLicenseInfo::GetCNHNumber() const
{
    return m_cNHNumber;
}

void BrazilDriverLicenseInfo::SetCNHNumber(const string& _cNHNumber)
{
    m_cNHNumber = _cNHNumber;
    m_cNHNumberHasBeenSet = true;
}

bool BrazilDriverLicenseInfo::CNHNumberHasBeenSet() const
{
    return m_cNHNumberHasBeenSet;
}

string BrazilDriverLicenseInfo::GetVALIDADE() const
{
    return m_vALIDADE;
}

void BrazilDriverLicenseInfo::SetVALIDADE(const string& _vALIDADE)
{
    m_vALIDADE = _vALIDADE;
    m_vALIDADEHasBeenSet = true;
}

bool BrazilDriverLicenseInfo::VALIDADEHasBeenSet() const
{
    return m_vALIDADEHasBeenSet;
}

string BrazilDriverLicenseInfo::GetQUALIFICATION() const
{
    return m_qUALIFICATION;
}

void BrazilDriverLicenseInfo::SetQUALIFICATION(const string& _qUALIFICATION)
{
    m_qUALIFICATION = _qUALIFICATION;
    m_qUALIFICATIONHasBeenSet = true;
}

bool BrazilDriverLicenseInfo::QUALIFICATIONHasBeenSet() const
{
    return m_qUALIFICATIONHasBeenSet;
}

string BrazilDriverLicenseInfo::GetIDENTIDADE() const
{
    return m_iDENTIDADE;
}

void BrazilDriverLicenseInfo::SetIDENTIDADE(const string& _iDENTIDADE)
{
    m_iDENTIDADE = _iDENTIDADE;
    m_iDENTIDADEHasBeenSet = true;
}

bool BrazilDriverLicenseInfo::IDENTIDADEHasBeenSet() const
{
    return m_iDENTIDADEHasBeenSet;
}

string BrazilDriverLicenseInfo::GetCPF() const
{
    return m_cPF;
}

void BrazilDriverLicenseInfo::SetCPF(const string& _cPF)
{
    m_cPF = _cPF;
    m_cPFHasBeenSet = true;
}

bool BrazilDriverLicenseInfo::CPFHasBeenSet() const
{
    return m_cPFHasBeenSet;
}

string BrazilDriverLicenseInfo::GetNASCIMENTO() const
{
    return m_nASCIMENTO;
}

void BrazilDriverLicenseInfo::SetNASCIMENTO(const string& _nASCIMENTO)
{
    m_nASCIMENTO = _nASCIMENTO;
    m_nASCIMENTOHasBeenSet = true;
}

bool BrazilDriverLicenseInfo::NASCIMENTOHasBeenSet() const
{
    return m_nASCIMENTOHasBeenSet;
}

string BrazilDriverLicenseInfo::GetMEMBERSHIP() const
{
    return m_mEMBERSHIP;
}

void BrazilDriverLicenseInfo::SetMEMBERSHIP(const string& _mEMBERSHIP)
{
    m_mEMBERSHIP = _mEMBERSHIP;
    m_mEMBERSHIPHasBeenSet = true;
}

bool BrazilDriverLicenseInfo::MEMBERSHIPHasBeenSet() const
{
    return m_mEMBERSHIPHasBeenSet;
}

string BrazilDriverLicenseInfo::GetREGISTRO() const
{
    return m_rEGISTRO;
}

void BrazilDriverLicenseInfo::SetREGISTRO(const string& _rEGISTRO)
{
    m_rEGISTRO = _rEGISTRO;
    m_rEGISTROHasBeenSet = true;
}

bool BrazilDriverLicenseInfo::REGISTROHasBeenSet() const
{
    return m_rEGISTROHasBeenSet;
}

string BrazilDriverLicenseInfo::GetOBSERVATIONS() const
{
    return m_oBSERVATIONS;
}

void BrazilDriverLicenseInfo::SetOBSERVATIONS(const string& _oBSERVATIONS)
{
    m_oBSERVATIONS = _oBSERVATIONS;
    m_oBSERVATIONSHasBeenSet = true;
}

bool BrazilDriverLicenseInfo::OBSERVATIONSHasBeenSet() const
{
    return m_oBSERVATIONSHasBeenSet;
}

string BrazilDriverLicenseInfo::GetIssueDate() const
{
    return m_issueDate;
}

void BrazilDriverLicenseInfo::SetIssueDate(const string& _issueDate)
{
    m_issueDate = _issueDate;
    m_issueDateHasBeenSet = true;
}

bool BrazilDriverLicenseInfo::IssueDateHasBeenSet() const
{
    return m_issueDateHasBeenSet;
}

string BrazilDriverLicenseInfo::GetLOCAL() const
{
    return m_lOCAL;
}

void BrazilDriverLicenseInfo::SetLOCAL(const string& _lOCAL)
{
    m_lOCAL = _lOCAL;
    m_lOCALHasBeenSet = true;
}

bool BrazilDriverLicenseInfo::LOCALHasBeenSet() const
{
    return m_lOCALHasBeenSet;
}

string BrazilDriverLicenseInfo::GetBackNumber() const
{
    return m_backNumber;
}

void BrazilDriverLicenseInfo::SetBackNumber(const string& _backNumber)
{
    m_backNumber = _backNumber;
    m_backNumberHasBeenSet = true;
}

bool BrazilDriverLicenseInfo::BackNumberHasBeenSet() const
{
    return m_backNumberHasBeenSet;
}

string BrazilDriverLicenseInfo::GetPortraitImage() const
{
    return m_portraitImage;
}

void BrazilDriverLicenseInfo::SetPortraitImage(const string& _portraitImage)
{
    m_portraitImage = _portraitImage;
    m_portraitImageHasBeenSet = true;
}

bool BrazilDriverLicenseInfo::PortraitImageHasBeenSet() const
{
    return m_portraitImageHasBeenSet;
}

