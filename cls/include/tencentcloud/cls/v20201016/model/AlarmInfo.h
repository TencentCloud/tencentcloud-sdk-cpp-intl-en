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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ALARMINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ALARMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AlarmTargetInfo.h>
#include <tencentcloud/cls/v20201016/model/MonitorTime.h>
#include <tencentcloud/cls/v20201016/model/CallBackInfo.h>
#include <tencentcloud/cls/v20201016/model/AnalysisDimensional.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/AlarmClassification.h>
#include <tencentcloud/cls/v20201016/model/MultiCondition.h>
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
                * Alarm policy description
                */
                class AlarmInfo : public AbstractModel
                {
                public:
                    AlarmInfo();
                    ~AlarmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Monitoring object list
                     * @return AlarmTargets Monitoring object list
                     * 
                     */
                    std::vector<AlarmTargetInfo> GetAlarmTargets() const;

                    /**
                     * 设置Monitoring object list
                     * @param _alarmTargets Monitoring object list
                     * 
                     */
                    void SetAlarmTargets(const std::vector<AlarmTargetInfo>& _alarmTargets);

                    /**
                     * 判断参数 AlarmTargets 是否已赋值
                     * @return AlarmTargets 是否已赋值
                     * 
                     */
                    bool AlarmTargetsHasBeenSet() const;

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
                     * 获取Single trigger condition for whether to trigger alarm. Mutually exclusive with the MultiConditions parameter.
                     * @return Condition Single trigger condition for whether to trigger alarm. Mutually exclusive with the MultiConditions parameter.
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Single trigger condition for whether to trigger alarm. Mutually exclusive with the MultiConditions parameter.
                     * @param _condition Single trigger condition for whether to trigger alarm. Mutually exclusive with the MultiConditions parameter.
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
                     * 获取Alarm persistence cycle. An alarm will be triggered only after the corresponding trigger condition is met for the number of times specified by `TriggerCount`. Value range: 1–10.
                     * @return TriggerCount Alarm persistence cycle. An alarm will be triggered only after the corresponding trigger condition is met for the number of times specified by `TriggerCount`. Value range: 1–10.
                     * 
                     */
                    int64_t GetTriggerCount() const;

                    /**
                     * 设置Alarm persistence cycle. An alarm will be triggered only after the corresponding trigger condition is met for the number of times specified by `TriggerCount`. Value range: 1–10.
                     * @param _triggerCount Alarm persistence cycle. An alarm will be triggered only after the corresponding trigger condition is met for the number of times specified by `TriggerCount`. Value range: 1–10.
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
                     * 获取Repeated alarm interval in minutes. Value range: 0–1440.
                     * @return AlarmPeriod Repeated alarm interval in minutes. Value range: 0–1440.
                     * 
                     */
                    int64_t GetAlarmPeriod() const;

                    /**
                     * 设置Repeated alarm interval in minutes. Value range: 0–1440.
                     * @param _alarmPeriod Repeated alarm interval in minutes. Value range: 0–1440.
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
                     * 获取List of associated alarm notification channel groups. - Search the list of associated alarm notification channel groups via [Query notification channel group list](https://www.tencentcloud.com/document/product/614/56462?from_cn_redirect=1). It is mutually exclusive with MonitorNotice.
                     * @return AlarmNoticeIds List of associated alarm notification channel groups. - Search the list of associated alarm notification channel groups via [Query notification channel group list](https://www.tencentcloud.com/document/product/614/56462?from_cn_redirect=1). It is mutually exclusive with MonitorNotice.
                     * 
                     */
                    std::vector<std::string> GetAlarmNoticeIds() const;

                    /**
                     * 设置List of associated alarm notification channel groups. - Search the list of associated alarm notification channel groups via [Query notification channel group list](https://www.tencentcloud.com/document/product/614/56462?from_cn_redirect=1). It is mutually exclusive with MonitorNotice.
                     * @param _alarmNoticeIds List of associated alarm notification channel groups. - Search the list of associated alarm notification channel groups via [Query notification channel group list](https://www.tencentcloud.com/document/product/614/56462?from_cn_redirect=1). It is mutually exclusive with MonitorNotice.
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
                     * 获取Enablement status
                     * @return Status Enablement status
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Enablement status
                     * @param _status Enablement status
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
                     * 获取Creation time. Format: YYYY-MM-DD HH:MM:SS
                     * @return CreateTime Creation time. Format: YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time. Format: YYYY-MM-DD HH:MM:SS
                     * @param _createTime Creation time. Format: YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Latest update time. Format: YYYY-MM-DD HH:MM:SS
                     * @return UpdateTime Latest update time. Format: YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Latest update time. Format: YYYY-MM-DD HH:MM:SS
                     * @param _updateTime Latest update time. Format: YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Custom notification template
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MessageTemplate Custom notification template
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessageTemplate() const;

                    /**
                     * 设置Custom notification template
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _messageTemplate Custom notification template
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Custom callback template
                     * @return CallBack Custom callback template
                     * 
                     */
                    CallBackInfo GetCallBack() const;

                    /**
                     * 设置Custom callback template
                     * @param _callBack Custom callback template
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
                     * 获取Multidimensional analysis settings
                     * @return Analysis Multidimensional analysis settings
                     * 
                     */
                    std::vector<AnalysisDimensional> GetAnalysis() const;

                    /**
                     * 设置Multidimensional analysis settings
                     * @param _analysis Multidimensional analysis settings
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
                     * 获取Group trigger status. true: enabled, false: disabled (default)
                     * @return GroupTriggerStatus Group trigger status. true: enabled, false: disabled (default)
                     * 
                     */
                    bool GetGroupTriggerStatus() const;

                    /**
                     * 设置Group trigger status. true: enabled, false: disabled (default)
                     * @param _groupTriggerStatus Group trigger status. true: enabled, false: disabled (default)
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
                     * 获取Grouping Trigger Conditions.
                     * @return GroupTriggerCondition Grouping Trigger Conditions.
                     * 
                     */
                    std::vector<std::string> GetGroupTriggerCondition() const;

                    /**
                     * 设置Grouping Trigger Conditions.
                     * @param _groupTriggerCondition Grouping Trigger Conditions.
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
                     * 获取Tag information bound to the alarm policy.
                     * @return Tags Tag information bound to the alarm policy.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag information bound to the alarm policy.
                     * @param _tags Tag information bound to the alarm policy.
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
                     * 获取Monitored object type. 0: shared monitored object for execution statements; 1: separate monitored object for each execution statement. 
                     * @return MonitorObjectType Monitored object type. 0: shared monitored object for execution statements; 1: separate monitored object for each execution statement. 
                     * 
                     */
                    uint64_t GetMonitorObjectType() const;

                    /**
                     * 设置Monitored object type. 0: shared monitored object for execution statements; 1: separate monitored object for each execution statement. 
                     * @param _monitorObjectType Monitored object type. 0: shared monitored object for execution statements; 1: separate monitored object for each execution statement. 
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
                     * 获取Alarm level. 0: Warn; 1: Information; 2: Critical.
                     * @return AlarmLevel Alarm level. 0: Warn; 1: Information; 2: Critical.
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置Alarm level. 0: Warn; 1: Information; 2: Critical.
                     * @param _alarmLevel Alarm level. 0: Warn; 1: Information; 2: Critical.
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
                     * 获取Additional classification field for alerts.
                     * @return Classifications Additional classification field for alerts.
                     * 
                     */
                    std::vector<AlarmClassification> GetClassifications() const;

                    /**
                     * 设置Additional classification field for alerts.
                     * @param _classifications Additional classification field for alerts.
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
                     * 获取Multiple trigger conditions.
Mutually exclusive conditions.
                     * @return MultiConditions Multiple trigger conditions.
Mutually exclusive conditions.
                     * 
                     */
                    std::vector<MultiCondition> GetMultiConditions() const;

                    /**
                     * 设置Multiple trigger conditions.
Mutually exclusive conditions.
                     * @param _multiConditions Multiple trigger conditions.
Mutually exclusive conditions.
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
                     * 获取Tencent Cloud observability platform channel-related information, mutually exclusive with AlarmNoticeIds
                     * @return MonitorNotice Tencent Cloud observability platform channel-related information, mutually exclusive with AlarmNoticeIds
                     * 
                     */
                    MonitorNotice GetMonitorNotice() const;

                    /**
                     * 设置Tencent Cloud observability platform channel-related information, mutually exclusive with AlarmNoticeIds
                     * @param _monitorNotice Tencent Cloud observability platform channel-related information, mutually exclusive with AlarmNoticeIds
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
                     * Alarm policy name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Monitoring object list
                     */
                    std::vector<AlarmTargetInfo> m_alarmTargets;
                    bool m_alarmTargetsHasBeenSet;

                    /**
                     * Monitoring task running time point
                     */
                    MonitorTime m_monitorTime;
                    bool m_monitorTimeHasBeenSet;

                    /**
                     * Single trigger condition for whether to trigger alarm. Mutually exclusive with the MultiConditions parameter.
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Alarm persistence cycle. An alarm will be triggered only after the corresponding trigger condition is met for the number of times specified by `TriggerCount`. Value range: 1–10.
                     */
                    int64_t m_triggerCount;
                    bool m_triggerCountHasBeenSet;

                    /**
                     * Repeated alarm interval in minutes. Value range: 0–1440.
                     */
                    int64_t m_alarmPeriod;
                    bool m_alarmPeriodHasBeenSet;

                    /**
                     * List of associated alarm notification channel groups. - Search the list of associated alarm notification channel groups via [Query notification channel group list](https://www.tencentcloud.com/document/product/614/56462?from_cn_redirect=1). It is mutually exclusive with MonitorNotice.
                     */
                    std::vector<std::string> m_alarmNoticeIds;
                    bool m_alarmNoticeIdsHasBeenSet;

                    /**
                     * Enablement status
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Alarm policy ID
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * Creation time. Format: YYYY-MM-DD HH:MM:SS
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Latest update time. Format: YYYY-MM-DD HH:MM:SS
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Custom notification template
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_messageTemplate;
                    bool m_messageTemplateHasBeenSet;

                    /**
                     * Custom callback template
                     */
                    CallBackInfo m_callBack;
                    bool m_callBackHasBeenSet;

                    /**
                     * Multidimensional analysis settings
                     */
                    std::vector<AnalysisDimensional> m_analysis;
                    bool m_analysisHasBeenSet;

                    /**
                     * Group trigger status. true: enabled, false: disabled (default)
                     */
                    bool m_groupTriggerStatus;
                    bool m_groupTriggerStatusHasBeenSet;

                    /**
                     * Grouping Trigger Conditions.
                     */
                    std::vector<std::string> m_groupTriggerCondition;
                    bool m_groupTriggerConditionHasBeenSet;

                    /**
                     * Tag information bound to the alarm policy.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Monitored object type. 0: shared monitored object for execution statements; 1: separate monitored object for each execution statement. 
                     */
                    uint64_t m_monitorObjectType;
                    bool m_monitorObjectTypeHasBeenSet;

                    /**
                     * Alarm level. 0: Warn; 1: Information; 2: Critical.
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Additional classification field for alerts.
                     */
                    std::vector<AlarmClassification> m_classifications;
                    bool m_classificationsHasBeenSet;

                    /**
                     * Multiple trigger conditions.
Mutually exclusive conditions.
                     */
                    std::vector<MultiCondition> m_multiConditions;
                    bool m_multiConditionsHasBeenSet;

                    /**
                     * Tencent Cloud observability platform channel-related information, mutually exclusive with AlarmNoticeIds
                     */
                    MonitorNotice m_monitorNotice;
                    bool m_monitorNoticeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMINFO_H_
