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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListDimensions.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeProductEventList request structure.
                */
                class DescribeProductEventListRequest : public AbstractModel
                {
                public:
                    DescribeProductEventListRequest();
                    ~DescribeProductEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API component name. It is fixed to monitor.
                     * @return Module API component name. It is fixed to monitor.
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置API component name. It is fixed to monitor.
                     * @param _module API component name. It is fixed to monitor.
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
                     * 获取Filter by product type. For example, "cvm" indicates Cloud Virtual Machine.
                     * @return ProductName Filter by product type. For example, "cvm" indicates Cloud Virtual Machine.
                     * 
                     */
                    std::vector<std::string> GetProductName() const;

                    /**
                     * 设置Filter by product type. For example, "cvm" indicates Cloud Virtual Machine.
                     * @param _productName Filter by product type. For example, "cvm" indicates Cloud Virtual Machine.
                     * 
                     */
                    void SetProductName(const std::vector<std::string>& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Filter by event name. For example, "guest_reboot" indicates instance restart.
                     * @return EventName Filter by event name. For example, "guest_reboot" indicates instance restart.
                     * 
                     */
                    std::vector<std::string> GetEventName() const;

                    /**
                     * 设置Filter by event name. For example, "guest_reboot" indicates instance restart.
                     * @param _eventName Filter by event name. For example, "guest_reboot" indicates instance restart.
                     * 
                     */
                    void SetEventName(const std::vector<std::string>& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取Affected object, such as "ins-19708ino".
                     * @return InstanceId Affected object, such as "ins-19708ino".
                     * 
                     */
                    std::vector<std::string> GetInstanceId() const;

                    /**
                     * 设置Affected object, such as "ins-19708ino".
                     * @param _instanceId Affected object, such as "ins-19708ino".
                     * 
                     */
                    void SetInstanceId(const std::vector<std::string>& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Filter by dimension, such as by public IP: 10.0.0.1.
                     * @return Dimensions Filter by dimension, such as by public IP: 10.0.0.1.
                     * 
                     */
                    std::vector<DescribeProductEventListDimensions> GetDimensions() const;

                    /**
                     * 设置Filter by dimension, such as by public IP: 10.0.0.1.
                     * @param _dimensions Filter by dimension, such as by public IP: 10.0.0.1.
                     * 
                     */
                    void SetDimensions(const std::vector<DescribeProductEventListDimensions>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取Region filter parameter for service events.
                     * @return RegionList Region filter parameter for service events.
                     * 
                     */
                    std::vector<std::string> GetRegionList() const;

                    /**
                     * 设置Region filter parameter for service events.
                     * @param _regionList Region filter parameter for service events.
                     * 
                     */
                    void SetRegionList(const std::vector<std::string>& _regionList);

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                    /**
                     * 获取Filter by event type. Valid values: ["status_change","abnormal"], which indicate events whose statuses have changed and events with exceptions respectively.
                     * @return Type Filter by event type. Valid values: ["status_change","abnormal"], which indicate events whose statuses have changed and events with exceptions respectively.
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置Filter by event type. Valid values: ["status_change","abnormal"], which indicate events whose statuses have changed and events with exceptions respectively.
                     * @param _type Filter by event type. Valid values: ["status_change","abnormal"], which indicate events whose statuses have changed and events with exceptions respectively.
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Filter by event status. Valid values: ["recover","alarm","-"], which indicate that an event has been recovered, has not been recovered, and has no status respectively.
                     * @return Status Filter by event status. Valid values: ["recover","alarm","-"], which indicate that an event has been recovered, has not been recovered, and has no status respectively.
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置Filter by event status. Valid values: ["recover","alarm","-"], which indicate that an event has been recovered, has not been recovered, and has no status respectively.
                     * @param _status Filter by event status. Valid values: ["recover","alarm","-"], which indicate that an event has been recovered, has not been recovered, and has no status respectively.
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Filter by project ID.
                     * @return Project Filter by project ID.
                     * 
                     */
                    std::vector<std::string> GetProject() const;

                    /**
                     * 设置Filter by project ID.
                     * @param _project Filter by project ID.
                     * 
                     */
                    void SetProject(const std::vector<std::string>& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取Filter by alarm status configuration. The value 1 indicates that the alarm status has been configured. The value 0 indicates that the alarm status has not been configured.
                     * @return IsAlarmConfig Filter by alarm status configuration. The value 1 indicates that the alarm status has been configured. The value 0 indicates that the alarm status has not been configured.
                     * 
                     */
                    int64_t GetIsAlarmConfig() const;

                    /**
                     * 设置Filter by alarm status configuration. The value 1 indicates that the alarm status has been configured. The value 0 indicates that the alarm status has not been configured.
                     * @param _isAlarmConfig Filter by alarm status configuration. The value 1 indicates that the alarm status has been configured. The value 0 indicates that the alarm status has not been configured.
                     * 
                     */
                    void SetIsAlarmConfig(const int64_t& _isAlarmConfig);

                    /**
                     * 判断参数 IsAlarmConfig 是否已赋值
                     * @return IsAlarmConfig 是否已赋值
                     * 
                     */
                    bool IsAlarmConfigHasBeenSet() const;

                    /**
                     * 获取Sorting by update time. The value ASC indicates the ascending order. The value DESC indicates the descending order. The default value is DESC.
                     * @return TimeOrder Sorting by update time. The value ASC indicates the ascending order. The value DESC indicates the descending order. The default value is DESC.
                     * 
                     */
                    std::string GetTimeOrder() const;

                    /**
                     * 设置Sorting by update time. The value ASC indicates the ascending order. The value DESC indicates the descending order. The default value is DESC.
                     * @param _timeOrder Sorting by update time. The value ASC indicates the ascending order. The value DESC indicates the descending order. The default value is DESC.
                     * 
                     */
                    void SetTimeOrder(const std::string& _timeOrder);

                    /**
                     * 判断参数 TimeOrder 是否已赋值
                     * @return TimeOrder 是否已赋值
                     * 
                     */
                    bool TimeOrderHasBeenSet() const;

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
                     * 获取Page offset. The default value is 0.
                     * @return Offset Page offset. The default value is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset. The default value is 0.
                     * @param _offset Page offset. The default value is 0.
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
                     * 获取The number of parameters that can be returned on each page. The default value is 20.
                     * @return Limit The number of parameters that can be returned on each page. The default value is 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of parameters that can be returned on each page. The default value is 20.
                     * @param _limit The number of parameters that can be returned on each page. The default value is 20.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * API component name. It is fixed to monitor.
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Filter by product type. For example, "cvm" indicates Cloud Virtual Machine.
                     */
                    std::vector<std::string> m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Filter by event name. For example, "guest_reboot" indicates instance restart.
                     */
                    std::vector<std::string> m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Affected object, such as "ins-19708ino".
                     */
                    std::vector<std::string> m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Filter by dimension, such as by public IP: 10.0.0.1.
                     */
                    std::vector<DescribeProductEventListDimensions> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * Region filter parameter for service events.
                     */
                    std::vector<std::string> m_regionList;
                    bool m_regionListHasBeenSet;

                    /**
                     * Filter by event type. Valid values: ["status_change","abnormal"], which indicate events whose statuses have changed and events with exceptions respectively.
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Filter by event status. Valid values: ["recover","alarm","-"], which indicate that an event has been recovered, has not been recovered, and has no status respectively.
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Filter by project ID.
                     */
                    std::vector<std::string> m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * Filter by alarm status configuration. The value 1 indicates that the alarm status has been configured. The value 0 indicates that the alarm status has not been configured.
                     */
                    int64_t m_isAlarmConfig;
                    bool m_isAlarmConfigHasBeenSet;

                    /**
                     * Sorting by update time. The value ASC indicates the ascending order. The value DESC indicates the descending order. The default value is DESC.
                     */
                    std::string m_timeOrder;
                    bool m_timeOrderHasBeenSet;

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
                     * Page offset. The default value is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of parameters that can be returned on each page. The default value is 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTREQUEST_H_
