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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_RUNINSTANCESFORNODE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_RUNINSTANCESFORNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * Node configuration parameters of different roles
                */
                class RunInstancesForNode : public AbstractModel
                {
                public:
                    RunInstancesForNode();
                    ~RunInstancesForNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node role. Values: MASTER_ETCD, WORKER. You only need to specify MASTER_ETCD when creating a self-deployed cluster (INDEPENDENT_CLUSTER).
                     * @return NodeRole Node role. Values: MASTER_ETCD, WORKER. You only need to specify MASTER_ETCD when creating a self-deployed cluster (INDEPENDENT_CLUSTER).
                     */
                    std::string GetNodeRole() const;

                    /**
                     * 设置Node role. Values: MASTER_ETCD, WORKER. You only need to specify MASTER_ETCD when creating a self-deployed cluster (INDEPENDENT_CLUSTER).
                     * @param NodeRole Node role. Values: MASTER_ETCD, WORKER. You only need to specify MASTER_ETCD when creating a self-deployed cluster (INDEPENDENT_CLUSTER).
                     */
                    void SetNodeRole(const std::string& _nodeRole);

                    /**
                     * 判断参数 NodeRole 是否已赋值
                     * @return NodeRole 是否已赋值
                     */
                    bool NodeRoleHasBeenSet() const;

                    /**
                     * 获取Pass-through parameter for CVM creation in the format of a JSON string. For more information, see the API for [creating a CVM instance](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1). Pass any parameter other than common parameters. ImageId will be replaced with the image corresponding to the TKE cluster operating system.
                     * @return RunInstancesPara Pass-through parameter for CVM creation in the format of a JSON string. For more information, see the API for [creating a CVM instance](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1). Pass any parameter other than common parameters. ImageId will be replaced with the image corresponding to the TKE cluster operating system.
                     */
                    std::vector<std::string> GetRunInstancesPara() const;

                    /**
                     * 设置Pass-through parameter for CVM creation in the format of a JSON string. For more information, see the API for [creating a CVM instance](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1). Pass any parameter other than common parameters. ImageId will be replaced with the image corresponding to the TKE cluster operating system.
                     * @param RunInstancesPara Pass-through parameter for CVM creation in the format of a JSON string. For more information, see the API for [creating a CVM instance](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1). Pass any parameter other than common parameters. ImageId will be replaced with the image corresponding to the TKE cluster operating system.
                     */
                    void SetRunInstancesPara(const std::vector<std::string>& _runInstancesPara);

                    /**
                     * 判断参数 RunInstancesPara 是否已赋值
                     * @return RunInstancesPara 是否已赋值
                     */
                    bool RunInstancesParaHasBeenSet() const;

                    /**
                     * 获取An advanced node setting. This parameter overrides the InstanceAdvancedSettings item set at the cluster level and corresponds to RunInstancesPara in a one-to-one sequential manner (currently valid for the ExtraArgs node custom parameter only).
                     * @return InstanceAdvancedSettingsOverrides An advanced node setting. This parameter overrides the InstanceAdvancedSettings item set at the cluster level and corresponds to RunInstancesPara in a one-to-one sequential manner (currently valid for the ExtraArgs node custom parameter only).
                     */
                    std::vector<InstanceAdvancedSettings> GetInstanceAdvancedSettingsOverrides() const;

                    /**
                     * 设置An advanced node setting. This parameter overrides the InstanceAdvancedSettings item set at the cluster level and corresponds to RunInstancesPara in a one-to-one sequential manner (currently valid for the ExtraArgs node custom parameter only).
                     * @param InstanceAdvancedSettingsOverrides An advanced node setting. This parameter overrides the InstanceAdvancedSettings item set at the cluster level and corresponds to RunInstancesPara in a one-to-one sequential manner (currently valid for the ExtraArgs node custom parameter only).
                     */
                    void SetInstanceAdvancedSettingsOverrides(const std::vector<InstanceAdvancedSettings>& _instanceAdvancedSettingsOverrides);

                    /**
                     * 判断参数 InstanceAdvancedSettingsOverrides 是否已赋值
                     * @return InstanceAdvancedSettingsOverrides 是否已赋值
                     */
                    bool InstanceAdvancedSettingsOverridesHasBeenSet() const;

                private:

                    /**
                     * Node role. Values: MASTER_ETCD, WORKER. You only need to specify MASTER_ETCD when creating a self-deployed cluster (INDEPENDENT_CLUSTER).
                     */
                    std::string m_nodeRole;
                    bool m_nodeRoleHasBeenSet;

                    /**
                     * Pass-through parameter for CVM creation in the format of a JSON string. For more information, see the API for [creating a CVM instance](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1). Pass any parameter other than common parameters. ImageId will be replaced with the image corresponding to the TKE cluster operating system.
                     */
                    std::vector<std::string> m_runInstancesPara;
                    bool m_runInstancesParaHasBeenSet;

                    /**
                     * An advanced node setting. This parameter overrides the InstanceAdvancedSettings item set at the cluster level and corresponds to RunInstancesPara in a one-to-one sequential manner (currently valid for the ExtraArgs node custom parameter only).
                     */
                    std::vector<InstanceAdvancedSettings> m_instanceAdvancedSettingsOverrides;
                    bool m_instanceAdvancedSettingsOverridesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_RUNINSTANCESFORNODE_H_
