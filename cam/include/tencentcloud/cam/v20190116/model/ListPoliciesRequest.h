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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTPOLICIESREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListPolicies request structure.
                */
                class ListPoliciesRequest : public AbstractModel
                {
                public:
                    ListPoliciesRequest();
                    ~ListPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of entries per page: must be greater than 0 and no greater than 200. Default is 20
                     * @return Rp Number of entries per page: must be greater than 0 and no greater than 200. Default is 20
                     * 
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置Number of entries per page: must be greater than 0 and no greater than 200. Default is 20
                     * @param _rp Number of entries per page: must be greater than 0 and no greater than 200. Default is 20
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
                     * 获取Page number. Starts from 1 and cannot be greater than 200. Default is 1
                     * @return Page Page number. Starts from 1 and cannot be greater than 200. Default is 1
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置Page number. Starts from 1 and cannot be greater than 200. Default is 1
                     * @param _page Page number. Starts from 1 and cannot be greater than 200. Default is 1
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
                     * 获取Valid values: `All`, `QCS`, and `Local`. `All` means all policies will be returned; `QCS` means only preset policies will be returned; `Local` means only custom policies will be returned. `All` is the default value
                     * @return Scope Valid values: `All`, `QCS`, and `Local`. `All` means all policies will be returned; `QCS` means only preset policies will be returned; `Local` means only custom policies will be returned. `All` is the default value
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置Valid values: `All`, `QCS`, and `Local`. `All` means all policies will be returned; `QCS` means only preset policies will be returned; `Local` means only custom policies will be returned. `All` is the default value
                     * @param _scope Valid values: `All`, `QCS`, and `Local`. `All` means all policies will be returned; `QCS` means only preset policies will be returned; `Local` means only custom policies will be returned. `All` is the default value
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取Filter by policy name
                     * @return Keyword Filter by policy name
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Filter by policy name
                     * @param _keyword Filter by policy name
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
                     * Number of entries per page: must be greater than 0 and no greater than 200. Default is 20
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * Page number. Starts from 1 and cannot be greater than 200. Default is 1
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Valid values: `All`, `QCS`, and `Local`. `All` means all policies will be returned; `QCS` means only preset policies will be returned; `Local` means only custom policies will be returned. `All` is the default value
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Filter by policy name
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTPOLICIESREQUEST_H_
