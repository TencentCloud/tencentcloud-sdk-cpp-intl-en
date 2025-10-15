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

#include <tencentcloud/mdl/v20200326/model/MotionGraphicsSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

MotionGraphicsSetting::MotionGraphicsSetting() :
    m_motionGraphicsOverlayEnabledHasBeenSet(false)
{
}

CoreInternalOutcome MotionGraphicsSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MotionGraphicsOverlayEnabled") && !value["MotionGraphicsOverlayEnabled"].IsNull())
    {
        if (!value["MotionGraphicsOverlayEnabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MotionGraphicsSetting.MotionGraphicsOverlayEnabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_motionGraphicsOverlayEnabled = value["MotionGraphicsOverlayEnabled"].GetInt64();
        m_motionGraphicsOverlayEnabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MotionGraphicsSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_motionGraphicsOverlayEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MotionGraphicsOverlayEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_motionGraphicsOverlayEnabled, allocator);
    }

}


int64_t MotionGraphicsSetting::GetMotionGraphicsOverlayEnabled() const
{
    return m_motionGraphicsOverlayEnabled;
}

void MotionGraphicsSetting::SetMotionGraphicsOverlayEnabled(const int64_t& _motionGraphicsOverlayEnabled)
{
    m_motionGraphicsOverlayEnabled = _motionGraphicsOverlayEnabled;
    m_motionGraphicsOverlayEnabledHasBeenSet = true;
}

bool MotionGraphicsSetting::MotionGraphicsOverlayEnabledHasBeenSet() const
{
    return m_motionGraphicsOverlayEnabledHasBeenSet;
}

