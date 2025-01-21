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

#include <tencentcloud/ocr/v20181119/model/RecognizeThaiPinkCardResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeThaiPinkCardResponse::RecognizeThaiPinkCardResponse() :
    m_countryHasBeenSet(false),
    m_iDNumberHasBeenSet(false),
    m_thaiNameHasBeenSet(false),
    m_enNameHasBeenSet(false),
    m_thaiDOBHasBeenSet(false),
    m_enDOBHasBeenSet(false),
    m_photoNumberHasBeenSet(false),
    m_thaiAddressHasBeenSet(false),
    m_thaiDateOfIssueHasBeenSet(false),
    m_dateOfIssueHasBeenSet(false),
    m_thaiDateOfExpiryHasBeenSet(false),
    m_dateOfExpiryHasBeenSet(false),
    m_issuingAgencyHasBeenSet(false),
    m_refNumberHasBeenSet(false),
    m_advancedInfoHasBeenSet(false),
    m_portraitImageHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeThaiPinkCardResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Country") && !rsp["Country"].IsNull())
    {
        if (!rsp["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(rsp["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (rsp.HasMember("IDNumber") && !rsp["IDNumber"].IsNull())
    {
        if (!rsp["IDNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDNumber = string(rsp["IDNumber"].GetString());
        m_iDNumberHasBeenSet = true;
    }

    if (rsp.HasMember("ThaiName") && !rsp["ThaiName"].IsNull())
    {
        if (!rsp["ThaiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThaiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thaiName = string(rsp["ThaiName"].GetString());
        m_thaiNameHasBeenSet = true;
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

    if (rsp.HasMember("ThaiDOB") && !rsp["ThaiDOB"].IsNull())
    {
        if (!rsp["ThaiDOB"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThaiDOB` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thaiDOB = string(rsp["ThaiDOB"].GetString());
        m_thaiDOBHasBeenSet = true;
    }

    if (rsp.HasMember("EnDOB") && !rsp["EnDOB"].IsNull())
    {
        if (!rsp["EnDOB"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnDOB` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enDOB = string(rsp["EnDOB"].GetString());
        m_enDOBHasBeenSet = true;
    }

    if (rsp.HasMember("PhotoNumber") && !rsp["PhotoNumber"].IsNull())
    {
        if (!rsp["PhotoNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhotoNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_photoNumber = string(rsp["PhotoNumber"].GetString());
        m_photoNumberHasBeenSet = true;
    }

    if (rsp.HasMember("ThaiAddress") && !rsp["ThaiAddress"].IsNull())
    {
        if (!rsp["ThaiAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThaiAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thaiAddress = string(rsp["ThaiAddress"].GetString());
        m_thaiAddressHasBeenSet = true;
    }

    if (rsp.HasMember("ThaiDateOfIssue") && !rsp["ThaiDateOfIssue"].IsNull())
    {
        if (!rsp["ThaiDateOfIssue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThaiDateOfIssue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thaiDateOfIssue = string(rsp["ThaiDateOfIssue"].GetString());
        m_thaiDateOfIssueHasBeenSet = true;
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

    if (rsp.HasMember("ThaiDateOfExpiry") && !rsp["ThaiDateOfExpiry"].IsNull())
    {
        if (!rsp["ThaiDateOfExpiry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThaiDateOfExpiry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thaiDateOfExpiry = string(rsp["ThaiDateOfExpiry"].GetString());
        m_thaiDateOfExpiryHasBeenSet = true;
    }

    if (rsp.HasMember("DateOfExpiry") && !rsp["DateOfExpiry"].IsNull())
    {
        if (!rsp["DateOfExpiry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DateOfExpiry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfExpiry = string(rsp["DateOfExpiry"].GetString());
        m_dateOfExpiryHasBeenSet = true;
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

    if (rsp.HasMember("RefNumber") && !rsp["RefNumber"].IsNull())
    {
        if (!rsp["RefNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refNumber = string(rsp["RefNumber"].GetString());
        m_refNumberHasBeenSet = true;
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

string RecognizeThaiPinkCardResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_iDNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_thaiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThaiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thaiName.c_str(), allocator).Move(), allocator);
    }

    if (m_enNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enName.c_str(), allocator).Move(), allocator);
    }

    if (m_thaiDOBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThaiDOB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thaiDOB.c_str(), allocator).Move(), allocator);
    }

    if (m_enDOBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnDOB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enDOB.c_str(), allocator).Move(), allocator);
    }

    if (m_photoNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhotoNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_photoNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_thaiAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThaiAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thaiAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_thaiDateOfIssueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThaiDateOfIssue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thaiDateOfIssue.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfIssueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfIssue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfIssue.c_str(), allocator).Move(), allocator);
    }

    if (m_thaiDateOfExpiryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThaiDateOfExpiry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thaiDateOfExpiry.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfExpiryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfExpiry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfExpiry.c_str(), allocator).Move(), allocator);
    }

    if (m_issuingAgencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuingAgency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuingAgency.c_str(), allocator).Move(), allocator);
    }

    if (m_refNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refNumber.c_str(), allocator).Move(), allocator);
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


string RecognizeThaiPinkCardResponse::GetCountry() const
{
    return m_country;
}

bool RecognizeThaiPinkCardResponse::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string RecognizeThaiPinkCardResponse::GetIDNumber() const
{
    return m_iDNumber;
}

bool RecognizeThaiPinkCardResponse::IDNumberHasBeenSet() const
{
    return m_iDNumberHasBeenSet;
}

string RecognizeThaiPinkCardResponse::GetThaiName() const
{
    return m_thaiName;
}

bool RecognizeThaiPinkCardResponse::ThaiNameHasBeenSet() const
{
    return m_thaiNameHasBeenSet;
}

string RecognizeThaiPinkCardResponse::GetEnName() const
{
    return m_enName;
}

bool RecognizeThaiPinkCardResponse::EnNameHasBeenSet() const
{
    return m_enNameHasBeenSet;
}

string RecognizeThaiPinkCardResponse::GetThaiDOB() const
{
    return m_thaiDOB;
}

bool RecognizeThaiPinkCardResponse::ThaiDOBHasBeenSet() const
{
    return m_thaiDOBHasBeenSet;
}

string RecognizeThaiPinkCardResponse::GetEnDOB() const
{
    return m_enDOB;
}

bool RecognizeThaiPinkCardResponse::EnDOBHasBeenSet() const
{
    return m_enDOBHasBeenSet;
}

string RecognizeThaiPinkCardResponse::GetPhotoNumber() const
{
    return m_photoNumber;
}

bool RecognizeThaiPinkCardResponse::PhotoNumberHasBeenSet() const
{
    return m_photoNumberHasBeenSet;
}

string RecognizeThaiPinkCardResponse::GetThaiAddress() const
{
    return m_thaiAddress;
}

bool RecognizeThaiPinkCardResponse::ThaiAddressHasBeenSet() const
{
    return m_thaiAddressHasBeenSet;
}

string RecognizeThaiPinkCardResponse::GetThaiDateOfIssue() const
{
    return m_thaiDateOfIssue;
}

bool RecognizeThaiPinkCardResponse::ThaiDateOfIssueHasBeenSet() const
{
    return m_thaiDateOfIssueHasBeenSet;
}

string RecognizeThaiPinkCardResponse::GetDateOfIssue() const
{
    return m_dateOfIssue;
}

bool RecognizeThaiPinkCardResponse::DateOfIssueHasBeenSet() const
{
    return m_dateOfIssueHasBeenSet;
}

string RecognizeThaiPinkCardResponse::GetThaiDateOfExpiry() const
{
    return m_thaiDateOfExpiry;
}

bool RecognizeThaiPinkCardResponse::ThaiDateOfExpiryHasBeenSet() const
{
    return m_thaiDateOfExpiryHasBeenSet;
}

string RecognizeThaiPinkCardResponse::GetDateOfExpiry() const
{
    return m_dateOfExpiry;
}

bool RecognizeThaiPinkCardResponse::DateOfExpiryHasBeenSet() const
{
    return m_dateOfExpiryHasBeenSet;
}

string RecognizeThaiPinkCardResponse::GetIssuingAgency() const
{
    return m_issuingAgency;
}

bool RecognizeThaiPinkCardResponse::IssuingAgencyHasBeenSet() const
{
    return m_issuingAgencyHasBeenSet;
}

string RecognizeThaiPinkCardResponse::GetRefNumber() const
{
    return m_refNumber;
}

bool RecognizeThaiPinkCardResponse::RefNumberHasBeenSet() const
{
    return m_refNumberHasBeenSet;
}

string RecognizeThaiPinkCardResponse::GetAdvancedInfo() const
{
    return m_advancedInfo;
}

bool RecognizeThaiPinkCardResponse::AdvancedInfoHasBeenSet() const
{
    return m_advancedInfoHasBeenSet;
}

string RecognizeThaiPinkCardResponse::GetPortraitImage() const
{
    return m_portraitImage;
}

bool RecognizeThaiPinkCardResponse::PortraitImageHasBeenSet() const
{
    return m_portraitImageHasBeenSet;
}


