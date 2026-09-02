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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESENSITIVEWHITELIST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESENSITIVEWHITELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Sensitive information allowlist for container images
                */
                class ImageSensitiveWhitelist : public AbstractModel
                {
                public:
                    ImageSensitiveWhitelist();
                    ~ImageSensitiveWhitelist() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>Allowlist associated account name</p>
                     * @return OwnerAccountName <p>Allowlist associated account name</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>Allowlist associated account name</p>
                     * @param _ownerAccountName <p>Allowlist associated account name</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>Account uin of the allowlist</p>
                     * @return OwnerUin <p>Account uin of the allowlist</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>Account uin of the allowlist</p>
                     * @param _ownerUin <p>Account uin of the allowlist</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>appid of the account associated with the allowlist</p>
                     * @return OwnerAppId <p>appid of the account associated with the allowlist</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>appid of the account associated with the allowlist</p>
                     * @param _ownerAppId <p>appid of the account associated with the allowlist</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Allowlisted sensitive information types</p><p>Enumeration values:</p><ul><li>1: root startup</li><li>2: code leakage</li><li>3: credential leakage</li></ul>
                     * @return Behavior <p>Allowlisted sensitive information types</p><p>Enumeration values:</p><ul><li>1: root startup</li><li>2: code leakage</li><li>3: credential leakage</li></ul>
                     * 
                     */
                    uint64_t GetBehavior() const;

                    /**
                     * 设置<p>Allowlisted sensitive information types</p><p>Enumeration values:</p><ul><li>1: root startup</li><li>2: code leakage</li><li>3: credential leakage</li></ul>
                     * @param _behavior <p>Allowlisted sensitive information types</p><p>Enumeration values:</p><ul><li>1: root startup</li><li>2: code leakage</li><li>3: credential leakage</li></ul>
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
                     * 获取<p>Whitelist scope</p><p>Enumeration values:</p><ul><li>0: Selected image</li><li>1: All images</li></ul>
                     * @return Scope <p>Whitelist scope</p><p>Enumeration values:</p><ul><li>0: Selected image</li><li>1: All images</li></ul>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>Whitelist scope</p><p>Enumeration values:</p><ul><li>0: Selected image</li><li>1: All images</li></ul>
                     * @param _scope <p>Whitelist scope</p><p>Enumeration values:</p><ul><li>0: Selected image</li><li>1: All images</li></ul>
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
                     * 获取<p>Allowlist effective mirror id</p>
                     * @return ImageIds <p>Allowlist effective mirror id</p>
                     * 
                     */
                    std::vector<uint64_t> GetImageIds() const;

                    /**
                     * 设置<p>Allowlist effective mirror id</p>
                     * @param _imageIds <p>Allowlist effective mirror id</p>
                     * 
                     */
                    void SetImageIds(const std::vector<uint64_t>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

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

                    /**
                     * 获取<p>Effective status</p><p>Enumeration values:</p><ul><li>0: allowlist ineffective</li><li>1: allowlist effective</li></ul>
                     * @return Status <p>Effective status</p><p>Enumeration values:</p><ul><li>0: allowlist ineffective</li><li>1: allowlist effective</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Effective status</p><p>Enumeration values:</p><ul><li>0: allowlist ineffective</li><li>1: allowlist effective</li></ul>
                     * @param _status <p>Effective status</p><p>Enumeration values:</p><ul><li>0: allowlist ineffective</li><li>1: allowlist effective</li></ul>
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
                     * 获取<p>Sensitive information allowlist name</p>
                     * @return Name <p>Sensitive information allowlist name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Sensitive information allowlist name</p>
                     * @param _name <p>Sensitive information allowlist name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Update time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return UpdateTime <p>Update time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _updateTime <p>Update time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Sensitive information allowlist id</p>
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>Allowlist associated account name</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>Account uin of the allowlist</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>appid of the account associated with the allowlist</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>Allowlisted sensitive information types</p><p>Enumeration values:</p><ul><li>1: root startup</li><li>2: code leakage</li><li>3: credential leakage</li></ul>
                     */
                    uint64_t m_behavior;
                    bool m_behaviorHasBeenSet;

                    /**
                     * <p>Whitelist scope</p><p>Enumeration values:</p><ul><li>0: Selected image</li><li>1: All images</li></ul>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Allowlist effective mirror id</p>
                     */
                    std::vector<uint64_t> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Effective status</p><p>Enumeration values:</p><ul><li>0: allowlist ineffective</li><li>1: allowlist effective</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Sensitive information allowlist name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Update time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESENSITIVEWHITELIST_H_
