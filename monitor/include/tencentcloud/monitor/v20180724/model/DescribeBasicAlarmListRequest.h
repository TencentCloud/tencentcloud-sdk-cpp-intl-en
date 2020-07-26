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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASICALARMLISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASICALARMLISTREQUEST_H_

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
                * DescribeBasicAlarmList request structure.
                */
                class DescribeBasicAlarmListRequest : public AbstractModel
                {
                public:
                    DescribeBasicAlarmListRequest();
                    ~DescribeBasicAlarmListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API component name. The value for the current API is monitor.
                     * @return Module API component name. The value for the current API is monitor.
                     */
                    std::string GetModule() const;

                    /**
                     * 设置API component name. The value for the current API is monitor.
                     * @param Module API component name. The value for the current API is monitor.
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Start time, which is the timestamp one day prior by default.
                     * @return StartTime Start time, which is the timestamp one day prior by default.
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time, which is the timestamp one day prior by default.
                     * @param StartTime Start time, which is the timestamp one day prior by default.
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time, which is the current timestamp by default.
                     * @return EndTime End time, which is the current timestamp by default.
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time, which is the current timestamp by default.
                     * @param EndTime End time, which is the current timestamp by default.
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Number of parameters that can be returned on each page. Value range: 1 - 100. Default value: 20.
                     * @return Limit Number of parameters that can be returned on each page. Value range: 1 - 100. Default value: 20.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of parameters that can be returned on each page. Value range: 1 - 100. Default value: 20.
                     * @param Limit Number of parameters that can be returned on each page. Value range: 1 - 100. Default value: 20.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Parameter offset on each page. The value starts from 0 and the default value is 0.
                     * @return Offset Parameter offset on each page. The value starts from 0 and the default value is 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Parameter offset on each page. The value starts from 0 and the default value is 0.
                     * @param Offset Parameter offset on each page. The value starts from 0 and the default value is 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Sorting by occurrence time. Valid values: asc and desc.
                     * @return OccurTimeOrder Sorting by occurrence time. Valid values: asc and desc.
                     */
                    std::string GetOccurTimeOrder() const;

                    /**
                     * 设置Sorting by occurrence time. Valid values: asc and desc.
                     * @param OccurTimeOrder Sorting by occurrence time. Valid values: asc and desc.
                     */
                    void SetOccurTimeOrder(const std::string& _occurTimeOrder);

                    /**
                     * 判断参数 OccurTimeOrder 是否已赋值
                     * @return OccurTimeOrder 是否已赋值
                     */
                    bool OccurTimeOrderHasBeenSet() const;

                    /**
                     * 获取Filter by project ID.
                     * @return ProjectIds Filter by project ID.
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置Filter by project ID.
                     * @param ProjectIds Filter by project ID.
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Filter by policy type.
                     * @return ViewNames Filter by policy type.
                     */
                    std::vector<std::string> GetViewNames() const;

                    /**
                     * 设置Filter by policy type.
                     * @param ViewNames Filter by policy type.
                     */
                    void SetViewNames(const std::vector<std::string>& _viewNames);

                    /**
                     * 判断参数 ViewNames 是否已赋值
                     * @return ViewNames 是否已赋值
                     */
                    bool ViewNamesHasBeenSet() const;

                    /**
                     * 获取Filter by alarm status.
                     * @return AlarmStatus Filter by alarm status.
                     */
                    std::vector<int64_t> GetAlarmStatus() const;

                    /**
                     * 设置Filter by alarm status.
                     * @param AlarmStatus Filter by alarm status.
                     */
                    void SetAlarmStatus(const std::vector<int64_t>& _alarmStatus);

                    /**
                     * 判断参数 AlarmStatus 是否已赋值
                     * @return AlarmStatus 是否已赋值
                     */
                    bool AlarmStatusHasBeenSet() const;

                    /**
                     * 获取Filter by alarm object.
                     * @return ObjLike Filter by alarm object.
                     */
                    std::string GetObjLike() const;

                    /**
                     * 设置Filter by alarm object.
                     * @param ObjLike Filter by alarm object.
                     */
                    void SetObjLike(const std::string& _objLike);

                    /**
                     * 判断参数 ObjLike 是否已赋值
                     * @return ObjLike 是否已赋值
                     */
                    bool ObjLikeHasBeenSet() const;

                    /**
                     * 获取Filter by instance group ID.
                     * @return InstanceGroupIds Filter by instance group ID.
                     */
                    std::vector<int64_t> GetInstanceGroupIds() const;

                    /**
                     * 设置Filter by instance group ID.
                     * @param InstanceGroupIds Filter by instance group ID.
                     */
                    void SetInstanceGroupIds(const std::vector<int64_t>& _instanceGroupIds);

                    /**
                     * 判断参数 InstanceGroupIds 是否已赋值
                     * @return InstanceGroupIds 是否已赋值
                     */
                    bool InstanceGroupIdsHasBeenSet() const;

                    /**
                     * 获取Filtering by metric names
                     * @return MetricNames Filtering by metric names
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Filtering by metric names
                     * @param MetricNames Filtering by metric names
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     */
                    bool MetricNamesHasBeenSet() const;

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
                     * Sorting by occurrence time. Valid values: asc and desc.
                     */
                    std::string m_occurTimeOrder;
                    bool m_occurTimeOrderHasBeenSet;

                    /**
                     * Filter by project ID.
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Filter by policy type.
                     */
                    std::vector<std::string> m_viewNames;
                    bool m_viewNamesHasBeenSet;

                    /**
                     * Filter by alarm status.
                     */
                    std::vector<int64_t> m_alarmStatus;
                    bool m_alarmStatusHasBeenSet;

                    /**
                     * Filter by alarm object.
                     */
                    std::string m_objLike;
                    bool m_objLikeHasBeenSet;

                    /**
                     * Filter by instance group ID.
                     */
                    std::vector<int64_t> m_instanceGroupIds;
                    bool m_instanceGroupIdsHasBeenSet;

                    /**
                     * Filtering by metric names
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASICALARMLISTREQUEST_H_
