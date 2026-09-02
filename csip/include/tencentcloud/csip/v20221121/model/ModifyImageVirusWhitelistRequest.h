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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGEVIRUSWHITELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGEVIRUSWHITELISTREQUEST_H_

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
                * ModifyImageVirusWhitelist request structure.
                */
                class ModifyImageVirusWhitelistRequest : public AbstractModel
                {
                public:
                    ModifyImageVirusWhitelistRequest();
                    ~ModifyImageVirusWhitelistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Trojan whitelist id</p>
                     * @return RuleId <p>Trojan whitelist id</p>
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置<p>Trojan whitelist id</p>
                     * @param _ruleId <p>Trojan whitelist id</p>
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
                     * 获取<p>Trojan whitelist md5</p>
                     * @return Md5List <p>Trojan whitelist md5</p>
                     * 
                     */
                    std::vector<std::string> GetMd5List() const;

                    /**
                     * 设置<p>Trojan whitelist md5</p>
                     * @param _md5List <p>Trojan whitelist md5</p>
                     * 
                     */
                    void SetMd5List(const std::vector<std::string>& _md5List);

                    /**
                     * 判断参数 Md5List 是否已赋值
                     * @return Md5List 是否已赋值
                     * 
                     */
                    bool Md5ListHasBeenSet() const;

                    /**
                     * 获取<p>Whitelist effective range</p>
                     * @return Scope <p>Whitelist effective range</p>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>Whitelist effective range</p>
                     * @param _scope <p>Whitelist effective range</p>
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
                     * 获取<p>Image id list for the effective allowlist</p>
                     * @return ImageIds <p>Image id list for the effective allowlist</p>
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置<p>Image id list for the effective allowlist</p>
                     * @param _imageIds <p>Image id list for the effective allowlist</p>
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
                     * 获取<p>Whether to enable</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     * @return Status <p>Whether to enable</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Whether to enable</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     * @param _status <p>Whether to enable</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
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
                     * 获取<p>Allowlist name</p>
                     * @return Name <p>Allowlist name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Allowlist name</p>
                     * @param _name <p>Allowlist name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * <p>Trojan whitelist id</p>
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Trojan whitelist md5</p>
                     */
                    std::vector<std::string> m_md5List;
                    bool m_md5ListHasBeenSet;

                    /**
                     * <p>Whitelist effective range</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Image id list for the effective allowlist</p>
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Whether to enable</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Allowlist name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGEVIRUSWHITELISTREQUEST_H_
