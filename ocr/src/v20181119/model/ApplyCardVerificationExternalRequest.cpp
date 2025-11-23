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

#include <tencentcloud/ocr/v20181119/model/ApplyCardVerificationExternalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ApplyCardVerificationExternalRequest::ApplyCardVerificationExternalRequest() :
    m_nationalityHasBeenSet(false),
    m_cardTypeHasBeenSet(false),
    m_imageBase64FrontHasBeenSet(false),
    m_imageBase64BackHasBeenSet(false),
    m_imageUrlFrontHasBeenSet(false),
    m_imageUrlBackHasBeenSet(false)
{
}

string ApplyCardVerificationExternalRequest::ToJsonString() const
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

    if (m_imageBase64FrontHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64Front";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64Front.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64BackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64Back";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64Back.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlFrontHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrlFront";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrlFront.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrlBack";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrlBack.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyCardVerificationExternalRequest::GetNationality() const
{
    return m_nationality;
}

void ApplyCardVerificationExternalRequest::SetNationality(const string& _nationality)
{
    m_nationality = _nationality;
    m_nationalityHasBeenSet = true;
}

bool ApplyCardVerificationExternalRequest::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string ApplyCardVerificationExternalRequest::GetCardType() const
{
    return m_cardType;
}

void ApplyCardVerificationExternalRequest::SetCardType(const string& _cardType)
{
    m_cardType = _cardType;
    m_cardTypeHasBeenSet = true;
}

bool ApplyCardVerificationExternalRequest::CardTypeHasBeenSet() const
{
    return m_cardTypeHasBeenSet;
}

string ApplyCardVerificationExternalRequest::GetImageBase64Front() const
{
    return m_imageBase64Front;
}

void ApplyCardVerificationExternalRequest::SetImageBase64Front(const string& _imageBase64Front)
{
    m_imageBase64Front = _imageBase64Front;
    m_imageBase64FrontHasBeenSet = true;
}

bool ApplyCardVerificationExternalRequest::ImageBase64FrontHasBeenSet() const
{
    return m_imageBase64FrontHasBeenSet;
}

string ApplyCardVerificationExternalRequest::GetImageBase64Back() const
{
    return m_imageBase64Back;
}

void ApplyCardVerificationExternalRequest::SetImageBase64Back(const string& _imageBase64Back)
{
    m_imageBase64Back = _imageBase64Back;
    m_imageBase64BackHasBeenSet = true;
}

bool ApplyCardVerificationExternalRequest::ImageBase64BackHasBeenSet() const
{
    return m_imageBase64BackHasBeenSet;
}

string ApplyCardVerificationExternalRequest::GetImageUrlFront() const
{
    return m_imageUrlFront;
}

void ApplyCardVerificationExternalRequest::SetImageUrlFront(const string& _imageUrlFront)
{
    m_imageUrlFront = _imageUrlFront;
    m_imageUrlFrontHasBeenSet = true;
}

bool ApplyCardVerificationExternalRequest::ImageUrlFrontHasBeenSet() const
{
    return m_imageUrlFrontHasBeenSet;
}

string ApplyCardVerificationExternalRequest::GetImageUrlBack() const
{
    return m_imageUrlBack;
}

void ApplyCardVerificationExternalRequest::SetImageUrlBack(const string& _imageUrlBack)
{
    m_imageUrlBack = _imageUrlBack;
    m_imageUrlBackHasBeenSet = true;
}

bool ApplyCardVerificationExternalRequest::ImageUrlBackHasBeenSet() const
{
    return m_imageUrlBackHasBeenSet;
}


