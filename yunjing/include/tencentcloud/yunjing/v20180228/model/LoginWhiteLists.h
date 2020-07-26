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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_LOGINWHITELISTS_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_LOGINWHITELISTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/Place.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Login whitelist
                */
                class LoginWhiteLists : public AbstractModel
                {
                public:
                    LoginWhiteLists();
                    ~LoginWhiteLists() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record ID
                     * @return Id Record ID
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Record ID
                     * @param Id Record ID
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取CWP agent ID
                     * @return Uuid CWP agent ID
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWP agent ID
                     * @param Uuid CWP agent ID
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Whitelisted location
                     * @return Places Whitelisted location
                     */
                    std::vector<Place> GetPlaces() const;

                    /**
                     * 设置Whitelisted location
                     * @param Places Whitelisted location
                     */
                    void SetPlaces(const std::vector<Place>& _places);

                    /**
                     * 判断参数 Places 是否已赋值
                     * @return Places 是否已赋值
                     */
                    bool PlacesHasBeenSet() const;

                    /**
                     * 获取Whitelisted users (separated by commas)
                     * @return UserName Whitelisted users (separated by commas)
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Whitelisted users (separated by commas)
                     * @param UserName Whitelisted users (separated by commas)
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Whitelisted IPs (separated by commas)
                     * @return SrcIp Whitelisted IPs (separated by commas)
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置Whitelisted IPs (separated by commas)
                     * @param SrcIp Whitelisted IPs (separated by commas)
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取Whether this rule is applied to all servers under the current account
                     * @return IsGlobal Whether this rule is applied to all servers under the current account
                     */
                    bool GetIsGlobal() const;

                    /**
                     * 设置Whether this rule is applied to all servers under the current account
                     * @param IsGlobal Whether this rule is applied to all servers under the current account
                     */
                    void SetIsGlobal(const bool& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取Whitelist creation time
                     * @return CreateTime Whitelist creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Whitelist creation time
                     * @param CreateTime Whitelist creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Whitelist modification time
                     * @return ModifyTime Whitelist modification time
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Whitelist modification time
                     * @param ModifyTime Whitelist modification time
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Server name
                     * @return MachineName Server name
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Server name
                     * @param MachineName Server name
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Server IP
                     * @return HostIp Server IP
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Server IP
                     * @param HostIp Server IP
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     */
                    bool HostIpHasBeenSet() const;

                private:

                    /**
                     * Record ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * CWP agent ID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Whitelisted location
                     */
                    std::vector<Place> m_places;
                    bool m_placesHasBeenSet;

                    /**
                     * Whitelisted users (separated by commas)
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Whitelisted IPs (separated by commas)
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * Whether this rule is applied to all servers under the current account
                     */
                    bool m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Whitelist creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whitelist modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Server name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Server IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_LOGINWHITELISTS_H_
