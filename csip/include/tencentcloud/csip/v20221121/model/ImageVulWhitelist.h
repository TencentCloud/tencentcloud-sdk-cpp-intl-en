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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVULWHITELIST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVULWHITELIST_H_

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
                * Vulnerability allowlist for container images
                */
                class ImageVulWhitelist : public AbstractModel
                {
                public:
                    ImageVulWhitelist();
                    ~ImageVulWhitelist() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Vulnerability allowlist id</p>
                     * @return RuleId <p>Vulnerability allowlist id</p>
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置<p>Vulnerability allowlist id</p>
                     * @param _ruleId <p>Vulnerability allowlist id</p>
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
                     * 获取<p>Account name of the allowlist</p>
                     * @return OwnerAccountName <p>Account name of the allowlist</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>Account name of the allowlist</p>
                     * @param _ownerAccountName <p>Account name of the allowlist</p>
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
                     * 获取<p>uin of the account to which the allowlist belongs</p>
                     * @return OwnerUin <p>uin of the account to which the allowlist belongs</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>uin of the account to which the allowlist belongs</p>
                     * @param _ownerUin <p>uin of the account to which the allowlist belongs</p>
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
                     * 获取<p>appid of the associated account with the allowlist</p>
                     * @return OwnerAppId <p>appid of the associated account with the allowlist</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>appid of the associated account with the allowlist</p>
                     * @param _ownerAppId <p>appid of the associated account with the allowlist</p>
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
                     * 获取<p>Whitelist scope</p><p>Enumeration values:</p><ul><li>0: Selected images</li><li>1: All images</li></ul>
                     * @return Scope <p>Whitelist scope</p><p>Enumeration values:</p><ul><li>0: Selected images</li><li>1: All images</li></ul>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>Whitelist scope</p><p>Enumeration values:</p><ul><li>0: Selected images</li><li>1: All images</li></ul>
                     * @param _scope <p>Whitelist scope</p><p>Enumeration values:</p><ul><li>0: Selected images</li><li>1: All images</li></ul>
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
                     * 获取<p>Vulnerability id</p>
                     * @return PocId <p>Vulnerability id</p>
                     * 
                     */
                    std::string GetPocId() const;

                    /**
                     * 设置<p>Vulnerability id</p>
                     * @param _pocId <p>Vulnerability id</p>
                     * 
                     */
                    void SetPocId(const std::string& _pocId);

                    /**
                     * 判断参数 PocId 是否已赋值
                     * @return PocId 是否已赋值
                     * 
                     */
                    bool PocIdHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability allowlist name</p>
                     * @return VulName <p>Vulnerability allowlist name</p>
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置<p>Vulnerability allowlist name</p>
                     * @param _vulName <p>Vulnerability allowlist name</p>
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取<p>Whitelist status</p><p>Enumeration values:</p><ul><li>0: Inactive</li><li>1: Active</li></ul>
                     * @return Status <p>Whitelist status</p><p>Enumeration values:</p><ul><li>0: Inactive</li><li>1: Active</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Whitelist status</p><p>Enumeration values:</p><ul><li>0: Inactive</li><li>1: Active</li></ul>
                     * @param _status <p>Whitelist status</p><p>Enumeration values:</p><ul><li>0: Inactive</li><li>1: Active</li></ul>
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
                     * <p>Vulnerability allowlist id</p>
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>Account name of the allowlist</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>uin of the account to which the allowlist belongs</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>appid of the associated account with the allowlist</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>Whitelist scope</p><p>Enumeration values:</p><ul><li>0: Selected images</li><li>1: All images</li></ul>
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
                     * <p>Vulnerability id</p>
                     */
                    std::string m_pocId;
                    bool m_pocIdHasBeenSet;

                    /**
                     * <p>Vulnerability allowlist name</p>
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * <p>Whitelist status</p><p>Enumeration values:</p><ul><li>0: Inactive</li><li>1: Active</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVULWHITELIST_H_
