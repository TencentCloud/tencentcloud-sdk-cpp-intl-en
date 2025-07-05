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

#include <tencentcloud/mdl/v20200326/model/StaticImageActivateSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

StaticImageActivateSetting::StaticImageActivateSetting() :
    m_imageUrlHasBeenSet(false),
    m_layerHasBeenSet(false),
    m_opacityHasBeenSet(false),
    m_imageXHasBeenSet(false),
    m_imageYHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_fadeInHasBeenSet(false),
    m_fadeOutHasBeenSet(false)
{
}

CoreInternalOutcome StaticImageActivateSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticImageActivateSetting.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("Layer") && !value["Layer"].IsNull())
    {
        if (!value["Layer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticImageActivateSetting.Layer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_layer = value["Layer"].GetInt64();
        m_layerHasBeenSet = true;
    }

    if (value.HasMember("Opacity") && !value["Opacity"].IsNull())
    {
        if (!value["Opacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticImageActivateSetting.Opacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_opacity = value["Opacity"].GetInt64();
        m_opacityHasBeenSet = true;
    }

    if (value.HasMember("ImageX") && !value["ImageX"].IsNull())
    {
        if (!value["ImageX"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticImageActivateSetting.ImageX` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageX = value["ImageX"].GetInt64();
        m_imageXHasBeenSet = true;
    }

    if (value.HasMember("ImageY") && !value["ImageY"].IsNull())
    {
        if (!value["ImageY"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticImageActivateSetting.ImageY` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageY = value["ImageY"].GetInt64();
        m_imageYHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticImageActivateSetting.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticImageActivateSetting.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticImageActivateSetting.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("FadeIn") && !value["FadeIn"].IsNull())
    {
        if (!value["FadeIn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticImageActivateSetting.FadeIn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fadeIn = value["FadeIn"].GetInt64();
        m_fadeInHasBeenSet = true;
    }

    if (value.HasMember("FadeOut") && !value["FadeOut"].IsNull())
    {
        if (!value["FadeOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticImageActivateSetting.FadeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fadeOut = value["FadeOut"].GetInt64();
        m_fadeOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StaticImageActivateSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_layerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Layer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layer, allocator);
    }

    if (m_opacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Opacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_opacity, allocator);
    }

    if (m_imageXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageX, allocator);
    }

    if (m_imageYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageY, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_fadeInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FadeIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fadeIn, allocator);
    }

    if (m_fadeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FadeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fadeOut, allocator);
    }

}


string StaticImageActivateSetting::GetImageUrl() const
{
    return m_imageUrl;
}

void StaticImageActivateSetting::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool StaticImageActivateSetting::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

int64_t StaticImageActivateSetting::GetLayer() const
{
    return m_layer;
}

void StaticImageActivateSetting::SetLayer(const int64_t& _layer)
{
    m_layer = _layer;
    m_layerHasBeenSet = true;
}

bool StaticImageActivateSetting::LayerHasBeenSet() const
{
    return m_layerHasBeenSet;
}

int64_t StaticImageActivateSetting::GetOpacity() const
{
    return m_opacity;
}

void StaticImageActivateSetting::SetOpacity(const int64_t& _opacity)
{
    m_opacity = _opacity;
    m_opacityHasBeenSet = true;
}

bool StaticImageActivateSetting::OpacityHasBeenSet() const
{
    return m_opacityHasBeenSet;
}

int64_t StaticImageActivateSetting::GetImageX() const
{
    return m_imageX;
}

void StaticImageActivateSetting::SetImageX(const int64_t& _imageX)
{
    m_imageX = _imageX;
    m_imageXHasBeenSet = true;
}

bool StaticImageActivateSetting::ImageXHasBeenSet() const
{
    return m_imageXHasBeenSet;
}

int64_t StaticImageActivateSetting::GetImageY() const
{
    return m_imageY;
}

void StaticImageActivateSetting::SetImageY(const int64_t& _imageY)
{
    m_imageY = _imageY;
    m_imageYHasBeenSet = true;
}

bool StaticImageActivateSetting::ImageYHasBeenSet() const
{
    return m_imageYHasBeenSet;
}

int64_t StaticImageActivateSetting::GetWidth() const
{
    return m_width;
}

void StaticImageActivateSetting::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool StaticImageActivateSetting::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t StaticImageActivateSetting::GetHeight() const
{
    return m_height;
}

void StaticImageActivateSetting::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool StaticImageActivateSetting::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t StaticImageActivateSetting::GetDuration() const
{
    return m_duration;
}

void StaticImageActivateSetting::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool StaticImageActivateSetting::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t StaticImageActivateSetting::GetFadeIn() const
{
    return m_fadeIn;
}

void StaticImageActivateSetting::SetFadeIn(const int64_t& _fadeIn)
{
    m_fadeIn = _fadeIn;
    m_fadeInHasBeenSet = true;
}

bool StaticImageActivateSetting::FadeInHasBeenSet() const
{
    return m_fadeInHasBeenSet;
}

int64_t StaticImageActivateSetting::GetFadeOut() const
{
    return m_fadeOut;
}

void StaticImageActivateSetting::SetFadeOut(const int64_t& _fadeOut)
{
    m_fadeOut = _fadeOut;
    m_fadeOutHasBeenSet = true;
}

bool StaticImageActivateSetting::FadeOutHasBeenSet() const
{
    return m_fadeOutHasBeenSet;
}

