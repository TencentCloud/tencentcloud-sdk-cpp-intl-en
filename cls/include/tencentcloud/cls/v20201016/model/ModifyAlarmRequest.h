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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MonitorTime.h>
#include <tencentcloud/cls/v20201016/model/MultiCondition.h>
#include <tencentcloud/cls/v20201016/model/AlarmTarget.h>
#include <tencentcloud/cls/v20201016/model/CallBackInfo.h>
#include <tencentcloud/cls/v20201016/model/AnalysisDimensional.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/AlarmClassification.h>
#include <tencentcloud/cls/v20201016/model/MonitorNotice.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyAlarm request structure.
                */
                class ModifyAlarmRequest : public AbstractModel
                {
                public:
                    ModifyAlarmRequest();
                    ~ModifyAlarmRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Alert policy ID. - Search the alert policy ID by <a href="https://www.tencentcloud.com/document/product/614/56461?from_cn_redirect=1">obtaining the alarm policy list</a>.</p>
                     * @return AlarmId <p>Alert policy ID. - Search the alert policy ID by <a href="https://www.tencentcloud.com/document/product/614/56461?from_cn_redirect=1">obtaining the alarm policy list</a>.</p>
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置<p>Alert policy ID. - Search the alert policy ID by <a href="https://www.tencentcloud.com/document/product/614/56461?from_cn_redirect=1">obtaining the alarm policy list</a>.</p>
                     * @param _alarmId <p>Alert policy ID. - Search the alert policy ID by <a href="https://www.tencentcloud.com/document/product/614/56461?from_cn_redirect=1">obtaining the alarm policy list</a>.</p>
                     * 
                     */
                    void SetAlarmId(const std::string& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取<p>Alarm policy name. Supports a maximum of 255 bytes. The '|' character is unsupported.</p>
                     * @return Name <p>Alarm policy name. Supports a maximum of 255 bytes. The '|' character is unsupported.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Alarm policy name. Supports a maximum of 255 bytes. The '|' character is unsupported.</p>
                     * @param _name <p>Alarm policy name. Supports a maximum of 255 bytes. The '|' character is unsupported.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Monitoring task execution time point.</p>
                     * @return MonitorTime <p>Monitoring task execution time point.</p>
                     * 
                     */
                    MonitorTime GetMonitorTime() const;

                    /**
                     * 设置<p>Monitoring task execution time point.</p>
                     * @param _monitorTime <p>Monitoring task execution time point.</p>
                     * 
                     */
                    void SetMonitorTime(const MonitorTime& _monitorTime);

                    /**
                     * 判断参数 MonitorTime 是否已赋值
                     * @return MonitorTime 是否已赋值
                     * 
                     */
                    bool MonitorTimeHasBeenSet() const;

                    /**
                     * 获取<p>Trigger condition for sending alarm information.</p><p>Note:</p><ul><li>Condition and AlarmLevel are one set of configurations, and MultiConditions is another set of configurations. The two sets are mutually exclusive.</li></ul>
                     * @return Condition <p>Trigger condition for sending alarm information.</p><p>Note:</p><ul><li>Condition and AlarmLevel are one set of configurations, and MultiConditions is another set of configurations. The two sets are mutually exclusive.</li></ul>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p>Trigger condition for sending alarm information.</p><p>Note:</p><ul><li>Condition and AlarmLevel are one set of configurations, and MultiConditions is another set of configurations. The two sets are mutually exclusive.</li></ul>
                     * @param _condition <p>Trigger condition for sending alarm information.</p><p>Note:</p><ul><li>Condition and AlarmLevel are one set of configurations, and MultiConditions is another set of configurations. The two sets are mutually exclusive.</li></ul>
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取<p>Alarm level.</p><p>0: Warning (Warn); 1: Reminder (Info); 2: Emergency (Critical)</p><p>Note:</p><ul><li>Condition and AlarmLevel are one set of configurations, and MultiConditions are another set of configurations. The two sets are mutually exclusive.</li></ul>
                     * @return AlarmLevel <p>Alarm level.</p><p>0: Warning (Warn); 1: Reminder (Info); 2: Emergency (Critical)</p><p>Note:</p><ul><li>Condition and AlarmLevel are one set of configurations, and MultiConditions are another set of configurations. The two sets are mutually exclusive.</li></ul>
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置<p>Alarm level.</p><p>0: Warning (Warn); 1: Reminder (Info); 2: Emergency (Critical)</p><p>Note:</p><ul><li>Condition and AlarmLevel are one set of configurations, and MultiConditions are another set of configurations. The two sets are mutually exclusive.</li></ul>
                     * @param _alarmLevel <p>Alarm level.</p><p>0: Warning (Warn); 1: Reminder (Info); 2: Emergency (Critical)</p><p>Note:</p><ul><li>Condition and AlarmLevel are one set of configurations, and MultiConditions are another set of configurations. The two sets are mutually exclusive.</li></ul>
                     * 
                     */
                    void SetAlarmLevel(const uint64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取<p>Multiple trigger conditions.</p><p>Note:</p><ul><li>Condition and AlarmLevel are one set of configurations, and MultiConditions are another set of configurations. The two sets of configurations are mutually exclusive.</li></ul>
                     * @return MultiConditions <p>Multiple trigger conditions.</p><p>Note:</p><ul><li>Condition and AlarmLevel are one set of configurations, and MultiConditions are another set of configurations. The two sets of configurations are mutually exclusive.</li></ul>
                     * 
                     */
                    std::vector<MultiCondition> GetMultiConditions() const;

                    /**
                     * 设置<p>Multiple trigger conditions.</p><p>Note:</p><ul><li>Condition and AlarmLevel are one set of configurations, and MultiConditions are another set of configurations. The two sets of configurations are mutually exclusive.</li></ul>
                     * @param _multiConditions <p>Multiple trigger conditions.</p><p>Note:</p><ul><li>Condition and AlarmLevel are one set of configurations, and MultiConditions are another set of configurations. The two sets of configurations are mutually exclusive.</li></ul>
                     * 
                     */
                    void SetMultiConditions(const std::vector<MultiCondition>& _multiConditions);

                    /**
                     * 判断参数 MultiConditions 是否已赋值
                     * @return MultiConditions 是否已赋值
                     * 
                     */
                    bool MultiConditionsHasBeenSet() const;

                    /**
                     * 获取<p>Duration cycle. An alarm is triggered after the trigger conditions are constantly met for TriggerCount cycles. The minimum value is 1, and the maximum value is 2000.</p>
                     * @return TriggerCount <p>Duration cycle. An alarm is triggered after the trigger conditions are constantly met for TriggerCount cycles. The minimum value is 1, and the maximum value is 2000.</p>
                     * 
                     */
                    int64_t GetTriggerCount() const;

                    /**
                     * 设置<p>Duration cycle. An alarm is triggered after the trigger conditions are constantly met for TriggerCount cycles. The minimum value is 1, and the maximum value is 2000.</p>
                     * @param _triggerCount <p>Duration cycle. An alarm is triggered after the trigger conditions are constantly met for TriggerCount cycles. The minimum value is 1, and the maximum value is 2000.</p>
                     * 
                     */
                    void SetTriggerCount(const int64_t& _triggerCount);

                    /**
                     * 判断参数 TriggerCount 是否已赋值
                     * @return TriggerCount 是否已赋值
                     * 
                     */
                    bool TriggerCountHasBeenSet() const;

                    /**
                     * 获取<p>Alarm repeat cycle. In minutes. Value ranges from 0 to 1440.</p>
                     * @return AlarmPeriod <p>Alarm repeat cycle. In minutes. Value ranges from 0 to 1440.</p>
                     * 
                     */
                    int64_t GetAlarmPeriod() const;

                    /**
                     * 设置<p>Alarm repeat cycle. In minutes. Value ranges from 0 to 1440.</p>
                     * @param _alarmPeriod <p>Alarm repeat cycle. In minutes. Value ranges from 0 to 1440.</p>
                     * 
                     */
                    void SetAlarmPeriod(const int64_t& _alarmPeriod);

                    /**
                     * 判断参数 AlarmPeriod 是否已赋值
                     * @return AlarmPeriod 是否已赋值
                     * 
                     */
                    bool AlarmPeriodHasBeenSet() const;

                    /**
                     * 获取<p>Monitoring object list.</p>
                     * @return AlarmTargets <p>Monitoring object list.</p>
                     * 
                     */
                    std::vector<AlarmTarget> GetAlarmTargets() const;

                    /**
                     * 设置<p>Monitoring object list.</p>
                     * @param _alarmTargets <p>Monitoring object list.</p>
                     * 
                     */
                    void SetAlarmTargets(const std::vector<AlarmTarget>& _alarmTargets);

                    /**
                     * 判断参数 AlarmTargets 是否已赋值
                     * @return AlarmTargets 是否已赋值
                     * 
                     */
                    bool AlarmTargetsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable alarm policy.</p>
                     * @return Status <p>Whether to enable alarm policy.</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>Whether to enable alarm policy.</p>
                     * @param _status <p>Whether to enable alarm policy.</p>
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>This parameter has been deprecated, please use the Status parameter to control whether to enable the alarm policy.</p>
                     * @return Enable <p>This parameter has been deprecated, please use the Status parameter to control whether to enable the alarm policy.</p>
                     * @deprecated
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>This parameter has been deprecated, please use the Status parameter to control whether to enable the alarm policy.</p>
                     * @param _enable <p>This parameter has been deprecated, please use the Status parameter to control whether to enable the alarm policy.</p>
                     * @deprecated
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * @deprecated
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>User-defined alarm content</p>
                     * @return MessageTemplate <p>User-defined alarm content</p>
                     * 
                     */
                    std::string GetMessageTemplate() const;

                    /**
                     * 设置<p>User-defined alarm content</p>
                     * @param _messageTemplate <p>User-defined alarm content</p>
                     * 
                     */
                    void SetMessageTemplate(const std::string& _messageTemplate);

                    /**
                     * 判断参数 MessageTemplate 是否已赋值
                     * @return MessageTemplate 是否已赋值
                     * 
                     */
                    bool MessageTemplateHasBeenSet() const;

                    /**
                     * 获取<p>user-defined callback</p>
                     * @return CallBack <p>user-defined callback</p>
                     * 
                     */
                    CallBackInfo GetCallBack() const;

                    /**
                     * 设置<p>user-defined callback</p>
                     * @param _callBack <p>user-defined callback</p>
                     * 
                     */
                    void SetCallBack(const CallBackInfo& _callBack);

                    /**
                     * 判断参数 CallBack 是否已赋值
                     * @return CallBack 是否已赋值
                     * 
                     */
                    bool CallBackHasBeenSet() const;

                    /**
                     * 获取<p>Multi-dimensional analysis</p>
                     * @return Analysis <p>Multi-dimensional analysis</p>
                     * 
                     */
                    std::vector<AnalysisDimensional> GetAnalysis() const;

                    /**
                     * 设置<p>Multi-dimensional analysis</p>
                     * @param _analysis <p>Multi-dimensional analysis</p>
                     * 
                     */
                    void SetAnalysis(const std::vector<AnalysisDimensional>& _analysis);

                    /**
                     * 判断参数 Analysis 是否已赋值
                     * @return Analysis 是否已赋值
                     * 
                     */
                    bool AnalysisHasBeenSet() const;

                    /**
                     * 获取<p>Group trigger status. true: enabled, false: disabled (default)</p>
                     * @return GroupTriggerStatus <p>Group trigger status. true: enabled, false: disabled (default)</p>
                     * 
                     */
                    bool GetGroupTriggerStatus() const;

                    /**
                     * 设置<p>Group trigger status. true: enabled, false: disabled (default)</p>
                     * @param _groupTriggerStatus <p>Group trigger status. true: enabled, false: disabled (default)</p>
                     * 
                     */
                    void SetGroupTriggerStatus(const bool& _groupTriggerStatus);

                    /**
                     * 判断参数 GroupTriggerStatus 是否已赋值
                     * @return GroupTriggerStatus 是否已赋值
                     * 
                     */
                    bool GroupTriggerStatusHasBeenSet() const;

                    /**
                     * 获取<p>Group trigger conditions.</p>
                     * @return GroupTriggerCondition <p>Group trigger conditions.</p>
                     * 
                     */
                    std::vector<std::string> GetGroupTriggerCondition() const;

                    /**
                     * 设置<p>Group trigger conditions.</p>
                     * @param _groupTriggerCondition <p>Group trigger conditions.</p>
                     * 
                     */
                    void SetGroupTriggerCondition(const std::vector<std::string>& _groupTriggerCondition);

                    /**
                     * 判断参数 GroupTriggerCondition 是否已赋值
                     * @return GroupTriggerCondition 是否已赋值
                     * 
                     */
                    bool GroupTriggerConditionHasBeenSet() const;

                    /**
                     * 获取<p>Tag description list, by specifying this parameter, you can simultaneously bind a tag to the corresponding alarm policy. Up to 10 tag key-value pairs are supported, and no duplicate key-value pairs are allowed.</p>
                     * @return Tags <p>Tag description list, by specifying this parameter, you can simultaneously bind a tag to the corresponding alarm policy. Up to 10 tag key-value pairs are supported, and no duplicate key-value pairs are allowed.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag description list, by specifying this parameter, you can simultaneously bind a tag to the corresponding alarm policy. Up to 10 tag key-value pairs are supported, and no duplicate key-value pairs are allowed.</p>
                     * @param _tags <p>Tag description list, by specifying this parameter, you can simultaneously bind a tag to the corresponding alarm policy. Up to 10 tag key-value pairs are supported, and no duplicate key-value pairs are allowed.</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Monitored object type. 0: Common monitoring object for execution statements; 1: Each execution statement selects its own monitored object.<br>When the value is 1, the number of elements in AlarmTargets cannot exceed 10. The Number in AlarmTargets must be consecutive positive integers starting from 1 and must be unique.</p>
                     * @return MonitorObjectType <p>Monitored object type. 0: Common monitoring object for execution statements; 1: Each execution statement selects its own monitored object.<br>When the value is 1, the number of elements in AlarmTargets cannot exceed 10. The Number in AlarmTargets must be consecutive positive integers starting from 1 and must be unique.</p>
                     * 
                     */
                    uint64_t GetMonitorObjectType() const;

                    /**
                     * 设置<p>Monitored object type. 0: Common monitoring object for execution statements; 1: Each execution statement selects its own monitored object.<br>When the value is 1, the number of elements in AlarmTargets cannot exceed 10. The Number in AlarmTargets must be consecutive positive integers starting from 1 and must be unique.</p>
                     * @param _monitorObjectType <p>Monitored object type. 0: Common monitoring object for execution statements; 1: Each execution statement selects its own monitored object.<br>When the value is 1, the number of elements in AlarmTargets cannot exceed 10. The Number in AlarmTargets must be consecutive positive integers starting from 1 and must be unique.</p>
                     * 
                     */
                    void SetMonitorObjectType(const uint64_t& _monitorObjectType);

                    /**
                     * 判断参数 MonitorObjectType 是否已赋值
                     * @return MonitorObjectType 是否已赋值
                     * 
                     */
                    bool MonitorObjectTypeHasBeenSet() const;

                    /**
                     * 获取<p>Alert additional classification information list.<br>Number of Classifications Elements cannot exceed 20.<br>The Key of Classifications elements cannot be empty, must be unique, length cannot exceed 50 characters, and complies with the regular expression <code>^[a-z]([a-z0-9_]{0,49})$</code>.<br>Value of Classifications elements cannot exceed 200 characters.</p>
                     * @return Classifications <p>Alert additional classification information list.<br>Number of Classifications Elements cannot exceed 20.<br>The Key of Classifications elements cannot be empty, must be unique, length cannot exceed 50 characters, and complies with the regular expression <code>^[a-z]([a-z0-9_]{0,49})$</code>.<br>Value of Classifications elements cannot exceed 200 characters.</p>
                     * 
                     */
                    std::vector<AlarmClassification> GetClassifications() const;

                    /**
                     * 设置<p>Alert additional classification information list.<br>Number of Classifications Elements cannot exceed 20.<br>The Key of Classifications elements cannot be empty, must be unique, length cannot exceed 50 characters, and complies with the regular expression <code>^[a-z]([a-z0-9_]{0,49})$</code>.<br>Value of Classifications elements cannot exceed 200 characters.</p>
                     * @param _classifications <p>Alert additional classification information list.<br>Number of Classifications Elements cannot exceed 20.<br>The Key of Classifications elements cannot be empty, must be unique, length cannot exceed 50 characters, and complies with the regular expression <code>^[a-z]([a-z0-9_]{0,49})$</code>.<br>Value of Classifications elements cannot exceed 200 characters.</p>
                     * 
                     */
                    void SetClassifications(const std::vector<AlarmClassification>& _classifications);

                    /**
                     * 判断参数 Classifications 是否已赋值
                     * @return Classifications 是否已赋值
                     * 
                     */
                    bool ClassificationsHasBeenSet() const;

                    /**
                     * 获取<p>List of associated CLS alarm notification channel groups. - Search the list of associated alarm notification channel groups via <a href="https://www.tencentcloud.com/document/product/614/56462?from_cn_redirect=1">Query notification channel group list</a>. It is mutually exclusive with MonitorNotice.</p>
                     * @return AlarmNoticeIds <p>List of associated CLS alarm notification channel groups. - Search the list of associated alarm notification channel groups via <a href="https://www.tencentcloud.com/document/product/614/56462?from_cn_redirect=1">Query notification channel group list</a>. It is mutually exclusive with MonitorNotice.</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmNoticeIds() const;

                    /**
                     * 设置<p>List of associated CLS alarm notification channel groups. - Search the list of associated alarm notification channel groups via <a href="https://www.tencentcloud.com/document/product/614/56462?from_cn_redirect=1">Query notification channel group list</a>. It is mutually exclusive with MonitorNotice.</p>
                     * @param _alarmNoticeIds <p>List of associated CLS alarm notification channel groups. - Search the list of associated alarm notification channel groups via <a href="https://www.tencentcloud.com/document/product/614/56462?from_cn_redirect=1">Query notification channel group list</a>. It is mutually exclusive with MonitorNotice.</p>
                     * 
                     */
                    void SetAlarmNoticeIds(const std::vector<std::string>& _alarmNoticeIds);

                    /**
                     * 判断参数 AlarmNoticeIds 是否已赋值
                     * @return AlarmNoticeIds 是否已赋值
                     * 
                     */
                    bool AlarmNoticeIdsHasBeenSet() const;

                    /**
                     * 获取<p>The associated observability platform notification template is mutually exclusive with the AlarmNoticeIds parameter and cannot include both.</p>
                     * @return MonitorNotice <p>The associated observability platform notification template is mutually exclusive with the AlarmNoticeIds parameter and cannot include both.</p>
                     * 
                     */
                    MonitorNotice GetMonitorNotice() const;

                    /**
                     * 设置<p>The associated observability platform notification template is mutually exclusive with the AlarmNoticeIds parameter and cannot include both.</p>
                     * @param _monitorNotice <p>The associated observability platform notification template is mutually exclusive with the AlarmNoticeIds parameter and cannot include both.</p>
                     * 
                     */
                    void SetMonitorNotice(const MonitorNotice& _monitorNotice);

                    /**
                     * 判断参数 MonitorNotice 是否已赋值
                     * @return MonitorNotice 是否已赋值
                     * 
                     */
                    bool MonitorNoticeHasBeenSet() const;

                private:

                    /**
                     * <p>Alert policy ID. - Search the alert policy ID by <a href="https://www.tencentcloud.com/document/product/614/56461?from_cn_redirect=1">obtaining the alarm policy list</a>.</p>
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * <p>Alarm policy name. Supports a maximum of 255 bytes. The '|' character is unsupported.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Monitoring task execution time point.</p>
                     */
                    MonitorTime m_monitorTime;
                    bool m_monitorTimeHasBeenSet;

                    /**
                     * <p>Trigger condition for sending alarm information.</p><p>Note:</p><ul><li>Condition and AlarmLevel are one set of configurations, and MultiConditions is another set of configurations. The two sets are mutually exclusive.</li></ul>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>Alarm level.</p><p>0: Warning (Warn); 1: Reminder (Info); 2: Emergency (Critical)</p><p>Note:</p><ul><li>Condition and AlarmLevel are one set of configurations, and MultiConditions are another set of configurations. The two sets are mutually exclusive.</li></ul>
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * <p>Multiple trigger conditions.</p><p>Note:</p><ul><li>Condition and AlarmLevel are one set of configurations, and MultiConditions are another set of configurations. The two sets of configurations are mutually exclusive.</li></ul>
                     */
                    std::vector<MultiCondition> m_multiConditions;
                    bool m_multiConditionsHasBeenSet;

                    /**
                     * <p>Duration cycle. An alarm is triggered after the trigger conditions are constantly met for TriggerCount cycles. The minimum value is 1, and the maximum value is 2000.</p>
                     */
                    int64_t m_triggerCount;
                    bool m_triggerCountHasBeenSet;

                    /**
                     * <p>Alarm repeat cycle. In minutes. Value ranges from 0 to 1440.</p>
                     */
                    int64_t m_alarmPeriod;
                    bool m_alarmPeriodHasBeenSet;

                    /**
                     * <p>Monitoring object list.</p>
                     */
                    std::vector<AlarmTarget> m_alarmTargets;
                    bool m_alarmTargetsHasBeenSet;

                    /**
                     * <p>Whether to enable alarm policy.</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>This parameter has been deprecated, please use the Status parameter to control whether to enable the alarm policy.</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>User-defined alarm content</p>
                     */
                    std::string m_messageTemplate;
                    bool m_messageTemplateHasBeenSet;

                    /**
                     * <p>user-defined callback</p>
                     */
                    CallBackInfo m_callBack;
                    bool m_callBackHasBeenSet;

                    /**
                     * <p>Multi-dimensional analysis</p>
                     */
                    std::vector<AnalysisDimensional> m_analysis;
                    bool m_analysisHasBeenSet;

                    /**
                     * <p>Group trigger status. true: enabled, false: disabled (default)</p>
                     */
                    bool m_groupTriggerStatus;
                    bool m_groupTriggerStatusHasBeenSet;

                    /**
                     * <p>Group trigger conditions.</p>
                     */
                    std::vector<std::string> m_groupTriggerCondition;
                    bool m_groupTriggerConditionHasBeenSet;

                    /**
                     * <p>Tag description list, by specifying this parameter, you can simultaneously bind a tag to the corresponding alarm policy. Up to 10 tag key-value pairs are supported, and no duplicate key-value pairs are allowed.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Monitored object type. 0: Common monitoring object for execution statements; 1: Each execution statement selects its own monitored object.<br>When the value is 1, the number of elements in AlarmTargets cannot exceed 10. The Number in AlarmTargets must be consecutive positive integers starting from 1 and must be unique.</p>
                     */
                    uint64_t m_monitorObjectType;
                    bool m_monitorObjectTypeHasBeenSet;

                    /**
                     * <p>Alert additional classification information list.<br>Number of Classifications Elements cannot exceed 20.<br>The Key of Classifications elements cannot be empty, must be unique, length cannot exceed 50 characters, and complies with the regular expression <code>^[a-z]([a-z0-9_]{0,49})$</code>.<br>Value of Classifications elements cannot exceed 200 characters.</p>
                     */
                    std::vector<AlarmClassification> m_classifications;
                    bool m_classificationsHasBeenSet;

                    /**
                     * <p>List of associated CLS alarm notification channel groups. - Search the list of associated alarm notification channel groups via <a href="https://www.tencentcloud.com/document/product/614/56462?from_cn_redirect=1">Query notification channel group list</a>. It is mutually exclusive with MonitorNotice.</p>
                     */
                    std::vector<std::string> m_alarmNoticeIds;
                    bool m_alarmNoticeIdsHasBeenSet;

                    /**
                     * <p>The associated observability platform notification template is mutually exclusive with the AlarmNoticeIds parameter and cannot include both.</p>
                     */
                    MonitorNotice m_monitorNotice;
                    bool m_monitorNoticeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMREQUEST_H_
