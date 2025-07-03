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

#include <tencentcloud/mdl/v20200326/model/EventSettingsReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

EventSettingsReq::EventSettingsReq() :
    m_eventTypeHasBeenSet(false),
    m_inputAttachmentHasBeenSet(false),
    m_outputGroupNameHasBeenSet(false),
    m_manifestNameHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_sCTE35SegmentationDescriptorHasBeenSet(false),
    m_spliceEventIDHasBeenSet(false),
    m_spliceDurationHasBeenSet(false),
    m_timedMetadataSettingHasBeenSet(false),
    m_staticImageActivateSettingHasBeenSet(false),
    m_staticImageDeactivateSettingHasBeenSet(false)
{
}

CoreInternalOutcome EventSettingsReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventSettingsReq.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("InputAttachment") && !value["InputAttachment"].IsNull())
    {
        if (!value["InputAttachment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventSettingsReq.InputAttachment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputAttachment = string(value["InputAttachment"].GetString());
        m_inputAttachmentHasBeenSet = true;
    }

    if (value.HasMember("OutputGroupName") && !value["OutputGroupName"].IsNull())
    {
        if (!value["OutputGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventSettingsReq.OutputGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputGroupName = string(value["OutputGroupName"].GetString());
        m_outputGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ManifestName") && !value["ManifestName"].IsNull())
    {
        if (!value["ManifestName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventSettingsReq.ManifestName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manifestName = string(value["ManifestName"].GetString());
        m_manifestNameHasBeenSet = true;
    }

    if (value.HasMember("Destinations") && !value["Destinations"].IsNull())
    {
        if (!value["Destinations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventSettingsReq.Destinations` is not array type"));

        const rapidjson::Value &tmpValue = value["Destinations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventSettingsDestinationReq item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_destinations.push_back(item);
        }
        m_destinationsHasBeenSet = true;
    }

    if (value.HasMember("SCTE35SegmentationDescriptor") && !value["SCTE35SegmentationDescriptor"].IsNull())
    {
        if (!value["SCTE35SegmentationDescriptor"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventSettingsReq.SCTE35SegmentationDescriptor` is not array type"));

        const rapidjson::Value &tmpValue = value["SCTE35SegmentationDescriptor"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SegmentationDescriptorInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sCTE35SegmentationDescriptor.push_back(item);
        }
        m_sCTE35SegmentationDescriptorHasBeenSet = true;
    }

    if (value.HasMember("SpliceEventID") && !value["SpliceEventID"].IsNull())
    {
        if (!value["SpliceEventID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventSettingsReq.SpliceEventID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_spliceEventID = value["SpliceEventID"].GetUint64();
        m_spliceEventIDHasBeenSet = true;
    }

    if (value.HasMember("SpliceDuration") && !value["SpliceDuration"].IsNull())
    {
        if (!value["SpliceDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventSettingsReq.SpliceDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_spliceDuration = value["SpliceDuration"].GetUint64();
        m_spliceDurationHasBeenSet = true;
    }

    if (value.HasMember("TimedMetadataSetting") && !value["TimedMetadataSetting"].IsNull())
    {
        if (!value["TimedMetadataSetting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventSettingsReq.TimedMetadataSetting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timedMetadataSetting.Deserialize(value["TimedMetadataSetting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timedMetadataSettingHasBeenSet = true;
    }

    if (value.HasMember("StaticImageActivateSetting") && !value["StaticImageActivateSetting"].IsNull())
    {
        if (!value["StaticImageActivateSetting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventSettingsReq.StaticImageActivateSetting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_staticImageActivateSetting.Deserialize(value["StaticImageActivateSetting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_staticImageActivateSettingHasBeenSet = true;
    }

    if (value.HasMember("StaticImageDeactivateSetting") && !value["StaticImageDeactivateSetting"].IsNull())
    {
        if (!value["StaticImageDeactivateSetting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventSettingsReq.StaticImageDeactivateSetting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_staticImageDeactivateSetting.Deserialize(value["StaticImageDeactivateSetting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_staticImageDeactivateSettingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventSettingsReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_inputAttachmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputAttachment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputAttachment.c_str(), allocator).Move(), allocator);
    }

    if (m_outputGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_manifestNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManifestName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manifestName.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destinations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinations.begin(); itr != m_destinations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sCTE35SegmentationDescriptorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SCTE35SegmentationDescriptor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sCTE35SegmentationDescriptor.begin(); itr != m_sCTE35SegmentationDescriptor.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_spliceEventIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpliceEventID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spliceEventID, allocator);
    }

    if (m_spliceDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpliceDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spliceDuration, allocator);
    }

    if (m_timedMetadataSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimedMetadataSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timedMetadataSetting.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_staticImageActivateSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticImageActivateSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_staticImageActivateSetting.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_staticImageDeactivateSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticImageDeactivateSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_staticImageDeactivateSetting.ToJsonObject(value[key.c_str()], allocator);
    }

}


string EventSettingsReq::GetEventType() const
{
    return m_eventType;
}

void EventSettingsReq::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool EventSettingsReq::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string EventSettingsReq::GetInputAttachment() const
{
    return m_inputAttachment;
}

void EventSettingsReq::SetInputAttachment(const string& _inputAttachment)
{
    m_inputAttachment = _inputAttachment;
    m_inputAttachmentHasBeenSet = true;
}

bool EventSettingsReq::InputAttachmentHasBeenSet() const
{
    return m_inputAttachmentHasBeenSet;
}

string EventSettingsReq::GetOutputGroupName() const
{
    return m_outputGroupName;
}

void EventSettingsReq::SetOutputGroupName(const string& _outputGroupName)
{
    m_outputGroupName = _outputGroupName;
    m_outputGroupNameHasBeenSet = true;
}

bool EventSettingsReq::OutputGroupNameHasBeenSet() const
{
    return m_outputGroupNameHasBeenSet;
}

string EventSettingsReq::GetManifestName() const
{
    return m_manifestName;
}

void EventSettingsReq::SetManifestName(const string& _manifestName)
{
    m_manifestName = _manifestName;
    m_manifestNameHasBeenSet = true;
}

bool EventSettingsReq::ManifestNameHasBeenSet() const
{
    return m_manifestNameHasBeenSet;
}

vector<EventSettingsDestinationReq> EventSettingsReq::GetDestinations() const
{
    return m_destinations;
}

void EventSettingsReq::SetDestinations(const vector<EventSettingsDestinationReq>& _destinations)
{
    m_destinations = _destinations;
    m_destinationsHasBeenSet = true;
}

bool EventSettingsReq::DestinationsHasBeenSet() const
{
    return m_destinationsHasBeenSet;
}

vector<SegmentationDescriptorInfo> EventSettingsReq::GetSCTE35SegmentationDescriptor() const
{
    return m_sCTE35SegmentationDescriptor;
}

void EventSettingsReq::SetSCTE35SegmentationDescriptor(const vector<SegmentationDescriptorInfo>& _sCTE35SegmentationDescriptor)
{
    m_sCTE35SegmentationDescriptor = _sCTE35SegmentationDescriptor;
    m_sCTE35SegmentationDescriptorHasBeenSet = true;
}

bool EventSettingsReq::SCTE35SegmentationDescriptorHasBeenSet() const
{
    return m_sCTE35SegmentationDescriptorHasBeenSet;
}

uint64_t EventSettingsReq::GetSpliceEventID() const
{
    return m_spliceEventID;
}

void EventSettingsReq::SetSpliceEventID(const uint64_t& _spliceEventID)
{
    m_spliceEventID = _spliceEventID;
    m_spliceEventIDHasBeenSet = true;
}

bool EventSettingsReq::SpliceEventIDHasBeenSet() const
{
    return m_spliceEventIDHasBeenSet;
}

uint64_t EventSettingsReq::GetSpliceDuration() const
{
    return m_spliceDuration;
}

void EventSettingsReq::SetSpliceDuration(const uint64_t& _spliceDuration)
{
    m_spliceDuration = _spliceDuration;
    m_spliceDurationHasBeenSet = true;
}

bool EventSettingsReq::SpliceDurationHasBeenSet() const
{
    return m_spliceDurationHasBeenSet;
}

TimedMetadataInfo EventSettingsReq::GetTimedMetadataSetting() const
{
    return m_timedMetadataSetting;
}

void EventSettingsReq::SetTimedMetadataSetting(const TimedMetadataInfo& _timedMetadataSetting)
{
    m_timedMetadataSetting = _timedMetadataSetting;
    m_timedMetadataSettingHasBeenSet = true;
}

bool EventSettingsReq::TimedMetadataSettingHasBeenSet() const
{
    return m_timedMetadataSettingHasBeenSet;
}

StaticImageActivateSetting EventSettingsReq::GetStaticImageActivateSetting() const
{
    return m_staticImageActivateSetting;
}

void EventSettingsReq::SetStaticImageActivateSetting(const StaticImageActivateSetting& _staticImageActivateSetting)
{
    m_staticImageActivateSetting = _staticImageActivateSetting;
    m_staticImageActivateSettingHasBeenSet = true;
}

bool EventSettingsReq::StaticImageActivateSettingHasBeenSet() const
{
    return m_staticImageActivateSettingHasBeenSet;
}

StaticImageDeactivateSetting EventSettingsReq::GetStaticImageDeactivateSetting() const
{
    return m_staticImageDeactivateSetting;
}

void EventSettingsReq::SetStaticImageDeactivateSetting(const StaticImageDeactivateSetting& _staticImageDeactivateSetting)
{
    m_staticImageDeactivateSetting = _staticImageDeactivateSetting;
    m_staticImageDeactivateSettingHasBeenSet = true;
}

bool EventSettingsReq::StaticImageDeactivateSettingHasBeenSet() const
{
    return m_staticImageDeactivateSettingHasBeenSet;
}

