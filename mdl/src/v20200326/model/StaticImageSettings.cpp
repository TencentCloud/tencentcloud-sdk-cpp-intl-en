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

#include <tencentcloud/mdl/v20200326/model/StaticImageSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

StaticImageSettings::StaticImageSettings() :
    m_globalImageOverlayEnabledHasBeenSet(false)
{
}

CoreInternalOutcome StaticImageSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GlobalImageOverlayEnabled") && !value["GlobalImageOverlayEnabled"].IsNull())
    {
        if (!value["GlobalImageOverlayEnabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticImageSettings.GlobalImageOverlayEnabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_globalImageOverlayEnabled = value["GlobalImageOverlayEnabled"].GetInt64();
        m_globalImageOverlayEnabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StaticImageSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_globalImageOverlayEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalImageOverlayEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_globalImageOverlayEnabled, allocator);
    }

}


int64_t StaticImageSettings::GetGlobalImageOverlayEnabled() const
{
    return m_globalImageOverlayEnabled;
}

void StaticImageSettings::SetGlobalImageOverlayEnabled(const int64_t& _globalImageOverlayEnabled)
{
    m_globalImageOverlayEnabled = _globalImageOverlayEnabled;
    m_globalImageOverlayEnabledHasBeenSet = true;
}

bool StaticImageSettings::GlobalImageOverlayEnabledHasBeenSet() const
{
    return m_globalImageOverlayEnabledHasBeenSet;
}

