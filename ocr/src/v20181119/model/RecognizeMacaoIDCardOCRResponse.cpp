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

#include <tencentcloud/ocr/v20181119/model/RecognizeMacaoIDCardOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeMacaoIDCardOCRResponse::RecognizeMacaoIDCardOCRResponse() :
    m_cnLastNameHasBeenSet(false),
    m_enLastNameHasBeenSet(false),
    m_lastNameCodeHasBeenSet(false),
    m_cnFirstNameHasBeenSet(false),
    m_enFirstNameHasBeenSet(false),
    m_firstNameCodeHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_firstIssueDateHasBeenSet(false),
    m_currentIssueDateHasBeenSet(false),
    m_validityPeriodHasBeenSet(false),
    m_symbolHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_retImageHasBeenSet(false),
    m_angleHasBeenSet(false),
    m_residentTypeHasBeenSet(false),
    m_warnCardInfosHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeMacaoIDCardOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CnLastName") && !rsp["CnLastName"].IsNull())
    {
        if (!rsp["CnLastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CnLastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnLastName = string(rsp["CnLastName"].GetString());
        m_cnLastNameHasBeenSet = true;
    }

    if (rsp.HasMember("EnLastName") && !rsp["EnLastName"].IsNull())
    {
        if (!rsp["EnLastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnLastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enLastName = string(rsp["EnLastName"].GetString());
        m_enLastNameHasBeenSet = true;
    }

    if (rsp.HasMember("LastNameCode") && !rsp["LastNameCode"].IsNull())
    {
        if (!rsp["LastNameCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastNameCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastNameCode = string(rsp["LastNameCode"].GetString());
        m_lastNameCodeHasBeenSet = true;
    }

    if (rsp.HasMember("CnFirstName") && !rsp["CnFirstName"].IsNull())
    {
        if (!rsp["CnFirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CnFirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnFirstName = string(rsp["CnFirstName"].GetString());
        m_cnFirstNameHasBeenSet = true;
    }

    if (rsp.HasMember("EnFirstName") && !rsp["EnFirstName"].IsNull())
    {
        if (!rsp["EnFirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnFirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enFirstName = string(rsp["EnFirstName"].GetString());
        m_enFirstNameHasBeenSet = true;
    }

    if (rsp.HasMember("FirstNameCode") && !rsp["FirstNameCode"].IsNull())
    {
        if (!rsp["FirstNameCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirstNameCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstNameCode = string(rsp["FirstNameCode"].GetString());
        m_firstNameCodeHasBeenSet = true;
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

    if (rsp.HasMember("Birthday") && !rsp["Birthday"].IsNull())
    {
        if (!rsp["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(rsp["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
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

    if (rsp.HasMember("FirstIssueDate") && !rsp["FirstIssueDate"].IsNull())
    {
        if (!rsp["FirstIssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirstIssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstIssueDate = string(rsp["FirstIssueDate"].GetString());
        m_firstIssueDateHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentIssueDate") && !rsp["CurrentIssueDate"].IsNull())
    {
        if (!rsp["CurrentIssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentIssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentIssueDate = string(rsp["CurrentIssueDate"].GetString());
        m_currentIssueDateHasBeenSet = true;
    }

    if (rsp.HasMember("ValidityPeriod") && !rsp["ValidityPeriod"].IsNull())
    {
        if (!rsp["ValidityPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValidityPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validityPeriod = string(rsp["ValidityPeriod"].GetString());
        m_validityPeriodHasBeenSet = true;
    }

    if (rsp.HasMember("Symbol") && !rsp["Symbol"].IsNull())
    {
        if (!rsp["Symbol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Symbol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symbol = string(rsp["Symbol"].GetString());
        m_symbolHasBeenSet = true;
    }

    if (rsp.HasMember("Height") && !rsp["Height"].IsNull())
    {
        if (!rsp["Height"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Height` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_height = string(rsp["Height"].GetString());
        m_heightHasBeenSet = true;
    }

    if (rsp.HasMember("RetImage") && !rsp["RetImage"].IsNull())
    {
        if (!rsp["RetImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retImage = string(rsp["RetImage"].GetString());
        m_retImageHasBeenSet = true;
    }

    if (rsp.HasMember("Angle") && !rsp["Angle"].IsNull())
    {
        if (!rsp["Angle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Angle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_angle = string(rsp["Angle"].GetString());
        m_angleHasBeenSet = true;
    }

    if (rsp.HasMember("ResidentType") && !rsp["ResidentType"].IsNull())
    {
        if (!rsp["ResidentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResidentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_residentType = string(rsp["ResidentType"].GetString());
        m_residentTypeHasBeenSet = true;
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

string RecognizeMacaoIDCardOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cnLastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnLastName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnLastName.c_str(), allocator).Move(), allocator);
    }

    if (m_enLastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnLastName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enLastName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastNameCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastNameCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastNameCode.c_str(), allocator).Move(), allocator);
    }

    if (m_cnFirstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnFirstName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnFirstName.c_str(), allocator).Move(), allocator);
    }

    if (m_enFirstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnFirstName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enFirstName.c_str(), allocator).Move(), allocator);
    }

    if (m_firstNameCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstNameCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstNameCode.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_firstIssueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstIssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstIssueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_currentIssueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentIssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentIssueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_validityPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidityPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validityPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_symbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Symbol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_symbol.c_str(), allocator).Move(), allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_height.c_str(), allocator).Move(), allocator);
    }

    if (m_retImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_retImage.c_str(), allocator).Move(), allocator);
    }

    if (m_angleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Angle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_angle.c_str(), allocator).Move(), allocator);
    }

    if (m_residentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResidentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_residentType.c_str(), allocator).Move(), allocator);
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


string RecognizeMacaoIDCardOCRResponse::GetCnLastName() const
{
    return m_cnLastName;
}

bool RecognizeMacaoIDCardOCRResponse::CnLastNameHasBeenSet() const
{
    return m_cnLastNameHasBeenSet;
}

string RecognizeMacaoIDCardOCRResponse::GetEnLastName() const
{
    return m_enLastName;
}

bool RecognizeMacaoIDCardOCRResponse::EnLastNameHasBeenSet() const
{
    return m_enLastNameHasBeenSet;
}

string RecognizeMacaoIDCardOCRResponse::GetLastNameCode() const
{
    return m_lastNameCode;
}

bool RecognizeMacaoIDCardOCRResponse::LastNameCodeHasBeenSet() const
{
    return m_lastNameCodeHasBeenSet;
}

string RecognizeMacaoIDCardOCRResponse::GetCnFirstName() const
{
    return m_cnFirstName;
}

bool RecognizeMacaoIDCardOCRResponse::CnFirstNameHasBeenSet() const
{
    return m_cnFirstNameHasBeenSet;
}

string RecognizeMacaoIDCardOCRResponse::GetEnFirstName() const
{
    return m_enFirstName;
}

bool RecognizeMacaoIDCardOCRResponse::EnFirstNameHasBeenSet() const
{
    return m_enFirstNameHasBeenSet;
}

string RecognizeMacaoIDCardOCRResponse::GetFirstNameCode() const
{
    return m_firstNameCode;
}

bool RecognizeMacaoIDCardOCRResponse::FirstNameCodeHasBeenSet() const
{
    return m_firstNameCodeHasBeenSet;
}

string RecognizeMacaoIDCardOCRResponse::GetID() const
{
    return m_iD;
}

bool RecognizeMacaoIDCardOCRResponse::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string RecognizeMacaoIDCardOCRResponse::GetBirthday() const
{
    return m_birthday;
}

bool RecognizeMacaoIDCardOCRResponse::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string RecognizeMacaoIDCardOCRResponse::GetSex() const
{
    return m_sex;
}

bool RecognizeMacaoIDCardOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string RecognizeMacaoIDCardOCRResponse::GetFirstIssueDate() const
{
    return m_firstIssueDate;
}

bool RecognizeMacaoIDCardOCRResponse::FirstIssueDateHasBeenSet() const
{
    return m_firstIssueDateHasBeenSet;
}

string RecognizeMacaoIDCardOCRResponse::GetCurrentIssueDate() const
{
    return m_currentIssueDate;
}

bool RecognizeMacaoIDCardOCRResponse::CurrentIssueDateHasBeenSet() const
{
    return m_currentIssueDateHasBeenSet;
}

string RecognizeMacaoIDCardOCRResponse::GetValidityPeriod() const
{
    return m_validityPeriod;
}

bool RecognizeMacaoIDCardOCRResponse::ValidityPeriodHasBeenSet() const
{
    return m_validityPeriodHasBeenSet;
}

string RecognizeMacaoIDCardOCRResponse::GetSymbol() const
{
    return m_symbol;
}

bool RecognizeMacaoIDCardOCRResponse::SymbolHasBeenSet() const
{
    return m_symbolHasBeenSet;
}

string RecognizeMacaoIDCardOCRResponse::GetHeight() const
{
    return m_height;
}

bool RecognizeMacaoIDCardOCRResponse::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string RecognizeMacaoIDCardOCRResponse::GetRetImage() const
{
    return m_retImage;
}

bool RecognizeMacaoIDCardOCRResponse::RetImageHasBeenSet() const
{
    return m_retImageHasBeenSet;
}

string RecognizeMacaoIDCardOCRResponse::GetAngle() const
{
    return m_angle;
}

bool RecognizeMacaoIDCardOCRResponse::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}

string RecognizeMacaoIDCardOCRResponse::GetResidentType() const
{
    return m_residentType;
}

bool RecognizeMacaoIDCardOCRResponse::ResidentTypeHasBeenSet() const
{
    return m_residentTypeHasBeenSet;
}

vector<int64_t> RecognizeMacaoIDCardOCRResponse::GetWarnCardInfos() const
{
    return m_warnCardInfos;
}

bool RecognizeMacaoIDCardOCRResponse::WarnCardInfosHasBeenSet() const
{
    return m_warnCardInfosHasBeenSet;
}


