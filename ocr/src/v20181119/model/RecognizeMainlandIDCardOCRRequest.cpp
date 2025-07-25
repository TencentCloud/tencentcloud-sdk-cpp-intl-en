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

#include <tencentcloud/ocr/v20181119/model/RecognizeMainlandIDCardOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeMainlandIDCardOCRRequest::RecognizeMainlandIDCardOCRRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_cardSideHasBeenSet(false),
    m_cropPortraitHasBeenSet(false),
    m_cropIdCardHasBeenSet(false)
{
}

string RecognizeMainlandIDCardOCRRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_cardSideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardSide";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cardSide.c_str(), allocator).Move(), allocator);
    }

    if (m_cropPortraitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CropPortrait";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cropPortrait, allocator);
    }

    if (m_cropIdCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CropIdCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cropIdCard, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RecognizeMainlandIDCardOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void RecognizeMainlandIDCardOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool RecognizeMainlandIDCardOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string RecognizeMainlandIDCardOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void RecognizeMainlandIDCardOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool RecognizeMainlandIDCardOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string RecognizeMainlandIDCardOCRRequest::GetCardSide() const
{
    return m_cardSide;
}

void RecognizeMainlandIDCardOCRRequest::SetCardSide(const string& _cardSide)
{
    m_cardSide = _cardSide;
    m_cardSideHasBeenSet = true;
}

bool RecognizeMainlandIDCardOCRRequest::CardSideHasBeenSet() const
{
    return m_cardSideHasBeenSet;
}

bool RecognizeMainlandIDCardOCRRequest::GetCropPortrait() const
{
    return m_cropPortrait;
}

void RecognizeMainlandIDCardOCRRequest::SetCropPortrait(const bool& _cropPortrait)
{
    m_cropPortrait = _cropPortrait;
    m_cropPortraitHasBeenSet = true;
}

bool RecognizeMainlandIDCardOCRRequest::CropPortraitHasBeenSet() const
{
    return m_cropPortraitHasBeenSet;
}

bool RecognizeMainlandIDCardOCRRequest::GetCropIdCard() const
{
    return m_cropIdCard;
}

void RecognizeMainlandIDCardOCRRequest::SetCropIdCard(const bool& _cropIdCard)
{
    m_cropIdCard = _cropIdCard;
    m_cropIdCardHasBeenSet = true;
}

bool RecognizeMainlandIDCardOCRRequest::CropIdCardHasBeenSet() const
{
    return m_cropIdCardHasBeenSet;
}


