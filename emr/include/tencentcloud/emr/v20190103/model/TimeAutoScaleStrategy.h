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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TIMEAUTOSCALESTRATEGY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TIMEAUTOSCALESTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/RepeatStrategy.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/TkeLabel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Rule for time-based scaling
                */
                class TimeAutoScaleStrategy : public AbstractModel
                {
                public:
                    TimeAutoScaleStrategy();
                    ~TimeAutoScaleStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy name, which is unique within one cluster.
                     * @return StrategyName Policy name, which is unique within one cluster.
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Policy name, which is unique within one cluster.
                     * @param _strategyName Policy name, which is unique within one cluster.
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取Cooling time after policy trigger, during which auto scaling cannot be triggered.
                     * @return IntervalTime Cooling time after policy trigger, during which auto scaling cannot be triggered.
                     * 
                     */
                    uint64_t GetIntervalTime() const;

                    /**
                     * 设置Cooling time after policy trigger, during which auto scaling cannot be triggered.
                     * @param _intervalTime Cooling time after policy trigger, during which auto scaling cannot be triggered.
                     * 
                     */
                    void SetIntervalTime(const uint64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取Scaling action. 1: scale-out, 2: scale-in.
                     * @return ScaleAction Scaling action. 1: scale-out, 2: scale-in.
                     * 
                     */
                    uint64_t GetScaleAction() const;

                    /**
                     * 设置Scaling action. 1: scale-out, 2: scale-in.
                     * @param _scaleAction Scaling action. 1: scale-out, 2: scale-in.
                     * 
                     */
                    void SetScaleAction(const uint64_t& _scaleAction);

                    /**
                     * 判断参数 ScaleAction 是否已赋值
                     * @return ScaleAction 是否已赋值
                     * 
                     */
                    bool ScaleActionHasBeenSet() const;

                    /**
                     * 获取Scaling amount.
                     * @return ScaleNum Scaling amount.
                     * 
                     */
                    uint64_t GetScaleNum() const;

                    /**
                     * 设置Scaling amount.
                     * @param _scaleNum Scaling amount.
                     * 
                     */
                    void SetScaleNum(const uint64_t& _scaleNum);

                    /**
                     * 判断参数 ScaleNum 是否已赋值
                     * @return ScaleNum 是否已赋值
                     * 
                     */
                    bool ScaleNumHasBeenSet() const;

                    /**
                     * 获取Rule status. 1: valid; 2: invalid; 3: suspended. This field is required.
                     * @return StrategyStatus Rule status. 1: valid; 2: invalid; 3: suspended. This field is required.
                     * 
                     */
                    uint64_t GetStrategyStatus() const;

                    /**
                     * 设置Rule status. 1: valid; 2: invalid; 3: suspended. This field is required.
                     * @param _strategyStatus Rule status. 1: valid; 2: invalid; 3: suspended. This field is required.
                     * 
                     */
                    void SetStrategyStatus(const uint64_t& _strategyStatus);

                    /**
                     * 判断参数 StrategyStatus 是否已赋值
                     * @return StrategyStatus 是否已赋值
                     * 
                     */
                    bool StrategyStatusHasBeenSet() const;

                    /**
                     * 获取Rule priority. The smaller value indicates the higher priority.
                     * @return Priority Rule priority. The smaller value indicates the higher priority.
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置Rule priority. The smaller value indicates the higher priority.
                     * @param _priority Rule priority. The smaller value indicates the higher priority.
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取When multiple rules are triggered at the same time and some are not really executed, retries will be performed within this time range.
                     * @return RetryValidTime When multiple rules are triggered at the same time and some are not really executed, retries will be performed within this time range.
                     * 
                     */
                    uint64_t GetRetryValidTime() const;

                    /**
                     * 设置When multiple rules are triggered at the same time and some are not really executed, retries will be performed within this time range.
                     * @param _retryValidTime When multiple rules are triggered at the same time and some are not really executed, retries will be performed within this time range.
                     * 
                     */
                    void SetRetryValidTime(const uint64_t& _retryValidTime);

                    /**
                     * 判断参数 RetryValidTime 是否已赋值
                     * @return RetryValidTime 是否已赋值
                     * 
                     */
                    bool RetryValidTimeHasBeenSet() const;

                    /**
                     * 获取Time scaling repetition policy

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RepeatStrategy Time scaling repetition policy

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RepeatStrategy GetRepeatStrategy() const;

                    /**
                     * 设置Time scaling repetition policy

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _repeatStrategy Time scaling repetition policy

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRepeatStrategy(const RepeatStrategy& _repeatStrategy);

                    /**
                     * 判断参数 RepeatStrategy 是否已赋值
                     * @return RepeatStrategy 是否已赋值
                     * 
                     */
                    bool RepeatStrategyHasBeenSet() const;

                    /**
                     * 获取Unique policy ID.
                     * @return StrategyId Unique policy ID.
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置Unique policy ID.
                     * @param _strategyId Unique policy ID.
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Graceful scale-in switch.
                     * @return GraceDownFlag Graceful scale-in switch.
                     * 
                     */
                    bool GetGraceDownFlag() const;

                    /**
                     * 设置Graceful scale-in switch.
                     * @param _graceDownFlag Graceful scale-in switch.
                     * 
                     */
                    void SetGraceDownFlag(const bool& _graceDownFlag);

                    /**
                     * 判断参数 GraceDownFlag 是否已赋值
                     * @return GraceDownFlag 是否已赋值
                     * 
                     */
                    bool GraceDownFlagHasBeenSet() const;

                    /**
                     * 获取Graceful scale-in wait time.
                     * @return GraceDownTime Graceful scale-in wait time.
                     * 
                     */
                    int64_t GetGraceDownTime() const;

                    /**
                     * 设置Graceful scale-in wait time.
                     * @param _graceDownTime Graceful scale-in wait time.
                     * 
                     */
                    void SetGraceDownTime(const int64_t& _graceDownTime);

                    /**
                     * 判断参数 GraceDownTime 是否已赋值
                     * @return GraceDownTime 是否已赋值
                     * 
                     */
                    bool GraceDownTimeHasBeenSet() const;

                    /**
                     * 获取Bound tag list

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Bound tag list

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Bound tag list

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Bound tag list

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Preset configuration group.
                     * @return ConfigGroupAssigned Preset configuration group.
                     * 
                     */
                    std::string GetConfigGroupAssigned() const;

                    /**
                     * 设置Preset configuration group.
                     * @param _configGroupAssigned Preset configuration group.
                     * 
                     */
                    void SetConfigGroupAssigned(const std::string& _configGroupAssigned);

                    /**
                     * 判断参数 ConfigGroupAssigned 是否已赋值
                     * @return ConfigGroupAssigned 是否已赋值
                     * 
                     */
                    bool ConfigGroupAssignedHasBeenSet() const;

                    /**
                     * 获取Calculation method of scale-out resources. Valid values: "DEFAULT","INSTANCE", "CPU" and "MEMORYGB".
"DEFAULT" indicates the default method, which is the same as "INSTANCE".
"INSTANCE" indicates calculation based on nodes (default mode).
"CPU" indicates calculation based on the quantity of cores of the machine.
"MEMORYGB" indicates calculation based on the memory size of the machine.
                     * @return MeasureMethod Calculation method of scale-out resources. Valid values: "DEFAULT","INSTANCE", "CPU" and "MEMORYGB".
"DEFAULT" indicates the default method, which is the same as "INSTANCE".
"INSTANCE" indicates calculation based on nodes (default mode).
"CPU" indicates calculation based on the quantity of cores of the machine.
"MEMORYGB" indicates calculation based on the memory size of the machine.
                     * 
                     */
                    std::string GetMeasureMethod() const;

                    /**
                     * 设置Calculation method of scale-out resources. Valid values: "DEFAULT","INSTANCE", "CPU" and "MEMORYGB".
"DEFAULT" indicates the default method, which is the same as "INSTANCE".
"INSTANCE" indicates calculation based on nodes (default mode).
"CPU" indicates calculation based on the quantity of cores of the machine.
"MEMORYGB" indicates calculation based on the memory size of the machine.
                     * @param _measureMethod Calculation method of scale-out resources. Valid values: "DEFAULT","INSTANCE", "CPU" and "MEMORYGB".
"DEFAULT" indicates the default method, which is the same as "INSTANCE".
"INSTANCE" indicates calculation based on nodes (default mode).
"CPU" indicates calculation based on the quantity of cores of the machine.
"MEMORYGB" indicates calculation based on the memory size of the machine.
                     * 
                     */
                    void SetMeasureMethod(const std::string& _measureMethod);

                    /**
                     * 判断参数 MeasureMethod 是否已赋值
                     * @return MeasureMethod 是否已赋值
                     * 
                     */
                    bool MeasureMethodHasBeenSet() const;

                    /**
                     * 获取Termination policy. "DEFAULT" denotes the default policy, which indicates that scale-in is triggered by scale-in rules. "TIMING" denotes timed destruction.
                     * @return TerminatePolicy Termination policy. "DEFAULT" denotes the default policy, which indicates that scale-in is triggered by scale-in rules. "TIMING" denotes timed destruction.
                     * 
                     */
                    std::string GetTerminatePolicy() const;

                    /**
                     * 设置Termination policy. "DEFAULT" denotes the default policy, which indicates that scale-in is triggered by scale-in rules. "TIMING" denotes timed destruction.
                     * @param _terminatePolicy Termination policy. "DEFAULT" denotes the default policy, which indicates that scale-in is triggered by scale-in rules. "TIMING" denotes timed destruction.
                     * 
                     */
                    void SetTerminatePolicy(const std::string& _terminatePolicy);

                    /**
                     * 判断参数 TerminatePolicy 是否已赋值
                     * @return TerminatePolicy 是否已赋值
                     * 
                     */
                    bool TerminatePolicyHasBeenSet() const;

                    /**
                     * 获取Maximum use time in seconds. The minimum value is 1 hour, and the maximum is 24 hours.
                     * @return MaxUse Maximum use time in seconds. The minimum value is 1 hour, and the maximum is 24 hours.
                     * 
                     */
                    int64_t GetMaxUse() const;

                    /**
                     * 设置Maximum use time in seconds. The minimum value is 1 hour, and the maximum is 24 hours.
                     * @param _maxUse Maximum use time in seconds. The minimum value is 1 hour, and the maximum is 24 hours.
                     * 
                     */
                    void SetMaxUse(const int64_t& _maxUse);

                    /**
                     * 判断参数 MaxUse 是否已赋值
                     * @return MaxUse 是否已赋值
                     * 
                     */
                    bool MaxUseHasBeenSet() const;

                    /**
                     * 获取Node deployment service list. Fill in only HDFS and YARN. For details, see [Mapping Table for Component Names](https://intl.cloud.tencent.com/document/product/589/98760?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SoftDeployInfo Node deployment service list. Fill in only HDFS and YARN. For details, see [Mapping Table for Component Names](https://intl.cloud.tencent.com/document/product/589/98760?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetSoftDeployInfo() const;

                    /**
                     * 设置Node deployment service list. Fill in only HDFS and YARN. For details, see [Mapping Table for Component Names](https://intl.cloud.tencent.com/document/product/589/98760?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _softDeployInfo Node deployment service list. Fill in only HDFS and YARN. For details, see [Mapping Table for Component Names](https://intl.cloud.tencent.com/document/product/589/98760?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSoftDeployInfo(const std::vector<int64_t>& _softDeployInfo);

                    /**
                     * 判断参数 SoftDeployInfo 是否已赋值
                     * @return SoftDeployInfo 是否已赋值
                     * 
                     */
                    bool SoftDeployInfoHasBeenSet() const;

                    /**
                     * 获取Startup process list

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceNodeInfo Startup process list

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetServiceNodeInfo() const;

                    /**
                     * 设置Startup process list

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceNodeInfo Startup process list

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceNodeInfo(const std::vector<int64_t>& _serviceNodeInfo);

                    /**
                     * 判断参数 ServiceNodeInfo 是否已赋值
                     * @return ServiceNodeInfo 是否已赋值
                     * 
                     */
                    bool ServiceNodeInfoHasBeenSet() const;

                    /**
                     * 获取Compensatory scale-out. 0: disable, 1: enable.
                     * @return CompensateFlag Compensatory scale-out. 0: disable, 1: enable.
                     * 
                     */
                    int64_t GetCompensateFlag() const;

                    /**
                     * 设置Compensatory scale-out. 0: disable, 1: enable.
                     * @param _compensateFlag Compensatory scale-out. 0: disable, 1: enable.
                     * 
                     */
                    void SetCompensateFlag(const int64_t& _compensateFlag);

                    /**
                     * 判断参数 CompensateFlag 是否已赋值
                     * @return CompensateFlag 是否已赋值
                     * 
                     */
                    bool CompensateFlagHasBeenSet() const;

                    /**
                     * 获取Scaling group ID.
                     * @return GroupId Scaling group ID.
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置Scaling group ID.
                     * @param _groupId Scaling group ID.
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Graceful scale-in business pod tag. Nodes are scaled in when the pod mentioned above is not found on the node or the graceful scale-in time is passed.
                     * @return GraceDownLabel Graceful scale-in business pod tag. Nodes are scaled in when the pod mentioned above is not found on the node or the graceful scale-in time is passed.
                     * 
                     */
                    std::vector<TkeLabel> GetGraceDownLabel() const;

                    /**
                     * 设置Graceful scale-in business pod tag. Nodes are scaled in when the pod mentioned above is not found on the node or the graceful scale-in time is passed.
                     * @param _graceDownLabel Graceful scale-in business pod tag. Nodes are scaled in when the pod mentioned above is not found on the node or the graceful scale-in time is passed.
                     * 
                     */
                    void SetGraceDownLabel(const std::vector<TkeLabel>& _graceDownLabel);

                    /**
                     * 判断参数 GraceDownLabel 是否已赋值
                     * @return GraceDownLabel 是否已赋值
                     * 
                     */
                    bool GraceDownLabelHasBeenSet() const;

                private:

                    /**
                     * Policy name, which is unique within one cluster.
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * Cooling time after policy trigger, during which auto scaling cannot be triggered.
                     */
                    uint64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * Scaling action. 1: scale-out, 2: scale-in.
                     */
                    uint64_t m_scaleAction;
                    bool m_scaleActionHasBeenSet;

                    /**
                     * Scaling amount.
                     */
                    uint64_t m_scaleNum;
                    bool m_scaleNumHasBeenSet;

                    /**
                     * Rule status. 1: valid; 2: invalid; 3: suspended. This field is required.
                     */
                    uint64_t m_strategyStatus;
                    bool m_strategyStatusHasBeenSet;

                    /**
                     * Rule priority. The smaller value indicates the higher priority.
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * When multiple rules are triggered at the same time and some are not really executed, retries will be performed within this time range.
                     */
                    uint64_t m_retryValidTime;
                    bool m_retryValidTimeHasBeenSet;

                    /**
                     * Time scaling repetition policy

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RepeatStrategy m_repeatStrategy;
                    bool m_repeatStrategyHasBeenSet;

                    /**
                     * Unique policy ID.
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Graceful scale-in switch.
                     */
                    bool m_graceDownFlag;
                    bool m_graceDownFlagHasBeenSet;

                    /**
                     * Graceful scale-in wait time.
                     */
                    int64_t m_graceDownTime;
                    bool m_graceDownTimeHasBeenSet;

                    /**
                     * Bound tag list

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Preset configuration group.
                     */
                    std::string m_configGroupAssigned;
                    bool m_configGroupAssignedHasBeenSet;

                    /**
                     * Calculation method of scale-out resources. Valid values: "DEFAULT","INSTANCE", "CPU" and "MEMORYGB".
"DEFAULT" indicates the default method, which is the same as "INSTANCE".
"INSTANCE" indicates calculation based on nodes (default mode).
"CPU" indicates calculation based on the quantity of cores of the machine.
"MEMORYGB" indicates calculation based on the memory size of the machine.
                     */
                    std::string m_measureMethod;
                    bool m_measureMethodHasBeenSet;

                    /**
                     * Termination policy. "DEFAULT" denotes the default policy, which indicates that scale-in is triggered by scale-in rules. "TIMING" denotes timed destruction.
                     */
                    std::string m_terminatePolicy;
                    bool m_terminatePolicyHasBeenSet;

                    /**
                     * Maximum use time in seconds. The minimum value is 1 hour, and the maximum is 24 hours.
                     */
                    int64_t m_maxUse;
                    bool m_maxUseHasBeenSet;

                    /**
                     * Node deployment service list. Fill in only HDFS and YARN. For details, see [Mapping Table for Component Names](https://intl.cloud.tencent.com/document/product/589/98760?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_softDeployInfo;
                    bool m_softDeployInfoHasBeenSet;

                    /**
                     * Startup process list

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_serviceNodeInfo;
                    bool m_serviceNodeInfoHasBeenSet;

                    /**
                     * Compensatory scale-out. 0: disable, 1: enable.
                     */
                    int64_t m_compensateFlag;
                    bool m_compensateFlagHasBeenSet;

                    /**
                     * Scaling group ID.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Graceful scale-in business pod tag. Nodes are scaled in when the pod mentioned above is not found on the node or the graceful scale-in time is passed.
                     */
                    std::vector<TkeLabel> m_graceDownLabel;
                    bool m_graceDownLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TIMEAUTOSCALESTRATEGY_H_
