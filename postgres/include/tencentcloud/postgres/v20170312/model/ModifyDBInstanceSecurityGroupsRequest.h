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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceSecurityGroups request structure.
                */
                class ModifyDBInstanceSecurityGroupsRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSecurityGroupsRequest();
                    ~ModifyDBInstanceSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the security group list to bind to the instance or read-only group.
Security group information can be queried by calling the sgId field in the return value of [DescribeSecurityGroups](https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1).
**Note:** This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     * @return SecurityGroupIdSet Specifies the security group list to bind to the instance or read-only group.
Security group information can be queried by calling the sgId field in the return value of [DescribeSecurityGroups](https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1).
**Note:** This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIdSet() const;

                    /**
                     * 设置Specifies the security group list to bind to the instance or read-only group.
Security group information can be queried by calling the sgId field in the return value of [DescribeSecurityGroups](https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1).
**Note:** This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     * @param _securityGroupIdSet Specifies the security group list to bind to the instance or read-only group.
Security group information can be queried by calling the sgId field in the return value of [DescribeSecurityGroups](https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1).
**Note:** This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     * 
                     */
                    void SetSecurityGroupIdSet(const std::vector<std::string>& _securityGroupIdSet);

                    /**
                     * 判断参数 SecurityGroupIdSet 是否已赋值
                     * @return SecurityGroupIdSet 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdSetHasBeenSet() const;

                    /**
                     * 获取Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1). specify either DBInstanceId or ReadOnlyGroupId. if both are provided, ReadOnlyGroupId is ignored.
                     * @return DBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1). specify either DBInstanceId or ReadOnlyGroupId. if both are provided, ReadOnlyGroupId is ignored.
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1). specify either DBInstanceId or ReadOnlyGroupId. if both are provided, ReadOnlyGroupId is ignored.
                     * @param _dBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1). specify either DBInstanceId or ReadOnlyGroupId. if both are provided, ReadOnlyGroupId is ignored.
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取ReadOnlyGroupId. specifies the read-only group ID, which can be obtained through the api [DescribeReadOnlyGroups](https://www.tencentcloud.com/document/product/409/39725). valid values: DBInstanceId and ReadOnlyGroupId (at least one is required). if you need to modify the associated security group of the read-only group, only ReadOnlyGroupId is required.
                     * @return ReadOnlyGroupId ReadOnlyGroupId. specifies the read-only group ID, which can be obtained through the api [DescribeReadOnlyGroups](https://www.tencentcloud.com/document/product/409/39725). valid values: DBInstanceId and ReadOnlyGroupId (at least one is required). if you need to modify the associated security group of the read-only group, only ReadOnlyGroupId is required.
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置ReadOnlyGroupId. specifies the read-only group ID, which can be obtained through the api [DescribeReadOnlyGroups](https://www.tencentcloud.com/document/product/409/39725). valid values: DBInstanceId and ReadOnlyGroupId (at least one is required). if you need to modify the associated security group of the read-only group, only ReadOnlyGroupId is required.
                     * @param _readOnlyGroupId ReadOnlyGroupId. specifies the read-only group ID, which can be obtained through the api [DescribeReadOnlyGroups](https://www.tencentcloud.com/document/product/409/39725). valid values: DBInstanceId and ReadOnlyGroupId (at least one is required). if you need to modify the associated security group of the read-only group, only ReadOnlyGroupId is required.
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                private:

                    /**
                     * Specifies the security group list to bind to the instance or read-only group.
Security group information can be queried by calling the sgId field in the return value of [DescribeSecurityGroups](https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1).
**Note:** This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     */
                    std::vector<std::string> m_securityGroupIdSet;
                    bool m_securityGroupIdSetHasBeenSet;

                    /**
                     * Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1). specify either DBInstanceId or ReadOnlyGroupId. if both are provided, ReadOnlyGroupId is ignored.
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * ReadOnlyGroupId. specifies the read-only group ID, which can be obtained through the api [DescribeReadOnlyGroups](https://www.tencentcloud.com/document/product/409/39725). valid values: DBInstanceId and ReadOnlyGroupId (at least one is required). if you need to modify the associated security group of the read-only group, only ReadOnlyGroupId is required.
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
