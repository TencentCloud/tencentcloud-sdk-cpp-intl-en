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
                     * 获取Alarm policy ID
                     * @return AlarmId Alarm policy ID
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置Alarm policy ID
                     * @param _alarmId Alarm policy ID
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
                     * 获取Alarm policy name
                     * @return Name Alarm policy name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Alarm policy name
                     * @param _name Alarm policy name
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
                     * 获取Monitoring task running time point
                     * @return MonitorTime Monitoring task running time point
                     * 
                     */
                    MonitorTime GetMonitorTime() const;

                    /**
                     * 设置Monitoring task running time point
                     * @param _monitorTime Monitoring task running time point
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
                     * 获取Trigger condition. Note: - Condition and AlarmLevel are one set of configurations, MultiConditions is another set of configurations. The two sets of configurations are mutually exclusive.
                     * @return Condition Trigger condition. Note: - Condition and AlarmLevel are one set of configurations, MultiConditions is another set of configurations. The two sets of configurations are mutually exclusive.
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Trigger condition. Note: - Condition and AlarmLevel are one set of configurations, MultiConditions is another set of configurations. The two sets of configurations are mutually exclusive.
                     * @param _condition Trigger condition. Note: - Condition and AlarmLevel are one set of configurations, MultiConditions is another set of configurations. The two sets of configurations are mutually exclusive.
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
                     * 获取Alarm level.0: Warning (Warn); 1: Reminder (Info); 2: Urgent (Critical)

Note: - Condition and AlarmLevel are one set of configurations, MultiConditions is another set of configurations. The two sets of configurations are mutually exclusive.
                     * @return AlarmLevel Alarm level.0: Warning (Warn); 1: Reminder (Info); 2: Urgent (Critical)

Note: - Condition and AlarmLevel are one set of configurations, MultiConditions is another set of configurations. The two sets of configurations are mutually exclusive.
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置Alarm level.0: Warning (Warn); 1: Reminder (Info); 2: Urgent (Critical)

Note: - Condition and AlarmLevel are one set of configurations, MultiConditions is another set of configurations. The two sets of configurations are mutually exclusive.
                     * @param _alarmLevel Alarm level.0: Warning (Warn); 1: Reminder (Info); 2: Urgent (Critical)

Note: - Condition and AlarmLevel are one set of configurations, MultiConditions is another set of configurations. The two sets of configurations are mutually exclusive.
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
                     * 获取Multiple trigger conditions. Note: - Condition and AlarmLevel are one set of configurations, MultiConditions is another set of configurations. The two sets of configurations are mutually exclusive.
                     * @return MultiConditions Multiple trigger conditions. Note: - Condition and AlarmLevel are one set of configurations, MultiConditions is another set of configurations. The two sets of configurations are mutually exclusive.
                     * 
                     */
                    std::vector<MultiCondition> GetMultiConditions() const;

                    /**
                     * 设置Multiple trigger conditions. Note: - Condition and AlarmLevel are one set of configurations, MultiConditions is another set of configurations. The two sets of configurations are mutually exclusive.
                     * @param _multiConditions Multiple trigger conditions. Note: - Condition and AlarmLevel are one set of configurations, MultiConditions is another set of configurations. The two sets of configurations are mutually exclusive.
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
                     * 获取Alarm persistence cycle. An alarm will be triggered only after the corresponding trigger condition is met for the number of times specified by `TriggerCount`. Value range: 1 to 10
                     * @return TriggerCount Alarm persistence cycle. An alarm will be triggered only after the corresponding trigger condition is met for the number of times specified by `TriggerCount`. Value range: 1 to 10
                     * 
                     */
                    int64_t GetTriggerCount() const;

                    /**
                     * 设置Alarm persistence cycle. An alarm will be triggered only after the corresponding trigger condition is met for the number of times specified by `TriggerCount`. Value range: 1 to 10
                     * @param _triggerCount Alarm persistence cycle. An alarm will be triggered only after the corresponding trigger condition is met for the number of times specified by `TriggerCount`. Value range: 1 to 10
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
                     * 获取Repeated alarm interval in minutes. Value range: 0 to 1440
                     * @return AlarmPeriod Repeated alarm interval in minutes. Value range: 0 to 1440
                     * 
                     */
                    int64_t GetAlarmPeriod() const;

                    /**
                     * 设置Repeated alarm interval in minutes. Value range: 0 to 1440
                     * @param _alarmPeriod Repeated alarm interval in minutes. Value range: 0 to 1440
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
                     * 获取List of associated alarm notification templates
                     * @return AlarmNoticeIds List of associated alarm notification templates
                     * 
                     */
                    std::vector<std::string> GetAlarmNoticeIds() const;

                    /**
                     * 设置List of associated alarm notification templates
                     * @param _alarmNoticeIds List of associated alarm notification templates
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
                     * 获取Monitoring object list
                     * @return AlarmTargets Monitoring object list
                     * 
                     */
                    std::vector<AlarmTarget> GetAlarmTargets() const;

                    /**
                     * 设置Monitoring object list
                     * @param _alarmTargets Monitoring object list
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
                     * 获取Whether to enable the alarm policy
                     * @return Status Whether to enable the alarm policy
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Whether to enable the alarm policy
                     * @param _status Whether to enable the alarm policy
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
                     * 获取This parameter has been deprecated. Use the Status parameter to control whether to enable the alarm policy.
                     * @return Enable This parameter has been deprecated. Use the Status parameter to control whether to enable the alarm policy.
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置This parameter has been deprecated. Use the Status parameter to control whether to enable the alarm policy.
                     * @param _enable This parameter has been deprecated. Use the Status parameter to control whether to enable the alarm policy.
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Custom alarm content
                     * @return MessageTemplate Custom alarm content
                     * 
                     */
                    std::string GetMessageTemplate() const;

                    /**
                     * 设置Custom alarm content
                     * @param _messageTemplate Custom alarm content
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
                     * 获取Custom callback
                     * @return CallBack Custom callback
                     * 
                     */
                    CallBackInfo GetCallBack() const;

                    /**
                     * 设置Custom callback
                     * @param _callBack Custom callback
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
                     * 获取Multi-Dimensional analysis
                     * @return Analysis Multi-Dimensional analysis
                     * 
                     */
                    std::vector<AnalysisDimensional> GetAnalysis() const;

                    /**
                     * 设置Multi-Dimensional analysis
                     * @param _analysis Multi-Dimensional analysis
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
                     * 获取Group trigger status. true: enabled; false: disabled (default)
                     * @return GroupTriggerStatus Group trigger status. true: enabled; false: disabled (default)
                     * 
                     */
                    bool GetGroupTriggerStatus() const;

                    /**
                     * 设置Group trigger status. true: enabled; false: disabled (default)
                     * @param _groupTriggerStatus Group trigger status. true: enabled; false: disabled (default)
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
                     * 获取Grouping trigger conditions.
                     * @return GroupTriggerCondition Grouping trigger conditions.
                     * 
                     */
                    std::vector<std::string> GetGroupTriggerCondition() const;

                    /**
                     * 设置Grouping trigger conditions.
                     * @param _groupTriggerCondition Grouping trigger conditions.
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
                     * 获取Tag description list, by specifying this parameter, you can simultaneously bind a Tag to the corresponding alarm policy. Up to 10 Tag key-value pairs are supported, and they must be unique.
                     * @return Tags Tag description list, by specifying this parameter, you can simultaneously bind a Tag to the corresponding alarm policy. Up to 10 Tag key-value pairs are supported, and they must be unique.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag description list, by specifying this parameter, you can simultaneously bind a Tag to the corresponding alarm policy. Up to 10 Tag key-value pairs are supported, and they must be unique.
                     * @param _tags Tag description list, by specifying this parameter, you can simultaneously bind a Tag to the corresponding alarm policy. Up to 10 Tag key-value pairs are supported, and they must be unique.
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
                     * 获取Monitored Object Type. 0: common monitoring objects for execution statements; 1: separately selected monitoring objects for each execution statement.When the value is 1, the number of AlarmTargets Elements (XML) cannot exceed 10, and the Numbers in AlarmTargets must be continuous positive integers starting from 1, without duplication.

                     * @return MonitorObjectType Monitored Object Type. 0: common monitoring objects for execution statements; 1: separately selected monitoring objects for each execution statement.When the value is 1, the number of AlarmTargets Elements (XML) cannot exceed 10, and the Numbers in AlarmTargets must be continuous positive integers starting from 1, without duplication.

                     * 
                     */
                    uint64_t GetMonitorObjectType() const;

                    /**
                     * 设置Monitored Object Type. 0: common monitoring objects for execution statements; 1: separately selected monitoring objects for each execution statement.When the value is 1, the number of AlarmTargets Elements (XML) cannot exceed 10, and the Numbers in AlarmTargets must be continuous positive integers starting from 1, without duplication.

                     * @param _monitorObjectType Monitored Object Type. 0: common monitoring objects for execution statements; 1: separately selected monitoring objects for each execution statement.When the value is 1, the number of AlarmTargets Elements (XML) cannot exceed 10, and the Numbers in AlarmTargets must be continuous positive integers starting from 1, without duplication.

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
                     * 获取Alarm additional classification information list.
The number of Classifications elements cannot exceed 20.The Key of Classifications element must not be empty and duplicated, and its length cannot exceed 50 characters, complying with the regular expression ^[a-z]([a-z0-9_]{0,49})$.The Value length of Classifications element cannot exceed 200 characters.
                     * @return Classifications Alarm additional classification information list.
The number of Classifications elements cannot exceed 20.The Key of Classifications element must not be empty and duplicated, and its length cannot exceed 50 characters, complying with the regular expression ^[a-z]([a-z0-9_]{0,49})$.The Value length of Classifications element cannot exceed 200 characters.
                     * 
                     */
                    std::vector<AlarmClassification> GetClassifications() const;

                    /**
                     * 设置Alarm additional classification information list.
The number of Classifications elements cannot exceed 20.The Key of Classifications element must not be empty and duplicated, and its length cannot exceed 50 characters, complying with the regular expression ^[a-z]([a-z0-9_]{0,49})$.The Value length of Classifications element cannot exceed 200 characters.
                     * @param _classifications Alarm additional classification information list.
The number of Classifications elements cannot exceed 20.The Key of Classifications element must not be empty and duplicated, and its length cannot exceed 50 characters, complying with the regular expression ^[a-z]([a-z0-9_]{0,49})$.The Value length of Classifications element cannot exceed 200 characters.
                     * 
                     */
                    void SetClassifications(const std::vector<AlarmClassification>& _classifications);

                    /**
                     * 判断参数 Classifications 是否已赋值
                     * @return Classifications 是否已赋值
                     * 
                     */
                    bool ClassificationsHasBeenSet() const;

                private:

                    /**
                     * Alarm policy ID
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * Alarm policy name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Monitoring task running time point
                     */
                    MonitorTime m_monitorTime;
                    bool m_monitorTimeHasBeenSet;

                    /**
                     * Trigger condition. Note: - Condition and AlarmLevel are one set of configurations, MultiConditions is another set of configurations. The two sets of configurations are mutually exclusive.
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Alarm level.0: Warning (Warn); 1: Reminder (Info); 2: Urgent (Critical)

Note: - Condition and AlarmLevel are one set of configurations, MultiConditions is another set of configurations. The two sets of configurations are mutually exclusive.
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Multiple trigger conditions. Note: - Condition and AlarmLevel are one set of configurations, MultiConditions is another set of configurations. The two sets of configurations are mutually exclusive.
                     */
                    std::vector<MultiCondition> m_multiConditions;
                    bool m_multiConditionsHasBeenSet;

                    /**
                     * Alarm persistence cycle. An alarm will be triggered only after the corresponding trigger condition is met for the number of times specified by `TriggerCount`. Value range: 1 to 10
                     */
                    int64_t m_triggerCount;
                    bool m_triggerCountHasBeenSet;

                    /**
                     * Repeated alarm interval in minutes. Value range: 0 to 1440
                     */
                    int64_t m_alarmPeriod;
                    bool m_alarmPeriodHasBeenSet;

                    /**
                     * List of associated alarm notification templates
                     */
                    std::vector<std::string> m_alarmNoticeIds;
                    bool m_alarmNoticeIdsHasBeenSet;

                    /**
                     * Monitoring object list
                     */
                    std::vector<AlarmTarget> m_alarmTargets;
                    bool m_alarmTargetsHasBeenSet;

                    /**
                     * Whether to enable the alarm policy
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * This parameter has been deprecated. Use the Status parameter to control whether to enable the alarm policy.
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Custom alarm content
                     */
                    std::string m_messageTemplate;
                    bool m_messageTemplateHasBeenSet;

                    /**
                     * Custom callback
                     */
                    CallBackInfo m_callBack;
                    bool m_callBackHasBeenSet;

                    /**
                     * Multi-Dimensional analysis
                     */
                    std::vector<AnalysisDimensional> m_analysis;
                    bool m_analysisHasBeenSet;

                    /**
                     * Group trigger status. true: enabled; false: disabled (default)
                     */
                    bool m_groupTriggerStatus;
                    bool m_groupTriggerStatusHasBeenSet;

                    /**
                     * Grouping trigger conditions.
                     */
                    std::vector<std::string> m_groupTriggerCondition;
                    bool m_groupTriggerConditionHasBeenSet;

                    /**
                     * Tag description list, by specifying this parameter, you can simultaneously bind a Tag to the corresponding alarm policy. Up to 10 Tag key-value pairs are supported, and they must be unique.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Monitored Object Type. 0: common monitoring objects for execution statements; 1: separately selected monitoring objects for each execution statement.When the value is 1, the number of AlarmTargets Elements (XML) cannot exceed 10, and the Numbers in AlarmTargets must be continuous positive integers starting from 1, without duplication.

                     */
                    uint64_t m_monitorObjectType;
                    bool m_monitorObjectTypeHasBeenSet;

                    /**
                     * Alarm additional classification information list.
The number of Classifications elements cannot exceed 20.The Key of Classifications element must not be empty and duplicated, and its length cannot exceed 50 characters, complying with the regular expression ^[a-z]([a-z0-9_]{0,49})$.The Value length of Classifications element cannot exceed 200 characters.
                     */
                    std::vector<AlarmClassification> m_classifications;
                    bool m_classificationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMREQUEST_H_
