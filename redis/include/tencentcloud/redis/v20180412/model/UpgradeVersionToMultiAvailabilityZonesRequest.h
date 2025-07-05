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
                     * 获取Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @return InstanceId Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @param _instanceId Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
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
                     * 获取Whether to support “Reading Local Nodes Only” feature after upgrading to multi-AZ deployment.
ul><li>`true`: The “Read Local Nodes Only” feature is supported. During the upgrade, you need to upgrade the proxy version and Redis kernel minor version simultaneously, which will involve data migration and may take hours to complete. </li><li>`false`: The “Read Local Nodes Only” feature is not supported. Upgrading to multi-AZ deployment will involve metadata migration only without affecting the service, which generally take less than three minutes to complete.</li></ul>
                     * @return UpgradeProxyAndRedisServer Whether to support “Reading Local Nodes Only” feature after upgrading to multi-AZ deployment.
ul><li>`true`: The “Read Local Nodes Only” feature is supported. During the upgrade, you need to upgrade the proxy version and Redis kernel minor version simultaneously, which will involve data migration and may take hours to complete. </li><li>`false`: The “Read Local Nodes Only” feature is not supported. Upgrading to multi-AZ deployment will involve metadata migration only without affecting the service, which generally take less than three minutes to complete.</li></ul>
                     * 
                     */
                    bool GetUpgradeProxyAndRedisServer() const;

                    /**
                     * 设置Whether to support “Reading Local Nodes Only” feature after upgrading to multi-AZ deployment.
ul><li>`true`: The “Read Local Nodes Only” feature is supported. During the upgrade, you need to upgrade the proxy version and Redis kernel minor version simultaneously, which will involve data migration and may take hours to complete. </li><li>`false`: The “Read Local Nodes Only” feature is not supported. Upgrading to multi-AZ deployment will involve metadata migration only without affecting the service, which generally take less than three minutes to complete.</li></ul>
                     * @param _upgradeProxyAndRedisServer Whether to support “Reading Local Nodes Only” feature after upgrading to multi-AZ deployment.
ul><li>`true`: The “Read Local Nodes Only” feature is supported. During the upgrade, you need to upgrade the proxy version and Redis kernel minor version simultaneously, which will involve data migration and may take hours to complete. </li><li>`false`: The “Read Local Nodes Only” feature is not supported. Upgrading to multi-AZ deployment will involve metadata migration only without affecting the service, which generally take less than three minutes to complete.</li></ul>
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
                     * Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether to support “Reading Local Nodes Only” feature after upgrading to multi-AZ deployment.
ul><li>`true`: The “Read Local Nodes Only” feature is supported. During the upgrade, you need to upgrade the proxy version and Redis kernel minor version simultaneously, which will involve data migration and may take hours to complete. </li><li>`false`: The “Read Local Nodes Only” feature is not supported. Upgrading to multi-AZ deployment will involve metadata migration only without affecting the service, which generally take less than three minutes to complete.</li></ul>
                     */
                    bool m_upgradeProxyAndRedisServer;
                    bool m_upgradeProxyAndRedisServerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEVERSIONTOMULTIAVAILABILITYZONESREQUEST_H_
