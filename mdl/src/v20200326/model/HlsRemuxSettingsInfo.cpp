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

#include <tencentcloud/mdl/v20200326/model/HlsRemuxSettingsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

HlsRemuxSettingsInfo::HlsRemuxSettingsInfo() :
    m_segmentDurationHasBeenSet(false),
    m_segmentNumberHasBeenSet(false),
    m_pdtInsertionHasBeenSet(false),
    m_pdtDurationHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_segmentTypeHasBeenSet(false),
    m_h265PackageTypeHasBeenSet(false),
    m_lowLatencyHasBeenSet(false),
    m_partialSegmentDurationHasBeenSet(false),
    m_partialSegmentPlaySiteHasBeenSet(false),
    m_streamOrderHasBeenSet(false),
    m_videoResolutionHasBeenSet(false),
    m_endListTagHasBeenSet(false),
    m_adMarkupTypeHasBeenSet(false)
{
}

CoreInternalOutcome HlsRemuxSettingsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SegmentDuration") && !value["SegmentDuration"].IsNull())
    {
        if (!value["SegmentDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HlsRemuxSettingsInfo.SegmentDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_segmentDuration = value["SegmentDuration"].GetUint64();
        m_segmentDurationHasBeenSet = true;
    }

    if (value.HasMember("SegmentNumber") && !value["SegmentNumber"].IsNull())
    {
        if (!value["SegmentNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HlsRemuxSettingsInfo.SegmentNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_segmentNumber = value["SegmentNumber"].GetUint64();
        m_segmentNumberHasBeenSet = true;
    }

    if (value.HasMember("PdtInsertion") && !value["PdtInsertion"].IsNull())
    {
        if (!value["PdtInsertion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HlsRemuxSettingsInfo.PdtInsertion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pdtInsertion = string(value["PdtInsertion"].GetString());
        m_pdtInsertionHasBeenSet = true;
    }

    if (value.HasMember("PdtDuration") && !value["PdtDuration"].IsNull())
    {
        if (!value["PdtDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HlsRemuxSettingsInfo.PdtDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pdtDuration = value["PdtDuration"].GetUint64();
        m_pdtDurationHasBeenSet = true;
    }

    if (value.HasMember("Scheme") && !value["Scheme"].IsNull())
    {
        if (!value["Scheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HlsRemuxSettingsInfo.Scheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheme = string(value["Scheme"].GetString());
        m_schemeHasBeenSet = true;
    }

    if (value.HasMember("SegmentType") && !value["SegmentType"].IsNull())
    {
        if (!value["SegmentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HlsRemuxSettingsInfo.SegmentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentType = string(value["SegmentType"].GetString());
        m_segmentTypeHasBeenSet = true;
    }

    if (value.HasMember("H265PackageType") && !value["H265PackageType"].IsNull())
    {
        if (!value["H265PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HlsRemuxSettingsInfo.H265PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_h265PackageType = string(value["H265PackageType"].GetString());
        m_h265PackageTypeHasBeenSet = true;
    }

    if (value.HasMember("LowLatency") && !value["LowLatency"].IsNull())
    {
        if (!value["LowLatency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HlsRemuxSettingsInfo.LowLatency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lowLatency = value["LowLatency"].GetUint64();
        m_lowLatencyHasBeenSet = true;
    }

    if (value.HasMember("PartialSegmentDuration") && !value["PartialSegmentDuration"].IsNull())
    {
        if (!value["PartialSegmentDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HlsRemuxSettingsInfo.PartialSegmentDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_partialSegmentDuration = value["PartialSegmentDuration"].GetUint64();
        m_partialSegmentDurationHasBeenSet = true;
    }

    if (value.HasMember("PartialSegmentPlaySite") && !value["PartialSegmentPlaySite"].IsNull())
    {
        if (!value["PartialSegmentPlaySite"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HlsRemuxSettingsInfo.PartialSegmentPlaySite` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_partialSegmentPlaySite = value["PartialSegmentPlaySite"].GetUint64();
        m_partialSegmentPlaySiteHasBeenSet = true;
    }

    if (value.HasMember("StreamOrder") && !value["StreamOrder"].IsNull())
    {
        if (!value["StreamOrder"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HlsRemuxSettingsInfo.StreamOrder` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_streamOrder = value["StreamOrder"].GetUint64();
        m_streamOrderHasBeenSet = true;
    }

    if (value.HasMember("VideoResolution") && !value["VideoResolution"].IsNull())
    {
        if (!value["VideoResolution"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HlsRemuxSettingsInfo.VideoResolution` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoResolution = value["VideoResolution"].GetUint64();
        m_videoResolutionHasBeenSet = true;
    }

    if (value.HasMember("EndListTag") && !value["EndListTag"].IsNull())
    {
        if (!value["EndListTag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HlsRemuxSettingsInfo.EndListTag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endListTag = value["EndListTag"].GetInt64();
        m_endListTagHasBeenSet = true;
    }

    if (value.HasMember("AdMarkupType") && !value["AdMarkupType"].IsNull())
    {
        if (!value["AdMarkupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HlsRemuxSettingsInfo.AdMarkupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adMarkupType = string(value["AdMarkupType"].GetString());
        m_adMarkupTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HlsRemuxSettingsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_segmentDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_segmentDuration, allocator);
    }

    if (m_segmentNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_segmentNumber, allocator);
    }

    if (m_pdtInsertionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdtInsertion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pdtInsertion.c_str(), allocator).Move(), allocator);
    }

    if (m_pdtDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdtDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pdtDuration, allocator);
    }

    if (m_schemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheme.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentType.c_str(), allocator).Move(), allocator);
    }

    if (m_h265PackageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "H265PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_h265PackageType.c_str(), allocator).Move(), allocator);
    }

    if (m_lowLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowLatency, allocator);
    }

    if (m_partialSegmentDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartialSegmentDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partialSegmentDuration, allocator);
    }

    if (m_partialSegmentPlaySiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartialSegmentPlaySite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partialSegmentPlaySite, allocator);
    }

    if (m_streamOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamOrder, allocator);
    }

    if (m_videoResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoResolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoResolution, allocator);
    }

    if (m_endListTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndListTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endListTag, allocator);
    }

    if (m_adMarkupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdMarkupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adMarkupType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t HlsRemuxSettingsInfo::GetSegmentDuration() const
{
    return m_segmentDuration;
}

void HlsRemuxSettingsInfo::SetSegmentDuration(const uint64_t& _segmentDuration)
{
    m_segmentDuration = _segmentDuration;
    m_segmentDurationHasBeenSet = true;
}

bool HlsRemuxSettingsInfo::SegmentDurationHasBeenSet() const
{
    return m_segmentDurationHasBeenSet;
}

uint64_t HlsRemuxSettingsInfo::GetSegmentNumber() const
{
    return m_segmentNumber;
}

void HlsRemuxSettingsInfo::SetSegmentNumber(const uint64_t& _segmentNumber)
{
    m_segmentNumber = _segmentNumber;
    m_segmentNumberHasBeenSet = true;
}

bool HlsRemuxSettingsInfo::SegmentNumberHasBeenSet() const
{
    return m_segmentNumberHasBeenSet;
}

string HlsRemuxSettingsInfo::GetPdtInsertion() const
{
    return m_pdtInsertion;
}

void HlsRemuxSettingsInfo::SetPdtInsertion(const string& _pdtInsertion)
{
    m_pdtInsertion = _pdtInsertion;
    m_pdtInsertionHasBeenSet = true;
}

bool HlsRemuxSettingsInfo::PdtInsertionHasBeenSet() const
{
    return m_pdtInsertionHasBeenSet;
}

uint64_t HlsRemuxSettingsInfo::GetPdtDuration() const
{
    return m_pdtDuration;
}

void HlsRemuxSettingsInfo::SetPdtDuration(const uint64_t& _pdtDuration)
{
    m_pdtDuration = _pdtDuration;
    m_pdtDurationHasBeenSet = true;
}

bool HlsRemuxSettingsInfo::PdtDurationHasBeenSet() const
{
    return m_pdtDurationHasBeenSet;
}

string HlsRemuxSettingsInfo::GetScheme() const
{
    return m_scheme;
}

void HlsRemuxSettingsInfo::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool HlsRemuxSettingsInfo::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

string HlsRemuxSettingsInfo::GetSegmentType() const
{
    return m_segmentType;
}

void HlsRemuxSettingsInfo::SetSegmentType(const string& _segmentType)
{
    m_segmentType = _segmentType;
    m_segmentTypeHasBeenSet = true;
}

bool HlsRemuxSettingsInfo::SegmentTypeHasBeenSet() const
{
    return m_segmentTypeHasBeenSet;
}

string HlsRemuxSettingsInfo::GetH265PackageType() const
{
    return m_h265PackageType;
}

void HlsRemuxSettingsInfo::SetH265PackageType(const string& _h265PackageType)
{
    m_h265PackageType = _h265PackageType;
    m_h265PackageTypeHasBeenSet = true;
}

bool HlsRemuxSettingsInfo::H265PackageTypeHasBeenSet() const
{
    return m_h265PackageTypeHasBeenSet;
}

uint64_t HlsRemuxSettingsInfo::GetLowLatency() const
{
    return m_lowLatency;
}

void HlsRemuxSettingsInfo::SetLowLatency(const uint64_t& _lowLatency)
{
    m_lowLatency = _lowLatency;
    m_lowLatencyHasBeenSet = true;
}

bool HlsRemuxSettingsInfo::LowLatencyHasBeenSet() const
{
    return m_lowLatencyHasBeenSet;
}

uint64_t HlsRemuxSettingsInfo::GetPartialSegmentDuration() const
{
    return m_partialSegmentDuration;
}

void HlsRemuxSettingsInfo::SetPartialSegmentDuration(const uint64_t& _partialSegmentDuration)
{
    m_partialSegmentDuration = _partialSegmentDuration;
    m_partialSegmentDurationHasBeenSet = true;
}

bool HlsRemuxSettingsInfo::PartialSegmentDurationHasBeenSet() const
{
    return m_partialSegmentDurationHasBeenSet;
}

uint64_t HlsRemuxSettingsInfo::GetPartialSegmentPlaySite() const
{
    return m_partialSegmentPlaySite;
}

void HlsRemuxSettingsInfo::SetPartialSegmentPlaySite(const uint64_t& _partialSegmentPlaySite)
{
    m_partialSegmentPlaySite = _partialSegmentPlaySite;
    m_partialSegmentPlaySiteHasBeenSet = true;
}

bool HlsRemuxSettingsInfo::PartialSegmentPlaySiteHasBeenSet() const
{
    return m_partialSegmentPlaySiteHasBeenSet;
}

uint64_t HlsRemuxSettingsInfo::GetStreamOrder() const
{
    return m_streamOrder;
}

void HlsRemuxSettingsInfo::SetStreamOrder(const uint64_t& _streamOrder)
{
    m_streamOrder = _streamOrder;
    m_streamOrderHasBeenSet = true;
}

bool HlsRemuxSettingsInfo::StreamOrderHasBeenSet() const
{
    return m_streamOrderHasBeenSet;
}

uint64_t HlsRemuxSettingsInfo::GetVideoResolution() const
{
    return m_videoResolution;
}

void HlsRemuxSettingsInfo::SetVideoResolution(const uint64_t& _videoResolution)
{
    m_videoResolution = _videoResolution;
    m_videoResolutionHasBeenSet = true;
}

bool HlsRemuxSettingsInfo::VideoResolutionHasBeenSet() const
{
    return m_videoResolutionHasBeenSet;
}

int64_t HlsRemuxSettingsInfo::GetEndListTag() const
{
    return m_endListTag;
}

void HlsRemuxSettingsInfo::SetEndListTag(const int64_t& _endListTag)
{
    m_endListTag = _endListTag;
    m_endListTagHasBeenSet = true;
}

bool HlsRemuxSettingsInfo::EndListTagHasBeenSet() const
{
    return m_endListTagHasBeenSet;
}

string HlsRemuxSettingsInfo::GetAdMarkupType() const
{
    return m_adMarkupType;
}

void HlsRemuxSettingsInfo::SetAdMarkupType(const string& _adMarkupType)
{
    m_adMarkupType = _adMarkupType;
    m_adMarkupTypeHasBeenSet = true;
}

bool HlsRemuxSettingsInfo::AdMarkupTypeHasBeenSet() const
{
    return m_adMarkupTypeHasBeenSet;
}

