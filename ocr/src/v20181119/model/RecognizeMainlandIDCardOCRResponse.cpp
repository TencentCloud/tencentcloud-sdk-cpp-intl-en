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

#include <tencentcloud/ocr/v20181119/model/RecognizeMainlandIDCardOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeMainlandIDCardOCRResponse::RecognizeMainlandIDCardOCRResponse() :
    m_nameHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_nationHasBeenSet(false),
    m_birthHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_idNumHasBeenSet(false),
    m_authorityHasBeenSet(false),
    m_validDateHasBeenSet(false),
    m_warnCardInfosHasBeenSet(false),
    m_portraitImageHasBeenSet(false),
    m_idCardImageHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeMainlandIDCardOCRResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("Nation") && !rsp["Nation"].IsNull())
    {
        if (!rsp["Nation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Nation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nation = string(rsp["Nation"].GetString());
        m_nationHasBeenSet = true;
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

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (rsp.HasMember("IdNum") && !rsp["IdNum"].IsNull())
    {
        if (!rsp["IdNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idNum = string(rsp["IdNum"].GetString());
        m_idNumHasBeenSet = true;
    }

    if (rsp.HasMember("Authority") && !rsp["Authority"].IsNull())
    {
        if (!rsp["Authority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Authority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authority = string(rsp["Authority"].GetString());
        m_authorityHasBeenSet = true;
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

    if (rsp.HasMember("PortraitImage") && !rsp["PortraitImage"].IsNull())
    {
        if (!rsp["PortraitImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portraitImage = string(rsp["PortraitImage"].GetString());
        m_portraitImageHasBeenSet = true;
    }

    if (rsp.HasMember("IdCardImage") && !rsp["IdCardImage"].IsNull())
    {
        if (!rsp["IdCardImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdCardImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardImage = string(rsp["IdCardImage"].GetString());
        m_idCardImageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizeMainlandIDCardOCRResponse::ToJsonString() const
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

    if (m_nationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nation.c_str(), allocator).Move(), allocator);
    }

    if (m_birthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birth.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_idNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idNum.c_str(), allocator).Move(), allocator);
    }

    if (m_authorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authority.c_str(), allocator).Move(), allocator);
    }

    if (m_validDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validDate.c_str(), allocator).Move(), allocator);
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

    if (m_portraitImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portraitImage.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardImage.c_str(), allocator).Move(), allocator);
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


string RecognizeMainlandIDCardOCRResponse::GetName() const
{
    return m_name;
}

bool RecognizeMainlandIDCardOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RecognizeMainlandIDCardOCRResponse::GetSex() const
{
    return m_sex;
}

bool RecognizeMainlandIDCardOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string RecognizeMainlandIDCardOCRResponse::GetNation() const
{
    return m_nation;
}

bool RecognizeMainlandIDCardOCRResponse::NationHasBeenSet() const
{
    return m_nationHasBeenSet;
}

string RecognizeMainlandIDCardOCRResponse::GetBirth() const
{
    return m_birth;
}

bool RecognizeMainlandIDCardOCRResponse::BirthHasBeenSet() const
{
    return m_birthHasBeenSet;
}

string RecognizeMainlandIDCardOCRResponse::GetAddress() const
{
    return m_address;
}

bool RecognizeMainlandIDCardOCRResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string RecognizeMainlandIDCardOCRResponse::GetIdNum() const
{
    return m_idNum;
}

bool RecognizeMainlandIDCardOCRResponse::IdNumHasBeenSet() const
{
    return m_idNumHasBeenSet;
}

string RecognizeMainlandIDCardOCRResponse::GetAuthority() const
{
    return m_authority;
}

bool RecognizeMainlandIDCardOCRResponse::AuthorityHasBeenSet() const
{
    return m_authorityHasBeenSet;
}

string RecognizeMainlandIDCardOCRResponse::GetValidDate() const
{
    return m_validDate;
}

bool RecognizeMainlandIDCardOCRResponse::ValidDateHasBeenSet() const
{
    return m_validDateHasBeenSet;
}

vector<int64_t> RecognizeMainlandIDCardOCRResponse::GetWarnCardInfos() const
{
    return m_warnCardInfos;
}

bool RecognizeMainlandIDCardOCRResponse::WarnCardInfosHasBeenSet() const
{
    return m_warnCardInfosHasBeenSet;
}

string RecognizeMainlandIDCardOCRResponse::GetPortraitImage() const
{
    return m_portraitImage;
}

bool RecognizeMainlandIDCardOCRResponse::PortraitImageHasBeenSet() const
{
    return m_portraitImageHasBeenSet;
}

string RecognizeMainlandIDCardOCRResponse::GetIdCardImage() const
{
    return m_idCardImage;
}

bool RecognizeMainlandIDCardOCRResponse::IdCardImageHasBeenSet() const
{
    return m_idCardImageHasBeenSet;
}


