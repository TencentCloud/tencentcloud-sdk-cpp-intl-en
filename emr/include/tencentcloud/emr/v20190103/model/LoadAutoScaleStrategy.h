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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_LOADAUTOSCALESTRATEGY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_LOADAUTOSCALESTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/LoadMetricsConditions.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Automatic scaling rule based on load metrics.
                */
                class LoadAutoScaleStrategy : public AbstractModel
                {
                public:
                    LoadAutoScaleStrategy();
                    ~LoadAutoScaleStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID.
                     * @return StrategyId Rule ID.
                     * 
                     */
                    int64_t GetStrategyId() const;

                    /**
                     * 设置Rule ID.
                     * @param _strategyId Rule ID.
                     * 
                     */
                    void SetStrategyId(const int64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Rule name.
                     * @return StrategyName Rule name.
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Rule name.
                     * @param _strategyName Rule name.
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
                     * 获取Cooldown time for a rule to take effect.
                     * @return CalmDownTime Cooldown time for a rule to take effect.
                     * 
                     */
                    int64_t GetCalmDownTime() const;

                    /**
                     * 设置Cooldown time for a rule to take effect.
                     * @param _calmDownTime Cooldown time for a rule to take effect.
                     * 
                     */
                    void SetCalmDownTime(const int64_t& _calmDownTime);

                    /**
                     * 判断参数 CalmDownTime 是否已赋值
                     * @return CalmDownTime 是否已赋值
                     * 
                     */
                    bool CalmDownTimeHasBeenSet() const;

                    /**
                     * 获取Scaling action. Valid values: 1 (scale-out) and 2 (scale-in).
                     * @return ScaleAction Scaling action. Valid values: 1 (scale-out) and 2 (scale-in).
                     * 
                     */
                    int64_t GetScaleAction() const;

                    /**
                     * 设置Scaling action. Valid values: 1 (scale-out) and 2 (scale-in).
                     * @param _scaleAction Scaling action. Valid values: 1 (scale-out) and 2 (scale-in).
                     * 
                     */
                    void SetScaleAction(const int64_t& _scaleAction);

                    /**
                     * 判断参数 ScaleAction 是否已赋值
                     * @return ScaleAction 是否已赋值
                     * 
                     */
                    bool ScaleActionHasBeenSet() const;

                    /**
                     * 获取Number of scaling items each time the rule takes effect.
                     * @return ScaleNum Number of scaling items each time the rule takes effect.
                     * 
                     */
                    int64_t GetScaleNum() const;

                    /**
                     * 设置Number of scaling items each time the rule takes effect.
                     * @param _scaleNum Number of scaling items each time the rule takes effect.
                     * 
                     */
                    void SetScaleNum(const int64_t& _scaleNum);

                    /**
                     * 判断参数 ScaleNum 是否已赋值
                     * @return ScaleNum 是否已赋值
                     * 
                     */
                    bool ScaleNumHasBeenSet() const;

                    /**
                     * 获取Metric processing method. Valid values: 1 (MAX), 2 (MIN), and 3 (AVG).
                     * @return ProcessMethod Metric processing method. Valid values: 1 (MAX), 2 (MIN), and 3 (AVG).
                     * 
                     */
                    int64_t GetProcessMethod() const;

                    /**
                     * 设置Metric processing method. Valid values: 1 (MAX), 2 (MIN), and 3 (AVG).
                     * @param _processMethod Metric processing method. Valid values: 1 (MAX), 2 (MIN), and 3 (AVG).
                     * 
                     */
                    void SetProcessMethod(const int64_t& _processMethod);

                    /**
                     * 判断参数 ProcessMethod 是否已赋值
                     * @return ProcessMethod 是否已赋值
                     * 
                     */
                    bool ProcessMethodHasBeenSet() const;

                    /**
                     * 获取Rule priority, which is invalid during addition. By default, the auto-increment rule is used.
                     * @return Priority Rule priority, which is invalid during addition. By default, the auto-increment rule is used.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Rule priority, which is invalid during addition. By default, the auto-increment rule is used.
                     * @param _priority Rule priority, which is invalid during addition. By default, the auto-increment rule is used.
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Rule status. Valid values: 1 (enabled) and 3 (disabled).
                     * @return StrategyStatus Rule status. Valid values: 1 (enabled) and 3 (disabled).
                     * 
                     */
                    int64_t GetStrategyStatus() const;

                    /**
                     * 设置Rule status. Valid values: 1 (enabled) and 3 (disabled).
                     * @param _strategyStatus Rule status. Valid values: 1 (enabled) and 3 (disabled).
                     * 
                     */
                    void SetStrategyStatus(const int64_t& _strategyStatus);

                    /**
                     * 判断参数 StrategyStatus 是否已赋值
                     * @return StrategyStatus 是否已赋值
                     * 
                     */
                    bool StrategyStatusHasBeenSet() const;

                    /**
                     * 获取YARN node label specified for the rule-based scale-out.
                     * @return YarnNodeLabel YARN node label specified for the rule-based scale-out.
                     * 
                     */
                    std::string GetYarnNodeLabel() const;

                    /**
                     * 设置YARN node label specified for the rule-based scale-out.
                     * @param _yarnNodeLabel YARN node label specified for the rule-based scale-out.
                     * 
                     */
                    void SetYarnNodeLabel(const std::string& _yarnNodeLabel);

                    /**
                     * 判断参数 YarnNodeLabel 是否已赋值
                     * @return YarnNodeLabel 是否已赋值
                     * 
                     */
                    bool YarnNodeLabelHasBeenSet() const;

                    /**
                     * 获取Effective time of the rule.
                     * @return PeriodValid Effective time of the rule.
                     * 
                     */
                    std::string GetPeriodValid() const;

                    /**
                     * 设置Effective time of the rule.
                     * @param _periodValid Effective time of the rule.
                     * 
                     */
                    void SetPeriodValid(const std::string& _periodValid);

                    /**
                     * 判断参数 PeriodValid 是否已赋值
                     * @return PeriodValid 是否已赋值
                     * 
                     */
                    bool PeriodValidHasBeenSet() const;

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
                     * 获取Whether to enable task protection.
                     * @return GraceDownProtectFlag Whether to enable task protection.
                     * 
                     */
                    bool GetGraceDownProtectFlag() const;

                    /**
                     * 设置Whether to enable task protection.
                     * @param _graceDownProtectFlag Whether to enable task protection.
                     * 
                     */
                    void SetGraceDownProtectFlag(const bool& _graceDownProtectFlag);

                    /**
                     * 判断参数 GraceDownProtectFlag 是否已赋值
                     * @return GraceDownProtectFlag 是否已赋值
                     * 
                     */
                    bool GraceDownProtectFlagHasBeenSet() const;

                    /**
                     * 获取Bound tag list.
                     * @return Tags Bound tag list.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Bound tag list.
                     * @param _tags Bound tag list.
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
                     * 获取Calculation method for scaled‑out resources. Valid values: "DEFAULT", "INSTANCE", "CPU", and "MEMORYGB".
"DEFAULT" indicates the default calculation method, which is identical to "INSTANCE".
"INSTANCE" indicates the calculation method based on nodes. This is the default method.
"CPU" indicates the calculation method based on the number of cores of the machine.
"MEMORYGB" indicates the calculation method based on the memory size of the machine.
                     * @return MeasureMethod Calculation method for scaled‑out resources. Valid values: "DEFAULT", "INSTANCE", "CPU", and "MEMORYGB".
"DEFAULT" indicates the default calculation method, which is identical to "INSTANCE".
"INSTANCE" indicates the calculation method based on nodes. This is the default method.
"CPU" indicates the calculation method based on the number of cores of the machine.
"MEMORYGB" indicates the calculation method based on the memory size of the machine.
                     * 
                     */
                    std::string GetMeasureMethod() const;

                    /**
                     * 设置Calculation method for scaled‑out resources. Valid values: "DEFAULT", "INSTANCE", "CPU", and "MEMORYGB".
"DEFAULT" indicates the default calculation method, which is identical to "INSTANCE".
"INSTANCE" indicates the calculation method based on nodes. This is the default method.
"CPU" indicates the calculation method based on the number of cores of the machine.
"MEMORYGB" indicates the calculation method based on the memory size of the machine.
                     * @param _measureMethod Calculation method for scaled‑out resources. Valid values: "DEFAULT", "INSTANCE", "CPU", and "MEMORYGB".
"DEFAULT" indicates the default calculation method, which is identical to "INSTANCE".
"INSTANCE" indicates the calculation method based on nodes. This is the default method.
"CPU" indicates the calculation method based on the number of cores of the machine.
"MEMORYGB" indicates the calculation method based on the memory size of the machine.
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
                     * 获取List of node deployment services, for example, ["HDFS-3.1.2","YARN-3.1.2"].
                     * @return SoftDeployDesc List of node deployment services, for example, ["HDFS-3.1.2","YARN-3.1.2"].
                     * 
                     */
                    std::vector<std::string> GetSoftDeployDesc() const;

                    /**
                     * 设置List of node deployment services, for example, ["HDFS-3.1.2","YARN-3.1.2"].
                     * @param _softDeployDesc List of node deployment services, for example, ["HDFS-3.1.2","YARN-3.1.2"].
                     * 
                     */
                    void SetSoftDeployDesc(const std::vector<std::string>& _softDeployDesc);

                    /**
                     * 判断参数 SoftDeployDesc 是否已赋值
                     * @return SoftDeployDesc 是否已赋值
                     * 
                     */
                    bool SoftDeployDescHasBeenSet() const;

                    /**
                     * 获取Startup process list, for example, ["NodeManager"].
                     * @return ServiceNodeDesc Startup process list, for example, ["NodeManager"].
                     * 
                     */
                    std::string GetServiceNodeDesc() const;

                    /**
                     * 设置Startup process list, for example, ["NodeManager"].
                     * @param _serviceNodeDesc Startup process list, for example, ["NodeManager"].
                     * 
                     */
                    void SetServiceNodeDesc(const std::string& _serviceNodeDesc);

                    /**
                     * 判断参数 ServiceNodeDesc 是否已赋值
                     * @return ServiceNodeDesc 是否已赋值
                     * 
                     */
                    bool ServiceNodeDescHasBeenSet() const;

                    /**
                     * 获取Startup process list.
                     * @return ServiceNodeInfo Startup process list.
                     * 
                     */
                    std::vector<int64_t> GetServiceNodeInfo() const;

                    /**
                     * 设置Startup process list.
                     * @param _serviceNodeInfo Startup process list.
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
                     * 获取List of services deployed on the node. Valid values: HDFS and YARN. For details, see [Mapping Table for Component Names](https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1).
                     * @return SoftDeployInfo List of services deployed on the node. Valid values: HDFS and YARN. For details, see [Mapping Table for Component Names](https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1).
                     * 
                     */
                    std::vector<int64_t> GetSoftDeployInfo() const;

                    /**
                     * 设置List of services deployed on the node. Valid values: HDFS and YARN. For details, see [Mapping Table for Component Names](https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1).
                     * @param _softDeployInfo List of services deployed on the node. Valid values: HDFS and YARN. For details, see [Mapping Table for Component Names](https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1).
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
                     * 获取Multi-metric triggering condition.
                     * @return LoadMetricsConditions Multi-metric triggering condition.
                     * 
                     */
                    LoadMetricsConditions GetLoadMetricsConditions() const;

                    /**
                     * 设置Multi-metric triggering condition.
                     * @param _loadMetricsConditions Multi-metric triggering condition.
                     * 
                     */
                    void SetLoadMetricsConditions(const LoadMetricsConditions& _loadMetricsConditions);

                    /**
                     * 判断参数 LoadMetricsConditions 是否已赋值
                     * @return LoadMetricsConditions 是否已赋值
                     * 
                     */
                    bool LoadMetricsConditionsHasBeenSet() const;

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
                     * 获取Soft. Example value: yarn.
                     * @return Soft Soft. Example value: yarn.
                     * 
                     */
                    std::string GetSoft() const;

                    /**
                     * 设置Soft. Example value: yarn.
                     * @param _soft Soft. Example value: yarn.
                     * 
                     */
                    void SetSoft(const std::string& _soft);

                    /**
                     * 判断参数 Soft 是否已赋值
                     * @return Soft 是否已赋值
                     * 
                     */
                    bool SoftHasBeenSet() const;

                    /**
                     * 获取Task protection time.
                     * @return GraceDownProtectTime Task protection time.
                     * 
                     */
                    int64_t GetGraceDownProtectTime() const;

                    /**
                     * 设置Task protection time.
                     * @param _graceDownProtectTime Task protection time.
                     * 
                     */
                    void SetGraceDownProtectTime(const int64_t& _graceDownProtectTime);

                    /**
                     * 判断参数 GraceDownProtectTime 是否已赋值
                     * @return GraceDownProtectTime 是否已赋值
                     * 
                     */
                    bool GraceDownProtectTimeHasBeenSet() const;

                private:

                    /**
                     * Rule ID.
                     */
                    int64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Rule name.
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * Cooldown time for a rule to take effect.
                     */
                    int64_t m_calmDownTime;
                    bool m_calmDownTimeHasBeenSet;

                    /**
                     * Scaling action. Valid values: 1 (scale-out) and 2 (scale-in).
                     */
                    int64_t m_scaleAction;
                    bool m_scaleActionHasBeenSet;

                    /**
                     * Number of scaling items each time the rule takes effect.
                     */
                    int64_t m_scaleNum;
                    bool m_scaleNumHasBeenSet;

                    /**
                     * Metric processing method. Valid values: 1 (MAX), 2 (MIN), and 3 (AVG).
                     */
                    int64_t m_processMethod;
                    bool m_processMethodHasBeenSet;

                    /**
                     * Rule priority, which is invalid during addition. By default, the auto-increment rule is used.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Rule status. Valid values: 1 (enabled) and 3 (disabled).
                     */
                    int64_t m_strategyStatus;
                    bool m_strategyStatusHasBeenSet;

                    /**
                     * YARN node label specified for the rule-based scale-out.
                     */
                    std::string m_yarnNodeLabel;
                    bool m_yarnNodeLabelHasBeenSet;

                    /**
                     * Effective time of the rule.
                     */
                    std::string m_periodValid;
                    bool m_periodValidHasBeenSet;

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
                     * Whether to enable task protection.
                     */
                    bool m_graceDownProtectFlag;
                    bool m_graceDownProtectFlagHasBeenSet;

                    /**
                     * Bound tag list.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Preset configuration group.
                     */
                    std::string m_configGroupAssigned;
                    bool m_configGroupAssignedHasBeenSet;

                    /**
                     * Calculation method for scaled‑out resources. Valid values: "DEFAULT", "INSTANCE", "CPU", and "MEMORYGB".
"DEFAULT" indicates the default calculation method, which is identical to "INSTANCE".
"INSTANCE" indicates the calculation method based on nodes. This is the default method.
"CPU" indicates the calculation method based on the number of cores of the machine.
"MEMORYGB" indicates the calculation method based on the memory size of the machine.
                     */
                    std::string m_measureMethod;
                    bool m_measureMethodHasBeenSet;

                    /**
                     * List of node deployment services, for example, ["HDFS-3.1.2","YARN-3.1.2"].
                     */
                    std::vector<std::string> m_softDeployDesc;
                    bool m_softDeployDescHasBeenSet;

                    /**
                     * Startup process list, for example, ["NodeManager"].
                     */
                    std::string m_serviceNodeDesc;
                    bool m_serviceNodeDescHasBeenSet;

                    /**
                     * Startup process list.
                     */
                    std::vector<int64_t> m_serviceNodeInfo;
                    bool m_serviceNodeInfoHasBeenSet;

                    /**
                     * List of services deployed on the node. Valid values: HDFS and YARN. For details, see [Mapping Table for Component Names](https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1).
                     */
                    std::vector<int64_t> m_softDeployInfo;
                    bool m_softDeployInfoHasBeenSet;

                    /**
                     * Multi-metric triggering condition.
                     */
                    LoadMetricsConditions m_loadMetricsConditions;
                    bool m_loadMetricsConditionsHasBeenSet;

                    /**
                     * Scaling group ID.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Soft. Example value: yarn.
                     */
                    std::string m_soft;
                    bool m_softHasBeenSet;

                    /**
                     * Task protection time.
                     */
                    int64_t m_graceDownProtectTime;
                    bool m_graceDownProtectTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_LOADAUTOSCALESTRATEGY_H_
