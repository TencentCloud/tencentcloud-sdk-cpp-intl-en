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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_EMAILIDENTITY_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_EMAILIDENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/TagList.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * Sender domain verification list structure
                */
                class EmailIdentity : public AbstractModel
                {
                public:
                    EmailIdentity();
                    ~EmailIdentity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sender domain.
                     * @return IdentityName Sender domain.
                     * 
                     */
                    std::string GetIdentityName() const;

                    /**
                     * 设置Sender domain.
                     * @param _identityName Sender domain.
                     * 
                     */
                    void SetIdentityName(const std::string& _identityName);

                    /**
                     * 判断参数 IdentityName 是否已赋值
                     * @return IdentityName 是否已赋值
                     * 
                     */
                    bool IdentityNameHasBeenSet() const;

                    /**
                     * 获取Verification type. The value is fixed to `DOMAIN`.
                     * @return IdentityType Verification type. The value is fixed to `DOMAIN`.
                     * 
                     */
                    std::string GetIdentityType() const;

                    /**
                     * 设置Verification type. The value is fixed to `DOMAIN`.
                     * @param _identityType Verification type. The value is fixed to `DOMAIN`.
                     * 
                     */
                    void SetIdentityType(const std::string& _identityType);

                    /**
                     * 判断参数 IdentityType 是否已赋值
                     * @return IdentityType 是否已赋值
                     * 
                     */
                    bool IdentityTypeHasBeenSet() const;

                    /**
                     * 获取Verification passed or not.
                     * @return SendingEnabled Verification passed or not.
                     * 
                     */
                    bool GetSendingEnabled() const;

                    /**
                     * 设置Verification passed or not.
                     * @param _sendingEnabled Verification passed or not.
                     * 
                     */
                    void SetSendingEnabled(const bool& _sendingEnabled);

                    /**
                     * 判断参数 SendingEnabled 是否已赋值
                     * @return SendingEnabled 是否已赋值
                     * 
                     */
                    bool SendingEnabledHasBeenSet() const;

                    /**
                     * 获取Current reputation level
                     * @return CurrentReputationLevel Current reputation level
                     * 
                     */
                    uint64_t GetCurrentReputationLevel() const;

                    /**
                     * 设置Current reputation level
                     * @param _currentReputationLevel Current reputation level
                     * 
                     */
                    void SetCurrentReputationLevel(const uint64_t& _currentReputationLevel);

                    /**
                     * 判断参数 CurrentReputationLevel 是否已赋值
                     * @return CurrentReputationLevel 是否已赋值
                     * 
                     */
                    bool CurrentReputationLevelHasBeenSet() const;

                    /**
                     * 获取Maximum number of messages sent per day
                     * @return DailyQuota Maximum number of messages sent per day
                     * 
                     */
                    uint64_t GetDailyQuota() const;

                    /**
                     * 设置Maximum number of messages sent per day
                     * @param _dailyQuota Maximum number of messages sent per day
                     * 
                     */
                    void SetDailyQuota(const uint64_t& _dailyQuota);

                    /**
                     * 判断参数 DailyQuota 是否已赋值
                     * @return DailyQuota 是否已赋值
                     * 
                     */
                    bool DailyQuotaHasBeenSet() const;

                    /**
                     * 获取Independent ip for domain configuration.
                     * @return SendIp Independent ip for domain configuration.
                     * 
                     */
                    std::vector<std::string> GetSendIp() const;

                    /**
                     * 设置Independent ip for domain configuration.
                     * @param _sendIp Independent ip for domain configuration.
                     * 
                     */
                    void SetSendIp(const std::vector<std::string>& _sendIp);

                    /**
                     * 判断参数 SendIp 是否已赋值
                     * @return SendIp 是否已赋值
                     * 
                     */
                    bool SendIpHasBeenSet() const;

                    /**
                     * 获取tag.
                     * @return TagList tag.
                     * 
                     */
                    std::vector<TagList> GetTagList() const;

                    /**
                     * 设置tag.
                     * @param _tagList tag.
                     * 
                     */
                    void SetTagList(const std::vector<TagList>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * Sender domain.
                     */
                    std::string m_identityName;
                    bool m_identityNameHasBeenSet;

                    /**
                     * Verification type. The value is fixed to `DOMAIN`.
                     */
                    std::string m_identityType;
                    bool m_identityTypeHasBeenSet;

                    /**
                     * Verification passed or not.
                     */
                    bool m_sendingEnabled;
                    bool m_sendingEnabledHasBeenSet;

                    /**
                     * Current reputation level
                     */
                    uint64_t m_currentReputationLevel;
                    bool m_currentReputationLevelHasBeenSet;

                    /**
                     * Maximum number of messages sent per day
                     */
                    uint64_t m_dailyQuota;
                    bool m_dailyQuotaHasBeenSet;

                    /**
                     * Independent ip for domain configuration.
                     */
                    std::vector<std::string> m_sendIp;
                    bool m_sendIpHasBeenSet;

                    /**
                     * tag.
                     */
                    std::vector<TagList> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_EMAILIDENTITY_H_
