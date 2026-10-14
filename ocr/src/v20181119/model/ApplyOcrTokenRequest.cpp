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

#include <tencentcloud/ocr/v20181119/model/ApplyOcrTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ApplyOcrTokenRequest::ApplyOcrTokenRequest() :
    m_nationalityHasBeenSet(false),
    m_cardTypeHasBeenSet(false),
    m_encryptedConfigHasBeenSet(false),
    m_returnHeadImageHasBeenSet(false),
    m_retryLimitHasBeenSet(false),
    m_ocrModeTypeHasBeenSet(false),
    m_allowUploadPhotoHasBeenSet(false),
    m_cropIdCardHasBeenSet(false),
    m_sdkVersionHasBeenSet(false),
    m_ocrAutoDetectTimeoutHasBeenSet(false)
{
}

string ApplyOcrTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
    }

    if (m_cardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cardType.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptedConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptedConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptedConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_returnHeadImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnHeadImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_returnHeadImage, allocator);
    }

    if (m_retryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retryLimit, allocator);
    }

    if (m_ocrModeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrModeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ocrModeType.c_str(), allocator).Move(), allocator);
    }

    if (m_allowUploadPhotoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowUploadPhoto";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowUploadPhoto, allocator);
    }

    if (m_cropIdCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CropIdCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cropIdCard, allocator);
    }

    if (m_sdkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sdkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrAutoDetectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrAutoDetectTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ocrAutoDetectTimeout, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyOcrTokenRequest::GetNationality() const
{
    return m_nationality;
}

void ApplyOcrTokenRequest::SetNationality(const string& _nationality)
{
    m_nationality = _nationality;
    m_nationalityHasBeenSet = true;
}

bool ApplyOcrTokenRequest::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string ApplyOcrTokenRequest::GetCardType() const
{
    return m_cardType;
}

void ApplyOcrTokenRequest::SetCardType(const string& _cardType)
{
    m_cardType = _cardType;
    m_cardTypeHasBeenSet = true;
}

bool ApplyOcrTokenRequest::CardTypeHasBeenSet() const
{
    return m_cardTypeHasBeenSet;
}

string ApplyOcrTokenRequest::GetEncryptedConfig() const
{
    return m_encryptedConfig;
}

void ApplyOcrTokenRequest::SetEncryptedConfig(const string& _encryptedConfig)
{
    m_encryptedConfig = _encryptedConfig;
    m_encryptedConfigHasBeenSet = true;
}

bool ApplyOcrTokenRequest::EncryptedConfigHasBeenSet() const
{
    return m_encryptedConfigHasBeenSet;
}

bool ApplyOcrTokenRequest::GetReturnHeadImage() const
{
    return m_returnHeadImage;
}

void ApplyOcrTokenRequest::SetReturnHeadImage(const bool& _returnHeadImage)
{
    m_returnHeadImage = _returnHeadImage;
    m_returnHeadImageHasBeenSet = true;
}

bool ApplyOcrTokenRequest::ReturnHeadImageHasBeenSet() const
{
    return m_returnHeadImageHasBeenSet;
}

int64_t ApplyOcrTokenRequest::GetRetryLimit() const
{
    return m_retryLimit;
}

void ApplyOcrTokenRequest::SetRetryLimit(const int64_t& _retryLimit)
{
    m_retryLimit = _retryLimit;
    m_retryLimitHasBeenSet = true;
}

bool ApplyOcrTokenRequest::RetryLimitHasBeenSet() const
{
    return m_retryLimitHasBeenSet;
}

string ApplyOcrTokenRequest::GetOcrModeType() const
{
    return m_ocrModeType;
}

void ApplyOcrTokenRequest::SetOcrModeType(const string& _ocrModeType)
{
    m_ocrModeType = _ocrModeType;
    m_ocrModeTypeHasBeenSet = true;
}

bool ApplyOcrTokenRequest::OcrModeTypeHasBeenSet() const
{
    return m_ocrModeTypeHasBeenSet;
}

bool ApplyOcrTokenRequest::GetAllowUploadPhoto() const
{
    return m_allowUploadPhoto;
}

void ApplyOcrTokenRequest::SetAllowUploadPhoto(const bool& _allowUploadPhoto)
{
    m_allowUploadPhoto = _allowUploadPhoto;
    m_allowUploadPhotoHasBeenSet = true;
}

bool ApplyOcrTokenRequest::AllowUploadPhotoHasBeenSet() const
{
    return m_allowUploadPhotoHasBeenSet;
}

bool ApplyOcrTokenRequest::GetCropIdCard() const
{
    return m_cropIdCard;
}

void ApplyOcrTokenRequest::SetCropIdCard(const bool& _cropIdCard)
{
    m_cropIdCard = _cropIdCard;
    m_cropIdCardHasBeenSet = true;
}

bool ApplyOcrTokenRequest::CropIdCardHasBeenSet() const
{
    return m_cropIdCardHasBeenSet;
}

string ApplyOcrTokenRequest::GetSdkVersion() const
{
    return m_sdkVersion;
}

void ApplyOcrTokenRequest::SetSdkVersion(const string& _sdkVersion)
{
    m_sdkVersion = _sdkVersion;
    m_sdkVersionHasBeenSet = true;
}

bool ApplyOcrTokenRequest::SdkVersionHasBeenSet() const
{
    return m_sdkVersionHasBeenSet;
}

int64_t ApplyOcrTokenRequest::GetOcrAutoDetectTimeout() const
{
    return m_ocrAutoDetectTimeout;
}

void ApplyOcrTokenRequest::SetOcrAutoDetectTimeout(const int64_t& _ocrAutoDetectTimeout)
{
    m_ocrAutoDetectTimeout = _ocrAutoDetectTimeout;
    m_ocrAutoDetectTimeoutHasBeenSet = true;
}

bool ApplyOcrTokenRequest::OcrAutoDetectTimeoutHasBeenSet() const
{
    return m_ocrAutoDetectTimeoutHasBeenSet;
}


