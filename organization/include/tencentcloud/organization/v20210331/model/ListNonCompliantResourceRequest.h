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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTNONCOMPLIANTRESOURCEREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTNONCOMPLIANTRESOURCEREQUEST_H_

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
                * ListNonCompliantResource request structure.
                */
                class ListNonCompliantResourceRequest : public AbstractModel
                {
                public:
                    ListNonCompliantResourceRequest();
                    ~ListNonCompliantResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Limit. Value range: 1–50.
                     * @return MaxResults Limit. Value range: 1–50.
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置Limit. Value range: 1–50.
                     * @param _maxResults Limit. Value range: 1–50.
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取Member UIN.
                     * @return MemberUin Member UIN.
                     * 
                     */
                    uint64_t GetMemberUin() const;

                    /**
                     * 设置Member UIN.
                     * @param _memberUin Member UIN.
                     * 
                     */
                    void SetMemberUin(const uint64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取Token value obtained from the previous page response.
If it is the first request, set to empty.
                     * @return PaginationToken Token value obtained from the previous page response.
If it is the first request, set to empty.
                     * 
                     */
                    std::string GetPaginationToken() const;

                    /**
                     * 设置Token value obtained from the previous page response.
If it is the first request, set to empty.
                     * @param _paginationToken Token value obtained from the previous page response.
If it is the first request, set to empty.
                     * 
                     */
                    void SetPaginationToken(const std::string& _paginationToken);

                    /**
                     * 判断参数 PaginationToken 是否已赋值
                     * @return PaginationToken 是否已赋值
                     * 
                     */
                    bool PaginationTokenHasBeenSet() const;

                    /**
                     * 获取Tag key.
                     * @return TagKey Tag key.
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Tag key.
                     * @param _tagKey Tag key.
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                private:

                    /**
                     * Limit. Value range: 1–50.
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * Member UIN.
                     */
                    uint64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Token value obtained from the previous page response.
If it is the first request, set to empty.
                     */
                    std::string m_paginationToken;
                    bool m_paginationTokenHasBeenSet;

                    /**
                     * Tag key.
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTNONCOMPLIANTRESOURCEREQUEST_H_
