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

#include <tencentcloud/mdl/v20200326/model/GeneralSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

GeneralSetting::GeneralSetting() :
    m_staticImageSettingsHasBeenSet(false)
{
}

CoreInternalOutcome GeneralSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StaticImageSettings") && !value["StaticImageSettings"].IsNull())
    {
        if (!value["StaticImageSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralSetting.StaticImageSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_staticImageSettings.Deserialize(value["StaticImageSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_staticImageSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GeneralSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_staticImageSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticImageSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_staticImageSettings.ToJsonObject(value[key.c_str()], allocator);
    }

}


StaticImageSettings GeneralSetting::GetStaticImageSettings() const
{
    return m_staticImageSettings;
}

void GeneralSetting::SetStaticImageSettings(const StaticImageSettings& _staticImageSettings)
{
    m_staticImageSettings = _staticImageSettings;
    m_staticImageSettingsHasBeenSet = true;
}

bool GeneralSetting::StaticImageSettingsHasBeenSet() const
{
    return m_staticImageSettingsHasBeenSet;
}

