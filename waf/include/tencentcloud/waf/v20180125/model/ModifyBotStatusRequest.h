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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBOTSTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBOTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyBotStatus request structure.
                */
                class ModifyBotStatusRequest : public AbstractModel
                {
                public:
                    ModifyBotStatusRequest();
                    ~ModifyBotStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Category
                     * @return Category Category
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Category
                     * @param _category Category
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
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
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceID Instance ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceID Instance ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Whether it is the bot 4.0 version
                     * @return IsVersionFour Whether it is the bot 4.0 version
                     * 
                     */
                    bool GetIsVersionFour() const;

                    /**
                     * 设置Whether it is the bot 4.0 version
                     * @param _isVersionFour Whether it is the bot 4.0 version
                     * 
                     */
                    void SetIsVersionFour(const bool& _isVersionFour);

                    /**
                     * 判断参数 IsVersionFour 是否已赋值
                     * @return IsVersionFour 是否已赋值
                     * 
                     */
                    bool IsVersionFourHasBeenSet() const;

                    /**
                     * 获取Enter the bot version number, scenario-based version: 4.1.0
                     * @return BotVersion Enter the bot version number, scenario-based version: 4.1.0
                     * 
                     */
                    std::string GetBotVersion() const;

                    /**
                     * 设置Enter the bot version number, scenario-based version: 4.1.0
                     * @param _botVersion Enter the bot version number, scenario-based version: 4.1.0
                     * 
                     */
                    void SetBotVersion(const std::string& _botVersion);

                    /**
                     * 判断参数 BotVersion 是否已赋值
                     * @return BotVersion 是否已赋值
                     * 
                     */
                    bool BotVersionHasBeenSet() const;

                    /**
                     * 获取List of domain names on which bot detection is to be enabled or disabled in batch
                     * @return DomainList List of domain names on which bot detection is to be enabled or disabled in batch
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置List of domain names on which bot detection is to be enabled or disabled in batch
                     * @param _domainList List of domain names on which bot detection is to be enabled or disabled in batch
                     * 
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                private:

                    /**
                     * Category
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Whether it is the bot 4.0 version
                     */
                    bool m_isVersionFour;
                    bool m_isVersionFourHasBeenSet;

                    /**
                     * Enter the bot version number, scenario-based version: 4.1.0
                     */
                    std::string m_botVersion;
                    bool m_botVersionHasBeenSet;

                    /**
                     * List of domain names on which bot detection is to be enabled or disabled in batch
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBOTSTATUSREQUEST_H_
