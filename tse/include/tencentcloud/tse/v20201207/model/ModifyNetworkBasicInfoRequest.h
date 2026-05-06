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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNETWORKBASICINFOREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNETWORKBASICINFOREQUEST_H_

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
                * ModifyNetworkBasicInfo request structure.
                */
                class ModifyNetworkBasicInfoRequest : public AbstractModel
                {
                public:
                    ModifyNetworkBasicInfoRequest();
                    ~ModifyNetworkBasicInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud Native API gateway instance ID.
                     * @return GatewayId Cloud Native API gateway instance ID.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Cloud Native API gateway instance ID.
                     * @param _gatewayId Cloud Native API gateway instance ID.
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
                     * 获取Group ID
                     * @return GroupId Group ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Group ID
                     * @param _groupId Group ID
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
                     * 获取Network type:
-Enable public IP address
-Public IPv6 address
-Internal private network
                     * @return NetworkType Network type:
-Enable public IP address
-Public IPv6 address
-Internal private network
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置Network type:
-Enable public IP address
-Public IPv6 address
-Internal private network
                     * @param _networkType Network type:
-Enable public IP address
-Public IPv6 address
-Internal private network
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取IP address
                     * @return Vip IP address
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置IP address
                     * @param _vip IP address
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Public network outbound traffic bandwidth, [1,2048]Mbps
                     * @return InternetMaxBandwidthOut Public network outbound traffic bandwidth, [1,2048]Mbps
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Public network outbound traffic bandwidth, [1,2048]Mbps
                     * @param _internetMaxBandwidthOut Public network outbound traffic bandwidth, [1,2048]Mbps
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Description of load balancing
                     * @return Description Description of load balancing
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of load balancing
                     * @param _description Description of load balancing
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Load balancing specification types support:
-Leave empty for shared type.
-clb.c2.medium: standard specification
-clb.c3.small: High-performance type 1 specification
-clb.c3.medium: High-performance type 2 specification
-clb.c4.small: Super high-performance specification 1
-clb.c4.medium: Super high-performance specification 2
-clb.c4.large: Super high-performance specification 3
-clb.c4.xlarge: Super high-performance 4 specification.
                     * @return SlaType Load balancing specification types support:
-Leave empty for shared type.
-clb.c2.medium: standard specification
-clb.c3.small: High-performance type 1 specification
-clb.c3.medium: High-performance type 2 specification
-clb.c4.small: Super high-performance specification 1
-clb.c4.medium: Super high-performance specification 2
-clb.c4.large: Super high-performance specification 3
-clb.c4.xlarge: Super high-performance 4 specification.
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置Load balancing specification types support:
-Leave empty for shared type.
-clb.c2.medium: standard specification
-clb.c3.small: High-performance type 1 specification
-clb.c3.medium: High-performance type 2 specification
-clb.c4.small: Super high-performance specification 1
-clb.c4.medium: Super high-performance specification 2
-clb.c4.large: Super high-performance specification 3
-clb.c4.xlarge: Super high-performance 4 specification.
                     * @param _slaType Load balancing specification types support:
-Leave empty for shared type.
-clb.c2.medium: standard specification
-clb.c3.small: High-performance type 1 specification
-clb.c3.medium: High-performance type 2 specification
-clb.c4.small: Super high-performance specification 1
-clb.c4.medium: Super high-performance specification 2
-clb.c4.large: Super high-performance specification 3
-clb.c4.xlarge: Super high-performance 4 specification.
                     * 
                     */
                    void SetSlaType(const std::string& _slaType);

                    /**
                     * 判断参数 SlaType 是否已赋值
                     * @return SlaType 是否已赋值
                     * 
                     */
                    bool SlaTypeHasBeenSet() const;

                private:

                    /**
                     * Cloud Native API gateway instance ID.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Network type:
-Enable public IP address
-Public IPv6 address
-Internal private network
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * IP address
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Public network outbound traffic bandwidth, [1,2048]Mbps
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Description of load balancing
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Load balancing specification types support:
-Leave empty for shared type.
-clb.c2.medium: standard specification
-clb.c3.small: High-performance type 1 specification
-clb.c3.medium: High-performance type 2 specification
-clb.c4.small: Super high-performance specification 1
-clb.c4.medium: Super high-performance specification 2
-clb.c4.large: Super high-performance specification 3
-clb.c4.xlarge: Super high-performance 4 specification.
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNETWORKBASICINFOREQUEST_H_
