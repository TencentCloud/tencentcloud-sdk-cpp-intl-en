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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVIRUSWHITELISTDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVIRUSWHITELISTDETAIL_H_

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
                * Trojan allowlist for container images
                */
                class ImageVirusWhitelistDetail : public AbstractModel
                {
                public:
                    ImageVirusWhitelistDetail();
                    ~ImageVirusWhitelistDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whitelist rule id</p>
                     * @return RuleId <p>Whitelist rule id</p>
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置<p>Whitelist rule id</p>
                     * @param _ruleId <p>Whitelist rule id</p>
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
                     * 获取<p>Allowlist associated account uin</p>
                     * @return OwnerUin <p>Allowlist associated account uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>Allowlist associated account uin</p>
                     * @param _ownerUin <p>Allowlist associated account uin</p>
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
                     * 获取<p>appid of the account that the allowlist belongs to</p>
                     * @return OwnerAppId <p>appid of the account that the allowlist belongs to</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>appid of the account that the allowlist belongs to</p>
                     * @param _ownerAppId <p>appid of the account that the allowlist belongs to</p>
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
                     * 获取<p>Whitelist effective range</p><p>Enumeration values:</p><ul><li>1: All images</li><li>0: Specified images</li></ul>
                     * @return Scope <p>Whitelist effective range</p><p>Enumeration values:</p><ul><li>1: All images</li><li>0: Specified images</li></ul>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>Whitelist effective range</p><p>Enumeration values:</p><ul><li>1: All images</li><li>0: Specified images</li></ul>
                     * @param _scope <p>Whitelist effective range</p><p>Enumeration values:</p><ul><li>1: All images</li><li>0: Specified images</li></ul>
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
                     * 获取<p>Image ID.</p>
                     * @return ImageIds <p>Image ID.</p>
                     * 
                     */
                    std::vector<uint64_t> GetImageIds() const;

                    /**
                     * 设置<p>Image ID.</p>
                     * @param _imageIds <p>Image ID.</p>
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
                     * 获取<p>Trojan whitelist md5 list</p>
                     * @return Md5List <p>Trojan whitelist md5 list</p>
                     * 
                     */
                    std::vector<std::string> GetMd5List() const;

                    /**
                     * 设置<p>Trojan whitelist md5 list</p>
                     * @param _md5List <p>Trojan whitelist md5 list</p>
                     * 
                     */
                    void SetMd5List(const std::vector<std::string>& _md5List);

                    /**
                     * 判断参数 Md5List 是否已赋值
                     * @return Md5List 是否已赋值
                     * 
                     */
                    bool Md5ListHasBeenSet() const;

                private:

                    /**
                     * <p>Whitelist rule id</p>
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>Allowlist associated account name</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>Allowlist associated account uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>appid of the account that the allowlist belongs to</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>Whitelist effective range</p><p>Enumeration values:</p><ul><li>1: All images</li><li>0: Specified images</li></ul>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Image ID.</p>
                     */
                    std::vector<uint64_t> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Trojan whitelist md5 list</p>
                     */
                    std::vector<std::string> m_md5List;
                    bool m_md5ListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVIRUSWHITELISTDETAIL_H_
