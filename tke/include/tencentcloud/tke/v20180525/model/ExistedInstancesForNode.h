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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EXISTEDINSTANCESFORNODE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EXISTEDINSTANCESFORNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ExistedInstancesPara.h>
#include <tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Configuration parameters of existing nodes in different roles
                */
                class ExistedInstancesForNode : public AbstractModel
                {
                public:
                    ExistedInstancesForNode();
                    ~ExistedInstancesForNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node role. Values: MASTER_ETCD, WORKER. You only need to specify MASTER_ETCD when creating a self-deployed cluster (INDEPENDENT_CLUSTER).
                     * @return NodeRole Node role. Values: MASTER_ETCD, WORKER. You only need to specify MASTER_ETCD when creating a self-deployed cluster (INDEPENDENT_CLUSTER).
                     * 
                     */
                    std::string GetNodeRole() const;

                    /**
                     * 设置Node role. Values: MASTER_ETCD, WORKER. You only need to specify MASTER_ETCD when creating a self-deployed cluster (INDEPENDENT_CLUSTER).
                     * @param _nodeRole Node role. Values: MASTER_ETCD, WORKER. You only need to specify MASTER_ETCD when creating a self-deployed cluster (INDEPENDENT_CLUSTER).
                     * 
                     */
                    void SetNodeRole(const std::string& _nodeRole);

                    /**
                     * 判断参数 NodeRole 是否已赋值
                     * @return NodeRole 是否已赋值
                     * 
                     */
                    bool NodeRoleHasBeenSet() const;

                    /**
                     * 获取Reinstallation parameter of existing instances
                     * @return ExistedInstancesPara Reinstallation parameter of existing instances
                     * 
                     */
                    ExistedInstancesPara GetExistedInstancesPara() const;

                    /**
                     * 设置Reinstallation parameter of existing instances
                     * @param _existedInstancesPara Reinstallation parameter of existing instances
                     * 
                     */
                    void SetExistedInstancesPara(const ExistedInstancesPara& _existedInstancesPara);

                    /**
                     * 判断参数 ExistedInstancesPara 是否已赋值
                     * @return ExistedInstancesPara 是否已赋值
                     * 
                     */
                    bool ExistedInstancesParaHasBeenSet() const;

                    /**
                     * 获取Advanced node setting, which overrides the InstanceAdvancedSettings item set at the cluster level (currently valid for the ExtraArgs node custom parameter only)
                     * @return InstanceAdvancedSettingsOverride Advanced node setting, which overrides the InstanceAdvancedSettings item set at the cluster level (currently valid for the ExtraArgs node custom parameter only)
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettingsOverride() const;

                    /**
                     * 设置Advanced node setting, which overrides the InstanceAdvancedSettings item set at the cluster level (currently valid for the ExtraArgs node custom parameter only)
                     * @param _instanceAdvancedSettingsOverride Advanced node setting, which overrides the InstanceAdvancedSettings item set at the cluster level (currently valid for the ExtraArgs node custom parameter only)
                     * 
                     */
                    void SetInstanceAdvancedSettingsOverride(const InstanceAdvancedSettings& _instanceAdvancedSettingsOverride);

                    /**
                     * 判断参数 InstanceAdvancedSettingsOverride 是否已赋值
                     * @return InstanceAdvancedSettingsOverride 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsOverrideHasBeenSet() const;

                    /**
                     * 获取When the custom PodCIDR mode is enabled for the cluster, you can specify the maximum number of pods per node.
                     * @return DesiredPodNumbers When the custom PodCIDR mode is enabled for the cluster, you can specify the maximum number of pods per node.
                     * 
                     */
                    std::vector<int64_t> GetDesiredPodNumbers() const;

                    /**
                     * 设置When the custom PodCIDR mode is enabled for the cluster, you can specify the maximum number of pods per node.
                     * @param _desiredPodNumbers When the custom PodCIDR mode is enabled for the cluster, you can specify the maximum number of pods per node.
                     * 
                     */
                    void SetDesiredPodNumbers(const std::vector<int64_t>& _desiredPodNumbers);

                    /**
                     * 判断参数 DesiredPodNumbers 是否已赋值
                     * @return DesiredPodNumbers 是否已赋值
                     * 
                     */
                    bool DesiredPodNumbersHasBeenSet() const;

                private:

                    /**
                     * Node role. Values: MASTER_ETCD, WORKER. You only need to specify MASTER_ETCD when creating a self-deployed cluster (INDEPENDENT_CLUSTER).
                     */
                    std::string m_nodeRole;
                    bool m_nodeRoleHasBeenSet;

                    /**
                     * Reinstallation parameter of existing instances
                     */
                    ExistedInstancesPara m_existedInstancesPara;
                    bool m_existedInstancesParaHasBeenSet;

                    /**
                     * Advanced node setting, which overrides the InstanceAdvancedSettings item set at the cluster level (currently valid for the ExtraArgs node custom parameter only)
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettingsOverride;
                    bool m_instanceAdvancedSettingsOverrideHasBeenSet;

                    /**
                     * When the custom PodCIDR mode is enabled for the cluster, you can specify the maximum number of pods per node.
                     */
                    std::vector<int64_t> m_desiredPodNumbers;
                    bool m_desiredPodNumbersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EXISTEDINSTANCESFORNODE_H_
