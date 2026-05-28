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

#include <tencentcloud/ocr/v20181119/model/RecognizeBrazilRNEOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeBrazilRNEOCRResponse::RecognizeBrazilRNEOCRResponse() :
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

CoreInternalOutcome RecognizeBrazilRNEOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RNE") && !rsp["RNE"].IsNull())
    {
        if (!rsp["RNE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RNE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rNE = string(rsp["RNE"].GetString());
        m_rNEHasBeenSet = true;
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

    if (rsp.HasMember("VALIDADE") && !rsp["VALIDADE"].IsNull())
    {
        if (!rsp["VALIDADE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VALIDADE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vALIDADE = string(rsp["VALIDADE"].GetString());
        m_vALIDADEHasBeenSet = true;
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

    if (rsp.HasMember("Membership") && !rsp["Membership"].IsNull())
    {
        if (!rsp["Membership"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Membership` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_membership = string(rsp["Membership"].GetString());
        m_membershipHasBeenSet = true;
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

    if (rsp.HasMember("NATURALIDADE") && !rsp["NATURALIDADE"].IsNull())
    {
        if (!rsp["NATURALIDADE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NATURALIDADE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nATURALIDADE = string(rsp["NATURALIDADE"].GetString());
        m_nATURALIDADEHasBeenSet = true;
    }

    if (rsp.HasMember("IssuingAgency") && !rsp["IssuingAgency"].IsNull())
    {
        if (!rsp["IssuingAgency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssuingAgency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuingAgency = string(rsp["IssuingAgency"].GetString());
        m_issuingAgencyHasBeenSet = true;
    }

    if (rsp.HasMember("DateOfBirth") && !rsp["DateOfBirth"].IsNull())
    {
        if (!rsp["DateOfBirth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DateOfBirth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfBirth = string(rsp["DateOfBirth"].GetString());
        m_dateOfBirthHasBeenSet = true;
    }

    if (rsp.HasMember("Sex") && !rsp["Sex"].IsNull())
    {
        if (!rsp["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(rsp["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (rsp.HasMember("EntryDate") && !rsp["EntryDate"].IsNull())
    {
        if (!rsp["EntryDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntryDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entryDate = string(rsp["EntryDate"].GetString());
        m_entryDateHasBeenSet = true;
    }

    if (rsp.HasMember("VIA") && !rsp["VIA"].IsNull())
    {
        if (!rsp["VIA"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VIA` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vIA = string(rsp["VIA"].GetString());
        m_vIAHasBeenSet = true;
    }

    if (rsp.HasMember("DispatchDate") && !rsp["DispatchDate"].IsNull())
    {
        if (!rsp["DispatchDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DispatchDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dispatchDate = string(rsp["DispatchDate"].GetString());
        m_dispatchDateHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string RecognizeBrazilRNEOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string RecognizeBrazilRNEOCRResponse::GetRNE() const
{
    return m_rNE;
}

bool RecognizeBrazilRNEOCRResponse::RNEHasBeenSet() const
{
    return m_rNEHasBeenSet;
}

string RecognizeBrazilRNEOCRResponse::GetCLASSIFICATION() const
{
    return m_cLASSIFICATION;
}

bool RecognizeBrazilRNEOCRResponse::CLASSIFICATIONHasBeenSet() const
{
    return m_cLASSIFICATIONHasBeenSet;
}

string RecognizeBrazilRNEOCRResponse::GetVALIDADE() const
{
    return m_vALIDADE;
}

bool RecognizeBrazilRNEOCRResponse::VALIDADEHasBeenSet() const
{
    return m_vALIDADEHasBeenSet;
}

string RecognizeBrazilRNEOCRResponse::GetNOME() const
{
    return m_nOME;
}

bool RecognizeBrazilRNEOCRResponse::NOMEHasBeenSet() const
{
    return m_nOMEHasBeenSet;
}

string RecognizeBrazilRNEOCRResponse::GetMembership() const
{
    return m_membership;
}

bool RecognizeBrazilRNEOCRResponse::MembershipHasBeenSet() const
{
    return m_membershipHasBeenSet;
}

string RecognizeBrazilRNEOCRResponse::GetNACIONALIDADE() const
{
    return m_nACIONALIDADE;
}

bool RecognizeBrazilRNEOCRResponse::NACIONALIDADEHasBeenSet() const
{
    return m_nACIONALIDADEHasBeenSet;
}

string RecognizeBrazilRNEOCRResponse::GetNATURALIDADE() const
{
    return m_nATURALIDADE;
}

bool RecognizeBrazilRNEOCRResponse::NATURALIDADEHasBeenSet() const
{
    return m_nATURALIDADEHasBeenSet;
}

string RecognizeBrazilRNEOCRResponse::GetIssuingAgency() const
{
    return m_issuingAgency;
}

bool RecognizeBrazilRNEOCRResponse::IssuingAgencyHasBeenSet() const
{
    return m_issuingAgencyHasBeenSet;
}

string RecognizeBrazilRNEOCRResponse::GetDateOfBirth() const
{
    return m_dateOfBirth;
}

bool RecognizeBrazilRNEOCRResponse::DateOfBirthHasBeenSet() const
{
    return m_dateOfBirthHasBeenSet;
}

string RecognizeBrazilRNEOCRResponse::GetSex() const
{
    return m_sex;
}

bool RecognizeBrazilRNEOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string RecognizeBrazilRNEOCRResponse::GetEntryDate() const
{
    return m_entryDate;
}

bool RecognizeBrazilRNEOCRResponse::EntryDateHasBeenSet() const
{
    return m_entryDateHasBeenSet;
}

string RecognizeBrazilRNEOCRResponse::GetVIA() const
{
    return m_vIA;
}

bool RecognizeBrazilRNEOCRResponse::VIAHasBeenSet() const
{
    return m_vIAHasBeenSet;
}

string RecognizeBrazilRNEOCRResponse::GetDispatchDate() const
{
    return m_dispatchDate;
}

bool RecognizeBrazilRNEOCRResponse::DispatchDateHasBeenSet() const
{
    return m_dispatchDateHasBeenSet;
}

string RecognizeBrazilRNEOCRResponse::GetMRZ() const
{
    return m_mRZ;
}

bool RecognizeBrazilRNEOCRResponse::MRZHasBeenSet() const
{
    return m_mRZHasBeenSet;
}

string RecognizeBrazilRNEOCRResponse::GetPortraitImage() const
{
    return m_portraitImage;
}

bool RecognizeBrazilRNEOCRResponse::PortraitImageHasBeenSet() const
{
    return m_portraitImageHasBeenSet;
}


