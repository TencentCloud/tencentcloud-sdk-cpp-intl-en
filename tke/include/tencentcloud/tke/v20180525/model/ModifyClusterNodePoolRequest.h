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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERNODEPOOLREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERNODEPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>
#include <tencentcloud/tke/v20180525/model/InstanceExtraArgs.h>
#include <tencentcloud/tke/v20180525/model/Tag.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyClusterNodePool request structure.
                */
                class ModifyClusterNodePoolRequest : public AbstractModel
                {
                public:
                    ModifyClusterNodePoolRequest();
                    ~ModifyClusterNodePoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Node pool ID
                     * @return NodePoolId Node pool ID
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置Node pool ID
                     * @param NodePoolId Node pool ID
                     */
                    void SetNodePoolId(const std::string& _nodePoolId);

                    /**
                     * 判断参数 NodePoolId 是否已赋值
                     * @return NodePoolId 是否已赋值
                     */
                    bool NodePoolIdHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return Name Name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param Name Name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Maximum number of nodes
                     * @return MaxNodesNum Maximum number of nodes
                     */
                    int64_t GetMaxNodesNum() const;

                    /**
                     * 设置Maximum number of nodes
                     * @param MaxNodesNum Maximum number of nodes
                     */
                    void SetMaxNodesNum(const int64_t& _maxNodesNum);

                    /**
                     * 判断参数 MaxNodesNum 是否已赋值
                     * @return MaxNodesNum 是否已赋值
                     */
                    bool MaxNodesNumHasBeenSet() const;

                    /**
                     * 获取Minimum number of nodes
                     * @return MinNodesNum Minimum number of nodes
                     */
                    int64_t GetMinNodesNum() const;

                    /**
                     * 设置Minimum number of nodes
                     * @param MinNodesNum Minimum number of nodes
                     */
                    void SetMinNodesNum(const int64_t& _minNodesNum);

                    /**
                     * 判断参数 MinNodesNum 是否已赋值
                     * @return MinNodesNum 是否已赋值
                     */
                    bool MinNodesNumHasBeenSet() const;

                    /**
                     * 获取Labels
                     * @return Labels Labels
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Labels
                     * @param Labels Labels
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Taints
                     * @return Taints Taints
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置Taints
                     * @param Taints Taints
                     */
                    void SetTaints(const std::vector<Taint>& _taints);

                    /**
                     * 判断参数 Taints 是否已赋值
                     * @return Taints 是否已赋值
                     */
                    bool TaintsHasBeenSet() const;

                    /**
                     * 获取Indicates whether auto scaling is enabled.
                     * @return EnableAutoscale Indicates whether auto scaling is enabled.
                     */
                    bool GetEnableAutoscale() const;

                    /**
                     * 设置Indicates whether auto scaling is enabled.
                     * @param EnableAutoscale Indicates whether auto scaling is enabled.
                     */
                    void SetEnableAutoscale(const bool& _enableAutoscale);

                    /**
                     * 判断参数 EnableAutoscale 是否已赋值
                     * @return EnableAutoscale 是否已赋值
                     */
                    bool EnableAutoscaleHasBeenSet() const;

                    /**
                     * 获取Operating system name
                     * @return OsName Operating system name
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置Operating system name
                     * @param OsName Operating system name
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取Image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
                     * @return OsCustomizeType Image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置Image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
                     * @param OsCustomizeType Image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
                     */
                    void SetOsCustomizeType(const std::string& _osCustomizeType);

                    /**
                     * 判断参数 OsCustomizeType 是否已赋值
                     * @return OsCustomizeType 是否已赋值
                     */
                    bool OsCustomizeTypeHasBeenSet() const;

                    /**
                     * 获取Node custom parameter
                     * @return ExtraArgs Node custom parameter
                     */
                    InstanceExtraArgs GetExtraArgs() const;

                    /**
                     * 设置Node custom parameter
                     * @param ExtraArgs Node custom parameter
                     */
                    void SetExtraArgs(const InstanceExtraArgs& _extraArgs);

                    /**
                     * 判断参数 ExtraArgs 是否已赋值
                     * @return ExtraArgs 是否已赋值
                     */
                    bool ExtraArgsHasBeenSet() const;

                    /**
                     * 获取Resource tag
                     * @return Tags Resource tag
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Resource tag
                     * @param Tags Resource tag
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Unschedulable 
                     */
                    int64_t GetUnschedulable() const;

                    /**
                     * 设置
                     * @param Unschedulable 
                     */
                    void SetUnschedulable(const int64_t& _unschedulable);

                    /**
                     * 判断参数 Unschedulable 是否已赋值
                     * @return Unschedulable 是否已赋值
                     */
                    bool UnschedulableHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Node pool ID
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Maximum number of nodes
                     */
                    int64_t m_maxNodesNum;
                    bool m_maxNodesNumHasBeenSet;

                    /**
                     * Minimum number of nodes
                     */
                    int64_t m_minNodesNum;
                    bool m_minNodesNumHasBeenSet;

                    /**
                     * Labels
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Taints
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * Indicates whether auto scaling is enabled.
                     */
                    bool m_enableAutoscale;
                    bool m_enableAutoscaleHasBeenSet;

                    /**
                     * Operating system name
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * Image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * Node custom parameter
                     */
                    InstanceExtraArgs m_extraArgs;
                    bool m_extraArgsHasBeenSet;

                    /**
                     * Resource tag
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_unschedulable;
                    bool m_unschedulableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERNODEPOOLREQUEST_H_
