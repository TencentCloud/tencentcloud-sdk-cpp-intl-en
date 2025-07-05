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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHPROXYVPCREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHPROXYVPCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * SwitchProxyVpc request structure.
                */
                class SwitchProxyVpcRequest : public AbstractModel
                {
                public:
                    SwitchProxyVpcRequest();
                    ~SwitchProxyVpcRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取VPC ID in string
                     * @return UniqVpcId VPC ID in string
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC ID in string
                     * @param _uniqVpcId VPC ID in string
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID in string
                     * @return UniqSubnetId Subnet ID in string
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Subnet ID in string
                     * @param _uniqSubnetId Subnet ID in string
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Valid hours of old IP
                     * @return OldIpReserveHours Valid hours of old IP
                     * 
                     */
                    int64_t GetOldIpReserveHours() const;

                    /**
                     * 设置Valid hours of old IP
                     * @param _oldIpReserveHours Valid hours of old IP
                     * 
                     */
                    void SetOldIpReserveHours(const int64_t& _oldIpReserveHours);

                    /**
                     * 判断参数 OldIpReserveHours 是否已赋值
                     * @return OldIpReserveHours 是否已赋值
                     * 
                     */
                    bool OldIpReserveHoursHasBeenSet() const;

                    /**
                     * 获取Database proxy group ID (required), which can be obtained through the `DescribeProxies` API.
                     * @return ProxyGroupId Database proxy group ID (required), which can be obtained through the `DescribeProxies` API.
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置Database proxy group ID (required), which can be obtained through the `DescribeProxies` API.
                     * @param _proxyGroupId Database proxy group ID (required), which can be obtained through the `DescribeProxies` API.
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * VPC ID in string
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Subnet ID in string
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Valid hours of old IP
                     */
                    int64_t m_oldIpReserveHours;
                    bool m_oldIpReserveHoursHasBeenSet;

                    /**
                     * Database proxy group ID (required), which can be obtained through the `DescribeProxies` API.
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHPROXYVPCREQUEST_H_
