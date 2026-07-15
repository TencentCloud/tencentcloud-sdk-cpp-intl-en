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
                     * 获取<p>Sender domain name</p>
                     * @return IdentityName <p>Sender domain name</p>
                     * 
                     */
                    std::string GetIdentityName() const;

                    /**
                     * 设置<p>Sender domain name</p>
                     * @param _identityName <p>Sender domain name</p>
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
                     * 获取<p>Validation type, fixed as DOMAIN</p>
                     * @return IdentityType <p>Validation type, fixed as DOMAIN</p>
                     * 
                     */
                    std::string GetIdentityType() const;

                    /**
                     * 设置<p>Validation type, fixed as DOMAIN</p>
                     * @param _identityType <p>Validation type, fixed as DOMAIN</p>
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
                     * 获取<p>Whether verified</p>
                     * @return SendingEnabled <p>Whether verified</p>
                     * 
                     */
                    bool GetSendingEnabled() const;

                    /**
                     * 设置<p>Whether verified</p>
                     * @param _sendingEnabled <p>Whether verified</p>
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
                     * 获取<p>Current reputation level</p>
                     * @return CurrentReputationLevel <p>Current reputation level</p>
                     * 
                     */
                    uint64_t GetCurrentReputationLevel() const;

                    /**
                     * 设置<p>Current reputation level</p>
                     * @param _currentReputationLevel <p>Current reputation level</p>
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
                     * 获取<p>Maximum message sending capacity of the current day</p>
                     * @return DailyQuota <p>Maximum message sending capacity of the current day</p>
                     * 
                     */
                    uint64_t GetDailyQuota() const;

                    /**
                     * 设置<p>Maximum message sending capacity of the current day</p>
                     * @param _dailyQuota <p>Maximum message sending capacity of the current day</p>
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
                     * 获取<p>Independent ip for domain configuration</p>
                     * @return SendIp <p>Independent ip for domain configuration</p>
                     * 
                     */
                    std::vector<std::string> GetSendIp() const;

                    /**
                     * 设置<p>Independent ip for domain configuration</p>
                     * @param _sendIp <p>Independent ip for domain configuration</p>
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
                     * 获取<p>tag</p>
                     * @return TagList <p>tag</p>
                     * 
                     */
                    std::vector<TagList> GetTagList() const;

                    /**
                     * 设置<p>tag</p>
                     * @param _tagList <p>tag</p>
                     * 
                     */
                    void SetTagList(const std::vector<TagList>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>dkim bit number</p><p>Enumeration value:</p><ul><li>0: 1024</li><li>1: 2048</li><li>2: Dual signature</li></ul><p>Default value: 0</p>
                     * @return DKIMOption <p>dkim bit number</p><p>Enumeration value:</p><ul><li>0: 1024</li><li>1: 2048</li><li>2: Dual signature</li></ul><p>Default value: 0</p>
                     * 
                     */
                    uint64_t GetDKIMOption() const;

                    /**
                     * 设置<p>dkim bit number</p><p>Enumeration value:</p><ul><li>0: 1024</li><li>1: 2048</li><li>2: Dual signature</li></ul><p>Default value: 0</p>
                     * @param _dKIMOption <p>dkim bit number</p><p>Enumeration value:</p><ul><li>0: 1024</li><li>1: 2048</li><li>2: Dual signature</li></ul><p>Default value: 0</p>
                     * 
                     */
                    void SetDKIMOption(const uint64_t& _dKIMOption);

                    /**
                     * 判断参数 DKIMOption 是否已赋值
                     * @return DKIMOption 是否已赋值
                     * 
                     */
                    bool DKIMOptionHasBeenSet() const;

                private:

                    /**
                     * <p>Sender domain name</p>
                     */
                    std::string m_identityName;
                    bool m_identityNameHasBeenSet;

                    /**
                     * <p>Validation type, fixed as DOMAIN</p>
                     */
                    std::string m_identityType;
                    bool m_identityTypeHasBeenSet;

                    /**
                     * <p>Whether verified</p>
                     */
                    bool m_sendingEnabled;
                    bool m_sendingEnabledHasBeenSet;

                    /**
                     * <p>Current reputation level</p>
                     */
                    uint64_t m_currentReputationLevel;
                    bool m_currentReputationLevelHasBeenSet;

                    /**
                     * <p>Maximum message sending capacity of the current day</p>
                     */
                    uint64_t m_dailyQuota;
                    bool m_dailyQuotaHasBeenSet;

                    /**
                     * <p>Independent ip for domain configuration</p>
                     */
                    std::vector<std::string> m_sendIp;
                    bool m_sendIpHasBeenSet;

                    /**
                     * <p>tag</p>
                     */
                    std::vector<TagList> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>dkim bit number</p><p>Enumeration value:</p><ul><li>0: 1024</li><li>1: 2048</li><li>2: Dual signature</li></ul><p>Default value: 0</p>
                     */
                    uint64_t m_dKIMOption;
                    bool m_dKIMOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_EMAILIDENTITY_H_
