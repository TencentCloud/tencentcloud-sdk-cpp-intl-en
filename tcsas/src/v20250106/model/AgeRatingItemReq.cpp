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

#include <tencentcloud/tcsas/v20250106/model/AgeRatingItemReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

AgeRatingItemReq::AgeRatingItemReq() :
    m_standardIdHasBeenSet(false),
    m_ageRatingHasBeenSet(false)
{
}

CoreInternalOutcome AgeRatingItemReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StandardId") && !value["StandardId"].IsNull())
    {
        if (!value["StandardId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgeRatingItemReq.StandardId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standardId = string(value["StandardId"].GetString());
        m_standardIdHasBeenSet = true;
    }

    if (value.HasMember("AgeRating") && !value["AgeRating"].IsNull())
    {
        if (!value["AgeRating"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgeRatingItemReq.AgeRating` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ageRating = value["AgeRating"].GetInt64();
        m_ageRatingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgeRatingItemReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string AgeRatingItemReq::GetStandardId() const
{
    return m_standardId;
}

void AgeRatingItemReq::SetStandardId(const string& _standardId)
{
    m_standardId = _standardId;
    m_standardIdHasBeenSet = true;
}

bool AgeRatingItemReq::StandardIdHasBeenSet() const
{
    return m_standardIdHasBeenSet;
}

int64_t AgeRatingItemReq::GetAgeRating() const
{
    return m_ageRating;
}

void AgeRatingItemReq::SetAgeRating(const int64_t& _ageRating)
{
    m_ageRating = _ageRating;
    m_ageRatingHasBeenSet = true;
}

bool AgeRatingItemReq::AgeRatingHasBeenSet() const
{
    return m_ageRatingHasBeenSet;
}

