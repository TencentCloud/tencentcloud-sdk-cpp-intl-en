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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_HISTORYACCOUNT_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_HISTORYACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Account change history data.
                */
                class HistoryAccount : public AbstractModel
                {
                public:
                    HistoryAccount();
                    ~HistoryAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID.
                     * @return Id Unique ID.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Unique ID.
                     * @param _id Unique ID.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取CWP agent `Uuid`.
                     * @return Uuid CWP agent `Uuid`.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWP agent `Uuid`.
                     * @param _uuid CWP agent `Uuid`.
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Private IP of server.
                     * @return MachineIp Private IP of server.
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Private IP of server.
                     * @param _machineIp Private IP of server.
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Server name.
                     * @return MachineName Server name.
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Server name.
                     * @param _machineName Server name.
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Account name.
                     * @return Username Account name.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Account name.
                     * @param _username Account name.
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Account change type.
<li>CREATE: creates account</li>
<li>MODIFY: modifies account</li>
<li>DELETE: deletes account</li>
                     * @return ModifyType Account change type.
<li>CREATE: creates account</li>
<li>MODIFY: modifies account</li>
<li>DELETE: deletes account</li>
                     * 
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置Account change type.
<li>CREATE: creates account</li>
<li>MODIFY: modifies account</li>
<li>DELETE: deletes account</li>
                     * @param _modifyType Account change type.
<li>CREATE: creates account</li>
<li>MODIFY: modifies account</li>
<li>DELETE: deletes account</li>
                     * 
                     */
                    void SetModifyType(const std::string& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取Change time.
                     * @return ModifyTime Change time.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Change time.
                     * @param _modifyTime Change time.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Unique ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * CWP agent `Uuid`.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Private IP of server.
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Server name.
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Account name.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Account change type.
<li>CREATE: creates account</li>
<li>MODIFY: modifies account</li>
<li>DELETE: deletes account</li>
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * Change time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_HISTORYACCOUNT_H_
