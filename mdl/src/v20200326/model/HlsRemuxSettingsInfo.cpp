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
    m_schemeHasBeenSet(false)
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

