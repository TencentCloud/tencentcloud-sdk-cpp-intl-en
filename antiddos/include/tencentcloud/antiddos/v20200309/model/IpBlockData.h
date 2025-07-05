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
                * 
                */
                class IpBlockData : public AbstractModel
                {
                public:
                    IpBlockData();
                    ~IpBlockData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Status 
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置
                     * @param _status 
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
                     * 获取
                     * @return Ip 
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置
                     * @param _ip 
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
                     * 获取
                     * @return BlockTime 
                     * 
                     */
                    std::string GetBlockTime() const;

                    /**
                     * 设置
                     * @param _blockTime 
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
                     * 获取
                     * @return UnBlockTime 
                     * 
                     */
                    std::string GetUnBlockTime() const;

                    /**
                     * 设置
                     * @param _unBlockTime 
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
                     * 获取
                     * @return ActionType 
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置
                     * @param _actionType 
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
                     * 获取
                     * @return ProtectFlag 
                     * 
                     */
                    uint64_t GetProtectFlag() const;

                    /**
                     * 设置
                     * @param _protectFlag 
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
                     * 
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_blockTime;
                    bool m_blockTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_unBlockTime;
                    bool m_unBlockTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_protectFlag;
                    bool m_protectFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_IPBLOCKDATA_H_
