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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATESECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATESECURITYPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateSecurityPolicy request structure.
                */
                class CreateSecurityPolicyRequest : public AbstractModel
                {
                public:
                    CreateSecurityPolicyRequest();
                    ~CreateSecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Default policy: ACCEPT or DROP
                     * @return DefaultAction Default policy: ACCEPT or DROP
                     */
                    std::string GetDefaultAction() const;

                    /**
                     * 设置Default policy: ACCEPT or DROP
                     * @param DefaultAction Default policy: ACCEPT or DROP
                     */
                    void SetDefaultAction(const std::string& _defaultAction);

                    /**
                     * 判断参数 DefaultAction 是否已赋值
                     * @return DefaultAction 是否已赋值
                     */
                    bool DefaultActionHasBeenSet() const;

                    /**
                     * 获取Acceleration connection ID
                     * @return ProxyId Acceleration connection ID
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Acceleration connection ID
                     * @param ProxyId Acceleration connection ID
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取Connection group ID
                     * @return GroupId Connection group ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Connection group ID
                     * @param GroupId Connection group ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * Default policy: ACCEPT or DROP
                     */
                    std::string m_defaultAction;
                    bool m_defaultActionHasBeenSet;

                    /**
                     * Acceleration connection ID
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Connection group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATESECURITYPOLICYREQUEST_H_
