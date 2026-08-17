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
                     * 获取<p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy it from the instance list.</p>
                     * @return InstanceId <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy it from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy it from the instance list.</p>
                     * @param _instanceId <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy it from the instance list.</p>
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
                     * 获取<p>Whether nearest access is supported after upgrading to multiple availability zones. - true: Supports nearest access. The upgrade process involves upgrading the Proxy version and Redis kernel minor version simultaneously, which may require data migration and take up to several hours. - false: No need to support nearest access. Upgrading to multiple availability zones only involves metadata management migration, with no impact on the service. The upgrade process is usually completed within 3 minutes. Defaults to false.</p>
                     * @return UpgradeProxyAndRedisServer <p>Whether nearest access is supported after upgrading to multiple availability zones. - true: Supports nearest access. The upgrade process involves upgrading the Proxy version and Redis kernel minor version simultaneously, which may require data migration and take up to several hours. - false: No need to support nearest access. Upgrading to multiple availability zones only involves metadata management migration, with no impact on the service. The upgrade process is usually completed within 3 minutes. Defaults to false.</p>
                     * 
                     */
                    bool GetUpgradeProxyAndRedisServer() const;

                    /**
                     * 设置<p>Whether nearest access is supported after upgrading to multiple availability zones. - true: Supports nearest access. The upgrade process involves upgrading the Proxy version and Redis kernel minor version simultaneously, which may require data migration and take up to several hours. - false: No need to support nearest access. Upgrading to multiple availability zones only involves metadata management migration, with no impact on the service. The upgrade process is usually completed within 3 minutes. Defaults to false.</p>
                     * @param _upgradeProxyAndRedisServer <p>Whether nearest access is supported after upgrading to multiple availability zones. - true: Supports nearest access. The upgrade process involves upgrading the Proxy version and Redis kernel minor version simultaneously, which may require data migration and take up to several hours. - false: No need to support nearest access. Upgrading to multiple availability zones only involves metadata management migration, with no impact on the service. The upgrade process is usually completed within 3 minutes. Defaults to false.</p>
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
                     * <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy it from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Whether nearest access is supported after upgrading to multiple availability zones. - true: Supports nearest access. The upgrade process involves upgrading the Proxy version and Redis kernel minor version simultaneously, which may require data migration and take up to several hours. - false: No need to support nearest access. Upgrading to multiple availability zones only involves metadata management migration, with no impact on the service. The upgrade process is usually completed within 3 minutes. Defaults to false.</p>
                     */
                    bool m_upgradeProxyAndRedisServer;
                    bool m_upgradeProxyAndRedisServerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEVERSIONTOMULTIAVAILABILITYZONESREQUEST_H_
