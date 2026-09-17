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

#include <tencentcloud/faceid/v20180301/model/GetNFCResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetNFCResultResponse::GetNFCResultResponse() :
    m_chargeCodeHasBeenSet(false),
    m_idTypeHasBeenSet(false),
    m_checkMRTDHasBeenSet(false),
    m_idNumCompareResultHasBeenSet(false),
    m_nameCompareResultHasBeenSet(false),
    m_pictureCompareSimHasBeenSet(false),
    m_pictureCompareResultHasBeenSet(false),
    m_birthDateCompareResultHasBeenSet(false),
    m_beginTimeCompareResultHasBeenSet(false),
    m_endTimeCompareResultHasBeenSet(false),
    m_addressCompareResultHasBeenSet(false),
    m_nationCompareResultHasBeenSet(false),
    m_sexCompareResultHasBeenSet(false),
    m_enNameCompareResultHasBeenSet(false),
    m_signingOrganizationCompareResultHasBeenSet(false),
    m_nationalityCompareResultHasBeenSet(false),
    m_countryCodeCompareResultHasBeenSet(false),
    m_machineReadCodeCompareResultHasBeenSet(false)
{
}

CoreInternalOutcome GetNFCResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ChargeCode") && !rsp["ChargeCode"].IsNull())
    {
        if (!rsp["ChargeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeCode = string(rsp["ChargeCode"].GetString());
        m_chargeCodeHasBeenSet = true;
    }

    if (rsp.HasMember("IdType") && !rsp["IdType"].IsNull())
    {
        if (!rsp["IdType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idType = string(rsp["IdType"].GetString());
        m_idTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CheckMRTD") && !rsp["CheckMRTD"].IsNull())
    {
        if (!rsp["CheckMRTD"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckMRTD` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkMRTD = string(rsp["CheckMRTD"].GetString());
        m_checkMRTDHasBeenSet = true;
    }

    if (rsp.HasMember("IdNumCompareResult") && !rsp["IdNumCompareResult"].IsNull())
    {
        if (!rsp["IdNumCompareResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdNumCompareResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idNumCompareResult = string(rsp["IdNumCompareResult"].GetString());
        m_idNumCompareResultHasBeenSet = true;
    }

    if (rsp.HasMember("NameCompareResult") && !rsp["NameCompareResult"].IsNull())
    {
        if (!rsp["NameCompareResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NameCompareResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameCompareResult = string(rsp["NameCompareResult"].GetString());
        m_nameCompareResultHasBeenSet = true;
    }

    if (rsp.HasMember("PictureCompareSim") && !rsp["PictureCompareSim"].IsNull())
    {
        if (!rsp["PictureCompareSim"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PictureCompareSim` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pictureCompareSim = rsp["PictureCompareSim"].GetDouble();
        m_pictureCompareSimHasBeenSet = true;
    }

    if (rsp.HasMember("PictureCompareResult") && !rsp["PictureCompareResult"].IsNull())
    {
        if (!rsp["PictureCompareResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PictureCompareResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pictureCompareResult = string(rsp["PictureCompareResult"].GetString());
        m_pictureCompareResultHasBeenSet = true;
    }

    if (rsp.HasMember("BirthDateCompareResult") && !rsp["BirthDateCompareResult"].IsNull())
    {
        if (!rsp["BirthDateCompareResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BirthDateCompareResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthDateCompareResult = string(rsp["BirthDateCompareResult"].GetString());
        m_birthDateCompareResultHasBeenSet = true;
    }

    if (rsp.HasMember("BeginTimeCompareResult") && !rsp["BeginTimeCompareResult"].IsNull())
    {
        if (!rsp["BeginTimeCompareResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BeginTimeCompareResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTimeCompareResult = string(rsp["BeginTimeCompareResult"].GetString());
        m_beginTimeCompareResultHasBeenSet = true;
    }

    if (rsp.HasMember("EndTimeCompareResult") && !rsp["EndTimeCompareResult"].IsNull())
    {
        if (!rsp["EndTimeCompareResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTimeCompareResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeCompareResult = string(rsp["EndTimeCompareResult"].GetString());
        m_endTimeCompareResultHasBeenSet = true;
    }

    if (rsp.HasMember("AddressCompareResult") && !rsp["AddressCompareResult"].IsNull())
    {
        if (!rsp["AddressCompareResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressCompareResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressCompareResult = string(rsp["AddressCompareResult"].GetString());
        m_addressCompareResultHasBeenSet = true;
    }

    if (rsp.HasMember("NationCompareResult") && !rsp["NationCompareResult"].IsNull())
    {
        if (!rsp["NationCompareResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NationCompareResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationCompareResult = string(rsp["NationCompareResult"].GetString());
        m_nationCompareResultHasBeenSet = true;
    }

    if (rsp.HasMember("SexCompareResult") && !rsp["SexCompareResult"].IsNull())
    {
        if (!rsp["SexCompareResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SexCompareResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sexCompareResult = string(rsp["SexCompareResult"].GetString());
        m_sexCompareResultHasBeenSet = true;
    }

    if (rsp.HasMember("EnNameCompareResult") && !rsp["EnNameCompareResult"].IsNull())
    {
        if (!rsp["EnNameCompareResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnNameCompareResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enNameCompareResult = string(rsp["EnNameCompareResult"].GetString());
        m_enNameCompareResultHasBeenSet = true;
    }

    if (rsp.HasMember("SigningOrganizationCompareResult") && !rsp["SigningOrganizationCompareResult"].IsNull())
    {
        if (!rsp["SigningOrganizationCompareResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SigningOrganizationCompareResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signingOrganizationCompareResult = string(rsp["SigningOrganizationCompareResult"].GetString());
        m_signingOrganizationCompareResultHasBeenSet = true;
    }

    if (rsp.HasMember("NationalityCompareResult") && !rsp["NationalityCompareResult"].IsNull())
    {
        if (!rsp["NationalityCompareResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NationalityCompareResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationalityCompareResult = string(rsp["NationalityCompareResult"].GetString());
        m_nationalityCompareResultHasBeenSet = true;
    }

    if (rsp.HasMember("CountryCodeCompareResult") && !rsp["CountryCodeCompareResult"].IsNull())
    {
        if (!rsp["CountryCodeCompareResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountryCodeCompareResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryCodeCompareResult = string(rsp["CountryCodeCompareResult"].GetString());
        m_countryCodeCompareResultHasBeenSet = true;
    }

    if (rsp.HasMember("MachineReadCodeCompareResult") && !rsp["MachineReadCodeCompareResult"].IsNull())
    {
        if (!rsp["MachineReadCodeCompareResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineReadCodeCompareResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineReadCodeCompareResult = string(rsp["MachineReadCodeCompareResult"].GetString());
        m_machineReadCodeCompareResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetNFCResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_chargeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_idTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkMRTDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckMRTD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkMRTD.c_str(), allocator).Move(), allocator);
    }

    if (m_idNumCompareResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNumCompareResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idNumCompareResult.c_str(), allocator).Move(), allocator);
    }

    if (m_nameCompareResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameCompareResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameCompareResult.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureCompareSimHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureCompareSim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pictureCompareSim, allocator);
    }

    if (m_pictureCompareResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureCompareResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pictureCompareResult.c_str(), allocator).Move(), allocator);
    }

    if (m_birthDateCompareResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthDateCompareResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthDateCompareResult.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeCompareResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTimeCompareResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTimeCompareResult.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeCompareResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeCompareResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTimeCompareResult.c_str(), allocator).Move(), allocator);
    }

    if (m_addressCompareResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressCompareResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressCompareResult.c_str(), allocator).Move(), allocator);
    }

    if (m_nationCompareResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NationCompareResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationCompareResult.c_str(), allocator).Move(), allocator);
    }

    if (m_sexCompareResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SexCompareResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sexCompareResult.c_str(), allocator).Move(), allocator);
    }

    if (m_enNameCompareResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnNameCompareResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enNameCompareResult.c_str(), allocator).Move(), allocator);
    }

    if (m_signingOrganizationCompareResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SigningOrganizationCompareResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signingOrganizationCompareResult.c_str(), allocator).Move(), allocator);
    }

    if (m_nationalityCompareResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NationalityCompareResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationalityCompareResult.c_str(), allocator).Move(), allocator);
    }

    if (m_countryCodeCompareResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryCodeCompareResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryCodeCompareResult.c_str(), allocator).Move(), allocator);
    }

    if (m_machineReadCodeCompareResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineReadCodeCompareResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineReadCodeCompareResult.c_str(), allocator).Move(), allocator);
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


string GetNFCResultResponse::GetChargeCode() const
{
    return m_chargeCode;
}

bool GetNFCResultResponse::ChargeCodeHasBeenSet() const
{
    return m_chargeCodeHasBeenSet;
}

string GetNFCResultResponse::GetIdType() const
{
    return m_idType;
}

bool GetNFCResultResponse::IdTypeHasBeenSet() const
{
    return m_idTypeHasBeenSet;
}

string GetNFCResultResponse::GetCheckMRTD() const
{
    return m_checkMRTD;
}

bool GetNFCResultResponse::CheckMRTDHasBeenSet() const
{
    return m_checkMRTDHasBeenSet;
}

string GetNFCResultResponse::GetIdNumCompareResult() const
{
    return m_idNumCompareResult;
}

bool GetNFCResultResponse::IdNumCompareResultHasBeenSet() const
{
    return m_idNumCompareResultHasBeenSet;
}

string GetNFCResultResponse::GetNameCompareResult() const
{
    return m_nameCompareResult;
}

bool GetNFCResultResponse::NameCompareResultHasBeenSet() const
{
    return m_nameCompareResultHasBeenSet;
}

double GetNFCResultResponse::GetPictureCompareSim() const
{
    return m_pictureCompareSim;
}

bool GetNFCResultResponse::PictureCompareSimHasBeenSet() const
{
    return m_pictureCompareSimHasBeenSet;
}

string GetNFCResultResponse::GetPictureCompareResult() const
{
    return m_pictureCompareResult;
}

bool GetNFCResultResponse::PictureCompareResultHasBeenSet() const
{
    return m_pictureCompareResultHasBeenSet;
}

string GetNFCResultResponse::GetBirthDateCompareResult() const
{
    return m_birthDateCompareResult;
}

bool GetNFCResultResponse::BirthDateCompareResultHasBeenSet() const
{
    return m_birthDateCompareResultHasBeenSet;
}

string GetNFCResultResponse::GetBeginTimeCompareResult() const
{
    return m_beginTimeCompareResult;
}

bool GetNFCResultResponse::BeginTimeCompareResultHasBeenSet() const
{
    return m_beginTimeCompareResultHasBeenSet;
}

string GetNFCResultResponse::GetEndTimeCompareResult() const
{
    return m_endTimeCompareResult;
}

bool GetNFCResultResponse::EndTimeCompareResultHasBeenSet() const
{
    return m_endTimeCompareResultHasBeenSet;
}

string GetNFCResultResponse::GetAddressCompareResult() const
{
    return m_addressCompareResult;
}

bool GetNFCResultResponse::AddressCompareResultHasBeenSet() const
{
    return m_addressCompareResultHasBeenSet;
}

string GetNFCResultResponse::GetNationCompareResult() const
{
    return m_nationCompareResult;
}

bool GetNFCResultResponse::NationCompareResultHasBeenSet() const
{
    return m_nationCompareResultHasBeenSet;
}

string GetNFCResultResponse::GetSexCompareResult() const
{
    return m_sexCompareResult;
}

bool GetNFCResultResponse::SexCompareResultHasBeenSet() const
{
    return m_sexCompareResultHasBeenSet;
}

string GetNFCResultResponse::GetEnNameCompareResult() const
{
    return m_enNameCompareResult;
}

bool GetNFCResultResponse::EnNameCompareResultHasBeenSet() const
{
    return m_enNameCompareResultHasBeenSet;
}

string GetNFCResultResponse::GetSigningOrganizationCompareResult() const
{
    return m_signingOrganizationCompareResult;
}

bool GetNFCResultResponse::SigningOrganizationCompareResultHasBeenSet() const
{
    return m_signingOrganizationCompareResultHasBeenSet;
}

string GetNFCResultResponse::GetNationalityCompareResult() const
{
    return m_nationalityCompareResult;
}

bool GetNFCResultResponse::NationalityCompareResultHasBeenSet() const
{
    return m_nationalityCompareResultHasBeenSet;
}

string GetNFCResultResponse::GetCountryCodeCompareResult() const
{
    return m_countryCodeCompareResult;
}

bool GetNFCResultResponse::CountryCodeCompareResultHasBeenSet() const
{
    return m_countryCodeCompareResultHasBeenSet;
}

string GetNFCResultResponse::GetMachineReadCodeCompareResult() const
{
    return m_machineReadCodeCompareResult;
}

bool GetNFCResultResponse::MachineReadCodeCompareResultHasBeenSet() const
{
    return m_machineReadCodeCompareResultHasBeenSet;
}


