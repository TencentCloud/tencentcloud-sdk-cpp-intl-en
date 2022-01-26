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

#include <tencentcloud/mdl/v20200326/model/DashRemuxSettingsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

DashRemuxSettingsInfo::DashRemuxSettingsInfo() :
    m_segmentDurationHasBeenSet(false),
    m_segmentNumberHasBeenSet(false),
    m_periodTriggersHasBeenSet(false)
{
}

CoreInternalOutcome DashRemuxSettingsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SegmentDuration") && !value["SegmentDuration"].IsNull())
    {
        if (!value["SegmentDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DashRemuxSettingsInfo.SegmentDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_segmentDuration = value["SegmentDuration"].GetUint64();
        m_segmentDurationHasBeenSet = true;
    }

    if (value.HasMember("SegmentNumber") && !value["SegmentNumber"].IsNull())
    {
        if (!value["SegmentNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DashRemuxSettingsInfo.SegmentNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_segmentNumber = value["SegmentNumber"].GetUint64();
        m_segmentNumberHasBeenSet = true;
    }

    if (value.HasMember("PeriodTriggers") && !value["PeriodTriggers"].IsNull())
    {
        if (!value["PeriodTriggers"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashRemuxSettingsInfo.PeriodTriggers` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodTriggers = string(value["PeriodTriggers"].GetString());
        m_periodTriggersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DashRemuxSettingsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_periodTriggersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodTriggers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodTriggers.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DashRemuxSettingsInfo::GetSegmentDuration() const
{
    return m_segmentDuration;
}

void DashRemuxSettingsInfo::SetSegmentDuration(const uint64_t& _segmentDuration)
{
    m_segmentDuration = _segmentDuration;
    m_segmentDurationHasBeenSet = true;
}

bool DashRemuxSettingsInfo::SegmentDurationHasBeenSet() const
{
    return m_segmentDurationHasBeenSet;
}

uint64_t DashRemuxSettingsInfo::GetSegmentNumber() const
{
    return m_segmentNumber;
}

void DashRemuxSettingsInfo::SetSegmentNumber(const uint64_t& _segmentNumber)
{
    m_segmentNumber = _segmentNumber;
    m_segmentNumberHasBeenSet = true;
}

bool DashRemuxSettingsInfo::SegmentNumberHasBeenSet() const
{
    return m_segmentNumberHasBeenSet;
}

string DashRemuxSettingsInfo::GetPeriodTriggers() const
{
    return m_periodTriggers;
}

void DashRemuxSettingsInfo::SetPeriodTriggers(const string& _periodTriggers)
{
    m_periodTriggers = _periodTriggers;
    m_periodTriggersHasBeenSet = true;
}

bool DashRemuxSettingsInfo::PeriodTriggersHasBeenSet() const
{
    return m_periodTriggersHasBeenSet;
}

