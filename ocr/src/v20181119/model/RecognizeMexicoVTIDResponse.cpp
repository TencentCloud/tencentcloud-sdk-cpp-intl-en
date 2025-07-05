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

#include <tencentcloud/ocr/v20181119/model/RecognizeMexicoVTIDResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeMexicoVTIDResponse::RecognizeMexicoVTIDResponse() :
    m_nameHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_votePINHasBeenSet(false),
    m_cURPHasBeenSet(false),
    m_birthHasBeenSet(false),
    m_sECCIONHasBeenSet(false),
    m_issueDateHasBeenSet(false),
    m_validDateHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_localityHasBeenSet(false),
    m_eMISIONHasBeenSet(false),
    m_portraitImageHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeMexicoVTIDResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
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

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (rsp.HasMember("VotePIN") && !rsp["VotePIN"].IsNull())
    {
        if (!rsp["VotePIN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VotePIN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_votePIN = string(rsp["VotePIN"].GetString());
        m_votePINHasBeenSet = true;
    }

    if (rsp.HasMember("CURP") && !rsp["CURP"].IsNull())
    {
        if (!rsp["CURP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CURP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cURP = string(rsp["CURP"].GetString());
        m_cURPHasBeenSet = true;
    }

    if (rsp.HasMember("Birth") && !rsp["Birth"].IsNull())
    {
        if (!rsp["Birth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Birth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birth = string(rsp["Birth"].GetString());
        m_birthHasBeenSet = true;
    }

    if (rsp.HasMember("SECCION") && !rsp["SECCION"].IsNull())
    {
        if (!rsp["SECCION"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SECCION` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sECCION = string(rsp["SECCION"].GetString());
        m_sECCIONHasBeenSet = true;
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

    if (rsp.HasMember("ValidDate") && !rsp["ValidDate"].IsNull())
    {
        if (!rsp["ValidDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValidDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validDate = string(rsp["ValidDate"].GetString());
        m_validDateHasBeenSet = true;
    }

    if (rsp.HasMember("State") && !rsp["State"].IsNull())
    {
        if (!rsp["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(rsp["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (rsp.HasMember("City") && !rsp["City"].IsNull())
    {
        if (!rsp["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(rsp["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (rsp.HasMember("Locality") && !rsp["Locality"].IsNull())
    {
        if (!rsp["Locality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Locality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locality = string(rsp["Locality"].GetString());
        m_localityHasBeenSet = true;
    }

    if (rsp.HasMember("EMISION") && !rsp["EMISION"].IsNull())
    {
        if (!rsp["EMISION"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EMISION` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eMISION = string(rsp["EMISION"].GetString());
        m_eMISIONHasBeenSet = true;
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

string RecognizeMexicoVTIDResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_votePINHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VotePIN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_votePIN.c_str(), allocator).Move(), allocator);
    }

    if (m_cURPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CURP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cURP.c_str(), allocator).Move(), allocator);
    }

    if (m_birthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birth.c_str(), allocator).Move(), allocator);
    }

    if (m_sECCIONHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SECCION";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sECCION.c_str(), allocator).Move(), allocator);
    }

    if (m_issueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_validDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validDate.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_localityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locality.c_str(), allocator).Move(), allocator);
    }

    if (m_eMISIONHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EMISION";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eMISION.c_str(), allocator).Move(), allocator);
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


string RecognizeMexicoVTIDResponse::GetName() const
{
    return m_name;
}

bool RecognizeMexicoVTIDResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RecognizeMexicoVTIDResponse::GetSex() const
{
    return m_sex;
}

bool RecognizeMexicoVTIDResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string RecognizeMexicoVTIDResponse::GetAddress() const
{
    return m_address;
}

bool RecognizeMexicoVTIDResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string RecognizeMexicoVTIDResponse::GetVotePIN() const
{
    return m_votePIN;
}

bool RecognizeMexicoVTIDResponse::VotePINHasBeenSet() const
{
    return m_votePINHasBeenSet;
}

string RecognizeMexicoVTIDResponse::GetCURP() const
{
    return m_cURP;
}

bool RecognizeMexicoVTIDResponse::CURPHasBeenSet() const
{
    return m_cURPHasBeenSet;
}

string RecognizeMexicoVTIDResponse::GetBirth() const
{
    return m_birth;
}

bool RecognizeMexicoVTIDResponse::BirthHasBeenSet() const
{
    return m_birthHasBeenSet;
}

string RecognizeMexicoVTIDResponse::GetSECCION() const
{
    return m_sECCION;
}

bool RecognizeMexicoVTIDResponse::SECCIONHasBeenSet() const
{
    return m_sECCIONHasBeenSet;
}

string RecognizeMexicoVTIDResponse::GetIssueDate() const
{
    return m_issueDate;
}

bool RecognizeMexicoVTIDResponse::IssueDateHasBeenSet() const
{
    return m_issueDateHasBeenSet;
}

string RecognizeMexicoVTIDResponse::GetValidDate() const
{
    return m_validDate;
}

bool RecognizeMexicoVTIDResponse::ValidDateHasBeenSet() const
{
    return m_validDateHasBeenSet;
}

string RecognizeMexicoVTIDResponse::GetState() const
{
    return m_state;
}

bool RecognizeMexicoVTIDResponse::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string RecognizeMexicoVTIDResponse::GetCity() const
{
    return m_city;
}

bool RecognizeMexicoVTIDResponse::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string RecognizeMexicoVTIDResponse::GetLocality() const
{
    return m_locality;
}

bool RecognizeMexicoVTIDResponse::LocalityHasBeenSet() const
{
    return m_localityHasBeenSet;
}

string RecognizeMexicoVTIDResponse::GetEMISION() const
{
    return m_eMISION;
}

bool RecognizeMexicoVTIDResponse::EMISIONHasBeenSet() const
{
    return m_eMISIONHasBeenSet;
}

string RecognizeMexicoVTIDResponse::GetPortraitImage() const
{
    return m_portraitImage;
}

bool RecognizeMexicoVTIDResponse::PortraitImageHasBeenSet() const
{
    return m_portraitImageHasBeenSet;
}


