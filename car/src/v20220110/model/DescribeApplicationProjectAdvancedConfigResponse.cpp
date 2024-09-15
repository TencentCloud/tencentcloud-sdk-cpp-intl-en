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

#include <tencentcloud/car/v20220110/model/DescribeApplicationProjectAdvancedConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

DescribeApplicationProjectAdvancedConfigResponse::DescribeApplicationProjectAdvancedConfigResponse() :
    m_applicationParamsHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_fPSHasBeenSet(false),
    m_minBitrateHasBeenSet(false),
    m_maxBitrateHasBeenSet(false),
    m_preloadDurationHasBeenSet(false),
    m_reconnectTimeoutHasBeenSet(false),
    m_upstreamAudioOptionHasBeenSet(false),
    m_videoEncodeConfigHasBeenSet(false),
    m_xRMaxWidthHasBeenSet(false),
    m_backgroundImageHasBeenSet(false),
    m_disableVideoCodecsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeApplicationProjectAdvancedConfigResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ApplicationParams") && !rsp["ApplicationParams"].IsNull())
    {
        if (!rsp["ApplicationParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationParams = string(rsp["ApplicationParams"].GetString());
        m_applicationParamsHasBeenSet = true;
    }

    if (rsp.HasMember("Resolution") && !rsp["Resolution"].IsNull())
    {
        if (!rsp["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(rsp["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (rsp.HasMember("FPS") && !rsp["FPS"].IsNull())
    {
        if (!rsp["FPS"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FPS` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fPS = rsp["FPS"].GetInt64();
        m_fPSHasBeenSet = true;
    }

    if (rsp.HasMember("MinBitrate") && !rsp["MinBitrate"].IsNull())
    {
        if (!rsp["MinBitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MinBitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minBitrate = rsp["MinBitrate"].GetInt64();
        m_minBitrateHasBeenSet = true;
    }

    if (rsp.HasMember("MaxBitrate") && !rsp["MaxBitrate"].IsNull())
    {
        if (!rsp["MaxBitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxBitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBitrate = rsp["MaxBitrate"].GetInt64();
        m_maxBitrateHasBeenSet = true;
    }

    if (rsp.HasMember("PreloadDuration") && !rsp["PreloadDuration"].IsNull())
    {
        if (!rsp["PreloadDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreloadDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preloadDuration = string(rsp["PreloadDuration"].GetString());
        m_preloadDurationHasBeenSet = true;
    }

    if (rsp.HasMember("ReconnectTimeout") && !rsp["ReconnectTimeout"].IsNull())
    {
        if (!rsp["ReconnectTimeout"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReconnectTimeout` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reconnectTimeout = string(rsp["ReconnectTimeout"].GetString());
        m_reconnectTimeoutHasBeenSet = true;
    }

    if (rsp.HasMember("UpstreamAudioOption") && !rsp["UpstreamAudioOption"].IsNull())
    {
        if (!rsp["UpstreamAudioOption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamAudioOption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamAudioOption = string(rsp["UpstreamAudioOption"].GetString());
        m_upstreamAudioOptionHasBeenSet = true;
    }

    if (rsp.HasMember("VideoEncodeConfig") && !rsp["VideoEncodeConfig"].IsNull())
    {
        if (!rsp["VideoEncodeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoEncodeConfig.Deserialize(rsp["VideoEncodeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoEncodeConfigHasBeenSet = true;
    }

    if (rsp.HasMember("XRMaxWidth") && !rsp["XRMaxWidth"].IsNull())
    {
        if (!rsp["XRMaxWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `XRMaxWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_xRMaxWidth = rsp["XRMaxWidth"].GetUint64();
        m_xRMaxWidthHasBeenSet = true;
    }

    if (rsp.HasMember("BackgroundImage") && !rsp["BackgroundImage"].IsNull())
    {
        if (!rsp["BackgroundImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackgroundImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backgroundImage.Deserialize(rsp["BackgroundImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backgroundImageHasBeenSet = true;
    }

    if (rsp.HasMember("DisableVideoCodecs") && !rsp["DisableVideoCodecs"].IsNull())
    {
        if (!rsp["DisableVideoCodecs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DisableVideoCodecs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DisableVideoCodecs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_disableVideoCodecs.push_back((*itr).GetString());
        }
        m_disableVideoCodecsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeApplicationProjectAdvancedConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_applicationParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationParams.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_fPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fPS, allocator);
    }

    if (m_minBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinBitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minBitrate, allocator);
    }

    if (m_maxBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBitrate, allocator);
    }

    if (m_preloadDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreloadDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preloadDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_reconnectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReconnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reconnectTimeout.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamAudioOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamAudioOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamAudioOption.c_str(), allocator).Move(), allocator);
    }

    if (m_videoEncodeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoEncodeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoEncodeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_xRMaxWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XRMaxWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xRMaxWidth, allocator);
    }

    if (m_backgroundImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backgroundImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_disableVideoCodecsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableVideoCodecs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_disableVideoCodecs.begin(); itr != m_disableVideoCodecs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeApplicationProjectAdvancedConfigResponse::GetApplicationParams() const
{
    return m_applicationParams;
}

bool DescribeApplicationProjectAdvancedConfigResponse::ApplicationParamsHasBeenSet() const
{
    return m_applicationParamsHasBeenSet;
}

string DescribeApplicationProjectAdvancedConfigResponse::GetResolution() const
{
    return m_resolution;
}

bool DescribeApplicationProjectAdvancedConfigResponse::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

int64_t DescribeApplicationProjectAdvancedConfigResponse::GetFPS() const
{
    return m_fPS;
}

bool DescribeApplicationProjectAdvancedConfigResponse::FPSHasBeenSet() const
{
    return m_fPSHasBeenSet;
}

int64_t DescribeApplicationProjectAdvancedConfigResponse::GetMinBitrate() const
{
    return m_minBitrate;
}

bool DescribeApplicationProjectAdvancedConfigResponse::MinBitrateHasBeenSet() const
{
    return m_minBitrateHasBeenSet;
}

int64_t DescribeApplicationProjectAdvancedConfigResponse::GetMaxBitrate() const
{
    return m_maxBitrate;
}

bool DescribeApplicationProjectAdvancedConfigResponse::MaxBitrateHasBeenSet() const
{
    return m_maxBitrateHasBeenSet;
}

string DescribeApplicationProjectAdvancedConfigResponse::GetPreloadDuration() const
{
    return m_preloadDuration;
}

bool DescribeApplicationProjectAdvancedConfigResponse::PreloadDurationHasBeenSet() const
{
    return m_preloadDurationHasBeenSet;
}

string DescribeApplicationProjectAdvancedConfigResponse::GetReconnectTimeout() const
{
    return m_reconnectTimeout;
}

bool DescribeApplicationProjectAdvancedConfigResponse::ReconnectTimeoutHasBeenSet() const
{
    return m_reconnectTimeoutHasBeenSet;
}

string DescribeApplicationProjectAdvancedConfigResponse::GetUpstreamAudioOption() const
{
    return m_upstreamAudioOption;
}

bool DescribeApplicationProjectAdvancedConfigResponse::UpstreamAudioOptionHasBeenSet() const
{
    return m_upstreamAudioOptionHasBeenSet;
}

VideoEncodeConfig DescribeApplicationProjectAdvancedConfigResponse::GetVideoEncodeConfig() const
{
    return m_videoEncodeConfig;
}

bool DescribeApplicationProjectAdvancedConfigResponse::VideoEncodeConfigHasBeenSet() const
{
    return m_videoEncodeConfigHasBeenSet;
}

uint64_t DescribeApplicationProjectAdvancedConfigResponse::GetXRMaxWidth() const
{
    return m_xRMaxWidth;
}

bool DescribeApplicationProjectAdvancedConfigResponse::XRMaxWidthHasBeenSet() const
{
    return m_xRMaxWidthHasBeenSet;
}

BackgroundImage DescribeApplicationProjectAdvancedConfigResponse::GetBackgroundImage() const
{
    return m_backgroundImage;
}

bool DescribeApplicationProjectAdvancedConfigResponse::BackgroundImageHasBeenSet() const
{
    return m_backgroundImageHasBeenSet;
}

vector<string> DescribeApplicationProjectAdvancedConfigResponse::GetDisableVideoCodecs() const
{
    return m_disableVideoCodecs;
}

bool DescribeApplicationProjectAdvancedConfigResponse::DisableVideoCodecsHasBeenSet() const
{
    return m_disableVideoCodecsHasBeenSet;
}


