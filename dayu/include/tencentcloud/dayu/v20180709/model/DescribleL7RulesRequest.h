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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBLEL7RULESREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBLEL7RULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribleL7Rules request structure.
                */
                class DescribleL7RulesRequest : public AbstractModel
                {
                public:
                    DescribleL7RulesRequest();
                    ~DescribleL7RulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * @param _business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance ID
                     * @return Id Anti-DDoS instance ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param _id Anti-DDoS instance ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Rule ID, which is optional. If this field is entered, the specified rule will be obtained
                     * @return RuleIdList Rule ID, which is optional. If this field is entered, the specified rule will be obtained
                     * 
                     */
                    std::vector<std::string> GetRuleIdList() const;

                    /**
                     * 设置Rule ID, which is optional. If this field is entered, the specified rule will be obtained
                     * @param _ruleIdList Rule ID, which is optional. If this field is entered, the specified rule will be obtained
                     * 
                     */
                    void SetRuleIdList(const std::vector<std::string>& _ruleIdList);

                    /**
                     * 判断参数 RuleIdList 是否已赋值
                     * @return RuleIdList 是否已赋值
                     * 
                     */
                    bool RuleIdListHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. A value of 0 means no pagination
                     * @return Limit Number of entries per page. A value of 0 means no pagination
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. A value of 0 means no pagination
                     * @param _limit Number of entries per page. A value of 0 means no pagination
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page start offset, whose value is (page number - 1) * number of entries per page
                     * @return Offset Page start offset, whose value is (page number - 1) * number of entries per page
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page start offset, whose value is (page number - 1) * number of entries per page
                     * @param _offset Page start offset, whose value is (page number - 1) * number of entries per page
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Domain name search, which is optional. Enter it if you need to search for domain names
                     * @return Domain Domain name search, which is optional. Enter it if you need to search for domain names
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name search, which is optional. Enter it if you need to search for domain names
                     * @param _domain Domain name search, which is optional. Enter it if you need to search for domain names
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
                     * 获取Forwarding protocol search, which is optional. Valid values: [http, https, http/https]
                     * @return ProtocolList Forwarding protocol search, which is optional. Valid values: [http, https, http/https]
                     * 
                     */
                    std::vector<std::string> GetProtocolList() const;

                    /**
                     * 设置Forwarding protocol search, which is optional. Valid values: [http, https, http/https]
                     * @param _protocolList Forwarding protocol search, which is optional. Valid values: [http, https, http/https]
                     * 
                     */
                    void SetProtocolList(const std::vector<std::string>& _protocolList);

                    /**
                     * 判断参数 ProtocolList 是否已赋值
                     * @return ProtocolList 是否已赋值
                     * 
                     */
                    bool ProtocolListHasBeenSet() const;

                    /**
                     * 获取Status search, which is optional. Valid values: [0 (successfully configured rule), 1 (rule configuration taking effect), 2 (rule configuration failed), 3 (rule deletion taking effect), 5 (rule deletion failed), 6 (rule waiting for configuration), 7 (rule waiting for deletion), 8 (rule waiting for certificate configuration)]
                     * @return StatusList Status search, which is optional. Valid values: [0 (successfully configured rule), 1 (rule configuration taking effect), 2 (rule configuration failed), 3 (rule deletion taking effect), 5 (rule deletion failed), 6 (rule waiting for configuration), 7 (rule waiting for deletion), 8 (rule waiting for certificate configuration)]
                     * 
                     */
                    std::vector<uint64_t> GetStatusList() const;

                    /**
                     * 设置Status search, which is optional. Valid values: [0 (successfully configured rule), 1 (rule configuration taking effect), 2 (rule configuration failed), 3 (rule deletion taking effect), 5 (rule deletion failed), 6 (rule waiting for configuration), 7 (rule waiting for deletion), 8 (rule waiting for certificate configuration)]
                     * @param _statusList Status search, which is optional. Valid values: [0 (successfully configured rule), 1 (rule configuration taking effect), 2 (rule configuration failed), 3 (rule deletion taking effect), 5 (rule deletion failed), 6 (rule waiting for configuration), 7 (rule waiting for deletion), 8 (rule waiting for certificate configuration)]
                     * 
                     */
                    void SetStatusList(const std::vector<uint64_t>& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Rule ID, which is optional. If this field is entered, the specified rule will be obtained
                     */
                    std::vector<std::string> m_ruleIdList;
                    bool m_ruleIdListHasBeenSet;

                    /**
                     * Number of entries per page. A value of 0 means no pagination
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page start offset, whose value is (page number - 1) * number of entries per page
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Domain name search, which is optional. Enter it if you need to search for domain names
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Forwarding protocol search, which is optional. Valid values: [http, https, http/https]
                     */
                    std::vector<std::string> m_protocolList;
                    bool m_protocolListHasBeenSet;

                    /**
                     * Status search, which is optional. Valid values: [0 (successfully configured rule), 1 (rule configuration taking effect), 2 (rule configuration failed), 3 (rule deletion taking effect), 5 (rule deletion failed), 6 (rule waiting for configuration), 7 (rule waiting for deletion), 8 (rule waiting for certificate configuration)]
                     */
                    std::vector<uint64_t> m_statusList;
                    bool m_statusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBLEL7RULESREQUEST_H_
