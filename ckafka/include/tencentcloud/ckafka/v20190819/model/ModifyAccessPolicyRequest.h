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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYACCESSPOLICYREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYACCESSPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/IpWhitelistDTO.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ModifyAccessPolicy request structure.
                */
                class ModifyAccessPolicyRequest : public AbstractModel
                {
                public:
                    ModifyAccessPolicyRequest();
                    ~ModifyAccessPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
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
                     * 获取<p>Route ID</p>
                     * @return RouteId <p>Route ID</p>
                     * 
                     */
                    int64_t GetRouteId() const;

                    /**
                     * 设置<p>Route ID</p>
                     * @param _routeId <p>Route ID</p>
                     * 
                     */
                    void SetRouteId(const int64_t& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取<p>Public Network IP Whitelist Configuration</p><p>Default if not passed: delete all</p>
                     * @return IpWhitelist <p>Public Network IP Whitelist Configuration</p><p>Default if not passed: delete all</p>
                     * 
                     */
                    std::vector<IpWhitelistDTO> GetIpWhitelist() const;

                    /**
                     * 设置<p>Public Network IP Whitelist Configuration</p><p>Default if not passed: delete all</p>
                     * @param _ipWhitelist <p>Public Network IP Whitelist Configuration</p><p>Default if not passed: delete all</p>
                     * 
                     */
                    void SetIpWhitelist(const std::vector<IpWhitelistDTO>& _ipWhitelist);

                    /**
                     * 判断参数 IpWhitelist 是否已赋值
                     * @return IpWhitelist 是否已赋值
                     * 
                     */
                    bool IpWhitelistHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Route ID</p>
                     */
                    int64_t m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * <p>Public Network IP Whitelist Configuration</p><p>Default if not passed: delete all</p>
                     */
                    std::vector<IpWhitelistDTO> m_ipWhitelist;
                    bool m_ipWhitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYACCESSPOLICYREQUEST_H_
