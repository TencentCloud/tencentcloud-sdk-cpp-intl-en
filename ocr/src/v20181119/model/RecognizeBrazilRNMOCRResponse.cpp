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

#include <tencentcloud/ocr/v20181119/model/RecognizeBrazilRNMOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeBrazilRNMOCRResponse::RecognizeBrazilRNMOCRResponse() :
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

CoreInternalOutcome RecognizeBrazilRNMOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SOBRENOME") && !rsp["SOBRENOME"].IsNull())
    {
        if (!rsp["SOBRENOME"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SOBRENOME` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sOBRENOME = string(rsp["SOBRENOME"].GetString());
        m_sOBRENOMEHasBeenSet = true;
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

    if (rsp.HasMember("DATADENASCIMENTO") && !rsp["DATADENASCIMENTO"].IsNull())
    {
        if (!rsp["DATADENASCIMENTO"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DATADENASCIMENTO` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dATADENASCIMENTO = string(rsp["DATADENASCIMENTO"].GetString());
        m_dATADENASCIMENTOHasBeenSet = true;
    }

    if (rsp.HasMember("SEXO") && !rsp["SEXO"].IsNull())
    {
        if (!rsp["SEXO"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SEXO` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sEXO = string(rsp["SEXO"].GetString());
        m_sEXOHasBeenSet = true;
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

    if (rsp.HasMember("NACIONALIDADE") && !rsp["NACIONALIDADE"].IsNull())
    {
        if (!rsp["NACIONALIDADE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NACIONALIDADE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nACIONALIDADE = string(rsp["NACIONALIDADE"].GetString());
        m_nACIONALIDADEHasBeenSet = true;
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

    if (rsp.HasMember("RNM") && !rsp["RNM"].IsNull())
    {
        if (!rsp["RNM"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RNM` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rNM = string(rsp["RNM"].GetString());
        m_rNMHasBeenSet = true;
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

    if (rsp.HasMember("CLASSIFICATION") && !rsp["CLASSIFICATION"].IsNull())
    {
        if (!rsp["CLASSIFICATION"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLASSIFICATION` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cLASSIFICATION = string(rsp["CLASSIFICATION"].GetString());
        m_cLASSIFICATIONHasBeenSet = true;
    }

    if (rsp.HasMember("PRAZODERESIDENCIA") && !rsp["PRAZODERESIDENCIA"].IsNull())
    {
        if (!rsp["PRAZODERESIDENCIA"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PRAZODERESIDENCIA` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pRAZODERESIDENCIA = string(rsp["PRAZODERESIDENCIA"].GetString());
        m_pRAZODERESIDENCIAHasBeenSet = true;
    }

    if (rsp.HasMember("ISSUANCE") && !rsp["ISSUANCE"].IsNull())
    {
        if (!rsp["ISSUANCE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ISSUANCE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSSUANCE = string(rsp["ISSUANCE"].GetString());
        m_iSSUANCEHasBeenSet = true;
    }

    if (rsp.HasMember("AMPAROLEGAL") && !rsp["AMPAROLEGAL"].IsNull())
    {
        if (!rsp["AMPAROLEGAL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMPAROLEGAL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aMPAROLEGAL = string(rsp["AMPAROLEGAL"].GetString());
        m_aMPAROLEGALHasBeenSet = true;
    }

    if (rsp.HasMember("MRZ") && !rsp["MRZ"].IsNull())
    {
        if (!rsp["MRZ"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MRZ` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mRZ = string(rsp["MRZ"].GetString());
        m_mRZHasBeenSet = true;
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

    if (rsp.HasMember("PortraitImageBack") && !rsp["PortraitImageBack"].IsNull())
    {
        if (!rsp["PortraitImageBack"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitImageBack` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portraitImageBack = string(rsp["PortraitImageBack"].GetString());
        m_portraitImageBackHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizeBrazilRNMOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string RecognizeBrazilRNMOCRResponse::GetSOBRENOME() const
{
    return m_sOBRENOME;
}

bool RecognizeBrazilRNMOCRResponse::SOBRENOMEHasBeenSet() const
{
    return m_sOBRENOMEHasBeenSet;
}

string RecognizeBrazilRNMOCRResponse::GetNOME() const
{
    return m_nOME;
}

bool RecognizeBrazilRNMOCRResponse::NOMEHasBeenSet() const
{
    return m_nOMEHasBeenSet;
}

string RecognizeBrazilRNMOCRResponse::GetDATADENASCIMENTO() const
{
    return m_dATADENASCIMENTO;
}

bool RecognizeBrazilRNMOCRResponse::DATADENASCIMENTOHasBeenSet() const
{
    return m_dATADENASCIMENTOHasBeenSet;
}

string RecognizeBrazilRNMOCRResponse::GetSEXO() const
{
    return m_sEXO;
}

bool RecognizeBrazilRNMOCRResponse::SEXOHasBeenSet() const
{
    return m_sEXOHasBeenSet;
}

string RecognizeBrazilRNMOCRResponse::GetMEMBERSHIP() const
{
    return m_mEMBERSHIP;
}

bool RecognizeBrazilRNMOCRResponse::MEMBERSHIPHasBeenSet() const
{
    return m_mEMBERSHIPHasBeenSet;
}

string RecognizeBrazilRNMOCRResponse::GetNACIONALIDADE() const
{
    return m_nACIONALIDADE;
}

bool RecognizeBrazilRNMOCRResponse::NACIONALIDADEHasBeenSet() const
{
    return m_nACIONALIDADEHasBeenSet;
}

string RecognizeBrazilRNMOCRResponse::GetVALIDADE() const
{
    return m_vALIDADE;
}

bool RecognizeBrazilRNMOCRResponse::VALIDADEHasBeenSet() const
{
    return m_vALIDADEHasBeenSet;
}

string RecognizeBrazilRNMOCRResponse::GetRNM() const
{
    return m_rNM;
}

bool RecognizeBrazilRNMOCRResponse::RNMHasBeenSet() const
{
    return m_rNMHasBeenSet;
}

string RecognizeBrazilRNMOCRResponse::GetCPF() const
{
    return m_cPF;
}

bool RecognizeBrazilRNMOCRResponse::CPFHasBeenSet() const
{
    return m_cPFHasBeenSet;
}

string RecognizeBrazilRNMOCRResponse::GetCLASSIFICATION() const
{
    return m_cLASSIFICATION;
}

bool RecognizeBrazilRNMOCRResponse::CLASSIFICATIONHasBeenSet() const
{
    return m_cLASSIFICATIONHasBeenSet;
}

string RecognizeBrazilRNMOCRResponse::GetPRAZODERESIDENCIA() const
{
    return m_pRAZODERESIDENCIA;
}

bool RecognizeBrazilRNMOCRResponse::PRAZODERESIDENCIAHasBeenSet() const
{
    return m_pRAZODERESIDENCIAHasBeenSet;
}

string RecognizeBrazilRNMOCRResponse::GetISSUANCE() const
{
    return m_iSSUANCE;
}

bool RecognizeBrazilRNMOCRResponse::ISSUANCEHasBeenSet() const
{
    return m_iSSUANCEHasBeenSet;
}

string RecognizeBrazilRNMOCRResponse::GetAMPAROLEGAL() const
{
    return m_aMPAROLEGAL;
}

bool RecognizeBrazilRNMOCRResponse::AMPAROLEGALHasBeenSet() const
{
    return m_aMPAROLEGALHasBeenSet;
}

string RecognizeBrazilRNMOCRResponse::GetMRZ() const
{
    return m_mRZ;
}

bool RecognizeBrazilRNMOCRResponse::MRZHasBeenSet() const
{
    return m_mRZHasBeenSet;
}

string RecognizeBrazilRNMOCRResponse::GetPortraitImage() const
{
    return m_portraitImage;
}

bool RecognizeBrazilRNMOCRResponse::PortraitImageHasBeenSet() const
{
    return m_portraitImageHasBeenSet;
}

string RecognizeBrazilRNMOCRResponse::GetPortraitImageBack() const
{
    return m_portraitImageBack;
}

bool RecognizeBrazilRNMOCRResponse::PortraitImageBackHasBeenSet() const
{
    return m_portraitImageBackHasBeenSet;
}


