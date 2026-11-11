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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINWHITELEARNEDRREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINWHITELEARNEDRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LoginWhitePlaceInput.h>
#include <tencentcloud/csip/v20221121/model/InstanceIDWithAppIdItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyLoginWhiteLearnEDR request structure.
                */
                class ModifyLoginWhiteLearnEDRRequest : public AbstractModel
                {
                public:
                    ModifyLoginWhiteLearnEDRRequest();
                    ~ModifyLoginWhiteLearnEDRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Rule ID; for self-learning, it is the rule group ID (minimum line ID in the group)</p>
                     * @return Id <p>Rule ID; for self-learning, it is the rule group ID (minimum line ID in the group)</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Rule ID; for self-learning, it is the rule group ID (minimum line ID in the group)</p>
                     * @param _id <p>Rule ID; for self-learning, it is the rule group ID (minimum line ID in the group)</p>
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
                     * 获取<p>List of common login locations. Required. 1-200 entries. It is the unique content dimension of the self-learning rule.</p>
                     * @return Places <p>List of common login locations. Required. 1-200 entries. It is the unique content dimension of the self-learning rule.</p>
                     * 
                     */
                    std::vector<LoginWhitePlaceInput> GetPlaces() const;

                    /**
                     * 设置<p>List of common login locations. Required. 1-200 entries. It is the unique content dimension of the self-learning rule.</p>
                     * @param _places <p>List of common login locations. Required. 1-200 entries. It is the unique content dimension of the self-learning rule.</p>
                     * 
                     */
                    void SetPlaces(const std::vector<LoginWhitePlaceInput>& _places);

                    /**
                     * 判断参数 Places 是否已赋值
                     * @return Places 是否已赋值
                     * 
                     */
                    bool PlacesHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>AppId of the account associated with the policy (obtained from the list output parameter AppId); if empty, the current account is used; non-current accounts must pass ownership verification</p>
                     * @return RuleAppId <p>AppId of the account associated with the policy (obtained from the list output parameter AppId); if empty, the current account is used; non-current accounts must pass ownership verification</p>
                     * 
                     */
                    uint64_t GetRuleAppId() const;

                    /**
                     * 设置<p>AppId of the account associated with the policy (obtained from the list output parameter AppId); if empty, the current account is used; non-current accounts must pass ownership verification</p>
                     * @param _ruleAppId <p>AppId of the account associated with the policy (obtained from the list output parameter AppId); if empty, the current account is used; non-current accounts must pass ownership verification</p>
                     * 
                     */
                    void SetRuleAppId(const uint64_t& _ruleAppId);

                    /**
                     * 判断参数 RuleAppId 是否已赋值
                     * @return RuleAppId 是否已赋值
                     * 
                     */
                    bool RuleAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Remark, up to 255 characters</p>
                     * @return Remark <p>Remark, up to 255 characters</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remark, up to 255 characters</p>
                     * @param _remark <p>Remark, up to 255 characters</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>Effective asset scope: 0-specified hosts (host or tag hit) 1-all hosts</p>
                     * @return Scope <p>Effective asset scope: 0-specified hosts (host or tag hit) 1-all hosts</p>
                     * 
                     */
                    int64_t GetScope() const;

                    /**
                     * 设置<p>Effective asset scope: 0-specified hosts (host or tag hit) 1-all hosts</p>
                     * @param _scope <p>Effective asset scope: 0-specified hosts (host or tag hit) 1-all hosts</p>
                     * 
                     */
                    void SetScope(const int64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>List of specified hosts (in instance ID form), up to 10,000 items. The server translates them to QUUIDs via idmap, then merges and deduplicates them with QUUIDSWithAppId.</p>
                     * @return InstanceIDsWithAppId <p>List of specified hosts (in instance ID form), up to 10,000 items. The server translates them to QUUIDs via idmap, then merges and deduplicates them with QUUIDSWithAppId.</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>List of specified hosts (in instance ID form), up to 10,000 items. The server translates them to QUUIDs via idmap, then merges and deduplicates them with QUUIDSWithAppId.</p>
                     * @param _instanceIDsWithAppId <p>List of specified hosts (in instance ID form), up to 10,000 items. The server translates them to QUUIDs via idmap, then merges and deduplicates them with QUUIDSWithAppId.</p>
                     * 
                     */
                    void SetInstanceIDsWithAppId(const std::vector<InstanceIDWithAppIdItem>& _instanceIDsWithAppId);

                    /**
                     * 判断参数 InstanceIDsWithAppId 是否已赋值
                     * @return InstanceIDsWithAppId 是否已赋值
                     * 
                     */
                    bool InstanceIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>List of hosts (instance ID form) to remove, up to 10,000 items</p>
                     * @return ExcludeInstanceIDsWithAppId <p>List of hosts (instance ID form) to remove, up to 10,000 items</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetExcludeInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>List of hosts (instance ID form) to remove, up to 10,000 items</p>
                     * @param _excludeInstanceIDsWithAppId <p>List of hosts (instance ID form) to remove, up to 10,000 items</p>
                     * 
                     */
                    void SetExcludeInstanceIDsWithAppId(const std::vector<InstanceIDWithAppIdItem>& _excludeInstanceIDsWithAppId);

                    /**
                     * 判断参数 ExcludeInstanceIDsWithAppId 是否已赋值
                     * @return ExcludeInstanceIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Security center tag ID list, up to 100. When Scope=0, it is in an OR relationship with the host. Self-learning allowlist does not support taking effect by tag (a non-empty value will be rejected).</p>
                     * @return TagIDs <p>Security center tag ID list, up to 100. When Scope=0, it is in an OR relationship with the host. Self-learning allowlist does not support taking effect by tag (a non-empty value will be rejected).</p>
                     * 
                     */
                    std::vector<std::string> GetTagIDs() const;

                    /**
                     * 设置<p>Security center tag ID list, up to 100. When Scope=0, it is in an OR relationship with the host. Self-learning allowlist does not support taking effect by tag (a non-empty value will be rejected).</p>
                     * @param _tagIDs <p>Security center tag ID list, up to 100. When Scope=0, it is in an OR relationship with the host. Self-learning allowlist does not support taking effect by tag (a non-empty value will be rejected).</p>
                     * 
                     */
                    void SetTagIDs(const std::vector<std::string>& _tagIDs);

                    /**
                     * 判断参数 TagIDs 是否已赋值
                     * @return TagIDs 是否已赋值
                     * 
                     */
                    bool TagIDsHasBeenSet() const;

                private:

                    /**
                     * <p>Rule ID; for self-learning, it is the rule group ID (minimum line ID in the group)</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>List of common login locations. Required. 1-200 entries. It is the unique content dimension of the self-learning rule.</p>
                     */
                    std::vector<LoginWhitePlaceInput> m_places;
                    bool m_placesHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>AppId of the account associated with the policy (obtained from the list output parameter AppId); if empty, the current account is used; non-current accounts must pass ownership verification</p>
                     */
                    uint64_t m_ruleAppId;
                    bool m_ruleAppIdHasBeenSet;

                    /**
                     * <p>Remark, up to 255 characters</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Effective asset scope: 0-specified hosts (host or tag hit) 1-all hosts</p>
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>List of specified hosts (in instance ID form), up to 10,000 items. The server translates them to QUUIDs via idmap, then merges and deduplicates them with QUUIDSWithAppId.</p>
                     */
                    std::vector<InstanceIDWithAppIdItem> m_instanceIDsWithAppId;
                    bool m_instanceIDsWithAppIdHasBeenSet;

                    /**
                     * <p>List of hosts (instance ID form) to remove, up to 10,000 items</p>
                     */
                    std::vector<InstanceIDWithAppIdItem> m_excludeInstanceIDsWithAppId;
                    bool m_excludeInstanceIDsWithAppIdHasBeenSet;

                    /**
                     * <p>Security center tag ID list, up to 100. When Scope=0, it is in an OR relationship with the host. Self-learning allowlist does not support taking effect by tag (a non-empty value will be rejected).</p>
                     */
                    std::vector<std::string> m_tagIDs;
                    bool m_tagIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINWHITELEARNEDRREQUEST_H_
