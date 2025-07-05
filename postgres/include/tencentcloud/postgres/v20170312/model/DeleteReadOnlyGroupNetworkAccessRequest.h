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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEREADONLYGROUPNETWORKACCESSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEREADONLYGROUPNETWORKACCESSREQUEST_H_

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
                * DeleteReadOnlyGroupNetworkAccess request structure.
                */
                class DeleteReadOnlyGroupNetworkAccessRequest : public AbstractModel
                {
                public:
                    DeleteReadOnlyGroupNetworkAccessRequest();
                    ~DeleteReadOnlyGroupNetworkAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取RO group ID in the format of pgro-4t9c6g7k.
                     * @return ReadOnlyGroupId RO group ID in the format of pgro-4t9c6g7k.
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置RO group ID in the format of pgro-4t9c6g7k.
                     * @param _readOnlyGroupId RO group ID in the format of pgro-4t9c6g7k.
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取Unified VPC ID. If you want to delete the classic network, set the parameter to `0`.
                     * @return VpcId Unified VPC ID. If you want to delete the classic network, set the parameter to `0`.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unified VPC ID. If you want to delete the classic network, set the parameter to `0`.
                     * @param _vpcId Unified VPC ID. If you want to delete the classic network, set the parameter to `0`.
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
                     * 获取Subnet ID. If you want to delete the classic network, set the parameter to `0`.
                     * @return SubnetId Subnet ID. If you want to delete the classic network, set the parameter to `0`.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID. If you want to delete the classic network, set the parameter to `0`.
                     * @param _subnetId Subnet ID. If you want to delete the classic network, set the parameter to `0`.
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
                     * 获取Target VIP.
                     * @return Vip Target VIP.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Target VIP.
                     * @param _vip Target VIP.
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
                     * RO group ID in the format of pgro-4t9c6g7k.
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * Unified VPC ID. If you want to delete the classic network, set the parameter to `0`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID. If you want to delete the classic network, set the parameter to `0`.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Target VIP.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEREADONLYGROUPNETWORKACCESSREQUEST_H_
