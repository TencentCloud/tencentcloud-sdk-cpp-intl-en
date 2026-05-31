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

#include <tencentcloud/mdl/v20200326/model/SourceLayout.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

SourceLayout::SourceLayout() :
    m_leftOffsetHasBeenSet(false),
    m_rightOffsetHasBeenSet(false),
    m_bottomOffsetHasBeenSet(false)
{
}

CoreInternalOutcome SourceLayout::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LeftOffset") && !value["LeftOffset"].IsNull())
    {
        if (!value["LeftOffset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceLayout.LeftOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leftOffset = value["LeftOffset"].GetUint64();
        m_leftOffsetHasBeenSet = true;
    }

    if (value.HasMember("RightOffset") && !value["RightOffset"].IsNull())
    {
        if (!value["RightOffset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceLayout.RightOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rightOffset = value["RightOffset"].GetUint64();
        m_rightOffsetHasBeenSet = true;
    }

    if (value.HasMember("BottomOffset") && !value["BottomOffset"].IsNull())
    {
        if (!value["BottomOffset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceLayout.BottomOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bottomOffset = value["BottomOffset"].GetUint64();
        m_bottomOffsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceLayout::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_leftOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftOffset, allocator);
    }

    if (m_rightOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rightOffset, allocator);
    }

    if (m_bottomOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BottomOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bottomOffset, allocator);
    }

}


uint64_t SourceLayout::GetLeftOffset() const
{
    return m_leftOffset;
}

void SourceLayout::SetLeftOffset(const uint64_t& _leftOffset)
{
    m_leftOffset = _leftOffset;
    m_leftOffsetHasBeenSet = true;
}

bool SourceLayout::LeftOffsetHasBeenSet() const
{
    return m_leftOffsetHasBeenSet;
}

uint64_t SourceLayout::GetRightOffset() const
{
    return m_rightOffset;
}

void SourceLayout::SetRightOffset(const uint64_t& _rightOffset)
{
    m_rightOffset = _rightOffset;
    m_rightOffsetHasBeenSet = true;
}

bool SourceLayout::RightOffsetHasBeenSet() const
{
    return m_rightOffsetHasBeenSet;
}

uint64_t SourceLayout::GetBottomOffset() const
{
    return m_bottomOffset;
}

void SourceLayout::SetBottomOffset(const uint64_t& _bottomOffset)
{
    m_bottomOffset = _bottomOffset;
    m_bottomOffsetHasBeenSet = true;
}

bool SourceLayout::BottomOffsetHasBeenSet() const
{
    return m_bottomOffsetHasBeenSet;
}

