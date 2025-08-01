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

#include <tencentcloud/mdl/v20200326/model/SegmentationDescriptorRespInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

SegmentationDescriptorRespInfo::SegmentationDescriptorRespInfo() :
    m_eventIDHasBeenSet(false),
    m_eventCancelIndicatorHasBeenSet(false),
    m_deliveryRestrictionsHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_uPIDTypeHasBeenSet(false),
    m_uPIDHasBeenSet(false),
    m_typeIDHasBeenSet(false),
    m_numHasBeenSet(false),
    m_expectedHasBeenSet(false),
    m_subSegmentNumHasBeenSet(false),
    m_subSegmentsExpectedHasBeenSet(false)
{
}

CoreInternalOutcome SegmentationDescriptorRespInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventID") && !value["EventID"].IsNull())
    {
        if (!value["EventID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationDescriptorRespInfo.EventID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventID = value["EventID"].GetUint64();
        m_eventIDHasBeenSet = true;
    }

    if (value.HasMember("EventCancelIndicator") && !value["EventCancelIndicator"].IsNull())
    {
        if (!value["EventCancelIndicator"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationDescriptorRespInfo.EventCancelIndicator` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCancelIndicator = value["EventCancelIndicator"].GetUint64();
        m_eventCancelIndicatorHasBeenSet = true;
    }

    if (value.HasMember("DeliveryRestrictions") && !value["DeliveryRestrictions"].IsNull())
    {
        if (!value["DeliveryRestrictions"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationDescriptorRespInfo.DeliveryRestrictions` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deliveryRestrictions.Deserialize(value["DeliveryRestrictions"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deliveryRestrictionsHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationDescriptorRespInfo.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("UPIDType") && !value["UPIDType"].IsNull())
    {
        if (!value["UPIDType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationDescriptorRespInfo.UPIDType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uPIDType = value["UPIDType"].GetUint64();
        m_uPIDTypeHasBeenSet = true;
    }

    if (value.HasMember("UPID") && !value["UPID"].IsNull())
    {
        if (!value["UPID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationDescriptorRespInfo.UPID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uPID = string(value["UPID"].GetString());
        m_uPIDHasBeenSet = true;
    }

    if (value.HasMember("TypeID") && !value["TypeID"].IsNull())
    {
        if (!value["TypeID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationDescriptorRespInfo.TypeID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_typeID = value["TypeID"].GetUint64();
        m_typeIDHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationDescriptorRespInfo.Num` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetUint64();
        m_numHasBeenSet = true;
    }

    if (value.HasMember("Expected") && !value["Expected"].IsNull())
    {
        if (!value["Expected"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationDescriptorRespInfo.Expected` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expected = value["Expected"].GetUint64();
        m_expectedHasBeenSet = true;
    }

    if (value.HasMember("SubSegmentNum") && !value["SubSegmentNum"].IsNull())
    {
        if (!value["SubSegmentNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationDescriptorRespInfo.SubSegmentNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subSegmentNum = value["SubSegmentNum"].GetUint64();
        m_subSegmentNumHasBeenSet = true;
    }

    if (value.HasMember("SubSegmentsExpected") && !value["SubSegmentsExpected"].IsNull())
    {
        if (!value["SubSegmentsExpected"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationDescriptorRespInfo.SubSegmentsExpected` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subSegmentsExpected = value["SubSegmentsExpected"].GetUint64();
        m_subSegmentsExpectedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SegmentationDescriptorRespInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventID, allocator);
    }

    if (m_eventCancelIndicatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCancelIndicator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCancelIndicator, allocator);
    }

    if (m_deliveryRestrictionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryRestrictions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deliveryRestrictions.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_uPIDTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UPIDType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uPIDType, allocator);
    }

    if (m_uPIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UPID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uPID.c_str(), allocator).Move(), allocator);
    }

    if (m_typeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_typeID, allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

    if (m_expectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expected, allocator);
    }

    if (m_subSegmentNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubSegmentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subSegmentNum, allocator);
    }

    if (m_subSegmentsExpectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubSegmentsExpected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subSegmentsExpected, allocator);
    }

}


uint64_t SegmentationDescriptorRespInfo::GetEventID() const
{
    return m_eventID;
}

void SegmentationDescriptorRespInfo::SetEventID(const uint64_t& _eventID)
{
    m_eventID = _eventID;
    m_eventIDHasBeenSet = true;
}

bool SegmentationDescriptorRespInfo::EventIDHasBeenSet() const
{
    return m_eventIDHasBeenSet;
}

uint64_t SegmentationDescriptorRespInfo::GetEventCancelIndicator() const
{
    return m_eventCancelIndicator;
}

void SegmentationDescriptorRespInfo::SetEventCancelIndicator(const uint64_t& _eventCancelIndicator)
{
    m_eventCancelIndicator = _eventCancelIndicator;
    m_eventCancelIndicatorHasBeenSet = true;
}

bool SegmentationDescriptorRespInfo::EventCancelIndicatorHasBeenSet() const
{
    return m_eventCancelIndicatorHasBeenSet;
}

DeliveryRestrictionsInfo SegmentationDescriptorRespInfo::GetDeliveryRestrictions() const
{
    return m_deliveryRestrictions;
}

void SegmentationDescriptorRespInfo::SetDeliveryRestrictions(const DeliveryRestrictionsInfo& _deliveryRestrictions)
{
    m_deliveryRestrictions = _deliveryRestrictions;
    m_deliveryRestrictionsHasBeenSet = true;
}

bool SegmentationDescriptorRespInfo::DeliveryRestrictionsHasBeenSet() const
{
    return m_deliveryRestrictionsHasBeenSet;
}

string SegmentationDescriptorRespInfo::GetDuration() const
{
    return m_duration;
}

void SegmentationDescriptorRespInfo::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool SegmentationDescriptorRespInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

uint64_t SegmentationDescriptorRespInfo::GetUPIDType() const
{
    return m_uPIDType;
}

void SegmentationDescriptorRespInfo::SetUPIDType(const uint64_t& _uPIDType)
{
    m_uPIDType = _uPIDType;
    m_uPIDTypeHasBeenSet = true;
}

bool SegmentationDescriptorRespInfo::UPIDTypeHasBeenSet() const
{
    return m_uPIDTypeHasBeenSet;
}

string SegmentationDescriptorRespInfo::GetUPID() const
{
    return m_uPID;
}

void SegmentationDescriptorRespInfo::SetUPID(const string& _uPID)
{
    m_uPID = _uPID;
    m_uPIDHasBeenSet = true;
}

bool SegmentationDescriptorRespInfo::UPIDHasBeenSet() const
{
    return m_uPIDHasBeenSet;
}

uint64_t SegmentationDescriptorRespInfo::GetTypeID() const
{
    return m_typeID;
}

void SegmentationDescriptorRespInfo::SetTypeID(const uint64_t& _typeID)
{
    m_typeID = _typeID;
    m_typeIDHasBeenSet = true;
}

bool SegmentationDescriptorRespInfo::TypeIDHasBeenSet() const
{
    return m_typeIDHasBeenSet;
}

uint64_t SegmentationDescriptorRespInfo::GetNum() const
{
    return m_num;
}

void SegmentationDescriptorRespInfo::SetNum(const uint64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool SegmentationDescriptorRespInfo::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

uint64_t SegmentationDescriptorRespInfo::GetExpected() const
{
    return m_expected;
}

void SegmentationDescriptorRespInfo::SetExpected(const uint64_t& _expected)
{
    m_expected = _expected;
    m_expectedHasBeenSet = true;
}

bool SegmentationDescriptorRespInfo::ExpectedHasBeenSet() const
{
    return m_expectedHasBeenSet;
}

uint64_t SegmentationDescriptorRespInfo::GetSubSegmentNum() const
{
    return m_subSegmentNum;
}

void SegmentationDescriptorRespInfo::SetSubSegmentNum(const uint64_t& _subSegmentNum)
{
    m_subSegmentNum = _subSegmentNum;
    m_subSegmentNumHasBeenSet = true;
}

bool SegmentationDescriptorRespInfo::SubSegmentNumHasBeenSet() const
{
    return m_subSegmentNumHasBeenSet;
}

uint64_t SegmentationDescriptorRespInfo::GetSubSegmentsExpected() const
{
    return m_subSegmentsExpected;
}

void SegmentationDescriptorRespInfo::SetSubSegmentsExpected(const uint64_t& _subSegmentsExpected)
{
    m_subSegmentsExpected = _subSegmentsExpected;
    m_subSegmentsExpectedHasBeenSet = true;
}

bool SegmentationDescriptorRespInfo::SubSegmentsExpectedHasBeenSet() const
{
    return m_subSegmentsExpectedHasBeenSet;
}

