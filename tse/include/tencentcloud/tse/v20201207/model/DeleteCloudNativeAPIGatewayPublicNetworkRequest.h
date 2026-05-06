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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYPUBLICNETWORKREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYPUBLICNETWORKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DeleteCloudNativeAPIGatewayPublicNetwork request structure.
                */
                class DeleteCloudNativeAPIGatewayPublicNetworkRequest : public AbstractModel
                {
                public:
                    DeleteCloudNativeAPIGatewayPublicNetworkRequest();
                    ~DeleteCloudNativeAPIGatewayPublicNetworkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud native API gateway instance ID.
                     * @return GatewayId Cloud native API gateway instance ID.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Cloud native API gateway instance ID.
                     * @param _gatewayId Cloud native API gateway instance ID.
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取group id, required for kong event type
                     * @return GroupId group id, required for kong event type
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置group id, required for kong event type
                     * @param _groupId group id, required for kong event type
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取public network type
-IPV4 (default value)
- IPV6
                     * @return InternetAddressVersion public network type
-IPV4 (default value)
- IPV6
                     * 
                     */
                    std::string GetInternetAddressVersion() const;

                    /**
                     * 设置public network type
-IPV4 (default value)
- IPV6
                     * @param _internetAddressVersion public network type
-IPV4 (default value)
- IPV6
                     * 
                     */
                    void SetInternetAddressVersion(const std::string& _internetAddressVersion);

                    /**
                     * 判断参数 InternetAddressVersion 是否已赋值
                     * @return InternetAddressVersion 是否已赋值
                     * 
                     */
                    bool InternetAddressVersionHasBeenSet() const;

                    /**
                     * 获取Public IP address. Required when public IP addresses exist across multiple public networks.
                     * @return Vip Public IP address. Required when public IP addresses exist across multiple public networks.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Public IP address. Required when public IP addresses exist across multiple public networks.
                     * @param _vip Public IP address. Required when public IP addresses exist across multiple public networks.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                private:

                    /**
                     * Cloud native API gateway instance ID.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * group id, required for kong event type
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * public network type
-IPV4 (default value)
- IPV6
                     */
                    std::string m_internetAddressVersion;
                    bool m_internetAddressVersionHasBeenSet;

                    /**
                     * Public IP address. Required when public IP addresses exist across multiple public networks.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYPUBLICNETWORKREQUEST_H_
