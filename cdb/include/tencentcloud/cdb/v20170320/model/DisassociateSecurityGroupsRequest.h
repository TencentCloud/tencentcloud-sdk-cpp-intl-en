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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_

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
                * DisassociateSecurityGroups request structure.
                */
                class DisassociateSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DisassociateSecurityGroupsRequest();
                    ~DisassociateSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Security group ID. Obtain through the [DescribeDBSecurityGroups](https://www.tencentcloud.com/document/api/236/15854?from_cn_redirect=1) API.
                     * @return SecurityGroupId Security group ID. Obtain through the [DescribeDBSecurityGroups](https://www.tencentcloud.com/document/api/236/15854?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group ID. Obtain through the [DescribeDBSecurityGroups](https://www.tencentcloud.com/document/api/236/15854?from_cn_redirect=1) API.
                     * @param _securityGroupId Security group ID. Obtain through the [DescribeDBSecurityGroups](https://www.tencentcloud.com/document/api/236/15854?from_cn_redirect=1) API.
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取Instance ID list, an array consisting of one or more instance IDs, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @return InstanceIds Instance ID list, an array consisting of one or more instance IDs, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list, an array consisting of one or more instance IDs, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @param _instanceIds Instance ID list, an array consisting of one or more instance IDs, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取When importing a read-only instance ID, the default operation is performed on the corresponding security group of the read-only group. If necessary to operate the security group of the read-only instance ID, set this input parameter to True. Default False.
                     * @return ForReadonlyInstance When importing a read-only instance ID, the default operation is performed on the corresponding security group of the read-only group. If necessary to operate the security group of the read-only instance ID, set this input parameter to True. Default False.
                     * 
                     */
                    bool GetForReadonlyInstance() const;

                    /**
                     * 设置When importing a read-only instance ID, the default operation is performed on the corresponding security group of the read-only group. If necessary to operate the security group of the read-only instance ID, set this input parameter to True. Default False.
                     * @param _forReadonlyInstance When importing a read-only instance ID, the default operation is performed on the corresponding security group of the read-only group. If necessary to operate the security group of the read-only instance ID, set this input parameter to True. Default False.
                     * 
                     */
                    void SetForReadonlyInstance(const bool& _forReadonlyInstance);

                    /**
                     * 判断参数 ForReadonlyInstance 是否已赋值
                     * @return ForReadonlyInstance 是否已赋值
                     * 
                     */
                    bool ForReadonlyInstanceHasBeenSet() const;

                private:

                    /**
                     * Security group ID. Obtain through the [DescribeDBSecurityGroups](https://www.tencentcloud.com/document/api/236/15854?from_cn_redirect=1) API.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * Instance ID list, an array consisting of one or more instance IDs, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * When importing a read-only instance ID, the default operation is performed on the corresponding security group of the read-only group. If necessary to operate the security group of the read-only instance ID, set this input parameter to True. Default False.
                     */
                    bool m_forReadonlyInstance;
                    bool m_forReadonlyInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
