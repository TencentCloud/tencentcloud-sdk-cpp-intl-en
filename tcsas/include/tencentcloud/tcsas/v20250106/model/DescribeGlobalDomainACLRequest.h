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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEGLOBALDOMAINACLREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEGLOBALDOMAINACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * DescribeGlobalDomainACL request structure.
                */
                class DescribeGlobalDomainACLRequest : public AbstractModel
                {
                public:
                    DescribeGlobalDomainACLRequest();
                    ~DescribeGlobalDomainACLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination offset. 
                     * @return Offset Pagination offset. 
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. 
                     * @param _offset Pagination offset. 
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of entries per page.
                     * @return Limit Number of entries per page.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page.
                     * @param _limit Number of entries per page.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Platform ID.
                     * @return PlatformId Platform ID.
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID.
                     * @param _platformId Platform ID.
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取Domain type. Valid value: 1: Allowed; 2: Blocked.
                     * @return DomainTypes Domain type. Valid value: 1: Allowed; 2: Blocked.
                     * 
                     */
                    std::vector<int64_t> GetDomainTypes() const;

                    /**
                     * 设置Domain type. Valid value: 1: Allowed; 2: Blocked.
                     * @param _domainTypes Domain type. Valid value: 1: Allowed; 2: Blocked.
                     * 
                     */
                    void SetDomainTypes(const std::vector<int64_t>& _domainTypes);

                    /**
                     * 判断参数 DomainTypes 是否已赋值
                     * @return DomainTypes 是否已赋值
                     * 
                     */
                    bool DomainTypesHasBeenSet() const;

                    /**
                     * 获取Search keyword (domain).
                     * @return Keyword Search keyword (domain).
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Search keyword (domain).
                     * @param _keyword Search keyword (domain).
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
                     * Pagination offset. 
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Platform ID.
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Domain type. Valid value: 1: Allowed; 2: Blocked.
                     */
                    std::vector<int64_t> m_domainTypes;
                    bool m_domainTypesHasBeenSet;

                    /**
                     * Search keyword (domain).
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEGLOBALDOMAINACLREQUEST_H_
