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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATECDBPROXYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATECDBPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ProxyNodeCustom.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateCdbProxy request structure.
                */
                class CreateCdbProxyRequest : public AbstractModel
                {
                public:
                    CreateCdbProxyRequest();
                    ~CreateCdbProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @return InstanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @param _instanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
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
                     * 获取VPC ID. Obtain through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @return UniqVpcId VPC ID. Obtain through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC ID. Obtain through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @param _uniqVpcId VPC ID. Obtain through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
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
                     * 获取Private subnet ID. Obtain through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @return UniqSubnetId Private subnet ID. Obtain through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Private subnet ID. Obtain through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @param _uniqSubnetId Private subnet ID. Obtain through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
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
                     * 获取Node specification configuration.
Parameter description in the example.
NodeCount: Number of nodes.
Region: Node region.
Zone: Node availability zone.
Cpu: Number of cores per proxy node (unit: core).
Mem: Memory size of each proxy node (unit: MB).
Remarks:
1. Database proxy supported node specifications are: 2C4000MB, 4C8000MB, 8C16000MB.
2. The above parameters (such as number of nodes, availability zone) are required. When calling the API, if incomplete, creation may fail.
                     * @return ProxyNodeCustom Node specification configuration.
Parameter description in the example.
NodeCount: Number of nodes.
Region: Node region.
Zone: Node availability zone.
Cpu: Number of cores per proxy node (unit: core).
Mem: Memory size of each proxy node (unit: MB).
Remarks:
1. Database proxy supported node specifications are: 2C4000MB, 4C8000MB, 8C16000MB.
2. The above parameters (such as number of nodes, availability zone) are required. When calling the API, if incomplete, creation may fail.
                     * 
                     */
                    std::vector<ProxyNodeCustom> GetProxyNodeCustom() const;

                    /**
                     * 设置Node specification configuration.
Parameter description in the example.
NodeCount: Number of nodes.
Region: Node region.
Zone: Node availability zone.
Cpu: Number of cores per proxy node (unit: core).
Mem: Memory size of each proxy node (unit: MB).
Remarks:
1. Database proxy supported node specifications are: 2C4000MB, 4C8000MB, 8C16000MB.
2. The above parameters (such as number of nodes, availability zone) are required. When calling the API, if incomplete, creation may fail.
                     * @param _proxyNodeCustom Node specification configuration.
Parameter description in the example.
NodeCount: Number of nodes.
Region: Node region.
Zone: Node availability zone.
Cpu: Number of cores per proxy node (unit: core).
Mem: Memory size of each proxy node (unit: MB).
Remarks:
1. Database proxy supported node specifications are: 2C4000MB, 4C8000MB, 8C16000MB.
2. The above parameters (such as number of nodes, availability zone) are required. When calling the API, if incomplete, creation may fail.
                     * 
                     */
                    void SetProxyNodeCustom(const std::vector<ProxyNodeCustom>& _proxyNodeCustom);

                    /**
                     * 判断参数 ProxyNodeCustom 是否已赋值
                     * @return ProxyNodeCustom 是否已赋值
                     * 
                     */
                    bool ProxyNodeCustomHasBeenSet() const;

                    /**
                     * 获取Security group
                     * @return SecurityGroup Security group
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置Security group
                     * @param _securityGroup Security group
                     * 
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Desc Description
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Description
                     * @param _desc Description
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Connection pool threshold
Note: If you need to use the database proxy connection pool capability, the kernel minor version of the MySQL 8.0 primary instance must be equal to or greater than MySQL 8.0 20230630.
                     * @return ConnectionPoolLimit Connection pool threshold
Note: If you need to use the database proxy connection pool capability, the kernel minor version of the MySQL 8.0 primary instance must be equal to or greater than MySQL 8.0 20230630.
                     * 
                     */
                    uint64_t GetConnectionPoolLimit() const;

                    /**
                     * 设置Connection pool threshold
Note: If you need to use the database proxy connection pool capability, the kernel minor version of the MySQL 8.0 primary instance must be equal to or greater than MySQL 8.0 20230630.
                     * @param _connectionPoolLimit Connection pool threshold
Note: If you need to use the database proxy connection pool capability, the kernel minor version of the MySQL 8.0 primary instance must be equal to or greater than MySQL 8.0 20230630.
                     * 
                     */
                    void SetConnectionPoolLimit(const uint64_t& _connectionPoolLimit);

                    /**
                     * 判断参数 ConnectionPoolLimit 是否已赋值
                     * @return ConnectionPoolLimit 是否已赋值
                     * 
                     */
                    bool ConnectionPoolLimitHasBeenSet() const;

                    /**
                     * 获取Specify the Linux kernel version of the purchased proxy. Leave it blank to ship the latest version by default.
                     * @return ProxyVersion Specify the Linux kernel version of the purchased proxy. Leave it blank to ship the latest version by default.
                     * 
                     */
                    std::string GetProxyVersion() const;

                    /**
                     * 设置Specify the Linux kernel version of the purchased proxy. Leave it blank to ship the latest version by default.
                     * @param _proxyVersion Specify the Linux kernel version of the purchased proxy. Leave it blank to ship the latest version by default.
                     * 
                     */
                    void SetProxyVersion(const std::string& _proxyVersion);

                    /**
                     * 判断参数 ProxyVersion 是否已赋值
                     * @return ProxyVersion 是否已赋值
                     * 
                     */
                    bool ProxyVersionHasBeenSet() const;

                private:

                    /**
                     * Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * VPC ID. Obtain through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Private subnet ID. Obtain through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Node specification configuration.
Parameter description in the example.
NodeCount: Number of nodes.
Region: Node region.
Zone: Node availability zone.
Cpu: Number of cores per proxy node (unit: core).
Mem: Memory size of each proxy node (unit: MB).
Remarks:
1. Database proxy supported node specifications are: 2C4000MB, 4C8000MB, 8C16000MB.
2. The above parameters (such as number of nodes, availability zone) are required. When calling the API, if incomplete, creation may fail.
                     */
                    std::vector<ProxyNodeCustom> m_proxyNodeCustom;
                    bool m_proxyNodeCustomHasBeenSet;

                    /**
                     * Security group
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Connection pool threshold
Note: If you need to use the database proxy connection pool capability, the kernel minor version of the MySQL 8.0 primary instance must be equal to or greater than MySQL 8.0 20230630.
                     */
                    uint64_t m_connectionPoolLimit;
                    bool m_connectionPoolLimitHasBeenSet;

                    /**
                     * Specify the Linux kernel version of the purchased proxy. Leave it blank to ship the latest version by default.
                     */
                    std::string m_proxyVersion;
                    bool m_proxyVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATECDBPROXYREQUEST_H_
