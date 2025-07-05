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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_SEGMENTATIONDESCRIPTORINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_SEGMENTATIONDESCRIPTORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/DeliveryRestrictionsInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * SCTE-35 configuration information.
                */
                class SegmentationDescriptorInfo : public AbstractModel
                {
                public:
                    SegmentationDescriptorInfo();
                    ~SegmentationDescriptorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取A 32-bit unique segmentation event identifier. Only one occurrence of a given segmentation_event_id value shall be active at any one time.
                     * @return EventID A 32-bit unique segmentation event identifier. Only one occurrence of a given segmentation_event_id value shall be active at any one time.
                     * 
                     */
                    uint64_t GetEventID() const;

                    /**
                     * 设置A 32-bit unique segmentation event identifier. Only one occurrence of a given segmentation_event_id value shall be active at any one time.
                     * @param _eventID A 32-bit unique segmentation event identifier. Only one occurrence of a given segmentation_event_id value shall be active at any one time.
                     * 
                     */
                    void SetEventID(const uint64_t& _eventID);

                    /**
                     * 判断参数 EventID 是否已赋值
                     * @return EventID 是否已赋值
                     * 
                     */
                    bool EventIDHasBeenSet() const;

                    /**
                     * 获取Indicates that a previously sent segmentation event, identified by segmentation_event_id, has been cancelled.
                     * @return EventCancelIndicator Indicates that a previously sent segmentation event, identified by segmentation_event_id, has been cancelled.
                     * 
                     */
                    uint64_t GetEventCancelIndicator() const;

                    /**
                     * 设置Indicates that a previously sent segmentation event, identified by segmentation_event_id, has been cancelled.
                     * @param _eventCancelIndicator Indicates that a previously sent segmentation event, identified by segmentation_event_id, has been cancelled.
                     * 
                     */
                    void SetEventCancelIndicator(const uint64_t& _eventCancelIndicator);

                    /**
                     * 判断参数 EventCancelIndicator 是否已赋值
                     * @return EventCancelIndicator 是否已赋值
                     * 
                     */
                    bool EventCancelIndicatorHasBeenSet() const;

                    /**
                     * 获取Distribution configuration.
                     * @return DeliveryRestrictions Distribution configuration.
                     * 
                     */
                    DeliveryRestrictionsInfo GetDeliveryRestrictions() const;

                    /**
                     * 设置Distribution configuration.
                     * @param _deliveryRestrictions Distribution configuration.
                     * 
                     */
                    void SetDeliveryRestrictions(const DeliveryRestrictionsInfo& _deliveryRestrictions);

                    /**
                     * 判断参数 DeliveryRestrictions 是否已赋值
                     * @return DeliveryRestrictions 是否已赋值
                     * 
                     */
                    bool DeliveryRestrictionsHasBeenSet() const;

                    /**
                     * 获取The duration of the segment in 90kHz ticks. indicat when the segment will be over and when the next segmentation message will occur.Shall be 0 for end messages.the time signal will continue until insert a cancellation message when not specify the duration.
                     * @return Duration The duration of the segment in 90kHz ticks. indicat when the segment will be over and when the next segmentation message will occur.Shall be 0 for end messages.the time signal will continue until insert a cancellation message when not specify the duration.
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置The duration of the segment in 90kHz ticks. indicat when the segment will be over and when the next segmentation message will occur.Shall be 0 for end messages.the time signal will continue until insert a cancellation message when not specify the duration.
                     * @param _duration The duration of the segment in 90kHz ticks. indicat when the segment will be over and when the next segmentation message will occur.Shall be 0 for end messages.the time signal will continue until insert a cancellation message when not specify the duration.
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Corresponds to SCTE-35 segmentation_upid_type parameter.
                     * @return UPIDType Corresponds to SCTE-35 segmentation_upid_type parameter.
                     * 
                     */
                    uint64_t GetUPIDType() const;

                    /**
                     * 设置Corresponds to SCTE-35 segmentation_upid_type parameter.
                     * @param _uPIDType Corresponds to SCTE-35 segmentation_upid_type parameter.
                     * 
                     */
                    void SetUPIDType(const uint64_t& _uPIDType);

                    /**
                     * 判断参数 UPIDType 是否已赋值
                     * @return UPIDType 是否已赋值
                     * 
                     */
                    bool UPIDTypeHasBeenSet() const;

                    /**
                     * 获取Corresponds to SCTE-35 segmentation_upid. 
                     * @return UPID Corresponds to SCTE-35 segmentation_upid. 
                     * 
                     */
                    std::string GetUPID() const;

                    /**
                     * 设置Corresponds to SCTE-35 segmentation_upid. 
                     * @param _uPID Corresponds to SCTE-35 segmentation_upid. 
                     * 
                     */
                    void SetUPID(const std::string& _uPID);

                    /**
                     * 判断参数 UPID 是否已赋值
                     * @return UPID 是否已赋值
                     * 
                     */
                    bool UPIDHasBeenSet() const;

                    /**
                     * 获取Corresponds to SCTE-35 segmentation_type_id.
                     * @return TypeID Corresponds to SCTE-35 segmentation_type_id.
                     * 
                     */
                    uint64_t GetTypeID() const;

                    /**
                     * 设置Corresponds to SCTE-35 segmentation_type_id.
                     * @param _typeID Corresponds to SCTE-35 segmentation_type_id.
                     * 
                     */
                    void SetTypeID(const uint64_t& _typeID);

                    /**
                     * 判断参数 TypeID 是否已赋值
                     * @return TypeID 是否已赋值
                     * 
                     */
                    bool TypeIDHasBeenSet() const;

                    /**
                     * 获取Corresponds to SCTE-35 segment_num。This field provides support for numbering segments within a given collection of segments.
                     * @return Num Corresponds to SCTE-35 segment_num。This field provides support for numbering segments within a given collection of segments.
                     * 
                     */
                    uint64_t GetNum() const;

                    /**
                     * 设置Corresponds to SCTE-35 segment_num。This field provides support for numbering segments within a given collection of segments.
                     * @param _num Corresponds to SCTE-35 segment_num。This field provides support for numbering segments within a given collection of segments.
                     * 
                     */
                    void SetNum(const uint64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取Corresponds to SCTE-35 segment_expected.This field provides a count of the expected number of individual segments within a collection of segments.
                     * @return Expected Corresponds to SCTE-35 segment_expected.This field provides a count of the expected number of individual segments within a collection of segments.
                     * 
                     */
                    uint64_t GetExpected() const;

                    /**
                     * 设置Corresponds to SCTE-35 segment_expected.This field provides a count of the expected number of individual segments within a collection of segments.
                     * @param _expected Corresponds to SCTE-35 segment_expected.This field provides a count of the expected number of individual segments within a collection of segments.
                     * 
                     */
                    void SetExpected(const uint64_t& _expected);

                    /**
                     * 判断参数 Expected 是否已赋值
                     * @return Expected 是否已赋值
                     * 
                     */
                    bool ExpectedHasBeenSet() const;

                    /**
                     * 获取Corresponds to SCTE-35 sub_segment_num.This field provides identification for a specific sub-segment within a collection of sub-segments.
                     * @return SubSegmentNum Corresponds to SCTE-35 sub_segment_num.This field provides identification for a specific sub-segment within a collection of sub-segments.
                     * 
                     */
                    uint64_t GetSubSegmentNum() const;

                    /**
                     * 设置Corresponds to SCTE-35 sub_segment_num.This field provides identification for a specific sub-segment within a collection of sub-segments.
                     * @param _subSegmentNum Corresponds to SCTE-35 sub_segment_num.This field provides identification for a specific sub-segment within a collection of sub-segments.
                     * 
                     */
                    void SetSubSegmentNum(const uint64_t& _subSegmentNum);

                    /**
                     * 判断参数 SubSegmentNum 是否已赋值
                     * @return SubSegmentNum 是否已赋值
                     * 
                     */
                    bool SubSegmentNumHasBeenSet() const;

                    /**
                     * 获取Corresponds to SCTE-35 sub_segments_expected.This field provides a count of the expected number of individual sub-segments within the collection of sub-segments.
                     * @return SubSegmentsExpected Corresponds to SCTE-35 sub_segments_expected.This field provides a count of the expected number of individual sub-segments within the collection of sub-segments.
                     * 
                     */
                    uint64_t GetSubSegmentsExpected() const;

                    /**
                     * 设置Corresponds to SCTE-35 sub_segments_expected.This field provides a count of the expected number of individual sub-segments within the collection of sub-segments.
                     * @param _subSegmentsExpected Corresponds to SCTE-35 sub_segments_expected.This field provides a count of the expected number of individual sub-segments within the collection of sub-segments.
                     * 
                     */
                    void SetSubSegmentsExpected(const uint64_t& _subSegmentsExpected);

                    /**
                     * 判断参数 SubSegmentsExpected 是否已赋值
                     * @return SubSegmentsExpected 是否已赋值
                     * 
                     */
                    bool SubSegmentsExpectedHasBeenSet() const;

                private:

                    /**
                     * A 32-bit unique segmentation event identifier. Only one occurrence of a given segmentation_event_id value shall be active at any one time.
                     */
                    uint64_t m_eventID;
                    bool m_eventIDHasBeenSet;

                    /**
                     * Indicates that a previously sent segmentation event, identified by segmentation_event_id, has been cancelled.
                     */
                    uint64_t m_eventCancelIndicator;
                    bool m_eventCancelIndicatorHasBeenSet;

                    /**
                     * Distribution configuration.
                     */
                    DeliveryRestrictionsInfo m_deliveryRestrictions;
                    bool m_deliveryRestrictionsHasBeenSet;

                    /**
                     * The duration of the segment in 90kHz ticks. indicat when the segment will be over and when the next segmentation message will occur.Shall be 0 for end messages.the time signal will continue until insert a cancellation message when not specify the duration.
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Corresponds to SCTE-35 segmentation_upid_type parameter.
                     */
                    uint64_t m_uPIDType;
                    bool m_uPIDTypeHasBeenSet;

                    /**
                     * Corresponds to SCTE-35 segmentation_upid. 
                     */
                    std::string m_uPID;
                    bool m_uPIDHasBeenSet;

                    /**
                     * Corresponds to SCTE-35 segmentation_type_id.
                     */
                    uint64_t m_typeID;
                    bool m_typeIDHasBeenSet;

                    /**
                     * Corresponds to SCTE-35 segment_num。This field provides support for numbering segments within a given collection of segments.
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * Corresponds to SCTE-35 segment_expected.This field provides a count of the expected number of individual segments within a collection of segments.
                     */
                    uint64_t m_expected;
                    bool m_expectedHasBeenSet;

                    /**
                     * Corresponds to SCTE-35 sub_segment_num.This field provides identification for a specific sub-segment within a collection of sub-segments.
                     */
                    uint64_t m_subSegmentNum;
                    bool m_subSegmentNumHasBeenSet;

                    /**
                     * Corresponds to SCTE-35 sub_segments_expected.This field provides a count of the expected number of individual sub-segments within the collection of sub-segments.
                     */
                    uint64_t m_subSegmentsExpected;
                    bool m_subSegmentsExpectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_SEGMENTATIONDESCRIPTORINFO_H_
