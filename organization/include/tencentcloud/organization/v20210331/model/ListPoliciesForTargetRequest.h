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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPOLICIESFORTARGETREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPOLICIESFORTARGETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * ListPoliciesForTarget request structure.
                */
                class ListPoliciesForTargetRequest : public AbstractModel
                {
                public:
                    ListPoliciesForTargetRequest();
                    ~ListPoliciesForTargetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Account UIN or node ID.
                     * @return TargetId Account UIN or node ID.
                     * 
                     */
                    uint64_t GetTargetId() const;

                    /**
                     * 设置Account UIN or node ID.
                     * @param _targetId Account UIN or node ID.
                     * 
                     */
                    void SetTargetId(const uint64_t& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取Items per page, which should be greater than 0 and less than or equal to 200. The default value is 20.
                     * @return Rp Items per page, which should be greater than 0 and less than or equal to 200. The default value is 20.
                     * 
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置Items per page, which should be greater than 0 and less than or equal to 200. The default value is 20.
                     * @param _rp Items per page, which should be greater than 0 and less than or equal to 200. The default value is 20.
                     * 
                     */
                    void SetRp(const uint64_t& _rp);

                    /**
                     * 判断参数 Rp 是否已赋值
                     * @return Rp 是否已赋值
                     * 
                     */
                    bool RpHasBeenSet() const;

                    /**
                     * 获取Page number, which starts from 1 and cannot exceed 200. The default value is 1.
                     * @return Page Page number, which starts from 1 and cannot exceed 200. The default value is 1.
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置Page number, which starts from 1 and cannot exceed 200. The default value is 1.
                     * @param _page Page number, which starts from 1 and cannot exceed 200. The default value is 1.
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Policy type. Valid values: SERVICE_CONTROL_POLICY: service control policy; TAG_POLICY: tag policy. The default value is SERVICE_CONTROL_POLICY.
                     * @return PolicyType Policy type. Valid values: SERVICE_CONTROL_POLICY: service control policy; TAG_POLICY: tag policy. The default value is SERVICE_CONTROL_POLICY.
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置Policy type. Valid values: SERVICE_CONTROL_POLICY: service control policy; TAG_POLICY: tag policy. The default value is SERVICE_CONTROL_POLICY.
                     * @param _policyType Policy type. Valid values: SERVICE_CONTROL_POLICY: service control policy; TAG_POLICY: tag policy. The default value is SERVICE_CONTROL_POLICY.
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取Search keywords. Searches can be performed by policy name.
                     * @return Keyword Search keywords. Searches can be performed by policy name.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Search keywords. Searches can be performed by policy name.
                     * @param _keyword Search keywords. Searches can be performed by policy name.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * Account UIN or node ID.
                     */
                    uint64_t m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * Items per page, which should be greater than 0 and less than or equal to 200. The default value is 20.
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * Page number, which starts from 1 and cannot exceed 200. The default value is 1.
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Policy type. Valid values: SERVICE_CONTROL_POLICY: service control policy; TAG_POLICY: tag policy. The default value is SERVICE_CONTROL_POLICY.
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * Search keywords. Searches can be performed by policy name.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPOLICIESFORTARGETREQUEST_H_
