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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDREADABLEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDREADABLEREQUEST_H_

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
                * ModifyDReadable request structure.
                */
                class ModifyDReadableRequest : public AbstractModel
                {
                public:
                    ModifyDReadableRequest();
                    ~ModifyDReadableRequest() = default;
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
                     * 获取Operation type. Valid values: enable - enabling the read-only mode of the replica server; disable - disabling the read-only mode of the replica server
                     * @return Type Operation type. Valid values: enable - enabling the read-only mode of the replica server; disable - disabling the read-only mode of the replica server
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Operation type. Valid values: enable - enabling the read-only mode of the replica server; disable - disabling the read-only mode of the replica server
                     * @param _type Operation type. Valid values: enable - enabling the read-only mode of the replica server; disable - disabling the read-only mode of the replica server
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Replica server network ID, which will be consistent with the primary instance by default if left blank
                     * @return VpcId Replica server network ID, which will be consistent with the primary instance by default if left blank
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Replica server network ID, which will be consistent with the primary instance by default if left blank
                     * @param _vpcId Replica server network ID, which will be consistent with the primary instance by default if left blank
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
                     * 获取Replica server subnet ID, which will be consistent with the primary instance by default if left blank
                     * @return SubnetId Replica server subnet ID, which will be consistent with the primary instance by default if left blank
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Replica server subnet ID, which will be consistent with the primary instance by default if left blank
                     * @param _subnetId Replica server subnet ID, which will be consistent with the primary instance by default if left blank
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
                     * 获取Specified replica server read-only VIP, which will be assigned automatically if left blank
                     * @return Vip Specified replica server read-only VIP, which will be assigned automatically if left blank
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Specified replica server read-only VIP, which will be assigned automatically if left blank
                     * @param _vip Specified replica server read-only VIP, which will be assigned automatically if left blank
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
                     * Operation type. Valid values: enable - enabling the read-only mode of the replica server; disable - disabling the read-only mode of the replica server
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Replica server network ID, which will be consistent with the primary instance by default if left blank
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Replica server subnet ID, which will be consistent with the primary instance by default if left blank
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Specified replica server read-only VIP, which will be assigned automatically if left blank
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDREADABLEREQUEST_H_
