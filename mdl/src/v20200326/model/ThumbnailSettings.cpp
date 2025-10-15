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

#include <tencentcloud/mdl/v20200326/model/ThumbnailSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

ThumbnailSettings::ThumbnailSettings() :
    m_thumbnailEnabledHasBeenSet(false)
{
}

CoreInternalOutcome ThumbnailSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ThumbnailEnabled") && !value["ThumbnailEnabled"].IsNull())
    {
        if (!value["ThumbnailEnabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ThumbnailSettings.ThumbnailEnabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_thumbnailEnabled = value["ThumbnailEnabled"].GetInt64();
        m_thumbnailEnabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ThumbnailSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_thumbnailEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThumbnailEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thumbnailEnabled, allocator);
    }

}


int64_t ThumbnailSettings::GetThumbnailEnabled() const
{
    return m_thumbnailEnabled;
}

void ThumbnailSettings::SetThumbnailEnabled(const int64_t& _thumbnailEnabled)
{
    m_thumbnailEnabled = _thumbnailEnabled;
    m_thumbnailEnabledHasBeenSet = true;
}

bool ThumbnailSettings::ThumbnailEnabledHasBeenSet() const
{
    return m_thumbnailEnabledHasBeenSet;
}

