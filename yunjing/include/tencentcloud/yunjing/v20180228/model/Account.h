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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_ACCOUNT_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_ACCOUNT_H_

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
                * Account list information.
                */
                class Account : public AbstractModel
                {
                public:
                    Account();
                    ~Account() = default;
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
                     * 获取CWP agent `Uuid`
                     * @return Uuid CWP agent `Uuid`
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWP agent `Uuid`
                     * @param _uuid CWP agent `Uuid`
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
                     * 获取Account group.
                     * @return Groups Account group.
                     * 
                     */
                    std::string GetGroups() const;

                    /**
                     * 设置Account group.
                     * @param _groups Account group.
                     * 
                     */
                    void SetGroups(const std::string& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取Account type.
<li>ORDINARY: ordinary account</li>
<li>SUPPER: super admin account</li>
                     * @return Privilege Account type.
<li>ORDINARY: ordinary account</li>
<li>SUPPER: super admin account</li>
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置Account type.
<li>ORDINARY: ordinary account</li>
<li>SUPPER: super admin account</li>
                     * @param _privilege Account type.
<li>ORDINARY: ordinary account</li>
<li>SUPPER: super admin account</li>
                     * 
                     */
                    void SetPrivilege(const std::string& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取Account creation time.
                     * @return AccountCreateTime Account creation time.
                     * 
                     */
                    std::string GetAccountCreateTime() const;

                    /**
                     * 设置Account creation time.
                     * @param _accountCreateTime Account creation time.
                     * 
                     */
                    void SetAccountCreateTime(const std::string& _accountCreateTime);

                    /**
                     * 判断参数 AccountCreateTime 是否已赋值
                     * @return AccountCreateTime 是否已赋值
                     * 
                     */
                    bool AccountCreateTimeHasBeenSet() const;

                    /**
                     * 获取Account last login time.
                     * @return LastLoginTime Account last login time.
                     * 
                     */
                    std::string GetLastLoginTime() const;

                    /**
                     * 设置Account last login time.
                     * @param _lastLoginTime Account last login time.
                     * 
                     */
                    void SetLastLoginTime(const std::string& _lastLoginTime);

                    /**
                     * 判断参数 LastLoginTime 是否已赋值
                     * @return LastLoginTime 是否已赋值
                     * 
                     */
                    bool LastLoginTimeHasBeenSet() const;

                private:

                    /**
                     * Unique ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * CWP agent `Uuid`
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
                     * Account group.
                     */
                    std::string m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * Account type.
<li>ORDINARY: ordinary account</li>
<li>SUPPER: super admin account</li>
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * Account creation time.
                     */
                    std::string m_accountCreateTime;
                    bool m_accountCreateTimeHasBeenSet;

                    /**
                     * Account last login time.
                     */
                    std::string m_lastLoginTime;
                    bool m_lastLoginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_ACCOUNT_H_
