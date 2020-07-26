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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_IPBLOCKDATA_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_IPBLOCKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * IP blocking record
                */
                class IpBlockData : public AbstractModel
                {
                public:
                    IpBlockData();
                    ~IpBlockData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP
                     * @return Ip IP
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP
                     * @param Ip IP
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Status (Blocked: blocked, UnBlocking: unblocking, UnBlockFailed: unblocking failed)
                     * @return Status Status (Blocked: blocked, UnBlocking: unblocking, UnBlockFailed: unblocking failed)
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status (Blocked: blocked, UnBlocking: unblocking, UnBlockFailed: unblocking failed)
                     * @param Status Status (Blocked: blocked, UnBlocking: unblocking, UnBlockFailed: unblocking failed)
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Blocked time
                     * @return BlockTime Blocked time
                     */
                    std::string GetBlockTime() const;

                    /**
                     * 设置Blocked time
                     * @param BlockTime Blocked time
                     */
                    void SetBlockTime(const std::string& _blockTime);

                    /**
                     * 判断参数 BlockTime 是否已赋值
                     * @return BlockTime 是否已赋值
                     */
                    bool BlockTimeHasBeenSet() const;

                    /**
                     * 获取Unblocked time (estimated)
                     * @return UnBlockTime Unblocked time (estimated)
                     */
                    std::string GetUnBlockTime() const;

                    /**
                     * 设置Unblocked time (estimated)
                     * @param UnBlockTime Unblocked time (estimated)
                     */
                    void SetUnBlockTime(const std::string& _unBlockTime);

                    /**
                     * 判断参数 UnBlockTime 是否已赋值
                     * @return UnBlockTime 是否已赋值
                     */
                    bool UnBlockTimeHasBeenSet() const;

                    /**
                     * 获取Type of the unblocking action (`user`: self-service unblocking, `auto`: automatic unblocking, `update`: unblocking by service upgrading, `bind`: unblocking by binding Anti-DDoS Pro instance)
                     * @return ActionType Type of the unblocking action (`user`: self-service unblocking, `auto`: automatic unblocking, `update`: unblocking by service upgrading, `bind`: unblocking by binding Anti-DDoS Pro instance)
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Type of the unblocking action (`user`: self-service unblocking, `auto`: automatic unblocking, `update`: unblocking by service upgrading, `bind`: unblocking by binding Anti-DDoS Pro instance)
                     * @param ActionType Type of the unblocking action (`user`: self-service unblocking, `auto`: automatic unblocking, `update`: unblocking by service upgrading, `bind`: unblocking by binding Anti-DDoS Pro instance)
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     */
                    bool ActionTypeHasBeenSet() const;

                private:

                    /**
                     * IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Status (Blocked: blocked, UnBlocking: unblocking, UnBlockFailed: unblocking failed)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Blocked time
                     */
                    std::string m_blockTime;
                    bool m_blockTimeHasBeenSet;

                    /**
                     * Unblocked time (estimated)
                     */
                    std::string m_unBlockTime;
                    bool m_unBlockTimeHasBeenSet;

                    /**
                     * Type of the unblocking action (`user`: self-service unblocking, `auto`: automatic unblocking, `update`: unblocking by service upgrading, `bind`: unblocking by binding Anti-DDoS Pro instance)
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_IPBLOCKDATA_H_
