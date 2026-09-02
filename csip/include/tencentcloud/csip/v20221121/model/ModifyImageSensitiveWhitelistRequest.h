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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGESENSITIVEWHITELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGESENSITIVEWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyImageSensitiveWhitelist request structure.
                */
                class ModifyImageSensitiveWhitelistRequest : public AbstractModel
                {
                public:
                    ModifyImageSensitiveWhitelistRequest();
                    ~ModifyImageSensitiveWhitelistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Sensitive information allowlist id</p>
                     * @return RuleId <p>Sensitive information allowlist id</p>
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置<p>Sensitive information allowlist id</p>
                     * @param _ruleId <p>Sensitive information allowlist id</p>
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

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
                     * 获取<p>Whitelisted sensitive information types</p><p>Enumeration values:</p><ul><li>1: root startup</li><li>2: Code leak</li><li>3: Credential leak</li></ul>
                     * @return Behavior <p>Whitelisted sensitive information types</p><p>Enumeration values:</p><ul><li>1: root startup</li><li>2: Code leak</li><li>3: Credential leak</li></ul>
                     * 
                     */
                    uint64_t GetBehavior() const;

                    /**
                     * 设置<p>Whitelisted sensitive information types</p><p>Enumeration values:</p><ul><li>1: root startup</li><li>2: Code leak</li><li>3: Credential leak</li></ul>
                     * @param _behavior <p>Whitelisted sensitive information types</p><p>Enumeration values:</p><ul><li>1: root startup</li><li>2: Code leak</li><li>3: Credential leak</li></ul>
                     * 
                     */
                    void SetBehavior(const uint64_t& _behavior);

                    /**
                     * 判断参数 Behavior 是否已赋值
                     * @return Behavior 是否已赋值
                     * 
                     */
                    bool BehaviorHasBeenSet() const;

                    /**
                     * 获取<p>Image ID.</p>
                     * @return ImageIds <p>Image ID.</p>
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置<p>Image ID.</p>
                     * @param _imageIds <p>Image ID.</p>
                     * 
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取<p>Effective scope</p>
                     * @return Scope <p>Effective scope</p>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>Effective scope</p>
                     * @param _scope <p>Effective scope</p>
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>Allowlist status</p>
                     * @return Status <p>Allowlist status</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Allowlist status</p>
                     * @param _status <p>Allowlist status</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Remarks.</p>
                     * @return Remark <p>Remarks.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remarks.</p>
                     * @param _remark <p>Remarks.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * <p>Sensitive information allowlist id</p>
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Whitelisted sensitive information types</p><p>Enumeration values:</p><ul><li>1: root startup</li><li>2: Code leak</li><li>3: Credential leak</li></ul>
                     */
                    uint64_t m_behavior;
                    bool m_behaviorHasBeenSet;

                    /**
                     * <p>Image ID.</p>
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * <p>Effective scope</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Allowlist status</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGESENSITIVEWHITELISTREQUEST_H_
