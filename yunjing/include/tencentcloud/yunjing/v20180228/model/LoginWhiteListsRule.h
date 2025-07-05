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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_LOGINWHITELISTSRULE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_LOGINWHITELISTSRULE_H_

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
                * Whitelist rule
                */
                class LoginWhiteListsRule : public AbstractModel
                {
                public:
                    LoginWhiteListsRule();
                    ~LoginWhiteListsRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whitelisted location
                     * @return Places Whitelisted location
                     * 
                     */
                    std::vector<Place> GetPlaces() const;

                    /**
                     * 设置Whitelisted location
                     * @param _places Whitelisted location
                     * 
                     */
                    void SetPlaces(const std::vector<Place>& _places);

                    /**
                     * 判断参数 Places 是否已赋值
                     * @return Places 是否已赋值
                     * 
                     */
                    bool PlacesHasBeenSet() const;

                    /**
                     * 获取Whitelisted IPs (separated by commas). This parameter can be an IP range.
                     * @return SrcIp Whitelisted IPs (separated by commas). This parameter can be an IP range.
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置Whitelisted IPs (separated by commas). This parameter can be an IP range.
                     * @param _srcIp Whitelisted IPs (separated by commas). This parameter can be an IP range.
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取Whitelisted usernames (separated by commas)
                     * @return UserName Whitelisted usernames (separated by commas)
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Whitelisted usernames (separated by commas)
                     * @param _userName Whitelisted usernames (separated by commas)
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Whether this rule is applied to all servers under the current account
                     * @return IsGlobal Whether this rule is applied to all servers under the current account
                     * 
                     */
                    bool GetIsGlobal() const;

                    /**
                     * 设置Whether this rule is applied to all servers under the current account
                     * @param _isGlobal Whether this rule is applied to all servers under the current account
                     * 
                     */
                    void SetIsGlobal(const bool& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取Server for which the allowlist takes effect
                     * @return HostIp Server for which the allowlist takes effect
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Server for which the allowlist takes effect
                     * @param _hostIp Server for which the allowlist takes effect
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Rule ID, used for rule updating
                     * @return Id Rule ID, used for rule updating
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID, used for rule updating
                     * @param _id Rule ID, used for rule updating
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
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Whitelisted location
                     */
                    std::vector<Place> m_places;
                    bool m_placesHasBeenSet;

                    /**
                     * Whitelisted IPs (separated by commas). This parameter can be an IP range.
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * Whitelisted usernames (separated by commas)
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Whether this rule is applied to all servers under the current account
                     */
                    bool m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Server for which the allowlist takes effect
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Rule ID, used for rule updating
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_LOGINWHITELISTSRULE_H_
