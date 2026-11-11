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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEVERSIONREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * UpgradeInstanceVersion request structure.
                */
                class UpgradeInstanceVersionRequest : public AbstractModel
                {
                public:
                    UpgradeInstanceVersionRequest();
                    ~UpgradeInstanceVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Target instance type, same as **TypeId** in [CreateInstances](https://www.tencentcloud.com/document/api/239/20026?from_cn_redirect=1), which is the target type to change the instance to.
- For Redis 4.0 or higher, instances of the same version support upgrading from standard architecture to cluster architecture. For example, Redis 4.0 standard architecture can be upgraded to Redis 4.0 cluster architecture.
-Cross-version architecture upgrade is not supported, for example, upgrading from Redis 4.0 standard architecture to Redis 5.0 cluster architecture.
-Architecture upgrade from Redis 2.8 is not supported.
-Downgrade from cluster architecture to standard architecture is not supported.

                     * @return TargetInstanceType Target instance type, same as **TypeId** in [CreateInstances](https://www.tencentcloud.com/document/api/239/20026?from_cn_redirect=1), which is the target type to change the instance to.
- For Redis 4.0 or higher, instances of the same version support upgrading from standard architecture to cluster architecture. For example, Redis 4.0 standard architecture can be upgraded to Redis 4.0 cluster architecture.
-Cross-version architecture upgrade is not supported, for example, upgrading from Redis 4.0 standard architecture to Redis 5.0 cluster architecture.
-Architecture upgrade from Redis 2.8 is not supported.
-Downgrade from cluster architecture to standard architecture is not supported.

                     * 
                     */
                    std::string GetTargetInstanceType() const;

                    /**
                     * 设置Target instance type, same as **TypeId** in [CreateInstances](https://www.tencentcloud.com/document/api/239/20026?from_cn_redirect=1), which is the target type to change the instance to.
- For Redis 4.0 or higher, instances of the same version support upgrading from standard architecture to cluster architecture. For example, Redis 4.0 standard architecture can be upgraded to Redis 4.0 cluster architecture.
-Cross-version architecture upgrade is not supported, for example, upgrading from Redis 4.0 standard architecture to Redis 5.0 cluster architecture.
-Architecture upgrade from Redis 2.8 is not supported.
-Downgrade from cluster architecture to standard architecture is not supported.

                     * @param _targetInstanceType Target instance type, same as **TypeId** in [CreateInstances](https://www.tencentcloud.com/document/api/239/20026?from_cn_redirect=1), which is the target type to change the instance to.
- For Redis 4.0 or higher, instances of the same version support upgrading from standard architecture to cluster architecture. For example, Redis 4.0 standard architecture can be upgraded to Redis 4.0 cluster architecture.
-Cross-version architecture upgrade is not supported, for example, upgrading from Redis 4.0 standard architecture to Redis 5.0 cluster architecture.
-Architecture upgrade from Redis 2.8 is not supported.
-Downgrade from cluster architecture to standard architecture is not supported.

                     * 
                     */
                    void SetTargetInstanceType(const std::string& _targetInstanceType);

                    /**
                     * 判断参数 TargetInstanceType 是否已赋值
                     * @return TargetInstanceType 是否已赋值
                     * 
                     */
                    bool TargetInstanceTypeHasBeenSet() const;

                    /**
                     * 获取Switch time. Valid values:
- `1`: Switch in the maintenance time.
- `2` (default value): Switch now.
                     * @return SwitchOption Switch time. Valid values:
- `1`: Switch in the maintenance time.
- `2` (default value): Switch now.
                     * 
                     */
                    int64_t GetSwitchOption() const;

                    /**
                     * 设置Switch time. Valid values:
- `1`: Switch in the maintenance time.
- `2` (default value): Switch now.
                     * @param _switchOption Switch time. Valid values:
- `1`: Switch in the maintenance time.
- `2` (default value): Switch now.
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
                     * 获取ID of the specified instance, such as `crs-xjhsdj****`. Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), and copy it in the instance list.
                     * @return InstanceId ID of the specified instance, such as `crs-xjhsdj****`. Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), and copy it in the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the specified instance, such as `crs-xjhsdj****`. Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), and copy it in the instance list.
                     * @param _instanceId ID of the specified instance, such as `crs-xjhsdj****`. Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), and copy it in the instance list.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Target instance type, same as **TypeId** in [CreateInstances](https://www.tencentcloud.com/document/api/239/20026?from_cn_redirect=1), which is the target type to change the instance to.
- For Redis 4.0 or higher, instances of the same version support upgrading from standard architecture to cluster architecture. For example, Redis 4.0 standard architecture can be upgraded to Redis 4.0 cluster architecture.
-Cross-version architecture upgrade is not supported, for example, upgrading from Redis 4.0 standard architecture to Redis 5.0 cluster architecture.
-Architecture upgrade from Redis 2.8 is not supported.
-Downgrade from cluster architecture to standard architecture is not supported.

                     */
                    std::string m_targetInstanceType;
                    bool m_targetInstanceTypeHasBeenSet;

                    /**
                     * Switch time. Valid values:
- `1`: Switch in the maintenance time.
- `2` (default value): Switch now.
                     */
                    int64_t m_switchOption;
                    bool m_switchOptionHasBeenSet;

                    /**
                     * ID of the specified instance, such as `crs-xjhsdj****`. Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), and copy it in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEVERSIONREQUEST_H_
