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

#include <tencentcloud/tcsas/v20250106/model/AgeRatingItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

AgeRatingItem::AgeRatingItem() :
    m_standardIdHasBeenSet(false),
    m_ageRatingHasBeenSet(false),
    m_labelHasBeenSet(false)
{
}

CoreInternalOutcome AgeRatingItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StandardId") && !value["StandardId"].IsNull())
    {
        if (!value["StandardId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgeRatingItem.StandardId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standardId = string(value["StandardId"].GetString());
        m_standardIdHasBeenSet = true;
    }

    if (value.HasMember("AgeRating") && !value["AgeRating"].IsNull())
    {
        if (!value["AgeRating"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgeRatingItem.AgeRating` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ageRating = value["AgeRating"].GetInt64();
        m_ageRatingHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgeRatingItem.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgeRatingItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_standardIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standardId.c_str(), allocator).Move(), allocator);
    }

    if (m_ageRatingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgeRating";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ageRating, allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

}


string AgeRatingItem::GetStandardId() const
{
    return m_standardId;
}

void AgeRatingItem::SetStandardId(const string& _standardId)
{
    m_standardId = _standardId;
    m_standardIdHasBeenSet = true;
}

bool AgeRatingItem::StandardIdHasBeenSet() const
{
    return m_standardIdHasBeenSet;
}

int64_t AgeRatingItem::GetAgeRating() const
{
    return m_ageRating;
}

void AgeRatingItem::SetAgeRating(const int64_t& _ageRating)
{
    m_ageRating = _ageRating;
    m_ageRatingHasBeenSet = true;
}

bool AgeRatingItem::AgeRatingHasBeenSet() const
{
    return m_ageRatingHasBeenSet;
}

string AgeRatingItem::GetLabel() const
{
    return m_label;
}

void AgeRatingItem::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool AgeRatingItem::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

