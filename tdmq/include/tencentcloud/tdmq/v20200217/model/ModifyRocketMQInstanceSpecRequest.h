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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCESPECREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCESPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ModifyRocketMQInstanceSpec request structure.
                */
                class ModifyRocketMQInstanceSpecRequest : public AbstractModel
                {
                public:
                    ModifyRocketMQInstanceSpecRequest();
                    ~ModifyRocketMQInstanceSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the exclusive instance
                     * @return InstanceId ID of the exclusive instance
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the exclusive instance
                     * @param _instanceId ID of the exclusive instance
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance specification.
Valid values: `rocket-vip-basic-1` (Basic),
`rocket-vip-basic-2` (Standard),
`rocket-vip-basic-3` (Advanced I),
`rocket-vip-basic-4` (Advanced II).
                     * @return Specification Instance specification.
Valid values: `rocket-vip-basic-1` (Basic),
`rocket-vip-basic-2` (Standard),
`rocket-vip-basic-3` (Advanced I),
`rocket-vip-basic-4` (Advanced II).
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置Instance specification.
Valid values: `rocket-vip-basic-1` (Basic),
`rocket-vip-basic-2` (Standard),
`rocket-vip-basic-3` (Advanced I),
`rocket-vip-basic-4` (Advanced II).
                     * @param _specification Instance specification.
Valid values: `rocket-vip-basic-1` (Basic),
`rocket-vip-basic-2` (Standard),
`rocket-vip-basic-3` (Advanced I),
`rocket-vip-basic-4` (Advanced II).
                     * 
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取Node count
                     * @return NodeCount Node count
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置Node count
                     * @param _nodeCount Node count
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Storage space in GB
                     * @return StorageSize Storage space in GB
                     * 
                     */
                    uint64_t GetStorageSize() const;

                    /**
                     * 设置Storage space in GB
                     * @param _storageSize Storage space in GB
                     * 
                     */
                    void SetStorageSize(const uint64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                private:

                    /**
                     * ID of the exclusive instance
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance specification.
Valid values: `rocket-vip-basic-1` (Basic),
`rocket-vip-basic-2` (Standard),
`rocket-vip-basic-3` (Advanced I),
`rocket-vip-basic-4` (Advanced II).
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * Node count
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Storage space in GB
                     */
                    uint64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCESPECREQUEST_H_
