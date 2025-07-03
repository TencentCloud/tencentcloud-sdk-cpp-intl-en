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

#include <tencentcloud/mdl/v20200326/model/StaticImageDeactivateSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

StaticImageDeactivateSetting::StaticImageDeactivateSetting() :
    m_layerHasBeenSet(false),
    m_fadeOutHasBeenSet(false)
{
}

CoreInternalOutcome StaticImageDeactivateSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Layer") && !value["Layer"].IsNull())
    {
        if (!value["Layer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticImageDeactivateSetting.Layer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_layer = value["Layer"].GetInt64();
        m_layerHasBeenSet = true;
    }

    if (value.HasMember("FadeOut") && !value["FadeOut"].IsNull())
    {
        if (!value["FadeOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticImageDeactivateSetting.FadeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fadeOut = value["FadeOut"].GetInt64();
        m_fadeOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StaticImageDeactivateSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_layerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Layer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layer, allocator);
    }

    if (m_fadeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FadeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fadeOut, allocator);
    }

}


int64_t StaticImageDeactivateSetting::GetLayer() const
{
    return m_layer;
}

void StaticImageDeactivateSetting::SetLayer(const int64_t& _layer)
{
    m_layer = _layer;
    m_layerHasBeenSet = true;
}

bool StaticImageDeactivateSetting::LayerHasBeenSet() const
{
    return m_layerHasBeenSet;
}

int64_t StaticImageDeactivateSetting::GetFadeOut() const
{
    return m_fadeOut;
}

void StaticImageDeactivateSetting::SetFadeOut(const int64_t& _fadeOut)
{
    m_fadeOut = _fadeOut;
    m_fadeOutHasBeenSet = true;
}

bool StaticImageDeactivateSetting::FadeOutHasBeenSet() const
{
    return m_fadeOutHasBeenSet;
}

