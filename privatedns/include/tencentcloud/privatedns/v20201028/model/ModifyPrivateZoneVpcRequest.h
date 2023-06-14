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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYPRIVATEZONEVPCREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYPRIVATEZONEVPCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/VpcInfo.h>
#include <tencentcloud/privatedns/v20201028/model/AccountVpcInfo.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * ModifyPrivateZoneVpc request structure.
                */
                class ModifyPrivateZoneVpcRequest : public AbstractModel
                {
                public:
                    ModifyPrivateZoneVpcRequest();
                    ~ModifyPrivateZoneVpcRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Private domain ID
                     * @return ZoneId Private domain ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Private domain ID
                     * @param _zoneId Private domain ID
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取List of all VPCs associated with private domain
                     * @return VpcSet List of all VPCs associated with private domain
                     * 
                     */
                    std::vector<VpcInfo> GetVpcSet() const;

                    /**
                     * 设置List of all VPCs associated with private domain
                     * @param _vpcSet List of all VPCs associated with private domain
                     * 
                     */
                    void SetVpcSet(const std::vector<VpcInfo>& _vpcSet);

                    /**
                     * 判断参数 VpcSet 是否已赋值
                     * @return VpcSet 是否已赋值
                     * 
                     */
                    bool VpcSetHasBeenSet() const;

                    /**
                     * 获取List of authorized accounts' VPCs to associate with the private domain
                     * @return AccountVpcSet List of authorized accounts' VPCs to associate with the private domain
                     * 
                     */
                    std::vector<AccountVpcInfo> GetAccountVpcSet() const;

                    /**
                     * 设置List of authorized accounts' VPCs to associate with the private domain
                     * @param _accountVpcSet List of authorized accounts' VPCs to associate with the private domain
                     * 
                     */
                    void SetAccountVpcSet(const std::vector<AccountVpcInfo>& _accountVpcSet);

                    /**
                     * 判断参数 AccountVpcSet 是否已赋值
                     * @return AccountVpcSet 是否已赋值
                     * 
                     */
                    bool AccountVpcSetHasBeenSet() const;

                private:

                    /**
                     * Private domain ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * List of all VPCs associated with private domain
                     */
                    std::vector<VpcInfo> m_vpcSet;
                    bool m_vpcSetHasBeenSet;

                    /**
                     * List of authorized accounts' VPCs to associate with the private domain
                     */
                    std::vector<AccountVpcInfo> m_accountVpcSet;
                    bool m_accountVpcSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYPRIVATEZONEVPCREQUEST_H_
