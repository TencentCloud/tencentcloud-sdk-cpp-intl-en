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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_

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
                * ModifyDBInstanceSecurityGroups request structure.
                */
                class ModifyDBInstanceSecurityGroupsRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSecurityGroupsRequest();
                    ~ModifyDBInstanceSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @param _instanceId Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
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
                     * 获取List of security group IDs to modify, an array of security group IDs. It can be obtained through the API [DescribeDBSecurityGroups](https://www.tencentcloud.com/document/product/236/15854?from_cn_redirect=1). The input security group ID array has no length limit.
**Note**: This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     * @return SecurityGroupIds List of security group IDs to modify, an array of security group IDs. It can be obtained through the API [DescribeDBSecurityGroups](https://www.tencentcloud.com/document/product/236/15854?from_cn_redirect=1). The input security group ID array has no length limit.
**Note**: This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置List of security group IDs to modify, an array of security group IDs. It can be obtained through the API [DescribeDBSecurityGroups](https://www.tencentcloud.com/document/product/236/15854?from_cn_redirect=1). The input security group ID array has no length limit.
**Note**: This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     * @param _securityGroupIds List of security group IDs to modify, an array of security group IDs. It can be obtained through the API [DescribeDBSecurityGroups](https://www.tencentcloud.com/document/product/236/15854?from_cn_redirect=1). The input security group ID array has no length limit.
**Note**: This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

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

                    /**
                     * 获取When updating the read-only group of a cloud disk edition instance, specify the instance ID in InstanceId and this parameter to indicate the operation is for the read-only group. If you perform the operation on the read-write node, this parameter is not required.
                     * @return OpResourceId When updating the read-only group of a cloud disk edition instance, specify the instance ID in InstanceId and this parameter to indicate the operation is for the read-only group. If you perform the operation on the read-write node, this parameter is not required.
                     * 
                     */
                    std::string GetOpResourceId() const;

                    /**
                     * 设置When updating the read-only group of a cloud disk edition instance, specify the instance ID in InstanceId and this parameter to indicate the operation is for the read-only group. If you perform the operation on the read-write node, this parameter is not required.
                     * @param _opResourceId When updating the read-only group of a cloud disk edition instance, specify the instance ID in InstanceId and this parameter to indicate the operation is for the read-only group. If you perform the operation on the read-write node, this parameter is not required.
                     * 
                     */
                    void SetOpResourceId(const std::string& _opResourceId);

                    /**
                     * 判断参数 OpResourceId 是否已赋值
                     * @return OpResourceId 是否已赋值
                     * 
                     */
                    bool OpResourceIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * List of security group IDs to modify, an array of security group IDs. It can be obtained through the API [DescribeDBSecurityGroups](https://www.tencentcloud.com/document/product/236/15854?from_cn_redirect=1). The input security group ID array has no length limit.
**Note**: This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * When importing a read-only instance ID, the default operation is performed on the corresponding security group of the read-only group. If necessary to operate the security group of the read-only instance ID, set this input parameter to True. Default False.
                     */
                    bool m_forReadonlyInstance;
                    bool m_forReadonlyInstanceHasBeenSet;

                    /**
                     * When updating the read-only group of a cloud disk edition instance, specify the instance ID in InstanceId and this parameter to indicate the operation is for the read-only group. If you perform the operation on the read-write node, this parameter is not required.
                     */
                    std::string m_opResourceId;
                    bool m_opResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
