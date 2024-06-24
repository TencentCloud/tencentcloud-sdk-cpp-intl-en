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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKALARMINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKALARMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/AlarmIndicatorInfo.h>
#include <tencentcloud/wedata/v20210820/model/QuietPeriod.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task Alert Information
                */
                class TaskAlarmInfo : public AbstractModel
                {
                public:
                    TaskAlarmInfo();
                    ~TaskAlarmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
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
                     * 获取Rule name
                     * @return RegularName Rule name
                     * 
                     */
                    std::string GetRegularName() const;

                    /**
                     * 设置Rule name
                     * @param _regularName Rule name
                     * 
                     */
                    void SetRegularName(const std::string& _regularName);

                    /**
                     * 判断参数 RegularName 是否已赋值
                     * @return RegularName 是否已赋值
                     * 
                     */
                    bool RegularNameHasBeenSet() const;

                    /**
                     * 获取Rule Status (0 for off, 1 for on)
                     * @return RegularStatus Rule Status (0 for off, 1 for on)
                     * 
                     */
                    uint64_t GetRegularStatus() const;

                    /**
                     * 设置Rule Status (0 for off, 1 for on)
                     * @param _regularStatus Rule Status (0 for off, 1 for on)
                     * 
                     */
                    void SetRegularStatus(const uint64_t& _regularStatus);

                    /**
                     * 判断参数 RegularStatus 是否已赋值
                     * @return RegularStatus 是否已赋值
                     * 
                     */
                    bool RegularStatusHasBeenSet() const;

                    /**
                     * 获取Alert Level (0 for general, 1 for critical, 2 for urgent)
                     * @return AlarmLevel Alert Level (0 for general, 1 for critical, 2 for urgent)
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置Alert Level (0 for general, 1 for critical, 2 for urgent)
                     * @param _alarmLevel Alert Level (0 for general, 1 for critical, 2 for urgent)
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
                     * 获取Alert Method, separated by commas (1: email, 2: SMS, 3: WeChat, 4: voice call, 5: represents WeCom, 6: http)
                     * @return AlarmWay Alert Method, separated by commas (1: email, 2: SMS, 3: WeChat, 4: voice call, 5: represents WeCom, 6: http)
                     * 
                     */
                    std::string GetAlarmWay() const;

                    /**
                     * 设置Alert Method, separated by commas (1: email, 2: SMS, 3: WeChat, 4: voice call, 5: represents WeCom, 6: http)
                     * @param _alarmWay Alert Method, separated by commas (1: email, 2: SMS, 3: WeChat, 4: voice call, 5: represents WeCom, 6: http)
                     * 
                     */
                    void SetAlarmWay(const std::string& _alarmWay);

                    /**
                     * 判断参数 AlarmWay 是否已赋值
                     * @return AlarmWay 是否已赋值
                     * 
                     */
                    bool AlarmWayHasBeenSet() const;

                    /**
                     * 获取Task Type (201 for real-time, 202 for offline)
                     * @return TaskType Task Type (201 for real-time, 202 for offline)
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置Task Type (201 for real-time, 202 for offline)
                     * @param _taskType Task Type (201 for real-time, 202 for offline)
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Id ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _id ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return RegularId Rule ID
                     * 
                     */
                    std::string GetRegularId() const;

                    /**
                     * 设置Rule ID
                     * @param _regularId Rule ID
                     * 
                     */
                    void SetRegularId(const std::string& _regularId);

                    /**
                     * 判断参数 RegularId 是否已赋值
                     * @return RegularId 是否已赋值
                     * 
                     */
                    bool RegularIdHasBeenSet() const;

                    /**
                     * 获取Alert Metrics, 0 for task failure, 1 for task run timeout, 2 for task stop, 3 for task pause,4 Write Speed, 5 Read Speed, 6 Read Throughput, 7 Write Throughput, 8 Dirty Data Byte Count, 9 Number of Dirty Data Entries
                     * @return AlarmIndicator Alert Metrics, 0 for task failure, 1 for task run timeout, 2 for task stop, 3 for task pause,4 Write Speed, 5 Read Speed, 6 Read Throughput, 7 Write Throughput, 8 Dirty Data Byte Count, 9 Number of Dirty Data Entries
                     * 
                     */
                    uint64_t GetAlarmIndicator() const;

                    /**
                     * 设置Alert Metrics, 0 for task failure, 1 for task run timeout, 2 for task stop, 3 for task pause,4 Write Speed, 5 Read Speed, 6 Read Throughput, 7 Write Throughput, 8 Dirty Data Byte Count, 9 Number of Dirty Data Entries
                     * @param _alarmIndicator Alert Metrics, 0 for task failure, 1 for task run timeout, 2 for task stop, 3 for task pause,4 Write Speed, 5 Read Speed, 6 Read Throughput, 7 Write Throughput, 8 Dirty Data Byte Count, 9 Number of Dirty Data Entries
                     * 
                     */
                    void SetAlarmIndicator(const uint64_t& _alarmIndicator);

                    /**
                     * 判断参数 AlarmIndicator 是否已赋值
                     * @return AlarmIndicator 是否已赋值
                     * 
                     */
                    bool AlarmIndicatorHasBeenSet() const;

                    /**
                     * 获取Metric Threshold (1 for the first run failure of an offline task, 2 for all retries failed of an offline task)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TriggerType Metric Threshold (1 for the first run failure of an offline task, 2 for all retries failed of an offline task)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置Metric Threshold (1 for the first run failure of an offline task, 2 for all retries failed of an offline task)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _triggerType Metric Threshold (1 for the first run failure of an offline task, 2 for all retries failed of an offline task)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTriggerType(const uint64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取Estimated Timeout Duration (Minute Level)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EstimatedTime Estimated Timeout Duration (Minute Level)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetEstimatedTime() const;

                    /**
                     * 设置Estimated Timeout Duration (Minute Level)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _estimatedTime Estimated Timeout Duration (Minute Level)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEstimatedTime(const uint64_t& _estimatedTime);

                    /**
                     * 判断参数 EstimatedTime 是否已赋值
                     * @return EstimatedTime 是否已赋值
                     * 
                     */
                    bool EstimatedTimeHasBeenSet() const;

                    /**
                     * 获取Alert Recipient ID, separated by commas
                     * @return AlarmRecipientId Alert Recipient ID, separated by commas
                     * 
                     */
                    std::string GetAlarmRecipientId() const;

                    /**
                     * 设置Alert Recipient ID, separated by commas
                     * @param _alarmRecipientId Alert Recipient ID, separated by commas
                     * 
                     */
                    void SetAlarmRecipientId(const std::string& _alarmRecipientId);

                    /**
                     * 判断参数 AlarmRecipientId 是否已赋值
                     * @return AlarmRecipientId 是否已赋值
                     * 
                     */
                    bool AlarmRecipientIdHasBeenSet() const;

                    /**
                     * 获取Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取CreatorNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Creater CreatorNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreater() const;

                    /**
                     * 设置CreatorNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _creater CreatorNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreater(const std::string& _creater);

                    /**
                     * 判断参数 Creater 是否已赋值
                     * @return Creater 是否已赋值
                     * 
                     */
                    bool CreaterHasBeenSet() const;

                    /**
                     * 获取Alert Recipient Nickname, separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AlarmRecipientName Alert Recipient Nickname, separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAlarmRecipientName() const;

                    /**
                     * 设置Alert Recipient Nickname, separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _alarmRecipientName Alert Recipient Nickname, separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlarmRecipientName(const std::string& _alarmRecipientName);

                    /**
                     * 判断参数 AlarmRecipientName 是否已赋值
                     * @return AlarmRecipientName 是否已赋值
                     * 
                     */
                    bool AlarmRecipientNameHasBeenSet() const;

                    /**
                     * 获取Alert Metric Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AlarmIndicatorDesc Alert Metric Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAlarmIndicatorDesc() const;

                    /**
                     * 设置Alert Metric Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _alarmIndicatorDesc Alert Metric Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlarmIndicatorDesc(const std::string& _alarmIndicatorDesc);

                    /**
                     * 判断参数 AlarmIndicatorDesc 是否已赋值
                     * @return AlarmIndicatorDesc 是否已赋值
                     * 
                     */
                    bool AlarmIndicatorDescHasBeenSet() const;

                    /**
                     * 获取Parameters needed for real-time task alerts, 1 is greater than, 2 is less than
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Operator Parameters needed for real-time task alerts, 1 is greater than, 2 is less than
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetOperator() const;

                    /**
                     * 设置Parameters needed for real-time task alerts, 1 is greater than, 2 is less than
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _operator Parameters needed for real-time task alerts, 1 is greater than, 2 is less than
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOperator(const uint64_t& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Node ID, separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NodeId Node ID, separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Node ID, separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _nodeId Node ID, separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取Node name, separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NodeName Node name, separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name, separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _nodeName Node name, separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Metric List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AlarmIndicatorInfos Metric List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<AlarmIndicatorInfo> GetAlarmIndicatorInfos() const;

                    /**
                     * 设置Metric List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _alarmIndicatorInfos Metric List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlarmIndicatorInfos(const std::vector<AlarmIndicatorInfo>& _alarmIndicatorInfos);

                    /**
                     * 判断参数 AlarmIndicatorInfos 是否已赋值
                     * @return AlarmIndicatorInfos 是否已赋值
                     * 
                     */
                    bool AlarmIndicatorInfosHasBeenSet() const;

                    /**
                     * 获取Alert Recipient Type, 0 is designated person; 1 is task responsible person
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AlarmRecipientType Alert Recipient Type, 0 is designated person; 1 is task responsible person
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetAlarmRecipientType() const;

                    /**
                     * 设置Alert Recipient Type, 0 is designated person; 1 is task responsible person
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _alarmRecipientType Alert Recipient Type, 0 is designated person; 1 is task responsible person
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlarmRecipientType(const uint64_t& _alarmRecipientType);

                    /**
                     * 判断参数 AlarmRecipientType 是否已赋值
                     * @return AlarmRecipientType 是否已赋值
                     * 
                     */
                    bool AlarmRecipientTypeHasBeenSet() const;

                    /**
                     * 获取Do not disturb time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return QuietPeriods Do not disturb time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<QuietPeriod> GetQuietPeriods() const;

                    /**
                     * 设置Do not disturb time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _quietPeriods Do not disturb time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetQuietPeriods(const std::vector<QuietPeriod>& _quietPeriods);

                    /**
                     * 判断参数 QuietPeriods 是否已赋值
                     * @return QuietPeriods 是否已赋值
                     * 
                     */
                    bool QuietPeriodsHasBeenSet() const;

                    /**
                     * 获取Enterprise WeChat Group Hook Address, multiple hook addresses separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WeComHook Enterprise WeChat Group Hook Address, multiple hook addresses separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWeComHook() const;

                    /**
                     * 设置Enterprise WeChat Group Hook Address, multiple hook addresses separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _weComHook Enterprise WeChat Group Hook Address, multiple hook addresses separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWeComHook(const std::string& _weComHook);

                    /**
                     * 判断参数 WeComHook 是否已赋值
                     * @return WeComHook 是否已赋值
                     * 
                     */
                    bool WeComHookHasBeenSet() const;

                    /**
                     * 获取Last Operation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateTime Last Operation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last Operation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateTime Last Operation Time
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Last Operator Uin
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OperatorUin Last Operator Uin
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOperatorUin() const;

                    /**
                     * 设置Last Operator Uin
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _operatorUin Last Operator Uin
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOperatorUin(const std::string& _operatorUin);

                    /**
                     * 判断参数 OperatorUin 是否已赋值
                     * @return OperatorUin 是否已赋值
                     * 
                     */
                    bool OperatorUinHasBeenSet() const;

                    /**
                     * 获取Associated Task Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskCount Associated Task Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTaskCount() const;

                    /**
                     * 设置Associated Task Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskCount Associated Task Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskCount(const int64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取Monitored Object Type, 1: all tasks, 2: specified tasks, 3: specified responsible person
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MonitorType Monitored Object Type, 1: all tasks, 2: specified tasks, 3: specified responsible person
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetMonitorType() const;

                    /**
                     * 设置Monitored Object Type, 1: all tasks, 2: specified tasks, 3: specified responsible person
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _monitorType Monitored Object Type, 1: all tasks, 2: specified tasks, 3: specified responsible person
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMonitorType(const int64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取Monitoring Object List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MonitorObjectIds Monitoring Object List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetMonitorObjectIds() const;

                    /**
                     * 设置Monitoring Object List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _monitorObjectIds Monitoring Object List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMonitorObjectIds(const std::vector<std::string>& _monitorObjectIds);

                    /**
                     * 判断参数 MonitorObjectIds 是否已赋值
                     * @return MonitorObjectIds 是否已赋值
                     * 
                     */
                    bool MonitorObjectIdsHasBeenSet() const;

                    /**
                     * 获取Instance ID of the Last Alert
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LatestAlarmInstanceId Instance ID of the Last Alert
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLatestAlarmInstanceId() const;

                    /**
                     * 设置Instance ID of the Last Alert
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _latestAlarmInstanceId Instance ID of the Last Alert
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLatestAlarmInstanceId(const std::string& _latestAlarmInstanceId);

                    /**
                     * 判断参数 LatestAlarmInstanceId 是否已赋值
                     * @return LatestAlarmInstanceId 是否已赋值
                     * 
                     */
                    bool LatestAlarmInstanceIdHasBeenSet() const;

                    /**
                     * 获取Time of the Last Alert
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LatestAlarmTime Time of the Last Alert
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLatestAlarmTime() const;

                    /**
                     * 设置Time of the Last Alert
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _latestAlarmTime Time of the Last Alert
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLatestAlarmTime(const std::string& _latestAlarmTime);

                    /**
                     * 判断参数 LatestAlarmTime 是否已赋值
                     * @return LatestAlarmTime 是否已赋值
                     * 
                     */
                    bool LatestAlarmTimeHasBeenSet() const;

                    /**
                     * 获取Alert Rule Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Description Alert Rule Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Alert Rule Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _description Alert Rule Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取FeiShu Group Hook Address, multiple hook addresses separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LarkWebHooks FeiShu Group Hook Address, multiple hook addresses separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLarkWebHooks() const;

                    /**
                     * 设置FeiShu Group Hook Address, multiple hook addresses separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _larkWebHooks FeiShu Group Hook Address, multiple hook addresses separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLarkWebHooks(const std::string& _larkWebHooks);

                    /**
                     * 判断参数 LarkWebHooks 是否已赋值
                     * @return LarkWebHooks 是否已赋值
                     * 
                     */
                    bool LarkWebHooksHasBeenSet() const;

                    /**
                     * 获取DingTalk Group Hook addresses, multiple hook addresses separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DingDingWebHooks DingTalk Group Hook addresses, multiple hook addresses separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDingDingWebHooks() const;

                    /**
                     * 设置DingTalk Group Hook addresses, multiple hook addresses separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dingDingWebHooks DingTalk Group Hook addresses, multiple hook addresses separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDingDingWebHooks(const std::string& _dingDingWebHooks);

                    /**
                     * 判断参数 DingDingWebHooks 是否已赋值
                     * @return DingDingWebHooks 是否已赋值
                     * 
                     */
                    bool DingDingWebHooksHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_regularName;
                    bool m_regularNameHasBeenSet;

                    /**
                     * Rule Status (0 for off, 1 for on)
                     */
                    uint64_t m_regularStatus;
                    bool m_regularStatusHasBeenSet;

                    /**
                     * Alert Level (0 for general, 1 for critical, 2 for urgent)
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Alert Method, separated by commas (1: email, 2: SMS, 3: WeChat, 4: voice call, 5: represents WeCom, 6: http)
                     */
                    std::string m_alarmWay;
                    bool m_alarmWayHasBeenSet;

                    /**
                     * Task Type (201 for real-time, 202 for offline)
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::string m_regularId;
                    bool m_regularIdHasBeenSet;

                    /**
                     * Alert Metrics, 0 for task failure, 1 for task run timeout, 2 for task stop, 3 for task pause,4 Write Speed, 5 Read Speed, 6 Read Throughput, 7 Write Throughput, 8 Dirty Data Byte Count, 9 Number of Dirty Data Entries
                     */
                    uint64_t m_alarmIndicator;
                    bool m_alarmIndicatorHasBeenSet;

                    /**
                     * Metric Threshold (1 for the first run failure of an offline task, 2 for all retries failed of an offline task)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * Estimated Timeout Duration (Minute Level)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_estimatedTime;
                    bool m_estimatedTimeHasBeenSet;

                    /**
                     * Alert Recipient ID, separated by commas
                     */
                    std::string m_alarmRecipientId;
                    bool m_alarmRecipientIdHasBeenSet;

                    /**
                     * Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * CreatorNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_creater;
                    bool m_createrHasBeenSet;

                    /**
                     * Alert Recipient Nickname, separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_alarmRecipientName;
                    bool m_alarmRecipientNameHasBeenSet;

                    /**
                     * Alert Metric Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_alarmIndicatorDesc;
                    bool m_alarmIndicatorDescHasBeenSet;

                    /**
                     * Parameters needed for real-time task alerts, 1 is greater than, 2 is less than
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Node ID, separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Node name, separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Metric List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<AlarmIndicatorInfo> m_alarmIndicatorInfos;
                    bool m_alarmIndicatorInfosHasBeenSet;

                    /**
                     * Alert Recipient Type, 0 is designated person; 1 is task responsible person
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_alarmRecipientType;
                    bool m_alarmRecipientTypeHasBeenSet;

                    /**
                     * Do not disturb time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<QuietPeriod> m_quietPeriods;
                    bool m_quietPeriodsHasBeenSet;

                    /**
                     * Enterprise WeChat Group Hook Address, multiple hook addresses separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_weComHook;
                    bool m_weComHookHasBeenSet;

                    /**
                     * Last Operation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Last Operator Uin
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_operatorUin;
                    bool m_operatorUinHasBeenSet;

                    /**
                     * Associated Task Count
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * Monitored Object Type, 1: all tasks, 2: specified tasks, 3: specified responsible person
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * Monitoring Object List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_monitorObjectIds;
                    bool m_monitorObjectIdsHasBeenSet;

                    /**
                     * Instance ID of the Last Alert
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_latestAlarmInstanceId;
                    bool m_latestAlarmInstanceIdHasBeenSet;

                    /**
                     * Time of the Last Alert
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_latestAlarmTime;
                    bool m_latestAlarmTimeHasBeenSet;

                    /**
                     * Alert Rule Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * FeiShu Group Hook Address, multiple hook addresses separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_larkWebHooks;
                    bool m_larkWebHooksHasBeenSet;

                    /**
                     * DingTalk Group Hook addresses, multiple hook addresses separated by commas
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dingDingWebHooks;
                    bool m_dingDingWebHooksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKALARMINFO_H_
