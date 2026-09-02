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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGEVULWHITELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGEVULWHITELISTREQUEST_H_

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
                * ModifyImageVulWhitelist request structure.
                */
                class ModifyImageVulWhitelistRequest : public AbstractModel
                {
                public:
                    ModifyImageVulWhitelistRequest();
                    ~ModifyImageVulWhitelistRequest() = default;
                    std::string ToJsonString() const;


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
                     * <p>Vulnerability allowlist id</p>
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Vulnerability id</p>
                     */
                    std::string m_pocId;
                    bool m_pocIdHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGEVULWHITELISTREQUEST_H_
