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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CLSDELIVERTASKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CLSDELIVERTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/SourceTopicConfig.h>
#include <tencentcloud/cls/v20201016/model/TargetTopicConfig.h>
#include <tencentcloud/cls/v20201016/model/DeliverRule.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Delivery task information across different accounts
                */
                class CLSDeliverTaskInfo : public AbstractModel
                {
                public:
                    CLSDeliverTaskInfo();
                    ~CLSDeliverTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task ID.</p>
                     * @return TaskId <p>Task ID.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _taskId <p>Task ID.</p>
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
                     * 获取<p>Task name</p>
                     * @return TaskName <p>Task name</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>Task name</p>
                     * @param _taskName <p>Task name</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>Main account id</p>
                     * @return Uin <p>Main account id</p>
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置<p>Main account id</p>
                     * @param _uin <p>Main account id</p>
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>Source topic information</p>
                     * @return SourceTopicConfig <p>Source topic information</p>
                     * 
                     */
                    SourceTopicConfig GetSourceTopicConfig() const;

                    /**
                     * 设置<p>Source topic information</p>
                     * @param _sourceTopicConfig <p>Source topic information</p>
                     * 
                     */
                    void SetSourceTopicConfig(const SourceTopicConfig& _sourceTopicConfig);

                    /**
                     * 判断参数 SourceTopicConfig 是否已赋值
                     * @return SourceTopicConfig 是否已赋值
                     * 
                     */
                    bool SourceTopicConfigHasBeenSet() const;

                    /**
                     * 获取<p>Target topic information</p>
                     * @return TargetTopicConfig <p>Target topic information</p>
                     * 
                     */
                    TargetTopicConfig GetTargetTopicConfig() const;

                    /**
                     * 设置<p>Target topic information</p>
                     * @param _targetTopicConfig <p>Target topic information</p>
                     * 
                     */
                    void SetTargetTopicConfig(const TargetTopicConfig& _targetTopicConfig);

                    /**
                     * 判断参数 TargetTopicConfig 是否已赋值
                     * @return TargetTopicConfig 是否已赋值
                     * 
                     */
                    bool TargetTopicConfigHasBeenSet() const;

                    /**
                     * 获取<p>Shipping Rule</p>
                     * @return DeliverRule <p>Shipping Rule</p>
                     * 
                     */
                    DeliverRule GetDeliverRule() const;

                    /**
                     * 设置<p>Shipping Rule</p>
                     * @param _deliverRule <p>Shipping Rule</p>
                     * 
                     */
                    void SetDeliverRule(const DeliverRule& _deliverRule);

                    /**
                     * 判断参数 DeliverRule 是否已赋值
                     * @return DeliverRule 是否已赋值
                     * 
                     */
                    bool DeliverRuleHasBeenSet() const;

                    /**
                     * 获取<p>Compliance guarantee</p>
                     * @return Compliance <p>Compliance guarantee</p>
                     * 
                     */
                    uint64_t GetCompliance() const;

                    /**
                     * 设置<p>Compliance guarantee</p>
                     * @param _compliance <p>Compliance guarantee</p>
                     * 
                     */
                    void SetCompliance(const uint64_t& _compliance);

                    /**
                     * 判断参数 Compliance 是否已赋值
                     * @return Compliance 是否已赋值
                     * 
                     */
                    bool ComplianceHasBeenSet() const;

                    /**
                     * 获取<p>Task status.</p><p>Enumeration values: </p><ul><li>0: Running, </li><li>1: Paused, </li><li>2: Completed, </li><li>3: Exception.</li></ul>
                     * @return Status <p>Task status.</p><p>Enumeration values: </p><ul><li>0: Running, </li><li>1: Paused, </li><li>2: Completed, </li><li>3: Exception.</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Task status.</p><p>Enumeration values: </p><ul><li>0: Running, </li><li>1: Paused, </li><li>2: Completed, </li><li>3: Exception.</li></ul>
                     * @param _status <p>Task status.</p><p>Enumeration values: </p><ul><li>0: Running, </li><li>1: Paused, </li><li>2: Completed, </li><li>3: Exception.</li></ul>
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
                     * 获取<p>Status.</p><p>Enumeration values: </p><ul><li>0: Running, </li><li>1: Suspended.</li></ul>
                     * @return Enable <p>Status.</p><p>Enumeration values: </p><ul><li>0: Running, </li><li>1: Suspended.</li></ul>
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置<p>Status.</p><p>Enumeration values: </p><ul><li>0: Running, </li><li>1: Suspended.</li></ul>
                     * @param _enable <p>Status.</p><p>Enumeration values: </p><ul><li>0: Running, </li><li>1: Suspended.</li></ul>
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>Task progress percentage</p>
                     * @return Progress <p>Task progress percentage</p>
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置<p>Task progress percentage</p>
                     * @param _progress <p>Task progress percentage</p>
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>Whether delivery service log is enabled.</p><p>Enumeration values:</p><ul><li>1: Disabled</li><li>2: Enabled</li></ul>
                     * @return HasServicesLog <p>Whether delivery service log is enabled.</p><p>Enumeration values:</p><ul><li>1: Disabled</li><li>2: Enabled</li></ul>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>Whether delivery service log is enabled.</p><p>Enumeration values:</p><ul><li>1: Disabled</li><li>2: Enabled</li></ul>
                     * @param _hasServicesLog <p>Whether delivery service log is enabled.</p><p>Enumeration values:</p><ul><li>1: Disabled</li><li>2: Enabled</li></ul>
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p><p>Unit: unix second-level timestamp</p>
                     * @return CreateTime <p>Creation time.</p><p>Unit: unix second-level timestamp</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p><p>Unit: unix second-level timestamp</p>
                     * @param _createTime <p>Creation time.</p><p>Unit: unix second-level timestamp</p>
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
                     * 获取<p>Update time</p><p>Unit: unix second-level timestamp</p>
                     * @return UpdateTime <p>Update time</p><p>Unit: unix second-level timestamp</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>Update time</p><p>Unit: unix second-level timestamp</p>
                     * @param _updateTime <p>Update time</p><p>Unit: unix second-level timestamp</p>
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
                     * <p>Task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task name</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>Main account id</p>
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Source topic information</p>
                     */
                    SourceTopicConfig m_sourceTopicConfig;
                    bool m_sourceTopicConfigHasBeenSet;

                    /**
                     * <p>Target topic information</p>
                     */
                    TargetTopicConfig m_targetTopicConfig;
                    bool m_targetTopicConfigHasBeenSet;

                    /**
                     * <p>Shipping Rule</p>
                     */
                    DeliverRule m_deliverRule;
                    bool m_deliverRuleHasBeenSet;

                    /**
                     * <p>Compliance guarantee</p>
                     */
                    uint64_t m_compliance;
                    bool m_complianceHasBeenSet;

                    /**
                     * <p>Task status.</p><p>Enumeration values: </p><ul><li>0: Running, </li><li>1: Paused, </li><li>2: Completed, </li><li>3: Exception.</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Status.</p><p>Enumeration values: </p><ul><li>0: Running, </li><li>1: Suspended.</li></ul>
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Task progress percentage</p>
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>Whether delivery service log is enabled.</p><p>Enumeration values:</p><ul><li>1: Disabled</li><li>2: Enabled</li></ul>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * <p>Creation time.</p><p>Unit: unix second-level timestamp</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time</p><p>Unit: unix second-level timestamp</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CLSDELIVERTASKINFO_H_
