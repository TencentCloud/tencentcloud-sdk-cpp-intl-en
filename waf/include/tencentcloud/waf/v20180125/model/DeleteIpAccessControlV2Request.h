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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETEIPACCESSCONTROLV2REQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETEIPACCESSCONTROLV2REQUEST_H_

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
                * DeleteIpAccessControlV2 request structure.
                */
                class DeleteIpAccessControlV2Request : public AbstractModel
                {
                public:
                    DeleteIpAccessControlV2Request();
                    ~DeleteIpAccessControlV2Request() = default;
                    std::string ToJsonString() const;


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
                     * 获取Rule ID list, which supports deletion in batches.
                     * @return RuleIds Rule ID list, which supports deletion in batches.
                     * 
                     */
                    std::vector<uint64_t> GetRuleIds() const;

                    /**
                     * 设置Rule ID list, which supports deletion in batches.
                     * @param _ruleIds Rule ID list, which supports deletion in batches.
                     * 
                     */
                    void SetRuleIds(const std::vector<uint64_t>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                    /**
                     * 获取Whether to delete all IP blocklists/allowlists under the corresponding domain. True indicates deleting all; false indicates only deleting a specified IP list.
                     * @return DeleteAll Whether to delete all IP blocklists/allowlists under the corresponding domain. True indicates deleting all; false indicates only deleting a specified IP list.
                     * 
                     */
                    bool GetDeleteAll() const;

                    /**
                     * 设置Whether to delete all IP blocklists/allowlists under the corresponding domain. True indicates deleting all; false indicates only deleting a specified IP list.
                     * @param _deleteAll Whether to delete all IP blocklists/allowlists under the corresponding domain. True indicates deleting all; false indicates only deleting a specified IP list.
                     * 
                     */
                    void SetDeleteAll(const bool& _deleteAll);

                    /**
                     * 判断参数 DeleteAll 是否已赋值
                     * @return DeleteAll 是否已赋值
                     * 
                     */
                    bool DeleteAllHasBeenSet() const;

                    /**
                     * 获取batch: indicates batch protection IP allowlists/blocklists.
                     * @return SourceType batch: indicates batch protection IP allowlists/blocklists.
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置batch: indicates batch protection IP allowlists/blocklists.
                     * @param _sourceType batch: indicates batch protection IP allowlists/blocklists.
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取IP allowlist/blocklist type. 40: IP allowlist; 42: IP blocklist.
                     * @return ActionType IP allowlist/blocklist type. 40: IP allowlist; 42: IP blocklist.
                     * 
                     */
                    uint64_t GetActionType() const;

                    /**
                     * 设置IP allowlist/blocklist type. 40: IP allowlist; 42: IP blocklist.
                     * @param _actionType IP allowlist/blocklist type. 40: IP allowlist; 42: IP blocklist.
                     * 
                     */
                    void SetActionType(const uint64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Rule ID list, which supports deletion in batches.
                     */
                    std::vector<uint64_t> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * Whether to delete all IP blocklists/allowlists under the corresponding domain. True indicates deleting all; false indicates only deleting a specified IP list.
                     */
                    bool m_deleteAll;
                    bool m_deleteAllHasBeenSet;

                    /**
                     * batch: indicates batch protection IP allowlists/blocklists.
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * IP allowlist/blocklist type. 40: IP allowlist; 42: IP blocklist.
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETEIPACCESSCONTROLV2REQUEST_H_
