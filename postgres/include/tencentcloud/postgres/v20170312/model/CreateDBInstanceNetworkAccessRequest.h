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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBINSTANCENETWORKACCESSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBINSTANCENETWORKACCESSREQUEST_H_

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
                * CreateDBInstanceNetworkAccess request structure.
                */
                class CreateDBInstanceNetworkAccessRequest : public AbstractModel
                {
                public:
                    CreateDBInstanceNetworkAccessRequest();
                    ~CreateDBInstanceNetworkAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the instance ID, such as postgres-6bwgamo3. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773).
                     * @return DBInstanceId Specifies the instance ID, such as postgres-6bwgamo3. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Specifies the instance ID, such as postgres-6bwgamo3. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773).
                     * @param _dBInstanceId Specifies the instance ID, such as postgres-6bwgamo3. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773).
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
                     * 获取Unified VPC ID.
                     * @return VpcId Unified VPC ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unified VPC ID.
                     * @param _vpcId Unified VPC ID.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID.
                     * @return SubnetId Subnet ID.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID.
                     * @param _subnetId Subnet ID.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Whether to manually assign the VIP. Valid values: `true` (manually assign), `false` (automatically assign).
                     * @return IsAssignVip Whether to manually assign the VIP. Valid values: `true` (manually assign), `false` (automatically assign).
                     * 
                     */
                    bool GetIsAssignVip() const;

                    /**
                     * 设置Whether to manually assign the VIP. Valid values: `true` (manually assign), `false` (automatically assign).
                     * @param _isAssignVip Whether to manually assign the VIP. Valid values: `true` (manually assign), `false` (automatically assign).
                     * 
                     */
                    void SetIsAssignVip(const bool& _isAssignVip);

                    /**
                     * 判断参数 IsAssignVip 是否已赋值
                     * @return IsAssignVip 是否已赋值
                     * 
                     */
                    bool IsAssignVipHasBeenSet() const;

                    /**
                     * 获取Target VIP address. when this parameter is not specified and IsAssignVip is true, the system automatically assigns a VIP by default.
                     * @return Vip Target VIP address. when this parameter is not specified and IsAssignVip is true, the system automatically assigns a VIP by default.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Target VIP address. when this parameter is not specified and IsAssignVip is true, the system automatically assigns a VIP by default.
                     * @param _vip Target VIP address. when this parameter is not specified and IsAssignVip is true, the system automatically assigns a VIP by default.
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
                     * Specifies the instance ID, such as postgres-6bwgamo3. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Unified VPC ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Whether to manually assign the VIP. Valid values: `true` (manually assign), `false` (automatically assign).
                     */
                    bool m_isAssignVip;
                    bool m_isAssignVipHasBeenSet;

                    /**
                     * Target VIP address. when this parameter is not specified and IsAssignVip is true, the system automatically assigns a VIP by default.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBINSTANCENETWORKACCESSREQUEST_H_
