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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSESRENEWFLAGREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSESRENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyAddressesRenewFlag request structure.
                */
                class ModifyAddressesRenewFlagRequest : public AbstractModel
                {
                public:
                    ModifyAddressesRenewFlagRequest();
                    ~ModifyAddressesRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of unique EIP IDs, for example, eip-xxxx.
                     * @return AddressIds List of unique EIP IDs, for example, eip-xxxx.
                     * 
                     */
                    std::vector<std::string> GetAddressIds() const;

                    /**
                     * 设置List of unique EIP IDs, for example, eip-xxxx.
                     * @param _addressIds List of unique EIP IDs, for example, eip-xxxx.
                     * 
                     */
                    void SetAddressIds(const std::vector<std::string>& _addressIds);

                    /**
                     * 判断参数 AddressIds 是否已赋值
                     * @return AddressIds 是否已赋值
                     * 
                     */
                    bool AddressIdsHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag.
<ul style="margin:0">
<li>NOTIFY_AND_AUTO_RENEW: Notify upon expiration and automatically renew.</li>
<li>NOTIFY_AND_MANUAL_RENEW: Notify upon expiration but do not automatically renew.</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not notify upon expiration and do not automatically renew.</li>
</ul>
If this parameter is set to NOTIFY_AND_AUTO_RENEW and the account balance is sufficient, the instance will be automatically renewed on a monthly basis after expiration.
                     * @return RenewFlag Auto-renewal flag.
<ul style="margin:0">
<li>NOTIFY_AND_AUTO_RENEW: Notify upon expiration and automatically renew.</li>
<li>NOTIFY_AND_MANUAL_RENEW: Notify upon expiration but do not automatically renew.</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not notify upon expiration and do not automatically renew.</li>
</ul>
If this parameter is set to NOTIFY_AND_AUTO_RENEW and the account balance is sufficient, the instance will be automatically renewed on a monthly basis after expiration.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag.
<ul style="margin:0">
<li>NOTIFY_AND_AUTO_RENEW: Notify upon expiration and automatically renew.</li>
<li>NOTIFY_AND_MANUAL_RENEW: Notify upon expiration but do not automatically renew.</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not notify upon expiration and do not automatically renew.</li>
</ul>
If this parameter is set to NOTIFY_AND_AUTO_RENEW and the account balance is sufficient, the instance will be automatically renewed on a monthly basis after expiration.
                     * @param _renewFlag Auto-renewal flag.
<ul style="margin:0">
<li>NOTIFY_AND_AUTO_RENEW: Notify upon expiration and automatically renew.</li>
<li>NOTIFY_AND_MANUAL_RENEW: Notify upon expiration but do not automatically renew.</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not notify upon expiration and do not automatically renew.</li>
</ul>
If this parameter is set to NOTIFY_AND_AUTO_RENEW and the account balance is sufficient, the instance will be automatically renewed on a monthly basis after expiration.
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * List of unique EIP IDs, for example, eip-xxxx.
                     */
                    std::vector<std::string> m_addressIds;
                    bool m_addressIdsHasBeenSet;

                    /**
                     * Auto-renewal flag.
<ul style="margin:0">
<li>NOTIFY_AND_AUTO_RENEW: Notify upon expiration and automatically renew.</li>
<li>NOTIFY_AND_MANUAL_RENEW: Notify upon expiration but do not automatically renew.</li>
<li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not notify upon expiration and do not automatically renew.</li>
</ul>
If this parameter is set to NOTIFY_AND_AUTO_RENEW and the account balance is sufficient, the instance will be automatically renewed on a monthly basis after expiration.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSESRENEWFLAGREQUEST_H_
