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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEACCIDENTEVENTLISTALARMS_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEACCIDENTEVENTLISTALARMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Output parameter type of the DescribeAccidentEventList API
                */
                class DescribeAccidentEventListAlarms : public AbstractModel
                {
                public:
                    DescribeAccidentEventListAlarms();
                    ~DescribeAccidentEventListAlarms() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event type.
Note: This field may return null, indicating that no valid value was found.
                     * @return BusinessTypeDesc Event type.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetBusinessTypeDesc() const;

                    /**
                     * 设置Event type.
Note: This field may return null, indicating that no valid value was found.
                     * @param _businessTypeDesc Event type.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetBusinessTypeDesc(const std::string& _businessTypeDesc);

                    /**
                     * 判断参数 BusinessTypeDesc 是否已赋值
                     * @return BusinessTypeDesc 是否已赋值
                     * 
                     */
                    bool BusinessTypeDescHasBeenSet() const;

                    /**
                     * 获取Event type.
Note: This field may return null, indicating that no valid value was found.
                     * @return AccidentTypeDesc Event type.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetAccidentTypeDesc() const;

                    /**
                     * 设置Event type.
Note: This field may return null, indicating that no valid value was found.
                     * @param _accidentTypeDesc Event type.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetAccidentTypeDesc(const std::string& _accidentTypeDesc);

                    /**
                     * 判断参数 AccidentTypeDesc 是否已赋值
                     * @return AccidentTypeDesc 是否已赋值
                     * 
                     */
                    bool AccidentTypeDescHasBeenSet() const;

                    /**
                     * 获取ID of the event type. The value 1 indicates service issues. The value 2 indicates other subscriptions.
Note: This field may return null, indicating that no valid value was found.
                     * @return BusinessID ID of the event type. The value 1 indicates service issues. The value 2 indicates other subscriptions.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetBusinessID() const;

                    /**
                     * 设置ID of the event type. The value 1 indicates service issues. The value 2 indicates other subscriptions.
Note: This field may return null, indicating that no valid value was found.
                     * @param _businessID ID of the event type. The value 1 indicates service issues. The value 2 indicates other subscriptions.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetBusinessID(const int64_t& _businessID);

                    /**
                     * 判断参数 BusinessID 是否已赋值
                     * @return BusinessID 是否已赋值
                     * 
                     */
                    bool BusinessIDHasBeenSet() const;

                    /**
                     * 获取Event status ID. The value 0 indicates that the event has been recovered. The value 1 indicates that the event has not been recovered.
Note: This field may return null, indicating that no valid value was found.
                     * @return EventStatus Event status ID. The value 0 indicates that the event has been recovered. The value 1 indicates that the event has not been recovered.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetEventStatus() const;

                    /**
                     * 设置Event status ID. The value 0 indicates that the event has been recovered. The value 1 indicates that the event has not been recovered.
Note: This field may return null, indicating that no valid value was found.
                     * @param _eventStatus Event status ID. The value 0 indicates that the event has been recovered. The value 1 indicates that the event has not been recovered.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetEventStatus(const int64_t& _eventStatus);

                    /**
                     * 判断参数 EventStatus 是否已赋值
                     * @return EventStatus 是否已赋值
                     * 
                     */
                    bool EventStatusHasBeenSet() const;

                    /**
                     * 获取Affected object.
Note: This field may return null, indicating that no valid value was found.
                     * @return AffectResource Affected object.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetAffectResource() const;

                    /**
                     * 设置Affected object.
Note: This field may return null, indicating that no valid value was found.
                     * @param _affectResource Affected object.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetAffectResource(const std::string& _affectResource);

                    /**
                     * 判断参数 AffectResource 是否已赋值
                     * @return AffectResource 是否已赋值
                     * 
                     */
                    bool AffectResourceHasBeenSet() const;

                    /**
                     * 获取Region where the event occurs.
Note: This field may return null, indicating that no valid value was found.
                     * @return Region Region where the event occurs.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region where the event occurs.
Note: This field may return null, indicating that no valid value was found.
                     * @param _region Region where the event occurs.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Time when the event occurs.
Note: This field may return null, indicating that no valid value was found.
                     * @return OccurTime Time when the event occurs.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetOccurTime() const;

                    /**
                     * 设置Time when the event occurs.
Note: This field may return null, indicating that no valid value was found.
                     * @param _occurTime Time when the event occurs.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetOccurTime(const std::string& _occurTime);

                    /**
                     * 判断参数 OccurTime 是否已赋值
                     * @return OccurTime 是否已赋值
                     * 
                     */
                    bool OccurTimeHasBeenSet() const;

                    /**
                     * 获取Update time.
Note: This field may return null, indicating that no valid value was found.
                     * @return UpdateTime Update time.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
Note: This field may return null, indicating that no valid value was found.
                     * @param _updateTime Update time.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Event type.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_businessTypeDesc;
                    bool m_businessTypeDescHasBeenSet;

                    /**
                     * Event type.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_accidentTypeDesc;
                    bool m_accidentTypeDescHasBeenSet;

                    /**
                     * ID of the event type. The value 1 indicates service issues. The value 2 indicates other subscriptions.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_businessID;
                    bool m_businessIDHasBeenSet;

                    /**
                     * Event status ID. The value 0 indicates that the event has been recovered. The value 1 indicates that the event has not been recovered.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_eventStatus;
                    bool m_eventStatusHasBeenSet;

                    /**
                     * Affected object.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_affectResource;
                    bool m_affectResourceHasBeenSet;

                    /**
                     * Region where the event occurs.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Time when the event occurs.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_occurTime;
                    bool m_occurTimeHasBeenSet;

                    /**
                     * Update time.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEACCIDENTEVENTLISTALARMS_H_
