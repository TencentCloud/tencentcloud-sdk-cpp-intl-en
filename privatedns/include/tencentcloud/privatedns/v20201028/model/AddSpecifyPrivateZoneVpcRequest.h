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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ADDSPECIFYPRIVATEZONEVPCREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ADDSPECIFYPRIVATEZONEVPCREQUEST_H_

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
                * AddSpecifyPrivateZoneVpc request structure.
                */
                class AddSpecifyPrivateZoneVpcRequest : public AbstractModel
                {
                public:
                    AddSpecifyPrivateZoneVpcRequest();
                    ~AddSpecifyPrivateZoneVpcRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Private domain ID.
                     * @return ZoneId Private domain ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Private domain ID.
                     * @param _zoneId Private domain ID.
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
                     * 获取Information about the new VPC.
                     * @return VpcSet Information about the new VPC.
                     * 
                     */
                    std::vector<VpcInfo> GetVpcSet() const;

                    /**
                     * 设置Information about the new VPC.
                     * @param _vpcSet Information about the new VPC.
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
                     * 获取Information about the new VPC of the associated account.
                     * @return AccountVpcSet Information about the new VPC of the associated account.
                     * 
                     */
                    std::vector<AccountVpcInfo> GetAccountVpcSet() const;

                    /**
                     * 设置Information about the new VPC of the associated account.
                     * @param _accountVpcSet Information about the new VPC of the associated account.
                     * 
                     */
                    void SetAccountVpcSet(const std::vector<AccountVpcInfo>& _accountVpcSet);

                    /**
                     * 判断参数 AccountVpcSet 是否已赋值
                     * @return AccountVpcSet 是否已赋值
                     * 
                     */
                    bool AccountVpcSetHasBeenSet() const;

                    /**
                     * 获取Whether the operation is synchronous.
                     * @return Sync Whether the operation is synchronous.
                     * 
                     */
                    bool GetSync() const;

                    /**
                     * 设置Whether the operation is synchronous.
                     * @param _sync Whether the operation is synchronous.
                     * 
                     */
                    void SetSync(const bool& _sync);

                    /**
                     * 判断参数 Sync 是否已赋值
                     * @return Sync 是否已赋值
                     * 
                     */
                    bool SyncHasBeenSet() const;

                private:

                    /**
                     * Private domain ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Information about the new VPC.
                     */
                    std::vector<VpcInfo> m_vpcSet;
                    bool m_vpcSetHasBeenSet;

                    /**
                     * Information about the new VPC of the associated account.
                     */
                    std::vector<AccountVpcInfo> m_accountVpcSet;
                    bool m_accountVpcSetHasBeenSet;

                    /**
                     * Whether the operation is synchronous.
                     */
                    bool m_sync;
                    bool m_syncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ADDSPECIFYPRIVATEZONEVPCREQUEST_H_
