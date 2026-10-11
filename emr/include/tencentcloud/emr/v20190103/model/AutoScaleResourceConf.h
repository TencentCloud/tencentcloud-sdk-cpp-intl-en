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
                * Auto scaling specification configuration.
                */
                class AutoScaleResourceConf : public AbstractModel
                {
                public:
                    AutoScaleResourceConf();
                    ~AutoScaleResourceConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Configuration ID.</p>
                     * @return Id <p>Configuration ID.</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>Configuration ID.</p>
                     * @param _id <p>Configuration ID.</p>
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
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
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
                     * 获取<p>Minimum number of reserved instances for auto scaling.</p>
                     * @return ScaleLowerBound <p>Minimum number of reserved instances for auto scaling.</p>
                     * 
                     */
                    int64_t GetScaleLowerBound() const;

                    /**
                     * 设置<p>Minimum number of reserved instances for auto scaling.</p>
                     * @param _scaleLowerBound <p>Minimum number of reserved instances for auto scaling.</p>
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
                     * 获取<p>Maximum number of instances for auto scaling.</p>
                     * @return ScaleUpperBound <p>Maximum number of instances for auto scaling.</p>
                     * 
                     */
                    int64_t GetScaleUpperBound() const;

                    /**
                     * 设置<p>Maximum number of instances for auto scaling.</p>
                     * @param _scaleUpperBound <p>Maximum number of instances for auto scaling.</p>
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
                     * 获取<p>Scale-out rule type. Valid values: 1 (scale-out rule by load metrics) and 2 (scale-out rule by time).</p>
                     * @return StrategyType <p>Scale-out rule type. Valid values: 1 (scale-out rule by load metrics) and 2 (scale-out rule by time).</p>
                     * 
                     */
                    int64_t GetStrategyType() const;

                    /**
                     * 设置<p>Scale-out rule type. Valid values: 1 (scale-out rule by load metrics) and 2 (scale-out rule by time).</p>
                     * @param _strategyType <p>Scale-out rule type. Valid values: 1 (scale-out rule by load metrics) and 2 (scale-out rule by time).</p>
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
                     * 获取<p>Next scale-out time.</p>
                     * @return NextTimeCanScale <p>Next scale-out time.</p>
                     * 
                     */
                    uint64_t GetNextTimeCanScale() const;

                    /**
                     * 设置<p>Next scale-out time.</p>
                     * @param _nextTimeCanScale <p>Next scale-out time.</p>
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
                     * 获取<p>Graceful scale-in switch.</p>
                     * @return GraceDownFlag <p>Graceful scale-in switch.</p>
                     * 
                     */
                    bool GetGraceDownFlag() const;

                    /**
                     * 设置<p>Graceful scale-in switch.</p>
                     * @param _graceDownFlag <p>Graceful scale-in switch.</p>
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
                     * 获取<p>&quot;CVM&quot; indicates that all specifications use CVM-related types, and &quot;POD&quot; indicates that specifications use container-related types. The default value is &quot;CVM&quot;.</p>
                     * @return HardwareType <p>&quot;CVM&quot; indicates that all specifications use CVM-related types, and &quot;POD&quot; indicates that specifications use container-related types. The default value is &quot;CVM&quot;.</p>
                     * 
                     */
                    std::string GetHardwareType() const;

                    /**
                     * 设置<p>&quot;CVM&quot; indicates that all specifications use CVM-related types, and &quot;POD&quot; indicates that specifications use container-related types. The default value is &quot;CVM&quot;.</p>
                     * @param _hardwareType <p>&quot;CVM&quot; indicates that all specifications use CVM-related types, and &quot;POD&quot; indicates that specifications use container-related types. The default value is &quot;CVM&quot;.</p>
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
                     * 获取<p>&quot;POSTPAY&quot; indicates that only pay-as-you-go billing is used. &quot;SPOT_FIRST&quot; indicates that spot instances are preferred, which is supported only when HardwareType is &quot;HOST&quot;. &quot;POD&quot; only supports pure pay-as-you-go billing.</p>
                     * @return PayMode <p>&quot;POSTPAY&quot; indicates that only pay-as-you-go billing is used. &quot;SPOT_FIRST&quot; indicates that spot instances are preferred, which is supported only when HardwareType is &quot;HOST&quot;. &quot;POD&quot; only supports pure pay-as-you-go billing.</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>&quot;POSTPAY&quot; indicates that only pay-as-you-go billing is used. &quot;SPOT_FIRST&quot; indicates that spot instances are preferred, which is supported only when HardwareType is &quot;HOST&quot;. &quot;POD&quot; only supports pure pay-as-you-go billing.</p>
                     * @param _payMode <p>&quot;POSTPAY&quot; indicates that only pay-as-you-go billing is used. &quot;SPOT_FIRST&quot; indicates that spot instances are preferred, which is supported only when HardwareType is &quot;HOST&quot;. &quot;POD&quot; only supports pure pay-as-you-go billing.</p>
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
                     * 获取<p>Minimum percentage of pay-as-you-go resources in the scenario where spot instances are preferred. It is an integer.</p>
                     * @return PostPayPercentMin <p>Minimum percentage of pay-as-you-go resources in the scenario where spot instances are preferred. It is an integer.</p>
                     * 
                     */
                    int64_t GetPostPayPercentMin() const;

                    /**
                     * 设置<p>Minimum percentage of pay-as-you-go resources in the scenario where spot instances are preferred. It is an integer.</p>
                     * @param _postPayPercentMin <p>Minimum percentage of pay-as-you-go resources in the scenario where spot instances are preferred. It is an integer.</p>
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
                     * 获取<p>When the preset resource type is HOST, you can select &quot;switch to POD when resources are insufficient&quot; or clear the selection. 0 indicates that it is not selected by default (0), and 1 indicates that it is selected.</p>
                     * @return ChangeToPod <p>When the preset resource type is HOST, you can select &quot;switch to POD when resources are insufficient&quot; or clear the selection. 0 indicates that it is not selected by default (0), and 1 indicates that it is selected.</p>
                     * 
                     */
                    int64_t GetChangeToPod() const;

                    /**
                     * 设置<p>When the preset resource type is HOST, you can select &quot;switch to POD when resources are insufficient&quot; or clear the selection. 0 indicates that it is not selected by default (0), and 1 indicates that it is selected.</p>
                     * @param _changeToPod <p>When the preset resource type is HOST, you can select &quot;switch to POD when resources are insufficient&quot; or clear the selection. 0 indicates that it is not selected by default (0), and 1 indicates that it is selected.</p>
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
                     * 获取<p>Scaling group name.</p>
                     * @return GroupName <p>Scaling group name.</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>Scaling group name.</p>
                     * @param _groupName <p>Scaling group name.</p>
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
                     * 获取<p>Tag.</p>
                     * @return YarnNodeLabel <p>Tag.</p>
                     * 
                     */
                    std::string GetYarnNodeLabel() const;

                    /**
                     * 设置<p>Tag.</p>
                     * @param _yarnNodeLabel <p>Tag.</p>
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
                     * 获取<p>Corresponding computing group.</p>
                     * @return WarehouseName <p>Corresponding computing group.</p>
                     * 
                     */
                    std::string GetWarehouseName() const;

                    /**
                     * 设置<p>Corresponding computing group.</p>
                     * @param _warehouseName <p>Corresponding computing group.</p>
                     * 
                     */
                    void SetWarehouseName(const std::string& _warehouseName);

                    /**
                     * 判断参数 WarehouseName 是否已赋值
                     * @return WarehouseName 是否已赋值
                     * 
                     */
                    bool WarehouseNameHasBeenSet() const;

                    /**
                     * 获取<p>Scaling group status.</p>
                     * @return GroupStatus <p>Scaling group status.</p>
                     * 
                     */
                    int64_t GetGroupStatus() const;

                    /**
                     * 设置<p>Scaling group status.</p>
                     * @param _groupStatus <p>Scaling group status.</p>
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
                     * 获取<p>Parallel scaling. Valid values: 0 (disabled) and 1 (enabled).</p>
                     * @return Parallel <p>Parallel scaling. Valid values: 0 (disabled) and 1 (enabled).</p>
                     * 
                     */
                    int64_t GetParallel() const;

                    /**
                     * 设置<p>Parallel scaling. Valid values: 0 (disabled) and 1 (enabled).</p>
                     * @param _parallel <p>Parallel scaling. Valid values: 0 (disabled) and 1 (enabled).</p>
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
                     * 获取<p>Whether MNode is supported.</p>
                     * @return EnableMNode <p>Whether MNode is supported.</p>
                     * 
                     */
                    int64_t GetEnableMNode() const;

                    /**
                     * 设置<p>Whether MNode is supported.</p>
                     * @param _enableMNode <p>Whether MNode is supported.</p>
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
                     * 获取<p>More scaling group settings.</p>
                     * @return ExtraAdvanceAttrs <p>More scaling group settings.</p>
                     * 
                     */
                    AutoScaleGroupAdvanceAttrs GetExtraAdvanceAttrs() const;

                    /**
                     * 设置<p>More scaling group settings.</p>
                     * @param _extraAdvanceAttrs <p>More scaling group settings.</p>
                     * 
                     */
                    void SetExtraAdvanceAttrs(const AutoScaleGroupAdvanceAttrs& _extraAdvanceAttrs);

                    /**
                     * 判断参数 ExtraAdvanceAttrs 是否已赋值
                     * @return ExtraAdvanceAttrs 是否已赋值
                     * 
                     */
                    bool ExtraAdvanceAttrsHasBeenSet() const;

                    /**
                     * 获取<p>Custom hostname.</p>
                     * @return CustomNodeName <p>Custom hostname.</p>
                     * 
                     */
                    std::string GetCustomNodeName() const;

                    /**
                     * 设置<p>Custom hostname.</p>
                     * @param _customNodeName <p>Custom hostname.</p>
                     * 
                     */
                    void SetCustomNodeName(const std::string& _customNodeName);

                    /**
                     * 判断参数 CustomNodeName 是否已赋值
                     * @return CustomNodeName 是否已赋值
                     * 
                     */
                    bool CustomNodeNameHasBeenSet() const;

                private:

                    /**
                     * <p>Configuration ID.</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Minimum number of reserved instances for auto scaling.</p>
                     */
                    int64_t m_scaleLowerBound;
                    bool m_scaleLowerBoundHasBeenSet;

                    /**
                     * <p>Maximum number of instances for auto scaling.</p>
                     */
                    int64_t m_scaleUpperBound;
                    bool m_scaleUpperBoundHasBeenSet;

                    /**
                     * <p>Scale-out rule type. Valid values: 1 (scale-out rule by load metrics) and 2 (scale-out rule by time).</p>
                     */
                    int64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>Next scale-out time.</p>
                     */
                    uint64_t m_nextTimeCanScale;
                    bool m_nextTimeCanScaleHasBeenSet;

                    /**
                     * <p>Graceful scale-in switch.</p>
                     */
                    bool m_graceDownFlag;
                    bool m_graceDownFlagHasBeenSet;

                    /**
                     * <p>&quot;CVM&quot; indicates that all specifications use CVM-related types, and &quot;POD&quot; indicates that specifications use container-related types. The default value is &quot;CVM&quot;.</p>
                     */
                    std::string m_hardwareType;
                    bool m_hardwareTypeHasBeenSet;

                    /**
                     * <p>&quot;POSTPAY&quot; indicates that only pay-as-you-go billing is used. &quot;SPOT_FIRST&quot; indicates that spot instances are preferred, which is supported only when HardwareType is &quot;HOST&quot;. &quot;POD&quot; only supports pure pay-as-you-go billing.</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Minimum percentage of pay-as-you-go resources in the scenario where spot instances are preferred. It is an integer.</p>
                     */
                    int64_t m_postPayPercentMin;
                    bool m_postPayPercentMinHasBeenSet;

                    /**
                     * <p>When the preset resource type is HOST, you can select &quot;switch to POD when resources are insufficient&quot; or clear the selection. 0 indicates that it is not selected by default (0), and 1 indicates that it is selected.</p>
                     */
                    int64_t m_changeToPod;
                    bool m_changeToPodHasBeenSet;

                    /**
                     * <p>Scaling group name.</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::string m_yarnNodeLabel;
                    bool m_yarnNodeLabelHasBeenSet;

                    /**
                     * <p>Corresponding computing group.</p>
                     */
                    std::string m_warehouseName;
                    bool m_warehouseNameHasBeenSet;

                    /**
                     * <p>Scaling group status.</p>
                     */
                    int64_t m_groupStatus;
                    bool m_groupStatusHasBeenSet;

                    /**
                     * <p>Parallel scaling. Valid values: 0 (disabled) and 1 (enabled).</p>
                     */
                    int64_t m_parallel;
                    bool m_parallelHasBeenSet;

                    /**
                     * <p>Whether MNode is supported.</p>
                     */
                    int64_t m_enableMNode;
                    bool m_enableMNodeHasBeenSet;

                    /**
                     * <p>More scaling group settings.</p>
                     */
                    AutoScaleGroupAdvanceAttrs m_extraAdvanceAttrs;
                    bool m_extraAdvanceAttrsHasBeenSet;

                    /**
                     * <p>Custom hostname.</p>
                     */
                    std::string m_customNodeName;
                    bool m_customNodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERESOURCECONF_H_
