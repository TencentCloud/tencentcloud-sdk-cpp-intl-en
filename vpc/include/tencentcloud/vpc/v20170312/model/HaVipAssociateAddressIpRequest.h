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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_HAVIPASSOCIATEADDRESSIPREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_HAVIPASSOCIATEADDRESSIPREQUEST_H_

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
                * HaVipAssociateAddressIp request structure.
                */
                class HaVipAssociateAddressIpRequest : public AbstractModel
                {
                public:
                    HaVipAssociateAddressIpRequest();
                    ~HaVipAssociateAddressIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique `ID` of the `HAVIP`, such as `havip-9o233uri`. This must be a `HAVIP` that has not been bound to an `EIP`
                     * @return HaVipId The unique `ID` of the `HAVIP`, such as `havip-9o233uri`. This must be a `HAVIP` that has not been bound to an `EIP`
                     * 
                     */
                    std::string GetHaVipId() const;

                    /**
                     * 设置The unique `ID` of the `HAVIP`, such as `havip-9o233uri`. This must be a `HAVIP` that has not been bound to an `EIP`
                     * @param _haVipId The unique `ID` of the `HAVIP`, such as `havip-9o233uri`. This must be a `HAVIP` that has not been bound to an `EIP`
                     * 
                     */
                    void SetHaVipId(const std::string& _haVipId);

                    /**
                     * 判断参数 HaVipId 是否已赋值
                     * @return HaVipId 是否已赋值
                     * 
                     */
                    bool HaVipIdHasBeenSet() const;

                    /**
                     * 获取The Elastic `IP`. This must be an `EIP` that has not been bound to a `HAVIP`
                     * @return AddressIp The Elastic `IP`. This must be an `EIP` that has not been bound to a `HAVIP`
                     * 
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置The Elastic `IP`. This must be an `EIP` that has not been bound to a `HAVIP`
                     * @param _addressIp The Elastic `IP`. This must be an `EIP` that has not been bound to a `HAVIP`
                     * 
                     */
                    void SetAddressIp(const std::string& _addressIp);

                    /**
                     * 判断参数 AddressIp 是否已赋值
                     * @return AddressIp 是否已赋值
                     * 
                     */
                    bool AddressIpHasBeenSet() const;

                private:

                    /**
                     * The unique `ID` of the `HAVIP`, such as `havip-9o233uri`. This must be a `HAVIP` that has not been bound to an `EIP`
                     */
                    std::string m_haVipId;
                    bool m_haVipIdHasBeenSet;

                    /**
                     * The Elastic `IP`. This must be an `EIP` that has not been bound to a `HAVIP`
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_HAVIPASSOCIATEADDRESSIPREQUEST_H_
