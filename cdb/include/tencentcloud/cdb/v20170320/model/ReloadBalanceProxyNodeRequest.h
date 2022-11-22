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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_RELOADBALANCEPROXYNODEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_RELOADBALANCEPROXYNODEREQUEST_H_

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
                * ReloadBalanceProxyNode request structure.
                */
                class ReloadBalanceProxyNodeRequest : public AbstractModel
                {
                public:
                    ReloadBalanceProxyNodeRequest();
                    ~ReloadBalanceProxyNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Proxy group ID
                     * @return ProxyGroupId Proxy group ID
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置Proxy group ID
                     * @param ProxyGroupId Proxy group ID
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取Address ID of the proxy group
                     * @return ProxyAddressId Address ID of the proxy group
                     */
                    std::string GetProxyAddressId() const;

                    /**
                     * 设置Address ID of the proxy group
                     * @param ProxyAddressId Address ID of the proxy group
                     */
                    void SetProxyAddressId(const std::string& _proxyAddressId);

                    /**
                     * 判断参数 ProxyAddressId 是否已赋值
                     * @return ProxyAddressId 是否已赋值
                     */
                    bool ProxyAddressIdHasBeenSet() const;

                private:

                    /**
                     * Proxy group ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * Address ID of the proxy group
                     */
                    std::string m_proxyAddressId;
                    bool m_proxyAddressIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_RELOADBALANCEPROXYNODEREQUEST_H_
