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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_NODEPOOLOPTION_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_NODEPOOLOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * The options for adding the existing node to the node pool
                */
                class NodePoolOption : public AbstractModel
                {
                public:
                    NodePoolOption();
                    ~NodePoolOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to add to the node pool.
                     * @return AddToNodePool Whether to add to the node pool.
                     * 
                     */
                    bool GetAddToNodePool() const;

                    /**
                     * 设置Whether to add to the node pool.
                     * @param _addToNodePool Whether to add to the node pool.
                     * 
                     */
                    void SetAddToNodePool(const bool& _addToNodePool);

                    /**
                     * 判断参数 AddToNodePool 是否已赋值
                     * @return AddToNodePool 是否已赋值
                     * 
                     */
                    bool AddToNodePoolHasBeenSet() const;

                    /**
                     * 获取Node pool ID
                     * @return NodePoolId Node pool ID
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置Node pool ID
                     * @param _nodePoolId Node pool ID
                     * 
                     */
                    void SetNodePoolId(const std::string& _nodePoolId);

                    /**
                     * 判断参数 NodePoolId 是否已赋值
                     * @return NodePoolId 是否已赋值
                     * 
                     */
                    bool NodePoolIdHasBeenSet() const;

                    /**
                     * 获取Whether to inherit the node pool configuration.
                     * @return InheritConfigurationFromNodePool Whether to inherit the node pool configuration.
                     * 
                     */
                    bool GetInheritConfigurationFromNodePool() const;

                    /**
                     * 设置Whether to inherit the node pool configuration.
                     * @param _inheritConfigurationFromNodePool Whether to inherit the node pool configuration.
                     * 
                     */
                    void SetInheritConfigurationFromNodePool(const bool& _inheritConfigurationFromNodePool);

                    /**
                     * 判断参数 InheritConfigurationFromNodePool 是否已赋值
                     * @return InheritConfigurationFromNodePool 是否已赋值
                     * 
                     */
                    bool InheritConfigurationFromNodePoolHasBeenSet() const;

                private:

                    /**
                     * Whether to add to the node pool.
                     */
                    bool m_addToNodePool;
                    bool m_addToNodePoolHasBeenSet;

                    /**
                     * Node pool ID
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * Whether to inherit the node pool configuration.
                     */
                    bool m_inheritConfigurationFromNodePool;
                    bool m_inheritConfigurationFromNodePoolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_NODEPOOLOPTION_H_
