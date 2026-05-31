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
                     * 获取<p>Dedicated Instance ID</p>
                     * @return InstanceId <p>Dedicated Instance ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Dedicated Instance ID</p>
                     * @param _instanceId <p>Dedicated Instance ID</p>
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
                     * 获取<p>Instance specification,<br>rocket-vip-basic-1 basic<br>rocket-vip-basic-2 standard type<br>rocket-vip-basic-3 higher-order type I<br>rocket-vip-basic-4 higher-order type II</p>
                     * @return Specification <p>Instance specification,<br>rocket-vip-basic-1 basic<br>rocket-vip-basic-2 standard type<br>rocket-vip-basic-3 higher-order type I<br>rocket-vip-basic-4 higher-order type II</p>
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置<p>Instance specification,<br>rocket-vip-basic-1 basic<br>rocket-vip-basic-2 standard type<br>rocket-vip-basic-3 higher-order type I<br>rocket-vip-basic-4 higher-order type II</p>
                     * @param _specification <p>Instance specification,<br>rocket-vip-basic-1 basic<br>rocket-vip-basic-2 standard type<br>rocket-vip-basic-3 higher-order type I<br>rocket-vip-basic-4 higher-order type II</p>
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
                     * 获取<p>Node count</p>
                     * @return NodeCount <p>Node count</p>
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置<p>Node count</p>
                     * @param _nodeCount <p>Node count</p>
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
                     * 获取<p>Storage space in GB</p>
                     * @return StorageSize <p>Storage space in GB</p>
                     * 
                     */
                    uint64_t GetStorageSize() const;

                    /**
                     * 设置<p>Storage space in GB</p>
                     * @param _storageSize <p>Storage space in GB</p>
                     * 
                     */
                    void SetStorageSize(const uint64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Deploy availability zone list</p>
                     * @return ZoneIds <p>Deploy availability zone list</p>
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置<p>Deploy availability zone list</p>
                     * @param _zoneIds <p>Deploy availability zone list</p>
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                private:

                    /**
                     * <p>Dedicated Instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance specification,<br>rocket-vip-basic-1 basic<br>rocket-vip-basic-2 standard type<br>rocket-vip-basic-3 higher-order type I<br>rocket-vip-basic-4 higher-order type II</p>
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * <p>Node count</p>
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>Storage space in GB</p>
                     */
                    uint64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * <p>Deploy availability zone list</p>
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCESPECREQUEST_H_
