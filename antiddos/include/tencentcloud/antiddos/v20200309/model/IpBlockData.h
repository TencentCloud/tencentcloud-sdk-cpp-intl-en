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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_IPBLOCKDATA_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_IPBLOCKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * IP blocking records
                */
                class IpBlockData : public AbstractModel
                {
                public:
                    IpBlockData();
                    ~IpBlockData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Status (Blocked: Blocked; UnBlocking: Unblocking; UnBlockFailed: Unblock failed)
                     * @return Status Status (Blocked: Blocked; UnBlocking: Unblocking; UnBlockFailed: Unblock failed)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status (Blocked: Blocked; UnBlocking: Unblocking; UnBlockFailed: Unblock failed)
                     * @param _status Status (Blocked: Blocked; UnBlocking: Unblocking; UnBlockFailed: Unblock failed)
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Resource IP
                     * @return Ip Resource IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Resource IP
                     * @param _ip Resource IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Blocking Time
                     * @return BlockTime Blocking Time
                     * 
                     */
                    std::string GetBlockTime() const;

                    /**
                     * 设置Blocking Time
                     * @param _blockTime Blocking Time
                     * 
                     */
                    void SetBlockTime(const std::string& _blockTime);

                    /**
                     * 判断参数 BlockTime 是否已赋值
                     * @return BlockTime 是否已赋值
                     * 
                     */
                    bool BlockTimeHasBeenSet() const;

                    /**
                     * 获取Unblock Time (Estimated Unblock Time)
                     * @return UnBlockTime Unblock Time (Estimated Unblock Time)
                     * 
                     */
                    std::string GetUnBlockTime() const;

                    /**
                     * 设置Unblock Time (Estimated Unblock Time)
                     * @param _unBlockTime Unblock Time (Estimated Unblock Time)
                     * 
                     */
                    void SetUnBlockTime(const std::string& _unBlockTime);

                    /**
                     * 判断参数 UnBlockTime 是否已赋值
                     * @return UnBlockTime 是否已赋值
                     * 
                     */
                    bool UnBlockTimeHasBeenSet() const;

                    /**
                     * 获取Unblock type (user: self-service unblocking; auto: automatic unblocking; update: upgrade unblocking; bind: Anti-DDoS Pro binding unblocking)
                     * @return ActionType Unblock type (user: self-service unblocking; auto: automatic unblocking; update: upgrade unblocking; bind: Anti-DDoS Pro binding unblocking)
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Unblock type (user: self-service unblocking; auto: automatic unblocking; update: upgrade unblocking; bind: Anti-DDoS Pro binding unblocking)
                     * @param _actionType Unblock type (user: self-service unblocking; auto: automatic unblocking; update: upgrade unblocking; bind: Anti-DDoS Pro binding unblocking)
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS flag, 0: non-Anti-DDoS, 1: Anti-DDoS
                     * @return ProtectFlag Anti-DDoS flag, 0: non-Anti-DDoS, 1: Anti-DDoS
                     * 
                     */
                    uint64_t GetProtectFlag() const;

                    /**
                     * 设置Anti-DDoS flag, 0: non-Anti-DDoS, 1: Anti-DDoS
                     * @param _protectFlag Anti-DDoS flag, 0: non-Anti-DDoS, 1: Anti-DDoS
                     * 
                     */
                    void SetProtectFlag(const uint64_t& _protectFlag);

                    /**
                     * 判断参数 ProtectFlag 是否已赋值
                     * @return ProtectFlag 是否已赋值
                     * 
                     */
                    bool ProtectFlagHasBeenSet() const;

                private:

                    /**
                     * Status (Blocked: Blocked; UnBlocking: Unblocking; UnBlockFailed: Unblock failed)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Resource IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Blocking Time
                     */
                    std::string m_blockTime;
                    bool m_blockTimeHasBeenSet;

                    /**
                     * Unblock Time (Estimated Unblock Time)
                     */
                    std::string m_unBlockTime;
                    bool m_unBlockTimeHasBeenSet;

                    /**
                     * Unblock type (user: self-service unblocking; auto: automatic unblocking; update: upgrade unblocking; bind: Anti-DDoS Pro binding unblocking)
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Anti-DDoS flag, 0: non-Anti-DDoS, 1: Anti-DDoS
                     */
                    uint64_t m_protectFlag;
                    bool m_protectFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_IPBLOCKDATA_H_
