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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEUNBLOCKIPRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEUNBLOCKIPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateUnblockIp response structure.
                */
                class CreateUnblockIpResponse : public AbstractModel
                {
                public:
                    CreateUnblockIpResponse();
                    ~CreateUnblockIpResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取IP
                     * @return Ip IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Type of the unblocking action (`user`: self-service unblocking, `auto`: automatic unblocking, `update`: unblocking by service upgrading, `bind`: unblocking by binding Anti-DDoS Pro instance)
                     * @return ActionType Type of the unblocking action (`user`: self-service unblocking, `auto`: automatic unblocking, `update`: unblocking by service upgrading, `bind`: unblocking by binding Anti-DDoS Pro instance)
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取Unblocked time (estimated)
                     * @return UnblockTime Unblocked time (estimated)
                     * 
                     */
                    std::string GetUnblockTime() const;

                    /**
                     * 判断参数 UnblockTime 是否已赋值
                     * @return UnblockTime 是否已赋值
                     * 
                     */
                    bool UnblockTimeHasBeenSet() const;

                private:

                    /**
                     * IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Type of the unblocking action (`user`: self-service unblocking, `auto`: automatic unblocking, `update`: unblocking by service upgrading, `bind`: unblocking by binding Anti-DDoS Pro instance)
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Unblocked time (estimated)
                     */
                    std::string m_unblockTime;
                    bool m_unblockTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEUNBLOCKIPRESPONSE_H_
