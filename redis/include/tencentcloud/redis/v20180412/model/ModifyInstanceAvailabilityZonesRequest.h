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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEAVAILABILITYZONESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEAVAILABILITYZONESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/RedisNodeInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyInstanceAvailabilityZones request structure.
                */
                class ModifyInstanceAvailabilityZonesRequest : public AbstractModel
                {
                public:
                    ModifyInstanceAvailabilityZonesRequest();
                    ~ModifyInstanceAvailabilityZonesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specify the instance ID.
 For example: crs-xjhsdj****, please log in to the [Redis Console] (https://console.cloud.tencent.com/redis#/) and copy the instance ID from the instance list.

                     * @return InstanceId Specify the instance ID.
 For example: crs-xjhsdj****, please log in to the [Redis Console] (https://console.cloud.tencent.com/redis#/) and copy the instance ID from the instance list.

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specify the instance ID.
 For example: crs-xjhsdj****, please log in to the [Redis Console] (https://console.cloud.tencent.com/redis#/) and copy the instance ID from the instance list.

                     * @param _instanceId Specify the instance ID.
 For example: crs-xjhsdj****, please log in to the [Redis Console] (https://console.cloud.tencent.com/redis#/) and copy the instance ID from the instance list.

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
                     * 获取Switch time.
- 1: Switch during the maintenance window.
- 2: Switch immediately.
                     * @return SwitchOption Switch time.
- 1: Switch during the maintenance window.
- 2: Switch immediately.
                     * 
                     */
                    int64_t GetSwitchOption() const;

                    /**
                     * 设置Switch time.
- 1: Switch during the maintenance window.
- 2: Switch immediately.
                     * @param _switchOption Switch time.
- 1: Switch during the maintenance window.
- 2: Switch immediately.
                     * 
                     */
                    void SetSwitchOption(const int64_t& _switchOption);

                    /**
                     * 判断参数 SwitchOption 是否已赋值
                     * @return SwitchOption 是否已赋值
                     * 
                     */
                    bool SwitchOptionHasBeenSet() const;

                    /**
                     * 获取Instance node information includes the node ID, node type, and node availability zone ID, and so on. For specific information, please see [RedisNodeInfo ](https://intl.cloud.tencent.com/document/product/239/20022?from_cn_redirect=1).
For instances in a single availability zone, there is no need to configure the NodeId. For instances in multiple availability zones, the NodeId is required to configure.
                     * @return NodeSet Instance node information includes the node ID, node type, and node availability zone ID, and so on. For specific information, please see [RedisNodeInfo ](https://intl.cloud.tencent.com/document/product/239/20022?from_cn_redirect=1).
For instances in a single availability zone, there is no need to configure the NodeId. For instances in multiple availability zones, the NodeId is required to configure.
                     * 
                     */
                    std::vector<RedisNodeInfo> GetNodeSet() const;

                    /**
                     * 设置Instance node information includes the node ID, node type, and node availability zone ID, and so on. For specific information, please see [RedisNodeInfo ](https://intl.cloud.tencent.com/document/product/239/20022?from_cn_redirect=1).
For instances in a single availability zone, there is no need to configure the NodeId. For instances in multiple availability zones, the NodeId is required to configure.
                     * @param _nodeSet Instance node information includes the node ID, node type, and node availability zone ID, and so on. For specific information, please see [RedisNodeInfo ](https://intl.cloud.tencent.com/document/product/239/20022?from_cn_redirect=1).
For instances in a single availability zone, there is no need to configure the NodeId. For instances in multiple availability zones, the NodeId is required to configure.
                     * 
                     */
                    void SetNodeSet(const std::vector<RedisNodeInfo>& _nodeSet);

                    /**
                     * 判断参数 NodeSet 是否已赋值
                     * @return NodeSet 是否已赋值
                     * 
                     */
                    bool NodeSetHasBeenSet() const;

                private:

                    /**
                     * Specify the instance ID.
 For example: crs-xjhsdj****, please log in to the [Redis Console] (https://console.cloud.tencent.com/redis#/) and copy the instance ID from the instance list.

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Switch time.
- 1: Switch during the maintenance window.
- 2: Switch immediately.
                     */
                    int64_t m_switchOption;
                    bool m_switchOptionHasBeenSet;

                    /**
                     * Instance node information includes the node ID, node type, and node availability zone ID, and so on. For specific information, please see [RedisNodeInfo ](https://intl.cloud.tencent.com/document/product/239/20022?from_cn_redirect=1).
For instances in a single availability zone, there is no need to configure the NodeId. For instances in multiple availability zones, the NodeId is required to configure.
                     */
                    std::vector<RedisNodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEAVAILABILITYZONESREQUEST_H_
