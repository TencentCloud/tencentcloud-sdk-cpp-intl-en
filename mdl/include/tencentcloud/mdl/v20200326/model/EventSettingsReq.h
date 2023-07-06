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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_EVENTSETTINGSREQ_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_EVENTSETTINGSREQ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/EventSettingsDestinationReq.h>
#include <tencentcloud/mdl/v20200326/model/SegmentationDescriptorInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Configuration information of an event in the plan
                */
                class EventSettingsReq : public AbstractModel
                {
                public:
                    EventSettingsReq();
                    ~EventSettingsReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Valid values: `INPUT_SWITCH`, `TIMED_RECORD`. If it is not specified, `INPUT_SWITCH` will be used.
                     * @return EventType Valid values: `INPUT_SWITCH`, `TIMED_RECORD`. If it is not specified, `INPUT_SWITCH` will be used.
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置Valid values: `INPUT_SWITCH`, `TIMED_RECORD`. If it is not specified, `INPUT_SWITCH` will be used.
                     * @param _eventType Valid values: `INPUT_SWITCH`, `TIMED_RECORD`. If it is not specified, `INPUT_SWITCH` will be used.
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取ID of the input to attach, which is required if `EventType` is `INPUT_SWITCH`
                     * @return InputAttachment ID of the input to attach, which is required if `EventType` is `INPUT_SWITCH`
                     * 
                     */
                    std::string GetInputAttachment() const;

                    /**
                     * 设置ID of the input to attach, which is required if `EventType` is `INPUT_SWITCH`
                     * @param _inputAttachment ID of the input to attach, which is required if `EventType` is `INPUT_SWITCH`
                     * 
                     */
                    void SetInputAttachment(const std::string& _inputAttachment);

                    /**
                     * 判断参数 InputAttachment 是否已赋值
                     * @return InputAttachment 是否已赋值
                     * 
                     */
                    bool InputAttachmentHasBeenSet() const;

                    /**
                     * 获取Name of the output group to attach. This parameter is required if `EventType` is `TIMED_RECORD`.
                     * @return OutputGroupName Name of the output group to attach. This parameter is required if `EventType` is `TIMED_RECORD`.
                     * 
                     */
                    std::string GetOutputGroupName() const;

                    /**
                     * 设置Name of the output group to attach. This parameter is required if `EventType` is `TIMED_RECORD`.
                     * @param _outputGroupName Name of the output group to attach. This parameter is required if `EventType` is `TIMED_RECORD`.
                     * 
                     */
                    void SetOutputGroupName(const std::string& _outputGroupName);

                    /**
                     * 判断参数 OutputGroupName 是否已赋值
                     * @return OutputGroupName 是否已赋值
                     * 
                     */
                    bool OutputGroupNameHasBeenSet() const;

                    /**
                     * 获取Name of the manifest file for timed recording, which must end with `.m3u8` for HLS and `.mpd` for DASH. This parameter is required if `EventType` is `TIMED_RECORD`.
                     * @return ManifestName Name of the manifest file for timed recording, which must end with `.m3u8` for HLS and `.mpd` for DASH. This parameter is required if `EventType` is `TIMED_RECORD`.
                     * 
                     */
                    std::string GetManifestName() const;

                    /**
                     * 设置Name of the manifest file for timed recording, which must end with `.m3u8` for HLS and `.mpd` for DASH. This parameter is required if `EventType` is `TIMED_RECORD`.
                     * @param _manifestName Name of the manifest file for timed recording, which must end with `.m3u8` for HLS and `.mpd` for DASH. This parameter is required if `EventType` is `TIMED_RECORD`.
                     * 
                     */
                    void SetManifestName(const std::string& _manifestName);

                    /**
                     * 判断参数 ManifestName 是否已赋值
                     * @return ManifestName 是否已赋值
                     * 
                     */
                    bool ManifestNameHasBeenSet() const;

                    /**
                     * 获取URL of the COS bucket to save recording files. This parameter is required if `EventType` is `TIMED_RECORD`. It may contain 1 or 2 URLs. The first URL corresponds to pipeline 0 and the second pipeline 1.
                     * @return Destinations URL of the COS bucket to save recording files. This parameter is required if `EventType` is `TIMED_RECORD`. It may contain 1 or 2 URLs. The first URL corresponds to pipeline 0 and the second pipeline 1.
                     * 
                     */
                    std::vector<EventSettingsDestinationReq> GetDestinations() const;

                    /**
                     * 设置URL of the COS bucket to save recording files. This parameter is required if `EventType` is `TIMED_RECORD`. It may contain 1 or 2 URLs. The first URL corresponds to pipeline 0 and the second pipeline 1.
                     * @param _destinations URL of the COS bucket to save recording files. This parameter is required if `EventType` is `TIMED_RECORD`. It may contain 1 or 2 URLs. The first URL corresponds to pipeline 0 and the second pipeline 1.
                     * 
                     */
                    void SetDestinations(const std::vector<EventSettingsDestinationReq>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     * 
                     */
                    bool DestinationsHasBeenSet() const;

                    /**
                     * 获取SCTE-35 configuration information.
                     * @return SCTE35SegmentationDescriptor SCTE-35 configuration information.
                     * 
                     */
                    std::vector<SegmentationDescriptorInfo> GetSCTE35SegmentationDescriptor() const;

                    /**
                     * 设置SCTE-35 configuration information.
                     * @param _sCTE35SegmentationDescriptor SCTE-35 configuration information.
                     * 
                     */
                    void SetSCTE35SegmentationDescriptor(const std::vector<SegmentationDescriptorInfo>& _sCTE35SegmentationDescriptor);

                    /**
                     * 判断参数 SCTE35SegmentationDescriptor 是否已赋值
                     * @return SCTE35SegmentationDescriptor 是否已赋值
                     * 
                     */
                    bool SCTE35SegmentationDescriptorHasBeenSet() const;

                    /**
                     * 获取A 32-bit unique segmentation event identifier.Only one occurrence of a given segmentation_event_id value shall be active at any one time.
                     * @return SpliceEventID A 32-bit unique segmentation event identifier.Only one occurrence of a given segmentation_event_id value shall be active at any one time.
                     * 
                     */
                    uint64_t GetSpliceEventID() const;

                    /**
                     * 设置A 32-bit unique segmentation event identifier.Only one occurrence of a given segmentation_event_id value shall be active at any one time.
                     * @param _spliceEventID A 32-bit unique segmentation event identifier.Only one occurrence of a given segmentation_event_id value shall be active at any one time.
                     * 
                     */
                    void SetSpliceEventID(const uint64_t& _spliceEventID);

                    /**
                     * 判断参数 SpliceEventID 是否已赋值
                     * @return SpliceEventID 是否已赋值
                     * 
                     */
                    bool SpliceEventIDHasBeenSet() const;

                    /**
                     * 获取The duration of the segment in 90kHz ticks.It used to  give the splicer an indication of when the break will be over and when the network In Point will occur. If not specifyed,the splice_insert will continue when enter a return_to_network to end the splice_insert at the appropriate time.
                     * @return SpliceDuration The duration of the segment in 90kHz ticks.It used to  give the splicer an indication of when the break will be over and when the network In Point will occur. If not specifyed,the splice_insert will continue when enter a return_to_network to end the splice_insert at the appropriate time.
                     * 
                     */
                    uint64_t GetSpliceDuration() const;

                    /**
                     * 设置The duration of the segment in 90kHz ticks.It used to  give the splicer an indication of when the break will be over and when the network In Point will occur. If not specifyed,the splice_insert will continue when enter a return_to_network to end the splice_insert at the appropriate time.
                     * @param _spliceDuration The duration of the segment in 90kHz ticks.It used to  give the splicer an indication of when the break will be over and when the network In Point will occur. If not specifyed,the splice_insert will continue when enter a return_to_network to end the splice_insert at the appropriate time.
                     * 
                     */
                    void SetSpliceDuration(const uint64_t& _spliceDuration);

                    /**
                     * 判断参数 SpliceDuration 是否已赋值
                     * @return SpliceDuration 是否已赋值
                     * 
                     */
                    bool SpliceDurationHasBeenSet() const;

                private:

                    /**
                     * Valid values: `INPUT_SWITCH`, `TIMED_RECORD`. If it is not specified, `INPUT_SWITCH` will be used.
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * ID of the input to attach, which is required if `EventType` is `INPUT_SWITCH`
                     */
                    std::string m_inputAttachment;
                    bool m_inputAttachmentHasBeenSet;

                    /**
                     * Name of the output group to attach. This parameter is required if `EventType` is `TIMED_RECORD`.
                     */
                    std::string m_outputGroupName;
                    bool m_outputGroupNameHasBeenSet;

                    /**
                     * Name of the manifest file for timed recording, which must end with `.m3u8` for HLS and `.mpd` for DASH. This parameter is required if `EventType` is `TIMED_RECORD`.
                     */
                    std::string m_manifestName;
                    bool m_manifestNameHasBeenSet;

                    /**
                     * URL of the COS bucket to save recording files. This parameter is required if `EventType` is `TIMED_RECORD`. It may contain 1 or 2 URLs. The first URL corresponds to pipeline 0 and the second pipeline 1.
                     */
                    std::vector<EventSettingsDestinationReq> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * SCTE-35 configuration information.
                     */
                    std::vector<SegmentationDescriptorInfo> m_sCTE35SegmentationDescriptor;
                    bool m_sCTE35SegmentationDescriptorHasBeenSet;

                    /**
                     * A 32-bit unique segmentation event identifier.Only one occurrence of a given segmentation_event_id value shall be active at any one time.
                     */
                    uint64_t m_spliceEventID;
                    bool m_spliceEventIDHasBeenSet;

                    /**
                     * The duration of the segment in 90kHz ticks.It used to  give the splicer an indication of when the break will be over and when the network In Point will occur. If not specifyed,the splice_insert will continue when enter a return_to_network to end the splice_insert at the appropriate time.
                     */
                    uint64_t m_spliceDuration;
                    bool m_spliceDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_EVENTSETTINGSREQ_H_
