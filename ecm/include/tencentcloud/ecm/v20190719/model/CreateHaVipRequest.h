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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_CREATEHAVIPREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_CREATEHAVIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateHaVip request structure.
                */
                class CreateHaVipRequest : public AbstractModel
                {
                public:
                    CreateHaVipRequest();
                    ~CreateHaVipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC ID of the HAVIP.
                     * @return VpcId VPC ID of the HAVIP.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID of the HAVIP.
                     * @param _vpcId VPC ID of the HAVIP.
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
                     * 获取Subnet ID of the HAVIP.
                     * @return SubnetId Subnet ID of the HAVIP.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID of the HAVIP.
                     * @param _subnetId Subnet ID of the HAVIP.
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
                     * 获取HAVIP name.
                     * @return HaVipName HAVIP name.
                     * 
                     */
                    std::string GetHaVipName() const;

                    /**
                     * 设置HAVIP name.
                     * @param _haVipName HAVIP name.
                     * 
                     */
                    void SetHaVipName(const std::string& _haVipName);

                    /**
                     * 判断参数 HaVipName 是否已赋值
                     * @return HaVipName 是否已赋值
                     * 
                     */
                    bool HaVipNameHasBeenSet() const;

                    /**
                     * 获取The specified virtual IP address, which must be within the IP range of the VPC and not in use. It will be automatically assigned if not specified.
                     * @return Vip The specified virtual IP address, which must be within the IP range of the VPC and not in use. It will be automatically assigned if not specified.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置The specified virtual IP address, which must be within the IP range of the VPC and not in use. It will be automatically assigned if not specified.
                     * @param _vip The specified virtual IP address, which must be within the IP range of the VPC and not in use. It will be automatically assigned if not specified.
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
                     * VPC ID of the HAVIP.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID of the HAVIP.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * HAVIP name.
                     */
                    std::string m_haVipName;
                    bool m_haVipNameHasBeenSet;

                    /**
                     * The specified virtual IP address, which must be within the IP range of the VPC and not in use. It will be automatically assigned if not specified.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_CREATEHAVIPREQUEST_H_
