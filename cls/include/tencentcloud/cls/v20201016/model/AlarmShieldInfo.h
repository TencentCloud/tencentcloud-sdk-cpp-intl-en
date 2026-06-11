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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ALARMSHIELDINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ALARMSHIELDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Alarm suppression task configuration
                */
                class AlarmShieldInfo : public AbstractModel
                {
                public:
                    AlarmShieldInfo();
                    ~AlarmShieldInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Notification Channel Group ID
                     * @return AlarmNoticeId Notification Channel Group ID
                     * 
                     */
                    std::string GetAlarmNoticeId() const;

                    /**
                     * 设置Notification Channel Group ID
                     * @param _alarmNoticeId Notification Channel Group ID
                     * 
                     */
                    void SetAlarmNoticeId(const std::string& _alarmNoticeId);

                    /**
                     * 判断参数 AlarmNoticeId 是否已赋值
                     * @return AlarmNoticeId 是否已赋值
                     * 
                     */
                    bool AlarmNoticeIdHasBeenSet() const;

                    /**
                     * 获取Shield Rule ID
                     * @return TaskId Shield Rule ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Shield Rule ID
                     * @param _taskId Shield Rule ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Block start time (second-level timestamp).
                     * @return StartTime Block start time (second-level timestamp).
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Block start time (second-level timestamp).
                     * @param _startTime Block start time (second-level timestamp).
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Block end time (second-level timestamp).
                     * @return EndTime Block end time (second-level timestamp).
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Block end time (second-level timestamp).
                     * @param _endTime Block end time (second-level timestamp).
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Block type. 1: Block all notifications, 2: Block matching rules notifications according to the Rule parameter.
                     * @return Type Block type. 1: Block all notifications, 2: Block matching rules notifications according to the Rule parameter.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Block type. 1: Block all notifications, 2: Block matching rules notifications according to the Rule parameter.
                     * @param _type Block type. 1: Block all notifications, 2: Block matching rules notifications according to the Rule parameter.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Blocking rules, required when Type is 2. For detailed information on filling in rules, see [Product Documentation](https://www.tencentcloud.com/document/product/614/103178?from_cn_redirect=1#rule).
                     * @return Rule Blocking rules, required when Type is 2. For detailed information on filling in rules, see [Product Documentation](https://www.tencentcloud.com/document/product/614/103178?from_cn_redirect=1#rule).
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置Blocking rules, required when Type is 2. For detailed information on filling in rules, see [Product Documentation](https://www.tencentcloud.com/document/product/614/103178?from_cn_redirect=1#rule).
                     * @param _rule Blocking rules, required when Type is 2. For detailed information on filling in rules, see [Product Documentation](https://www.tencentcloud.com/document/product/614/103178?from_cn_redirect=1#rule).
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Blocking reason.
                     * @return Reason Blocking reason.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Blocking reason.
                     * @param _reason Blocking reason.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Rule Creation Source.
1. Console; 2. API; 3. Alarm notification
                     * @return Source Rule Creation Source.
1. Console; 2. API; 3. Alarm notification
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置Rule Creation Source.
1. Console; 2. API; 3. Alarm notification
                     * @param _source Rule Creation Source.
1. Console; 2. API; 3. Alarm notification
                     * 
                     */
                    void SetSource(const uint64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Operator.
                     * @return Operator Operator.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator.
                     * @param _operator Operator.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Rule Status.
0: Not yet effective; 1: In effect; 2: Expired
                     * @return Status Rule Status.
0: Not yet effective; 1: In effect; 2: Expired
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Rule Status.
0: Not yet effective; 1: In effect; 2: Expired
                     * @param _status Rule Status.
0: Not yet effective; 1: In effect; 2: Expired
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Rule creation time. Unix second-level timestamp (s).
                     * @return CreateTime Rule creation time. Unix second-level timestamp (s).
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Rule creation time. Unix second-level timestamp (s).
                     * @param _createTime Rule creation time. Unix second-level timestamp (s).
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Rule update time. Unix second-level timestamp (s).
                     * @return UpdateTime Rule update time. Unix second-level timestamp (s).
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置Rule update time. Unix second-level timestamp (s).
                     * @param _updateTime Rule update time. Unix second-level timestamp (s).
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Notification Channel Group ID
                     */
                    std::string m_alarmNoticeId;
                    bool m_alarmNoticeIdHasBeenSet;

                    /**
                     * Shield Rule ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Block start time (second-level timestamp).
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Block end time (second-level timestamp).
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Block type. 1: Block all notifications, 2: Block matching rules notifications according to the Rule parameter.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Blocking rules, required when Type is 2. For detailed information on filling in rules, see [Product Documentation](https://www.tencentcloud.com/document/product/614/103178?from_cn_redirect=1#rule).
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Blocking reason.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Rule Creation Source.
1. Console; 2. API; 3. Alarm notification
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Operator.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Rule Status.
0: Not yet effective; 1: In effect; 2: Expired
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Rule creation time. Unix second-level timestamp (s).
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Rule update time. Unix second-level timestamp (s).
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMSHIELDINFO_H_
