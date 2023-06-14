/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCENETWORKREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCENETWORKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceNetwork request structure.
                */
                class ModifyDBInstanceNetworkRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceNetworkRequest();
                    ~ModifyDBInstanceNetworkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取ID of the new VPC
                     * @return NewVpcId ID of the new VPC
                     * 
                     */
                    std::string GetNewVpcId() const;

                    /**
                     * 设置ID of the new VPC
                     * @param _newVpcId ID of the new VPC
                     * 
                     */
                    void SetNewVpcId(const std::string& _newVpcId);

                    /**
                     * 判断参数 NewVpcId 是否已赋值
                     * @return NewVpcId 是否已赋值
                     * 
                     */
                    bool NewVpcIdHasBeenSet() const;

                    /**
                     * 获取ID of the new subnet
                     * @return NewSubnetId ID of the new subnet
                     * 
                     */
                    std::string GetNewSubnetId() const;

                    /**
                     * 设置ID of the new subnet
                     * @param _newSubnetId ID of the new subnet
                     * 
                     */
                    void SetNewSubnetId(const std::string& _newSubnetId);

                    /**
                     * 判断参数 NewSubnetId 是否已赋值
                     * @return NewSubnetId 是否已赋值
                     * 
                     */
                    bool NewSubnetIdHasBeenSet() const;

                    /**
                     * 获取Retention period (in hours) of the original VIP. Value range: `0-168`. Default value: `0`, indicating the original VIP is released immediately.
                     * @return OldIpRetainTime Retention period (in hours) of the original VIP. Value range: `0-168`. Default value: `0`, indicating the original VIP is released immediately.
                     * 
                     */
                    int64_t GetOldIpRetainTime() const;

                    /**
                     * 设置Retention period (in hours) of the original VIP. Value range: `0-168`. Default value: `0`, indicating the original VIP is released immediately.
                     * @param _oldIpRetainTime Retention period (in hours) of the original VIP. Value range: `0-168`. Default value: `0`, indicating the original VIP is released immediately.
                     * 
                     */
                    void SetOldIpRetainTime(const int64_t& _oldIpRetainTime);

                    /**
                     * 判断参数 OldIpRetainTime 是否已赋值
                     * @return OldIpRetainTime 是否已赋值
                     * 
                     */
                    bool OldIpRetainTimeHasBeenSet() const;

                    /**
                     * 获取New VIP
                     * @return Vip New VIP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置New VIP
                     * @param _vip New VIP
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
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ID of the new VPC
                     */
                    std::string m_newVpcId;
                    bool m_newVpcIdHasBeenSet;

                    /**
                     * ID of the new subnet
                     */
                    std::string m_newSubnetId;
                    bool m_newSubnetIdHasBeenSet;

                    /**
                     * Retention period (in hours) of the original VIP. Value range: `0-168`. Default value: `0`, indicating the original VIP is released immediately.
                     */
                    int64_t m_oldIpRetainTime;
                    bool m_oldIpRetainTimeHasBeenSet;

                    /**
                     * New VIP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCENETWORKREQUEST_H_
