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

#include <tencentcloud/mdl/v20200326/model/GeneralSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

GeneralSetting::GeneralSetting() :
    m_staticImageSettingsHasBeenSet(false),
    m_motionGraphicsSettingsHasBeenSet(false),
    m_thumbnailSettingsHasBeenSet(false)
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

    if (value.HasMember("MotionGraphicsSettings") && !value["MotionGraphicsSettings"].IsNull())
    {
        if (!value["MotionGraphicsSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralSetting.MotionGraphicsSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_motionGraphicsSettings.Deserialize(value["MotionGraphicsSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_motionGraphicsSettingsHasBeenSet = true;
    }

    if (value.HasMember("ThumbnailSettings") && !value["ThumbnailSettings"].IsNull())
    {
        if (!value["ThumbnailSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralSetting.ThumbnailSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_thumbnailSettings.Deserialize(value["ThumbnailSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_thumbnailSettingsHasBeenSet = true;
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

    if (m_motionGraphicsSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MotionGraphicsSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_motionGraphicsSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_thumbnailSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThumbnailSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_thumbnailSettings.ToJsonObject(value[key.c_str()], allocator);
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

MotionGraphicsSetting GeneralSetting::GetMotionGraphicsSettings() const
{
    return m_motionGraphicsSettings;
}

void GeneralSetting::SetMotionGraphicsSettings(const MotionGraphicsSetting& _motionGraphicsSettings)
{
    m_motionGraphicsSettings = _motionGraphicsSettings;
    m_motionGraphicsSettingsHasBeenSet = true;
}

bool GeneralSetting::MotionGraphicsSettingsHasBeenSet() const
{
    return m_motionGraphicsSettingsHasBeenSet;
}

ThumbnailSettings GeneralSetting::GetThumbnailSettings() const
{
    return m_thumbnailSettings;
}

void GeneralSetting::SetThumbnailSettings(const ThumbnailSettings& _thumbnailSettings)
{
    m_thumbnailSettings = _thumbnailSettings;
    m_thumbnailSettingsHasBeenSet = true;
}

bool GeneralSetting::ThumbnailSettingsHasBeenSet() const
{
    return m_thumbnailSettingsHasBeenSet;
}

