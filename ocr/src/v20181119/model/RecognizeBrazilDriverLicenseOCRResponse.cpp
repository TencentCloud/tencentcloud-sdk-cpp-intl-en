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

#include <tencentcloud/ocr/v20181119/model/RecognizeBrazilDriverLicenseOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeBrazilDriverLicenseOCRResponse::RecognizeBrazilDriverLicenseOCRResponse() :
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
    m_advancedInfoHasBeenSet(false),
    m_portraitImageHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeBrazilDriverLicenseOCRResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("NOME") && !rsp["NOME"].IsNull())
    {
        if (!rsp["NOME"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NOME` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nOME = string(rsp["NOME"].GetString());
        m_nOMEHasBeenSet = true;
    }

    if (rsp.HasMember("CatHab") && !rsp["CatHab"].IsNull())
    {
        if (!rsp["CatHab"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatHab` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catHab = string(rsp["CatHab"].GetString());
        m_catHabHasBeenSet = true;
    }

    if (rsp.HasMember("CNHNumber") && !rsp["CNHNumber"].IsNull())
    {
        if (!rsp["CNHNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNHNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cNHNumber = string(rsp["CNHNumber"].GetString());
        m_cNHNumberHasBeenSet = true;
    }

    if (rsp.HasMember("VALIDADE") && !rsp["VALIDADE"].IsNull())
    {
        if (!rsp["VALIDADE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VALIDADE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vALIDADE = string(rsp["VALIDADE"].GetString());
        m_vALIDADEHasBeenSet = true;
    }

    if (rsp.HasMember("QUALIFICATION") && !rsp["QUALIFICATION"].IsNull())
    {
        if (!rsp["QUALIFICATION"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QUALIFICATION` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qUALIFICATION = string(rsp["QUALIFICATION"].GetString());
        m_qUALIFICATIONHasBeenSet = true;
    }

    if (rsp.HasMember("IDENTIDADE") && !rsp["IDENTIDADE"].IsNull())
    {
        if (!rsp["IDENTIDADE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDENTIDADE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDENTIDADE = string(rsp["IDENTIDADE"].GetString());
        m_iDENTIDADEHasBeenSet = true;
    }

    if (rsp.HasMember("CPF") && !rsp["CPF"].IsNull())
    {
        if (!rsp["CPF"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CPF` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cPF = string(rsp["CPF"].GetString());
        m_cPFHasBeenSet = true;
    }

    if (rsp.HasMember("NASCIMENTO") && !rsp["NASCIMENTO"].IsNull())
    {
        if (!rsp["NASCIMENTO"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NASCIMENTO` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nASCIMENTO = string(rsp["NASCIMENTO"].GetString());
        m_nASCIMENTOHasBeenSet = true;
    }

    if (rsp.HasMember("MEMBERSHIP") && !rsp["MEMBERSHIP"].IsNull())
    {
        if (!rsp["MEMBERSHIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MEMBERSHIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mEMBERSHIP = string(rsp["MEMBERSHIP"].GetString());
        m_mEMBERSHIPHasBeenSet = true;
    }

    if (rsp.HasMember("REGISTRO") && !rsp["REGISTRO"].IsNull())
    {
        if (!rsp["REGISTRO"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `REGISTRO` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rEGISTRO = string(rsp["REGISTRO"].GetString());
        m_rEGISTROHasBeenSet = true;
    }

    if (rsp.HasMember("OBSERVATIONS") && !rsp["OBSERVATIONS"].IsNull())
    {
        if (!rsp["OBSERVATIONS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OBSERVATIONS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oBSERVATIONS = string(rsp["OBSERVATIONS"].GetString());
        m_oBSERVATIONSHasBeenSet = true;
    }

    if (rsp.HasMember("IssueDate") && !rsp["IssueDate"].IsNull())
    {
        if (!rsp["IssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueDate = string(rsp["IssueDate"].GetString());
        m_issueDateHasBeenSet = true;
    }

    if (rsp.HasMember("LOCAL") && !rsp["LOCAL"].IsNull())
    {
        if (!rsp["LOCAL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LOCAL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lOCAL = string(rsp["LOCAL"].GetString());
        m_lOCALHasBeenSet = true;
    }

    if (rsp.HasMember("BackNumber") && !rsp["BackNumber"].IsNull())
    {
        if (!rsp["BackNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backNumber = string(rsp["BackNumber"].GetString());
        m_backNumberHasBeenSet = true;
    }

    if (rsp.HasMember("AdvancedInfo") && !rsp["AdvancedInfo"].IsNull())
    {
        if (!rsp["AdvancedInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedInfo = string(rsp["AdvancedInfo"].GetString());
        m_advancedInfoHasBeenSet = true;
    }

    if (rsp.HasMember("PortraitImage") && !rsp["PortraitImage"].IsNull())
    {
        if (!rsp["PortraitImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portraitImage = string(rsp["PortraitImage"].GetString());
        m_portraitImageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizeBrazilDriverLicenseOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_advancedInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advancedInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_portraitImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portraitImage.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string RecognizeBrazilDriverLicenseOCRResponse::GetNOME() const
{
    return m_nOME;
}

bool RecognizeBrazilDriverLicenseOCRResponse::NOMEHasBeenSet() const
{
    return m_nOMEHasBeenSet;
}

string RecognizeBrazilDriverLicenseOCRResponse::GetCatHab() const
{
    return m_catHab;
}

bool RecognizeBrazilDriverLicenseOCRResponse::CatHabHasBeenSet() const
{
    return m_catHabHasBeenSet;
}

string RecognizeBrazilDriverLicenseOCRResponse::GetCNHNumber() const
{
    return m_cNHNumber;
}

bool RecognizeBrazilDriverLicenseOCRResponse::CNHNumberHasBeenSet() const
{
    return m_cNHNumberHasBeenSet;
}

string RecognizeBrazilDriverLicenseOCRResponse::GetVALIDADE() const
{
    return m_vALIDADE;
}

bool RecognizeBrazilDriverLicenseOCRResponse::VALIDADEHasBeenSet() const
{
    return m_vALIDADEHasBeenSet;
}

string RecognizeBrazilDriverLicenseOCRResponse::GetQUALIFICATION() const
{
    return m_qUALIFICATION;
}

bool RecognizeBrazilDriverLicenseOCRResponse::QUALIFICATIONHasBeenSet() const
{
    return m_qUALIFICATIONHasBeenSet;
}

string RecognizeBrazilDriverLicenseOCRResponse::GetIDENTIDADE() const
{
    return m_iDENTIDADE;
}

bool RecognizeBrazilDriverLicenseOCRResponse::IDENTIDADEHasBeenSet() const
{
    return m_iDENTIDADEHasBeenSet;
}

string RecognizeBrazilDriverLicenseOCRResponse::GetCPF() const
{
    return m_cPF;
}

bool RecognizeBrazilDriverLicenseOCRResponse::CPFHasBeenSet() const
{
    return m_cPFHasBeenSet;
}

string RecognizeBrazilDriverLicenseOCRResponse::GetNASCIMENTO() const
{
    return m_nASCIMENTO;
}

bool RecognizeBrazilDriverLicenseOCRResponse::NASCIMENTOHasBeenSet() const
{
    return m_nASCIMENTOHasBeenSet;
}

string RecognizeBrazilDriverLicenseOCRResponse::GetMEMBERSHIP() const
{
    return m_mEMBERSHIP;
}

bool RecognizeBrazilDriverLicenseOCRResponse::MEMBERSHIPHasBeenSet() const
{
    return m_mEMBERSHIPHasBeenSet;
}

string RecognizeBrazilDriverLicenseOCRResponse::GetREGISTRO() const
{
    return m_rEGISTRO;
}

bool RecognizeBrazilDriverLicenseOCRResponse::REGISTROHasBeenSet() const
{
    return m_rEGISTROHasBeenSet;
}

string RecognizeBrazilDriverLicenseOCRResponse::GetOBSERVATIONS() const
{
    return m_oBSERVATIONS;
}

bool RecognizeBrazilDriverLicenseOCRResponse::OBSERVATIONSHasBeenSet() const
{
    return m_oBSERVATIONSHasBeenSet;
}

string RecognizeBrazilDriverLicenseOCRResponse::GetIssueDate() const
{
    return m_issueDate;
}

bool RecognizeBrazilDriverLicenseOCRResponse::IssueDateHasBeenSet() const
{
    return m_issueDateHasBeenSet;
}

string RecognizeBrazilDriverLicenseOCRResponse::GetLOCAL() const
{
    return m_lOCAL;
}

bool RecognizeBrazilDriverLicenseOCRResponse::LOCALHasBeenSet() const
{
    return m_lOCALHasBeenSet;
}

string RecognizeBrazilDriverLicenseOCRResponse::GetBackNumber() const
{
    return m_backNumber;
}

bool RecognizeBrazilDriverLicenseOCRResponse::BackNumberHasBeenSet() const
{
    return m_backNumberHasBeenSet;
}

string RecognizeBrazilDriverLicenseOCRResponse::GetAdvancedInfo() const
{
    return m_advancedInfo;
}

bool RecognizeBrazilDriverLicenseOCRResponse::AdvancedInfoHasBeenSet() const
{
    return m_advancedInfoHasBeenSet;
}

string RecognizeBrazilDriverLicenseOCRResponse::GetPortraitImage() const
{
    return m_portraitImage;
}

bool RecognizeBrazilDriverLicenseOCRResponse::PortraitImageHasBeenSet() const
{
    return m_portraitImageHasBeenSet;
}


