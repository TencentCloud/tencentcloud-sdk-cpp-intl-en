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

#include <tencentcloud/ocr/v20181119/model/RecognizeSingaporeIDCardOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeSingaporeIDCardOCRResponse::RecognizeSingaporeIDCardOCRResponse() :
    m_chNameHasBeenSet(false),
    m_enNameHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_countryOfBirthHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_raceHasBeenSet(false),
    m_nRICCodeHasBeenSet(false),
    m_postCodeHasBeenSet(false),
    m_dateOfExpirationHasBeenSet(false),
    m_dateOfIssueHasBeenSet(false),
    m_photoHasBeenSet(false),
    m_warnCardInfosHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeSingaporeIDCardOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ChName") && !rsp["ChName"].IsNull())
    {
        if (!rsp["ChName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chName = string(rsp["ChName"].GetString());
        m_chNameHasBeenSet = true;
    }

    if (rsp.HasMember("EnName") && !rsp["EnName"].IsNull())
    {
        if (!rsp["EnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enName = string(rsp["EnName"].GetString());
        m_enNameHasBeenSet = true;
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

    if (rsp.HasMember("CountryOfBirth") && !rsp["CountryOfBirth"].IsNull())
    {
        if (!rsp["CountryOfBirth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountryOfBirth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryOfBirth = string(rsp["CountryOfBirth"].GetString());
        m_countryOfBirthHasBeenSet = true;
    }

    if (rsp.HasMember("Birthday") && !rsp["Birthday"].IsNull())
    {
        if (!rsp["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(rsp["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
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

    if (rsp.HasMember("ID") && !rsp["ID"].IsNull())
    {
        if (!rsp["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(rsp["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (rsp.HasMember("Race") && !rsp["Race"].IsNull())
    {
        if (!rsp["Race"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Race` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_race = string(rsp["Race"].GetString());
        m_raceHasBeenSet = true;
    }

    if (rsp.HasMember("NRICCode") && !rsp["NRICCode"].IsNull())
    {
        if (!rsp["NRICCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NRICCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nRICCode = string(rsp["NRICCode"].GetString());
        m_nRICCodeHasBeenSet = true;
    }

    if (rsp.HasMember("PostCode") && !rsp["PostCode"].IsNull())
    {
        if (!rsp["PostCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postCode = string(rsp["PostCode"].GetString());
        m_postCodeHasBeenSet = true;
    }

    if (rsp.HasMember("DateOfExpiration") && !rsp["DateOfExpiration"].IsNull())
    {
        if (!rsp["DateOfExpiration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DateOfExpiration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfExpiration = string(rsp["DateOfExpiration"].GetString());
        m_dateOfExpirationHasBeenSet = true;
    }

    if (rsp.HasMember("DateOfIssue") && !rsp["DateOfIssue"].IsNull())
    {
        if (!rsp["DateOfIssue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DateOfIssue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfIssue = string(rsp["DateOfIssue"].GetString());
        m_dateOfIssueHasBeenSet = true;
    }

    if (rsp.HasMember("Photo") && !rsp["Photo"].IsNull())
    {
        if (!rsp["Photo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Photo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_photo = string(rsp["Photo"].GetString());
        m_photoHasBeenSet = true;
    }

    if (rsp.HasMember("WarnCardInfos") && !rsp["WarnCardInfos"].IsNull())
    {
        if (!rsp["WarnCardInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WarnCardInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WarnCardInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_warnCardInfos.push_back((*itr).GetInt64());
        }
        m_warnCardInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizeSingaporeIDCardOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_chNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chName.c_str(), allocator).Move(), allocator);
    }

    if (m_enNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enName.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_countryOfBirthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryOfBirth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryOfBirth.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_raceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Race";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_race.c_str(), allocator).Move(), allocator);
    }

    if (m_nRICCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NRICCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nRICCode.c_str(), allocator).Move(), allocator);
    }

    if (m_postCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_postCode.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfExpirationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfExpiration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfExpiration.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfIssueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfIssue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfIssue.c_str(), allocator).Move(), allocator);
    }

    if (m_photoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Photo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_photo.c_str(), allocator).Move(), allocator);
    }

    if (m_warnCardInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnCardInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_warnCardInfos.begin(); itr != m_warnCardInfos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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


string RecognizeSingaporeIDCardOCRResponse::GetChName() const
{
    return m_chName;
}

bool RecognizeSingaporeIDCardOCRResponse::ChNameHasBeenSet() const
{
    return m_chNameHasBeenSet;
}

string RecognizeSingaporeIDCardOCRResponse::GetEnName() const
{
    return m_enName;
}

bool RecognizeSingaporeIDCardOCRResponse::EnNameHasBeenSet() const
{
    return m_enNameHasBeenSet;
}

string RecognizeSingaporeIDCardOCRResponse::GetSex() const
{
    return m_sex;
}

bool RecognizeSingaporeIDCardOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string RecognizeSingaporeIDCardOCRResponse::GetCountryOfBirth() const
{
    return m_countryOfBirth;
}

bool RecognizeSingaporeIDCardOCRResponse::CountryOfBirthHasBeenSet() const
{
    return m_countryOfBirthHasBeenSet;
}

string RecognizeSingaporeIDCardOCRResponse::GetBirthday() const
{
    return m_birthday;
}

bool RecognizeSingaporeIDCardOCRResponse::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string RecognizeSingaporeIDCardOCRResponse::GetAddress() const
{
    return m_address;
}

bool RecognizeSingaporeIDCardOCRResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string RecognizeSingaporeIDCardOCRResponse::GetID() const
{
    return m_iD;
}

bool RecognizeSingaporeIDCardOCRResponse::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string RecognizeSingaporeIDCardOCRResponse::GetRace() const
{
    return m_race;
}

bool RecognizeSingaporeIDCardOCRResponse::RaceHasBeenSet() const
{
    return m_raceHasBeenSet;
}

string RecognizeSingaporeIDCardOCRResponse::GetNRICCode() const
{
    return m_nRICCode;
}

bool RecognizeSingaporeIDCardOCRResponse::NRICCodeHasBeenSet() const
{
    return m_nRICCodeHasBeenSet;
}

string RecognizeSingaporeIDCardOCRResponse::GetPostCode() const
{
    return m_postCode;
}

bool RecognizeSingaporeIDCardOCRResponse::PostCodeHasBeenSet() const
{
    return m_postCodeHasBeenSet;
}

string RecognizeSingaporeIDCardOCRResponse::GetDateOfExpiration() const
{
    return m_dateOfExpiration;
}

bool RecognizeSingaporeIDCardOCRResponse::DateOfExpirationHasBeenSet() const
{
    return m_dateOfExpirationHasBeenSet;
}

string RecognizeSingaporeIDCardOCRResponse::GetDateOfIssue() const
{
    return m_dateOfIssue;
}

bool RecognizeSingaporeIDCardOCRResponse::DateOfIssueHasBeenSet() const
{
    return m_dateOfIssueHasBeenSet;
}

string RecognizeSingaporeIDCardOCRResponse::GetPhoto() const
{
    return m_photo;
}

bool RecognizeSingaporeIDCardOCRResponse::PhotoHasBeenSet() const
{
    return m_photoHasBeenSet;
}

vector<int64_t> RecognizeSingaporeIDCardOCRResponse::GetWarnCardInfos() const
{
    return m_warnCardInfos;
}

bool RecognizeSingaporeIDCardOCRResponse::WarnCardInfosHasBeenSet() const
{
    return m_warnCardInfosHasBeenSet;
}


