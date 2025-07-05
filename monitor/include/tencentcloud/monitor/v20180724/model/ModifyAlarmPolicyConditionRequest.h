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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYCONDITIONREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYCONDITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyCondition.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyEventCondition.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyFilter.h>
#include <tencentcloud/monitor/v20180724/model/LogAlarmReq.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ModifyAlarmPolicyCondition request structure.
                */
                class ModifyAlarmPolicyConditionRequest : public AbstractModel
                {
                public:
                    ModifyAlarmPolicyConditionRequest();
                    ~ModifyAlarmPolicyConditionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Module name, which is fixed at "monitor"
                     * @return Module Module name, which is fixed at "monitor"
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Module name, which is fixed at "monitor"
                     * @param _module Module name, which is fixed at "monitor"
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
                     * 获取Alarm policy ID
                     * @return PolicyId Alarm policy ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Alarm policy ID
                     * @param _policyId Alarm policy ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取ID of trigger condition template. This parameter can be left empty.
                     * @return ConditionTemplateId ID of trigger condition template. This parameter can be left empty.
                     * 
                     */
                    int64_t GetConditionTemplateId() const;

                    /**
                     * 设置ID of trigger condition template. This parameter can be left empty.
                     * @param _conditionTemplateId ID of trigger condition template. This parameter can be left empty.
                     * 
                     */
                    void SetConditionTemplateId(const int64_t& _conditionTemplateId);

                    /**
                     * 判断参数 ConditionTemplateId 是否已赋值
                     * @return ConditionTemplateId 是否已赋值
                     * 
                     */
                    bool ConditionTemplateIdHasBeenSet() const;

                    /**
                     * 获取Metric trigger condition
                     * @return Condition Metric trigger condition
                     * 
                     */
                    AlarmPolicyCondition GetCondition() const;

                    /**
                     * 设置Metric trigger condition
                     * @param _condition Metric trigger condition
                     * 
                     */
                    void SetCondition(const AlarmPolicyCondition& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取Event trigger condition
                     * @return EventCondition Event trigger condition
                     * 
                     */
                    AlarmPolicyEventCondition GetEventCondition() const;

                    /**
                     * 设置Event trigger condition
                     * @param _eventCondition Event trigger condition
                     * 
                     */
                    void SetEventCondition(const AlarmPolicyEventCondition& _eventCondition);

                    /**
                     * 判断参数 EventCondition 是否已赋值
                     * @return EventCondition 是否已赋值
                     * 
                     */
                    bool EventConditionHasBeenSet() const;

                    /**
                     * 获取Global filter.
                     * @return Filter Global filter.
                     * 
                     */
                    AlarmPolicyFilter GetFilter() const;

                    /**
                     * 设置Global filter.
                     * @param _filter Global filter.
                     * 
                     */
                    void SetFilter(const AlarmPolicyFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取Aggregation dimension list, which is used to specify which dimension keys data is grouped by.
                     * @return GroupBy Aggregation dimension list, which is used to specify which dimension keys data is grouped by.
                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置Aggregation dimension list, which is used to specify which dimension keys data is grouped by.
                     * @param _groupBy Aggregation dimension list, which is used to specify which dimension keys data is grouped by.
                     * 
                     */
                    void SetGroupBy(const std::vector<std::string>& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     * 
                     */
                    bool GroupByHasBeenSet() const;

                    /**
                     * 获取Log alarm creation request parameters
                     * @return LogAlarmReqInfo Log alarm creation request parameters
                     * 
                     */
                    LogAlarmReq GetLogAlarmReqInfo() const;

                    /**
                     * 设置Log alarm creation request parameters
                     * @param _logAlarmReqInfo Log alarm creation request parameters
                     * 
                     */
                    void SetLogAlarmReqInfo(const LogAlarmReq& _logAlarmReqInfo);

                    /**
                     * 判断参数 LogAlarmReqInfo 是否已赋值
                     * @return LogAlarmReqInfo 是否已赋值
                     * 
                     */
                    bool LogAlarmReqInfoHasBeenSet() const;

                    /**
                     * 获取Template ID, which is dedicated to TencentCloud Managed Service for Prometheus.
                     * @return NoticeIds Template ID, which is dedicated to TencentCloud Managed Service for Prometheus.
                     * 
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置Template ID, which is dedicated to TencentCloud Managed Service for Prometheus.
                     * @param _noticeIds Template ID, which is dedicated to TencentCloud Managed Service for Prometheus.
                     * 
                     */
                    void SetNoticeIds(const std::vector<std::string>& _noticeIds);

                    /**
                     * 判断参数 NoticeIds 是否已赋值
                     * @return NoticeIds 是否已赋值
                     * 
                     */
                    bool NoticeIdsHasBeenSet() const;

                    /**
                     * 获取Status (`0`: Disabled; `1`: Enabled)
                     * @return Enable Status (`0`: Disabled; `1`: Enabled)
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Status (`0`: Disabled; `1`: Enabled)
                     * @param _enable Status (`0`: Disabled; `1`: Enabled)
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Name of the policy dedicated to TMP
                     * @return PolicyName Name of the policy dedicated to TMP
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Name of the policy dedicated to TMP
                     * @param _policyName Name of the policy dedicated to TMP
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取The alert configured for an event
                     * @return EbSubject The alert configured for an event
                     * 
                     */
                    std::string GetEbSubject() const;

                    /**
                     * 设置The alert configured for an event
                     * @param _ebSubject The alert configured for an event
                     * 
                     */
                    void SetEbSubject(const std::string& _ebSubject);

                    /**
                     * 判断参数 EbSubject 是否已赋值
                     * @return EbSubject 是否已赋值
                     * 
                     */
                    bool EbSubjectHasBeenSet() const;

                private:

                    /**
                     * Module name, which is fixed at "monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Alarm policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * ID of trigger condition template. This parameter can be left empty.
                     */
                    int64_t m_conditionTemplateId;
                    bool m_conditionTemplateIdHasBeenSet;

                    /**
                     * Metric trigger condition
                     */
                    AlarmPolicyCondition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Event trigger condition
                     */
                    AlarmPolicyEventCondition m_eventCondition;
                    bool m_eventConditionHasBeenSet;

                    /**
                     * Global filter.
                     */
                    AlarmPolicyFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * Aggregation dimension list, which is used to specify which dimension keys data is grouped by.
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * Log alarm creation request parameters
                     */
                    LogAlarmReq m_logAlarmReqInfo;
                    bool m_logAlarmReqInfoHasBeenSet;

                    /**
                     * Template ID, which is dedicated to TencentCloud Managed Service for Prometheus.
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * Status (`0`: Disabled; `1`: Enabled)
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Name of the policy dedicated to TMP
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * The alert configured for an event
                     */
                    std::string m_ebSubject;
                    bool m_ebSubjectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYCONDITIONREQUEST_H_
