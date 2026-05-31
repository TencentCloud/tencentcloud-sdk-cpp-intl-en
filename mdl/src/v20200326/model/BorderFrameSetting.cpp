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

#include <tencentcloud/mdl/v20200326/model/BorderFrameSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

BorderFrameSetting::BorderFrameSetting() :
    m_liveSourceLayoutHasBeenSet(false),
    m_backgroundImgUrlHasBeenSet(false)
{
}

CoreInternalOutcome BorderFrameSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LiveSourceLayout") && !value["LiveSourceLayout"].IsNull())
    {
        if (!value["LiveSourceLayout"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BorderFrameSetting.LiveSourceLayout` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_liveSourceLayout.Deserialize(value["LiveSourceLayout"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_liveSourceLayoutHasBeenSet = true;
    }

    if (value.HasMember("BackgroundImgUrl") && !value["BackgroundImgUrl"].IsNull())
    {
        if (!value["BackgroundImgUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BorderFrameSetting.BackgroundImgUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundImgUrl = string(value["BackgroundImgUrl"].GetString());
        m_backgroundImgUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BorderFrameSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_liveSourceLayoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveSourceLayout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_liveSourceLayout.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backgroundImgUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundImgUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backgroundImgUrl.c_str(), allocator).Move(), allocator);
    }

}


SourceLayout BorderFrameSetting::GetLiveSourceLayout() const
{
    return m_liveSourceLayout;
}

void BorderFrameSetting::SetLiveSourceLayout(const SourceLayout& _liveSourceLayout)
{
    m_liveSourceLayout = _liveSourceLayout;
    m_liveSourceLayoutHasBeenSet = true;
}

bool BorderFrameSetting::LiveSourceLayoutHasBeenSet() const
{
    return m_liveSourceLayoutHasBeenSet;
}

string BorderFrameSetting::GetBackgroundImgUrl() const
{
    return m_backgroundImgUrl;
}

void BorderFrameSetting::SetBackgroundImgUrl(const string& _backgroundImgUrl)
{
    m_backgroundImgUrl = _backgroundImgUrl;
    m_backgroundImgUrlHasBeenSet = true;
}

bool BorderFrameSetting::BackgroundImgUrlHasBeenSet() const
{
    return m_backgroundImgUrlHasBeenSet;
}

