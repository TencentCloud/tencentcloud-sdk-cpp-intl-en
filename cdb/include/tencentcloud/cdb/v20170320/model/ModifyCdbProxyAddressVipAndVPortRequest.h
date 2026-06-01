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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYADDRESSVIPANDVPORTREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYADDRESSVIPANDVPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyCdbProxyAddressVipAndVPort request structure.
                */
                class ModifyCdbProxyAddressVipAndVPortRequest : public AbstractModel
                {
                public:
                    ModifyCdbProxyAddressVipAndVPortRequest();
                    ~ModifyCdbProxyAddressVipAndVPortRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Proxy group ID. Obtain through the [DescribeCdbProxyInfo](https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1) API.
                     * @return ProxyGroupId Proxy group ID. Obtain through the [DescribeCdbProxyInfo](https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置Proxy group ID. Obtain through the [DescribeCdbProxyInfo](https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1) API.
                     * @param _proxyGroupId Proxy group ID. Obtain through the [DescribeCdbProxyInfo](https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1) API.
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取Proxy group address ID. Obtain through the [DescribeCdbProxyInfo](https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1) API.
                     * @return ProxyAddressId Proxy group address ID. Obtain through the [DescribeCdbProxyInfo](https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetProxyAddressId() const;

                    /**
                     * 设置Proxy group address ID. Obtain through the [DescribeCdbProxyInfo](https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1) API.
                     * @param _proxyAddressId Proxy group address ID. Obtain through the [DescribeCdbProxyInfo](https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1) API.
                     * 
                     */
                    void SetProxyAddressId(const std::string& _proxyAddressId);

                    /**
                     * 判断参数 ProxyAddressId 是否已赋值
                     * @return ProxyAddressId 是否已赋值
                     * 
                     */
                    bool ProxyAddressIdHasBeenSet() const;

                    /**
                     * 获取VPC ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @return UniqVpcId VPC ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @param _uniqVpcId VPC ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
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
                     * 获取Private subnet ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @return UniqSubnetId Private subnet ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Private subnet ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @param _uniqSubnetId Private subnet ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
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
                     * 获取IP. If not specified, the system will assign an available IP under subnet.
                     * @return Vip IP. If not specified, the system will assign an available IP under subnet.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置IP. If not specified, the system will assign an available IP under subnet.
                     * @param _vip IP. If not specified, the system will assign an available IP under subnet.
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
                     * 获取Port. Default value 3306, value ranges from 1024 to 65535.
                     * @return VPort Port. Default value 3306, value ranges from 1024 to 65535.
                     * 
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置Port. Default value 3306, value ranges from 1024 to 65535.
                     * @param _vPort Port. Default value 3306, value ranges from 1024 to 65535.
                     * 
                     */
                    void SetVPort(const uint64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取Old IP valid hours. Measurement unit: hr, default value: 24, value ranges from 0 to 168.
                     * @return ReleaseDuration Old IP valid hours. Measurement unit: hr, default value: 24, value ranges from 0 to 168.
                     * 
                     */
                    uint64_t GetReleaseDuration() const;

                    /**
                     * 设置Old IP valid hours. Measurement unit: hr, default value: 24, value ranges from 0 to 168.
                     * @param _releaseDuration Old IP valid hours. Measurement unit: hr, default value: 24, value ranges from 0 to 168.
                     * 
                     */
                    void SetReleaseDuration(const uint64_t& _releaseDuration);

                    /**
                     * 判断参数 ReleaseDuration 是否已赋值
                     * @return ReleaseDuration 是否已赋值
                     * 
                     */
                    bool ReleaseDurationHasBeenSet() const;

                private:

                    /**
                     * Proxy group ID. Obtain through the [DescribeCdbProxyInfo](https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1) API.
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * Proxy group address ID. Obtain through the [DescribeCdbProxyInfo](https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1) API.
                     */
                    std::string m_proxyAddressId;
                    bool m_proxyAddressIdHasBeenSet;

                    /**
                     * VPC ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Private subnet ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * IP. If not specified, the system will assign an available IP under subnet.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Port. Default value 3306, value ranges from 1024 to 65535.
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * Old IP valid hours. Measurement unit: hr, default value: 24, value ranges from 0 to 168.
                     */
                    uint64_t m_releaseDuration;
                    bool m_releaseDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYADDRESSVIPANDVPORTREQUEST_H_
