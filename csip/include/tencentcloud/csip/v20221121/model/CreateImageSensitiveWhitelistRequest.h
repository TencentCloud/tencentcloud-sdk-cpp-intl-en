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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGESENSITIVEWHITELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGESENSITIVEWHITELISTREQUEST_H_

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
                * CreateImageSensitiveWhitelist request structure.
                */
                class CreateImageSensitiveWhitelistRequest : public AbstractModel
                {
                public:
                    CreateImageSensitiveWhitelistRequest();
                    ~CreateImageSensitiveWhitelistRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>Whitelisted sensitive information types</p><p>Enumeration values:</p><ul><li>1: root startup</li><li>2: code leak</li><li>3: credential leakage</li></ul>
                     * @return Behavior <p>Whitelisted sensitive information types</p><p>Enumeration values:</p><ul><li>1: root startup</li><li>2: code leak</li><li>3: credential leakage</li></ul>
                     * 
                     */
                    uint64_t GetBehavior() const;

                    /**
                     * 设置<p>Whitelisted sensitive information types</p><p>Enumeration values:</p><ul><li>1: root startup</li><li>2: code leak</li><li>3: credential leakage</li></ul>
                     * @param _behavior <p>Whitelisted sensitive information types</p><p>Enumeration values:</p><ul><li>1: root startup</li><li>2: code leak</li><li>3: credential leakage</li></ul>
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
                     * 获取<p>Effective image id.</p>
                     * @return ImageIds <p>Effective image id.</p>
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置<p>Effective image id.</p>
                     * @param _imageIds <p>Effective image id.</p>
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
                     * 获取<p>Whitelist effective range</p><p>Enumeration values:</p><ul><li>0: selected image</li><li>1: all images</li></ul>
                     * @return Scope <p>Whitelist effective range</p><p>Enumeration values:</p><ul><li>0: selected image</li><li>1: all images</li></ul>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>Whitelist effective range</p><p>Enumeration values:</p><ul><li>0: selected image</li><li>1: all images</li></ul>
                     * @param _scope <p>Whitelist effective range</p><p>Enumeration values:</p><ul><li>0: selected image</li><li>1: all images</li></ul>
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
                     * 获取<p>Effective status</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     * @return Status <p>Effective status</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Effective status</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     * @param _status <p>Effective status</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
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
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Whitelisted sensitive information types</p><p>Enumeration values:</p><ul><li>1: root startup</li><li>2: code leak</li><li>3: credential leakage</li></ul>
                     */
                    uint64_t m_behavior;
                    bool m_behaviorHasBeenSet;

                    /**
                     * <p>Effective image id.</p>
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * <p>Whitelist effective range</p><p>Enumeration values:</p><ul><li>0: selected image</li><li>1: all images</li></ul>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Effective status</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGESENSITIVEWHITELISTREQUEST_H_
