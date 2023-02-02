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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_VIRTUALNODEPOOL_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_VIRTUALNODEPOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Virtual node pool
                */
                class VirtualNodePool : public AbstractModel
                {
                public:
                    VirtualNodePool();
                    ~VirtualNodePool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取List of subnets
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetIds List of subnets
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置List of subnets
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SubnetIds List of subnets
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Node pool name
                     * @return Name Node pool name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Node pool name
                     * @param Name Node pool name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Node pool lifecycle status
                     * @return LifeState Node pool lifecycle status
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置Node pool lifecycle status
                     * @param LifeState Node pool lifecycle status
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取Virtual node labels
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Labels Virtual node labels
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Virtual node labels
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Labels Virtual node labels
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Virtual node taint
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Taints Virtual node taint
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置Virtual node taint
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Taints Virtual node taint
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTaints(const std::vector<Taint>& _taints);

                    /**
                     * 判断参数 Taints 是否已赋值
                     * @return Taints 是否已赋值
                     */
                    bool TaintsHasBeenSet() const;

                private:

                    /**
                     * Node pool ID
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * List of subnets
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Node pool name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Node pool lifecycle status
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * Virtual node labels
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Virtual node taint
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_VIRTUALNODEPOOL_H_
