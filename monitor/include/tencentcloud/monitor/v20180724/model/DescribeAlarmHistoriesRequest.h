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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMHISTORIESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMHISTORIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/MonitorTypeNamespace.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAlarmHistories request structure.
                */
                class DescribeAlarmHistoriesRequest : public AbstractModel
                {
                public:
                    DescribeAlarmHistoriesRequest();
                    ~DescribeAlarmHistoriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Value fixed at "monitor"
                     * @return Module Value fixed at "monitor"
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Value fixed at "monitor"
                     * @param Module Value fixed at "monitor"
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Page number starting from 1. Default value: 1
                     * @return PageNumber Page number starting from 1. Default value: 1
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number starting from 1. Default value: 1
                     * @param PageNumber Page number starting from 1. Default value: 1
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Value range: 1–100. Default value: 20
                     * @return PageSize Number of entries per page. Value range: 1–100. Default value: 20
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page. Value range: 1–100. Default value: 20
                     * @param PageSize Number of entries per page. Value range: 1–100. Default value: 20
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Sort by the first occurrence time in descending order by default. Valid values: ASC (ascending), DESC (descending)
                     * @return Order Sort by the first occurrence time in descending order by default. Valid values: ASC (ascending), DESC (descending)
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort by the first occurrence time in descending order by default. Valid values: ASC (ascending), DESC (descending)
                     * @param Order Sort by the first occurrence time in descending order by default. Valid values: ASC (ascending), DESC (descending)
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Start time, which is the timestamp one day ago by default and the time when the alarm `FirstOccurTime` first occurs. An alarm record can be searched only if its `FirstOccurTime` is later than the `StartTime`.
                     * @return StartTime Start time, which is the timestamp one day ago by default and the time when the alarm `FirstOccurTime` first occurs. An alarm record can be searched only if its `FirstOccurTime` is later than the `StartTime`.
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time, which is the timestamp one day ago by default and the time when the alarm `FirstOccurTime` first occurs. An alarm record can be searched only if its `FirstOccurTime` is later than the `StartTime`.
                     * @param StartTime Start time, which is the timestamp one day ago by default and the time when the alarm `FirstOccurTime` first occurs. An alarm record can be searched only if its `FirstOccurTime` is later than the `StartTime`.
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time, which is the current timestamp and the time when the alarm `FirstOccurTime` first occurs. An alarm record can be searched only if its `FirstOccurTime` is earlier than the `EndTime`.
                     * @return EndTime End time, which is the current timestamp and the time when the alarm `FirstOccurTime` first occurs. An alarm record can be searched only if its `FirstOccurTime` is earlier than the `EndTime`.
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time, which is the current timestamp and the time when the alarm `FirstOccurTime` first occurs. An alarm record can be searched only if its `FirstOccurTime` is earlier than the `EndTime`.
                     * @param EndTime End time, which is the current timestamp and the time when the alarm `FirstOccurTime` first occurs. An alarm record can be searched only if its `FirstOccurTime` is earlier than the `EndTime`.
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Filter by monitor type. Valid values: "MT_QCE" (Tencent Cloud service monitoring), "MT_TAW" (application performance monitoring), "MT_RUM" (frontend performance monitoring), "MT_PROBE" (cloud automated testing). If this parameter is left empty, all types will be queried by default.
                     * @return MonitorTypes Filter by monitor type. Valid values: "MT_QCE" (Tencent Cloud service monitoring), "MT_TAW" (application performance monitoring), "MT_RUM" (frontend performance monitoring), "MT_PROBE" (cloud automated testing). If this parameter is left empty, all types will be queried by default.
                     */
                    std::vector<std::string> GetMonitorTypes() const;

                    /**
                     * 设置Filter by monitor type. Valid values: "MT_QCE" (Tencent Cloud service monitoring), "MT_TAW" (application performance monitoring), "MT_RUM" (frontend performance monitoring), "MT_PROBE" (cloud automated testing). If this parameter is left empty, all types will be queried by default.
                     * @param MonitorTypes Filter by monitor type. Valid values: "MT_QCE" (Tencent Cloud service monitoring), "MT_TAW" (application performance monitoring), "MT_RUM" (frontend performance monitoring), "MT_PROBE" (cloud automated testing). If this parameter is left empty, all types will be queried by default.
                     */
                    void SetMonitorTypes(const std::vector<std::string>& _monitorTypes);

                    /**
                     * 判断参数 MonitorTypes 是否已赋值
                     * @return MonitorTypes 是否已赋值
                     */
                    bool MonitorTypesHasBeenSet() const;

                    /**
                     * 获取Filter by alarm object. Fuzzy search with string is supported
                     * @return AlarmObject Filter by alarm object. Fuzzy search with string is supported
                     */
                    std::string GetAlarmObject() const;

                    /**
                     * 设置Filter by alarm object. Fuzzy search with string is supported
                     * @param AlarmObject Filter by alarm object. Fuzzy search with string is supported
                     */
                    void SetAlarmObject(const std::string& _alarmObject);

                    /**
                     * 判断参数 AlarmObject 是否已赋值
                     * @return AlarmObject 是否已赋值
                     */
                    bool AlarmObjectHasBeenSet() const;

                    /**
                     * 获取Filter by alarm status. Valid values: ALARM (not resolved), OK (resolved), NO_CONF (expired), NO_DATA (insufficient data). If this parameter is left empty, all will be queried by default
                     * @return AlarmStatus Filter by alarm status. Valid values: ALARM (not resolved), OK (resolved), NO_CONF (expired), NO_DATA (insufficient data). If this parameter is left empty, all will be queried by default
                     */
                    std::vector<std::string> GetAlarmStatus() const;

                    /**
                     * 设置Filter by alarm status. Valid values: ALARM (not resolved), OK (resolved), NO_CONF (expired), NO_DATA (insufficient data). If this parameter is left empty, all will be queried by default
                     * @param AlarmStatus Filter by alarm status. Valid values: ALARM (not resolved), OK (resolved), NO_CONF (expired), NO_DATA (insufficient data). If this parameter is left empty, all will be queried by default
                     */
                    void SetAlarmStatus(const std::vector<std::string>& _alarmStatus);

                    /**
                     * 判断参数 AlarmStatus 是否已赋值
                     * @return AlarmStatus 是否已赋值
                     */
                    bool AlarmStatusHasBeenSet() const;

                    /**
                     * 获取Filter by project ID. Valid values: `-1` (no project), `0` (default project)
                     * @return ProjectIds Filter by project ID. Valid values: `-1` (no project), `0` (default project)
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置Filter by project ID. Valid values: `-1` (no project), `0` (default project)
                     * @param ProjectIds Filter by project ID. Valid values: `-1` (no project), `0` (default project)
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Filter by instance group ID
                     * @return InstanceGroupIds Filter by instance group ID
                     */
                    std::vector<int64_t> GetInstanceGroupIds() const;

                    /**
                     * 设置Filter by instance group ID
                     * @param InstanceGroupIds Filter by instance group ID
                     */
                    void SetInstanceGroupIds(const std::vector<int64_t>& _instanceGroupIds);

                    /**
                     * 判断参数 InstanceGroupIds 是否已赋值
                     * @return InstanceGroupIds 是否已赋值
                     */
                    bool InstanceGroupIdsHasBeenSet() const;

                    /**
                     * 获取Filter by policy type. Monitoring type and policy type are first-level and second-level filters respectively and both need to be passed in. For example, `[{"MonitorType": "MT_QCE", "Namespace": "cvm_device"}]`
                     * @return Namespaces Filter by policy type. Monitoring type and policy type are first-level and second-level filters respectively and both need to be passed in. For example, `[{"MonitorType": "MT_QCE", "Namespace": "cvm_device"}]`
                     */
                    std::vector<MonitorTypeNamespace> GetNamespaces() const;

                    /**
                     * 设置Filter by policy type. Monitoring type and policy type are first-level and second-level filters respectively and both need to be passed in. For example, `[{"MonitorType": "MT_QCE", "Namespace": "cvm_device"}]`
                     * @param Namespaces Filter by policy type. Monitoring type and policy type are first-level and second-level filters respectively and both need to be passed in. For example, `[{"MonitorType": "MT_QCE", "Namespace": "cvm_device"}]`
                     */
                    void SetNamespaces(const std::vector<MonitorTypeNamespace>& _namespaces);

                    /**
                     * 判断参数 Namespaces 是否已赋值
                     * @return Namespaces 是否已赋值
                     */
                    bool NamespacesHasBeenSet() const;

                    /**
                     * 获取Filter by metric name
                     * @return MetricNames Filter by metric name
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Filter by metric name
                     * @param MetricNames Filter by metric name
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取Fuzzy search by policy name
                     * @return PolicyName Fuzzy search by policy name
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Fuzzy search by policy name
                     * @param PolicyName Fuzzy search by policy name
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Fuzzy search by alarm content
                     * @return Content Fuzzy search by alarm content
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Fuzzy search by alarm content
                     * @param Content Fuzzy search by alarm content
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Search by recipient
                     * @return ReceiverUids Search by recipient
                     */
                    std::vector<int64_t> GetReceiverUids() const;

                    /**
                     * 设置Search by recipient
                     * @param ReceiverUids Search by recipient
                     */
                    void SetReceiverUids(const std::vector<int64_t>& _receiverUids);

                    /**
                     * 判断参数 ReceiverUids 是否已赋值
                     * @return ReceiverUids 是否已赋值
                     */
                    bool ReceiverUidsHasBeenSet() const;

                    /**
                     * 获取Search by recipient group
                     * @return ReceiverGroups Search by recipient group
                     */
                    std::vector<int64_t> GetReceiverGroups() const;

                    /**
                     * 设置Search by recipient group
                     * @param ReceiverGroups Search by recipient group
                     */
                    void SetReceiverGroups(const std::vector<int64_t>& _receiverGroups);

                    /**
                     * 判断参数 ReceiverGroups 是否已赋值
                     * @return ReceiverGroups 是否已赋值
                     */
                    bool ReceiverGroupsHasBeenSet() const;

                    /**
                     * 获取Search by alarm policy ID list
                     * @return PolicyIds Search by alarm policy ID list
                     */
                    std::vector<std::string> GetPolicyIds() const;

                    /**
                     * 设置Search by alarm policy ID list
                     * @param PolicyIds Search by alarm policy ID list
                     */
                    void SetPolicyIds(const std::vector<std::string>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     */
                    bool PolicyIdsHasBeenSet() const;

                private:

                    /**
                     * Value fixed at "monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Page number starting from 1. Default value: 1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of entries per page. Value range: 1–100. Default value: 20
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Sort by the first occurrence time in descending order by default. Valid values: ASC (ascending), DESC (descending)
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Start time, which is the timestamp one day ago by default and the time when the alarm `FirstOccurTime` first occurs. An alarm record can be searched only if its `FirstOccurTime` is later than the `StartTime`.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, which is the current timestamp and the time when the alarm `FirstOccurTime` first occurs. An alarm record can be searched only if its `FirstOccurTime` is earlier than the `EndTime`.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Filter by monitor type. Valid values: "MT_QCE" (Tencent Cloud service monitoring), "MT_TAW" (application performance monitoring), "MT_RUM" (frontend performance monitoring), "MT_PROBE" (cloud automated testing). If this parameter is left empty, all types will be queried by default.
                     */
                    std::vector<std::string> m_monitorTypes;
                    bool m_monitorTypesHasBeenSet;

                    /**
                     * Filter by alarm object. Fuzzy search with string is supported
                     */
                    std::string m_alarmObject;
                    bool m_alarmObjectHasBeenSet;

                    /**
                     * Filter by alarm status. Valid values: ALARM (not resolved), OK (resolved), NO_CONF (expired), NO_DATA (insufficient data). If this parameter is left empty, all will be queried by default
                     */
                    std::vector<std::string> m_alarmStatus;
                    bool m_alarmStatusHasBeenSet;

                    /**
                     * Filter by project ID. Valid values: `-1` (no project), `0` (default project)
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Filter by instance group ID
                     */
                    std::vector<int64_t> m_instanceGroupIds;
                    bool m_instanceGroupIdsHasBeenSet;

                    /**
                     * Filter by policy type. Monitoring type and policy type are first-level and second-level filters respectively and both need to be passed in. For example, `[{"MonitorType": "MT_QCE", "Namespace": "cvm_device"}]`
                     */
                    std::vector<MonitorTypeNamespace> m_namespaces;
                    bool m_namespacesHasBeenSet;

                    /**
                     * Filter by metric name
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * Fuzzy search by policy name
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Fuzzy search by alarm content
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Search by recipient
                     */
                    std::vector<int64_t> m_receiverUids;
                    bool m_receiverUidsHasBeenSet;

                    /**
                     * Search by recipient group
                     */
                    std::vector<int64_t> m_receiverGroups;
                    bool m_receiverGroupsHasBeenSet;

                    /**
                     * Search by alarm policy ID list
                     */
                    std::vector<std::string> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMHISTORIESREQUEST_H_
