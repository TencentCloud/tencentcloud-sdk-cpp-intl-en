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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEVERSIONTOMULTIAVAILABILITYZONESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEVERSIONTOMULTIAVAILABILITYZONESREQUEST_H_

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
                * UpgradeVersionToMultiAvailabilityZones request structure.
                */
                class UpgradeVersionToMultiAvailabilityZonesRequest : public AbstractModel
                {
                public:
                    UpgradeVersionToMultiAvailabilityZonesRequest();
                    ~UpgradeVersionToMultiAvailabilityZonesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis/instance/list), and copy it from the instance list.
                     * @return InstanceId Instance ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis/instance/list), and copy it from the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis/instance/list), and copy it from the instance list.
                     * @param _instanceId Instance ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis/instance/list), and copy it from the instance list.
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
                     * 获取Specifies whether the nearby access feature is supported after an upgrade to multi-AZ.
- true: support the nearby access feature. The upgrade process requires simultaneous upgrades of the proxy version and Redis kernel minor version, which involves data migration and may take several hours.
- false: no need to support the nearby access feature. Upgrade to multi-AZ only involves metadata migration management, with no impact on the service. The upgrade process is usually completed within 3 minutes, and the default value is false.
                     * @return UpgradeProxyAndRedisServer Specifies whether the nearby access feature is supported after an upgrade to multi-AZ.
- true: support the nearby access feature. The upgrade process requires simultaneous upgrades of the proxy version and Redis kernel minor version, which involves data migration and may take several hours.
- false: no need to support the nearby access feature. Upgrade to multi-AZ only involves metadata migration management, with no impact on the service. The upgrade process is usually completed within 3 minutes, and the default value is false.
                     * 
                     */
                    bool GetUpgradeProxyAndRedisServer() const;

                    /**
                     * 设置Specifies whether the nearby access feature is supported after an upgrade to multi-AZ.
- true: support the nearby access feature. The upgrade process requires simultaneous upgrades of the proxy version and Redis kernel minor version, which involves data migration and may take several hours.
- false: no need to support the nearby access feature. Upgrade to multi-AZ only involves metadata migration management, with no impact on the service. The upgrade process is usually completed within 3 minutes, and the default value is false.
                     * @param _upgradeProxyAndRedisServer Specifies whether the nearby access feature is supported after an upgrade to multi-AZ.
- true: support the nearby access feature. The upgrade process requires simultaneous upgrades of the proxy version and Redis kernel minor version, which involves data migration and may take several hours.
- false: no need to support the nearby access feature. Upgrade to multi-AZ only involves metadata migration management, with no impact on the service. The upgrade process is usually completed within 3 minutes, and the default value is false.
                     * 
                     */
                    void SetUpgradeProxyAndRedisServer(const bool& _upgradeProxyAndRedisServer);

                    /**
                     * 判断参数 UpgradeProxyAndRedisServer 是否已赋值
                     * @return UpgradeProxyAndRedisServer 是否已赋值
                     * 
                     */
                    bool UpgradeProxyAndRedisServerHasBeenSet() const;

                private:

                    /**
                     * Instance ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis/instance/list), and copy it from the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies whether the nearby access feature is supported after an upgrade to multi-AZ.
- true: support the nearby access feature. The upgrade process requires simultaneous upgrades of the proxy version and Redis kernel minor version, which involves data migration and may take several hours.
- false: no need to support the nearby access feature. Upgrade to multi-AZ only involves metadata migration management, with no impact on the service. The upgrade process is usually completed within 3 minutes, and the default value is false.
                     */
                    bool m_upgradeProxyAndRedisServer;
                    bool m_upgradeProxyAndRedisServerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEVERSIONTOMULTIAVAILABILITYZONESREQUEST_H_
