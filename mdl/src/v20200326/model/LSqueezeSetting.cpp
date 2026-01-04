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

#include <tencentcloud/mdl/v20200326/model/LSqueezeSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

LSqueezeSetting::LSqueezeSetting() :
    m_locationHasBeenSet(false),
    m_offsetXHasBeenSet(false),
    m_offsetYHasBeenSet(false),
    m_backgroundImgUrlHasBeenSet(false),
    m_squeezeInPeriodHasBeenSet(false),
    m_squeezeOutPeriodHasBeenSet(false)
{
}

CoreInternalOutcome LSqueezeSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LSqueezeSetting.Location` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_location = value["Location"].GetUint64();
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("OffsetX") && !value["OffsetX"].IsNull())
    {
        if (!value["OffsetX"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LSqueezeSetting.OffsetX` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offsetX = value["OffsetX"].GetUint64();
        m_offsetXHasBeenSet = true;
    }

    if (value.HasMember("OffsetY") && !value["OffsetY"].IsNull())
    {
        if (!value["OffsetY"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LSqueezeSetting.OffsetY` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offsetY = value["OffsetY"].GetUint64();
        m_offsetYHasBeenSet = true;
    }

    if (value.HasMember("BackgroundImgUrl") && !value["BackgroundImgUrl"].IsNull())
    {
        if (!value["BackgroundImgUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LSqueezeSetting.BackgroundImgUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundImgUrl = string(value["BackgroundImgUrl"].GetString());
        m_backgroundImgUrlHasBeenSet = true;
    }

    if (value.HasMember("SqueezeInPeriod") && !value["SqueezeInPeriod"].IsNull())
    {
        if (!value["SqueezeInPeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LSqueezeSetting.SqueezeInPeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_squeezeInPeriod = value["SqueezeInPeriod"].GetUint64();
        m_squeezeInPeriodHasBeenSet = true;
    }

    if (value.HasMember("SqueezeOutPeriod") && !value["SqueezeOutPeriod"].IsNull())
    {
        if (!value["SqueezeOutPeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LSqueezeSetting.SqueezeOutPeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_squeezeOutPeriod = value["SqueezeOutPeriod"].GetUint64();
        m_squeezeOutPeriodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LSqueezeSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_location, allocator);
    }

    if (m_offsetXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offsetX, allocator);
    }

    if (m_offsetYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offsetY, allocator);
    }

    if (m_backgroundImgUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundImgUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backgroundImgUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_squeezeInPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqueezeInPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_squeezeInPeriod, allocator);
    }

    if (m_squeezeOutPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqueezeOutPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_squeezeOutPeriod, allocator);
    }

}


uint64_t LSqueezeSetting::GetLocation() const
{
    return m_location;
}

void LSqueezeSetting::SetLocation(const uint64_t& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool LSqueezeSetting::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

uint64_t LSqueezeSetting::GetOffsetX() const
{
    return m_offsetX;
}

void LSqueezeSetting::SetOffsetX(const uint64_t& _offsetX)
{
    m_offsetX = _offsetX;
    m_offsetXHasBeenSet = true;
}

bool LSqueezeSetting::OffsetXHasBeenSet() const
{
    return m_offsetXHasBeenSet;
}

uint64_t LSqueezeSetting::GetOffsetY() const
{
    return m_offsetY;
}

void LSqueezeSetting::SetOffsetY(const uint64_t& _offsetY)
{
    m_offsetY = _offsetY;
    m_offsetYHasBeenSet = true;
}

bool LSqueezeSetting::OffsetYHasBeenSet() const
{
    return m_offsetYHasBeenSet;
}

string LSqueezeSetting::GetBackgroundImgUrl() const
{
    return m_backgroundImgUrl;
}

void LSqueezeSetting::SetBackgroundImgUrl(const string& _backgroundImgUrl)
{
    m_backgroundImgUrl = _backgroundImgUrl;
    m_backgroundImgUrlHasBeenSet = true;
}

bool LSqueezeSetting::BackgroundImgUrlHasBeenSet() const
{
    return m_backgroundImgUrlHasBeenSet;
}

uint64_t LSqueezeSetting::GetSqueezeInPeriod() const
{
    return m_squeezeInPeriod;
}

void LSqueezeSetting::SetSqueezeInPeriod(const uint64_t& _squeezeInPeriod)
{
    m_squeezeInPeriod = _squeezeInPeriod;
    m_squeezeInPeriodHasBeenSet = true;
}

bool LSqueezeSetting::SqueezeInPeriodHasBeenSet() const
{
    return m_squeezeInPeriodHasBeenSet;
}

uint64_t LSqueezeSetting::GetSqueezeOutPeriod() const
{
    return m_squeezeOutPeriod;
}

void LSqueezeSetting::SetSqueezeOutPeriod(const uint64_t& _squeezeOutPeriod)
{
    m_squeezeOutPeriod = _squeezeOutPeriod;
    m_squeezeOutPeriodHasBeenSet = true;
}

bool LSqueezeSetting::SqueezeOutPeriodHasBeenSet() const
{
    return m_squeezeOutPeriodHasBeenSet;
}

