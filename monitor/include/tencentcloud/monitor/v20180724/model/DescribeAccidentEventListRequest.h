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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEACCIDENTEVENTLISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEACCIDENTEVENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAccidentEventList request structure.
                */
                class DescribeAccidentEventListRequest : public AbstractModel
                {
                public:
                    DescribeAccidentEventListRequest();
                    ~DescribeAccidentEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API component name. The value for the current API is monitor.
                     * @return Module API component name. The value for the current API is monitor.
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置API component name. The value for the current API is monitor.
                     * @param _module API component name. The value for the current API is monitor.
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Start time, which is the timestamp one day prior by default.
                     * @return StartTime Start time, which is the timestamp one day prior by default.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time, which is the timestamp one day prior by default.
                     * @param _startTime Start time, which is the timestamp one day prior by default.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time, which is the current timestamp by default.
                     * @return EndTime End time, which is the current timestamp by default.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time, which is the current timestamp by default.
                     * @param _endTime End time, which is the current timestamp by default.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Number of parameters that can be returned on each page. Value range: 1 - 100. Default value: 20.
                     * @return Limit Number of parameters that can be returned on each page. Value range: 1 - 100. Default value: 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of parameters that can be returned on each page. Value range: 1 - 100. Default value: 20.
                     * @param _limit Number of parameters that can be returned on each page. Value range: 1 - 100. Default value: 20.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Parameter offset on each page. The value starts from 0 and the default value is 0.
                     * @return Offset Parameter offset on each page. The value starts from 0 and the default value is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Parameter offset on each page. The value starts from 0 and the default value is 0.
                     * @param _offset Parameter offset on each page. The value starts from 0 and the default value is 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Sorting rule by UpdateTime. Valid values: asc and desc.
                     * @return UpdateTimeOrder Sorting rule by UpdateTime. Valid values: asc and desc.
                     * 
                     */
                    std::string GetUpdateTimeOrder() const;

                    /**
                     * 设置Sorting rule by UpdateTime. Valid values: asc and desc.
                     * @param _updateTimeOrder Sorting rule by UpdateTime. Valid values: asc and desc.
                     * 
                     */
                    void SetUpdateTimeOrder(const std::string& _updateTimeOrder);

                    /**
                     * 判断参数 UpdateTimeOrder 是否已赋值
                     * @return UpdateTimeOrder 是否已赋值
                     * 
                     */
                    bool UpdateTimeOrderHasBeenSet() const;

                    /**
                     * 获取Sorting rule by OccurTime. Valid values: asc or desc. Sorting by UpdateTimeOrder takes priority.
                     * @return OccurTimeOrder Sorting rule by OccurTime. Valid values: asc or desc. Sorting by UpdateTimeOrder takes priority.
                     * 
                     */
                    std::string GetOccurTimeOrder() const;

                    /**
                     * 设置Sorting rule by OccurTime. Valid values: asc or desc. Sorting by UpdateTimeOrder takes priority.
                     * @param _occurTimeOrder Sorting rule by OccurTime. Valid values: asc or desc. Sorting by UpdateTimeOrder takes priority.
                     * 
                     */
                    void SetOccurTimeOrder(const std::string& _occurTimeOrder);

                    /**
                     * 判断参数 OccurTimeOrder 是否已赋值
                     * @return OccurTimeOrder 是否已赋值
                     * 
                     */
                    bool OccurTimeOrderHasBeenSet() const;

                    /**
                     * 获取Filter by event type. The value 1 indicates service issues. The value 2 indicates other subscriptions.
                     * @return AccidentType Filter by event type. The value 1 indicates service issues. The value 2 indicates other subscriptions.
                     * 
                     */
                    std::vector<int64_t> GetAccidentType() const;

                    /**
                     * 设置Filter by event type. The value 1 indicates service issues. The value 2 indicates other subscriptions.
                     * @param _accidentType Filter by event type. The value 1 indicates service issues. The value 2 indicates other subscriptions.
                     * 
                     */
                    void SetAccidentType(const std::vector<int64_t>& _accidentType);

                    /**
                     * 判断参数 AccidentType 是否已赋值
                     * @return AccidentType 是否已赋值
                     * 
                     */
                    bool AccidentTypeHasBeenSet() const;

                    /**
                     * 获取Filter by event. The value 1 indicates CVM storage issues. The value 2 indicates CVM network connection issues. The value 3 indicates that the CVM has an exception. The value 202 indicates that an ISP network jitter occurs.
                     * @return AccidentEvent Filter by event. The value 1 indicates CVM storage issues. The value 2 indicates CVM network connection issues. The value 3 indicates that the CVM has an exception. The value 202 indicates that an ISP network jitter occurs.
                     * 
                     */
                    std::vector<int64_t> GetAccidentEvent() const;

                    /**
                     * 设置Filter by event. The value 1 indicates CVM storage issues. The value 2 indicates CVM network connection issues. The value 3 indicates that the CVM has an exception. The value 202 indicates that an ISP network jitter occurs.
                     * @param _accidentEvent Filter by event. The value 1 indicates CVM storage issues. The value 2 indicates CVM network connection issues. The value 3 indicates that the CVM has an exception. The value 202 indicates that an ISP network jitter occurs.
                     * 
                     */
                    void SetAccidentEvent(const std::vector<int64_t>& _accidentEvent);

                    /**
                     * 判断参数 AccidentEvent 是否已赋值
                     * @return AccidentEvent 是否已赋值
                     * 
                     */
                    bool AccidentEventHasBeenSet() const;

                    /**
                     * 获取Filter by event status. The value 0 indicates that the event has been recovered. The value 1 indicates that the event has not been recovered.
                     * @return AccidentStatus Filter by event status. The value 0 indicates that the event has been recovered. The value 1 indicates that the event has not been recovered.
                     * 
                     */
                    std::vector<int64_t> GetAccidentStatus() const;

                    /**
                     * 设置Filter by event status. The value 0 indicates that the event has been recovered. The value 1 indicates that the event has not been recovered.
                     * @param _accidentStatus Filter by event status. The value 0 indicates that the event has been recovered. The value 1 indicates that the event has not been recovered.
                     * 
                     */
                    void SetAccidentStatus(const std::vector<int64_t>& _accidentStatus);

                    /**
                     * 判断参数 AccidentStatus 是否已赋值
                     * @return AccidentStatus 是否已赋值
                     * 
                     */
                    bool AccidentStatusHasBeenSet() const;

                    /**
                     * 获取Filter by region where the event occurs. The value gz indicates Guangzhou. The value sh indicates Shanghai.
                     * @return AccidentRegion Filter by region where the event occurs. The value gz indicates Guangzhou. The value sh indicates Shanghai.
                     * 
                     */
                    std::vector<std::string> GetAccidentRegion() const;

                    /**
                     * 设置Filter by region where the event occurs. The value gz indicates Guangzhou. The value sh indicates Shanghai.
                     * @param _accidentRegion Filter by region where the event occurs. The value gz indicates Guangzhou. The value sh indicates Shanghai.
                     * 
                     */
                    void SetAccidentRegion(const std::vector<std::string>& _accidentRegion);

                    /**
                     * 判断参数 AccidentRegion 是否已赋值
                     * @return AccidentRegion 是否已赋值
                     * 
                     */
                    bool AccidentRegionHasBeenSet() const;

                    /**
                     * 获取Filter by affected resource, such as ins-19a06bka.
                     * @return AffectResource Filter by affected resource, such as ins-19a06bka.
                     * 
                     */
                    std::string GetAffectResource() const;

                    /**
                     * 设置Filter by affected resource, such as ins-19a06bka.
                     * @param _affectResource Filter by affected resource, such as ins-19a06bka.
                     * 
                     */
                    void SetAffectResource(const std::string& _affectResource);

                    /**
                     * 判断参数 AffectResource 是否已赋值
                     * @return AffectResource 是否已赋值
                     * 
                     */
                    bool AffectResourceHasBeenSet() const;

                private:

                    /**
                     * API component name. The value for the current API is monitor.
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Start time, which is the timestamp one day prior by default.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, which is the current timestamp by default.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Number of parameters that can be returned on each page. Value range: 1 - 100. Default value: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Parameter offset on each page. The value starts from 0 and the default value is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting rule by UpdateTime. Valid values: asc and desc.
                     */
                    std::string m_updateTimeOrder;
                    bool m_updateTimeOrderHasBeenSet;

                    /**
                     * Sorting rule by OccurTime. Valid values: asc or desc. Sorting by UpdateTimeOrder takes priority.
                     */
                    std::string m_occurTimeOrder;
                    bool m_occurTimeOrderHasBeenSet;

                    /**
                     * Filter by event type. The value 1 indicates service issues. The value 2 indicates other subscriptions.
                     */
                    std::vector<int64_t> m_accidentType;
                    bool m_accidentTypeHasBeenSet;

                    /**
                     * Filter by event. The value 1 indicates CVM storage issues. The value 2 indicates CVM network connection issues. The value 3 indicates that the CVM has an exception. The value 202 indicates that an ISP network jitter occurs.
                     */
                    std::vector<int64_t> m_accidentEvent;
                    bool m_accidentEventHasBeenSet;

                    /**
                     * Filter by event status. The value 0 indicates that the event has been recovered. The value 1 indicates that the event has not been recovered.
                     */
                    std::vector<int64_t> m_accidentStatus;
                    bool m_accidentStatusHasBeenSet;

                    /**
                     * Filter by region where the event occurs. The value gz indicates Guangzhou. The value sh indicates Shanghai.
                     */
                    std::vector<std::string> m_accidentRegion;
                    bool m_accidentRegionHasBeenSet;

                    /**
                     * Filter by affected resource, such as ins-19a06bka.
                     */
                    std::string m_affectResource;
                    bool m_affectResourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEACCIDENTEVENTLISTREQUEST_H_
