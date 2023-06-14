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
                     * 获取Trigger condition
                     * @return Condition Trigger condition
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Trigger condition
                     * @param _condition Trigger condition
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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Last update time
                     * @return UpdateTime Last update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last update time
                     * @param _updateTime Last update time
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
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CallBack Custom callback template
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    CallBackInfo GetCallBack() const;

                    /**
                     * 设置Custom callback template
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _callBack Custom callback template
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Multi-Dimensional analysis settings
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Analysis Multi-Dimensional analysis settings
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnalysisDimensional> GetAnalysis() const;

                    /**
                     * 设置Multi-Dimensional analysis settings
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _analysis Multi-Dimensional analysis settings
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAnalysis(const std::vector<AnalysisDimensional>& _analysis);

                    /**
                     * 判断参数 Analysis 是否已赋值
                     * @return Analysis 是否已赋值
                     * 
                     */
                    bool AnalysisHasBeenSet() const;

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
                     * Trigger condition
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
                     * List of associated alarm notification templates
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
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last update time
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
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    CallBackInfo m_callBack;
                    bool m_callBackHasBeenSet;

                    /**
                     * Multi-Dimensional analysis settings
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<AnalysisDimensional> m_analysis;
                    bool m_analysisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMINFO_H_
