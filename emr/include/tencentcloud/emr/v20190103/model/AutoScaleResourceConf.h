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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERESOURCECONF_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERESOURCECONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/AutoScaleGroupAdvanceAttrs.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Elastic scaling specification configuration
                */
                class AutoScaleResourceConf : public AbstractModel
                {
                public:
                    AutoScaleResourceConf();
                    ~AutoScaleResourceConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration ID.
                     * @return Id Configuration ID.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Configuration ID.
                     * @param _id Configuration ID.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Cluster instance ID.
                     * @return ClusterId Cluster instance ID.
                     * 
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置Cluster instance ID.
                     * @param _clusterId Cluster instance ID.
                     * 
                     */
                    void SetClusterId(const int64_t& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Minimum number of instances retained for automatic scaling
                     * @return ScaleLowerBound Minimum number of instances retained for automatic scaling
                     * 
                     */
                    int64_t GetScaleLowerBound() const;

                    /**
                     * 设置Minimum number of instances retained for automatic scaling
                     * @param _scaleLowerBound Minimum number of instances retained for automatic scaling
                     * 
                     */
                    void SetScaleLowerBound(const int64_t& _scaleLowerBound);

                    /**
                     * 判断参数 ScaleLowerBound 是否已赋值
                     * @return ScaleLowerBound 是否已赋值
                     * 
                     */
                    bool ScaleLowerBoundHasBeenSet() const;

                    /**
                     * 获取Maximum number of instances for auto scaling
                     * @return ScaleUpperBound Maximum number of instances for auto scaling
                     * 
                     */
                    int64_t GetScaleUpperBound() const;

                    /**
                     * 设置Maximum number of instances for auto scaling
                     * @param _scaleUpperBound Maximum number of instances for auto scaling
                     * 
                     */
                    void SetScaleUpperBound(const int64_t& _scaleUpperBound);

                    /**
                     * 判断参数 ScaleUpperBound 是否已赋值
                     * @return ScaleUpperBound 是否已赋值
                     * 
                     */
                    bool ScaleUpperBoundHasBeenSet() const;

                    /**
                     * 获取Scale-out rule type. 1: load-based scale-out rule, 2: time-based scale-out rule
                     * @return StrategyType Scale-out rule type. 1: load-based scale-out rule, 2: time-based scale-out rule
                     * 
                     */
                    int64_t GetStrategyType() const;

                    /**
                     * 设置Scale-out rule type. 1: load-based scale-out rule, 2: time-based scale-out rule
                     * @param _strategyType Scale-out rule type. 1: load-based scale-out rule, 2: time-based scale-out rule
                     * 
                     */
                    void SetStrategyType(const int64_t& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取Next scale-out time.
                     * @return NextTimeCanScale Next scale-out time.
                     * 
                     */
                    uint64_t GetNextTimeCanScale() const;

                    /**
                     * 设置Next scale-out time.
                     * @param _nextTimeCanScale Next scale-out time.
                     * 
                     */
                    void SetNextTimeCanScale(const uint64_t& _nextTimeCanScale);

                    /**
                     * 判断参数 NextTimeCanScale 是否已赋值
                     * @return NextTimeCanScale 是否已赋值
                     * 
                     */
                    bool NextTimeCanScaleHasBeenSet() const;

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
                     * 获取"CVM" indicates that the CVM type is used for all specifications, and "Pod" indicates that the container type is used for specifications. The default value is "CVM".
                     * @return HardwareType "CVM" indicates that the CVM type is used for all specifications, and "Pod" indicates that the container type is used for specifications. The default value is "CVM".
                     * 
                     */
                    std::string GetHardwareType() const;

                    /**
                     * 设置"CVM" indicates that the CVM type is used for all specifications, and "Pod" indicates that the container type is used for specifications. The default value is "CVM".
                     * @param _hardwareType "CVM" indicates that the CVM type is used for all specifications, and "Pod" indicates that the container type is used for specifications. The default value is "CVM".
                     * 
                     */
                    void SetHardwareType(const std::string& _hardwareType);

                    /**
                     * 判断参数 HardwareType 是否已赋值
                     * @return HardwareType 是否已赋值
                     * 
                     */
                    bool HardwareTypeHasBeenSet() const;

                    /**
                     * 获取"POSTPAY" indicates the sole adoption of pay-as-you-go, and "SPOT_FIRST" indicates spot instance first, which is only supported when HardwareType is "HOST". "Pod" only supports pay-as-you-go.
                     * @return PayMode "POSTPAY" indicates the sole adoption of pay-as-you-go, and "SPOT_FIRST" indicates spot instance first, which is only supported when HardwareType is "HOST". "Pod" only supports pay-as-you-go.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置"POSTPAY" indicates the sole adoption of pay-as-you-go, and "SPOT_FIRST" indicates spot instance first, which is only supported when HardwareType is "HOST". "Pod" only supports pay-as-you-go.
                     * @param _payMode "POSTPAY" indicates the sole adoption of pay-as-you-go, and "SPOT_FIRST" indicates spot instance first, which is only supported when HardwareType is "HOST". "Pod" only supports pay-as-you-go.
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取The minimum percentage of pay-as-you-go resources in scenarios with spot instance first. It is an integer.
                     * @return PostPayPercentMin The minimum percentage of pay-as-you-go resources in scenarios with spot instance first. It is an integer.
                     * 
                     */
                    int64_t GetPostPayPercentMin() const;

                    /**
                     * 设置The minimum percentage of pay-as-you-go resources in scenarios with spot instance first. It is an integer.
                     * @param _postPayPercentMin The minimum percentage of pay-as-you-go resources in scenarios with spot instance first. It is an integer.
                     * 
                     */
                    void SetPostPayPercentMin(const int64_t& _postPayPercentMin);

                    /**
                     * 判断参数 PostPayPercentMin 是否已赋值
                     * @return PostPayPercentMin 是否已赋值
                     * 
                     */
                    bool PostPayPercentMinHasBeenSet() const;

                    /**
                     * 获取When resource type is preset to HOST: Supports enabling/disabling "Fallback to pod when resources are insufficient"; Default state: 0 (disabled), Toggle state: 1 (enabled).
                     * @return ChangeToPod When resource type is preset to HOST: Supports enabling/disabling "Fallback to pod when resources are insufficient"; Default state: 0 (disabled), Toggle state: 1 (enabled).
                     * 
                     */
                    int64_t GetChangeToPod() const;

                    /**
                     * 设置When resource type is preset to HOST: Supports enabling/disabling "Fallback to pod when resources are insufficient"; Default state: 0 (disabled), Toggle state: 1 (enabled).
                     * @param _changeToPod When resource type is preset to HOST: Supports enabling/disabling "Fallback to pod when resources are insufficient"; Default state: 0 (disabled), Toggle state: 1 (enabled).
                     * 
                     */
                    void SetChangeToPod(const int64_t& _changeToPod);

                    /**
                     * 判断参数 ChangeToPod 是否已赋值
                     * @return ChangeToPod 是否已赋值
                     * 
                     */
                    bool ChangeToPodHasBeenSet() const;

                    /**
                     * 获取Scaling group name.
                     * @return GroupName Scaling group name.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Scaling group name.
                     * @param _groupName Scaling group name.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return YarnNodeLabel Tag.
                     * 
                     */
                    std::string GetYarnNodeLabel() const;

                    /**
                     * 设置Tag.
                     * @param _yarnNodeLabel Tag.
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
                     * 获取Scaling group status.
                     * @return GroupStatus Scaling group status.
                     * 
                     */
                    int64_t GetGroupStatus() const;

                    /**
                     * 设置Scaling group status.
                     * @param _groupStatus Scaling group status.
                     * 
                     */
                    void SetGroupStatus(const int64_t& _groupStatus);

                    /**
                     * 判断参数 GroupStatus 是否已赋值
                     * @return GroupStatus 是否已赋值
                     * 
                     */
                    bool GroupStatusHasBeenSet() const;

                    /**
                     * 获取Parallel scaling. 0: disabled; 1: enabled.
                     * @return Parallel Parallel scaling. 0: disabled; 1: enabled.
                     * 
                     */
                    int64_t GetParallel() const;

                    /**
                     * 设置Parallel scaling. 0: disabled; 1: enabled.
                     * @param _parallel Parallel scaling. 0: disabled; 1: enabled.
                     * 
                     */
                    void SetParallel(const int64_t& _parallel);

                    /**
                     * 判断参数 Parallel 是否已赋值
                     * @return Parallel 是否已赋值
                     * 
                     */
                    bool ParallelHasBeenSet() const;

                    /**
                     * 获取Whether MNode is supported.
                     * @return EnableMNode Whether MNode is supported.
                     * 
                     */
                    int64_t GetEnableMNode() const;

                    /**
                     * 设置Whether MNode is supported.
                     * @param _enableMNode Whether MNode is supported.
                     * 
                     */
                    void SetEnableMNode(const int64_t& _enableMNode);

                    /**
                     * 判断参数 EnableMNode 是否已赋值
                     * @return EnableMNode 是否已赋值
                     * 
                     */
                    bool EnableMNodeHasBeenSet() const;

                    /**
                     * 获取More scaling group settings.
                     * @return ExtraAdvanceAttrs More scaling group settings.
                     * 
                     */
                    AutoScaleGroupAdvanceAttrs GetExtraAdvanceAttrs() const;

                    /**
                     * 设置More scaling group settings.
                     * @param _extraAdvanceAttrs More scaling group settings.
                     * 
                     */
                    void SetExtraAdvanceAttrs(const AutoScaleGroupAdvanceAttrs& _extraAdvanceAttrs);

                    /**
                     * 判断参数 ExtraAdvanceAttrs 是否已赋值
                     * @return ExtraAdvanceAttrs 是否已赋值
                     * 
                     */
                    bool ExtraAdvanceAttrsHasBeenSet() const;

                private:

                    /**
                     * Configuration ID.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Cluster instance ID.
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Minimum number of instances retained for automatic scaling
                     */
                    int64_t m_scaleLowerBound;
                    bool m_scaleLowerBoundHasBeenSet;

                    /**
                     * Maximum number of instances for auto scaling
                     */
                    int64_t m_scaleUpperBound;
                    bool m_scaleUpperBoundHasBeenSet;

                    /**
                     * Scale-out rule type. 1: load-based scale-out rule, 2: time-based scale-out rule
                     */
                    int64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * Next scale-out time.
                     */
                    uint64_t m_nextTimeCanScale;
                    bool m_nextTimeCanScaleHasBeenSet;

                    /**
                     * Graceful scale-in switch.
                     */
                    bool m_graceDownFlag;
                    bool m_graceDownFlagHasBeenSet;

                    /**
                     * "CVM" indicates that the CVM type is used for all specifications, and "Pod" indicates that the container type is used for specifications. The default value is "CVM".
                     */
                    std::string m_hardwareType;
                    bool m_hardwareTypeHasBeenSet;

                    /**
                     * "POSTPAY" indicates the sole adoption of pay-as-you-go, and "SPOT_FIRST" indicates spot instance first, which is only supported when HardwareType is "HOST". "Pod" only supports pay-as-you-go.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * The minimum percentage of pay-as-you-go resources in scenarios with spot instance first. It is an integer.
                     */
                    int64_t m_postPayPercentMin;
                    bool m_postPayPercentMinHasBeenSet;

                    /**
                     * When resource type is preset to HOST: Supports enabling/disabling "Fallback to pod when resources are insufficient"; Default state: 0 (disabled), Toggle state: 1 (enabled).
                     */
                    int64_t m_changeToPod;
                    bool m_changeToPodHasBeenSet;

                    /**
                     * Scaling group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::string m_yarnNodeLabel;
                    bool m_yarnNodeLabelHasBeenSet;

                    /**
                     * Scaling group status.
                     */
                    int64_t m_groupStatus;
                    bool m_groupStatusHasBeenSet;

                    /**
                     * Parallel scaling. 0: disabled; 1: enabled.
                     */
                    int64_t m_parallel;
                    bool m_parallelHasBeenSet;

                    /**
                     * Whether MNode is supported.
                     */
                    int64_t m_enableMNode;
                    bool m_enableMNodeHasBeenSet;

                    /**
                     * More scaling group settings.
                     */
                    AutoScaleGroupAdvanceAttrs m_extraAdvanceAttrs;
                    bool m_extraAdvanceAttrsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERESOURCECONF_H_
