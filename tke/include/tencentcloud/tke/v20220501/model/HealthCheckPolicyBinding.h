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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKPOLICYBINDING_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKPOLICYBINDING_H_

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
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Binding relationship between health check policy and node pool
                */
                class HealthCheckPolicyBinding : public AbstractModel
                {
                public:
                    HealthCheckPolicyBinding();
                    ~HealthCheckPolicyBinding() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Health check policy name
                     * @return Name Health check policy name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Health check policy name
                     * @param _name Health check policy name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Rule creation time
                     * @return CreatedAt Rule creation time
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Rule creation time
                     * @param _createdAt Rule creation time
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Associated node pool array
                     * @return NodePools Associated node pool array
                     * 
                     */
                    std::vector<std::string> GetNodePools() const;

                    /**
                     * 设置Associated node pool array
                     * @param _nodePools Associated node pool array
                     * 
                     */
                    void SetNodePools(const std::vector<std::string>& _nodePools);

                    /**
                     * 判断参数 NodePools 是否已赋值
                     * @return NodePools 是否已赋值
                     * 
                     */
                    bool NodePoolsHasBeenSet() const;

                private:

                    /**
                     * Health check policy name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Rule creation time
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Associated node pool array
                     */
                    std::vector<std::string> m_nodePools;
                    bool m_nodePoolsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKPOLICYBINDING_H_
