/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEVODDOMAINSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEVODDOMAINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeVodDomains request structure.
                */
                class DescribeVodDomainsRequest : public AbstractModel
                {
                public:
                    DescribeVodDomainsRequest();
                    ~DescribeVodDomainsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of domain names. If this parameter is left empty, all domain names will be listed.
<li>Maximum number of domain names listed: 20</li>
                     * @return Domains List of domain names. If this parameter is left empty, all domain names will be listed.
<li>Maximum number of domain names listed: 20</li>
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置List of domain names. If this parameter is left empty, all domain names will be listed.
<li>Maximum number of domain names listed: 20</li>
                     * @param _domains List of domain names. If this parameter is left empty, all domain names will be listed.
<li>Maximum number of domain names listed: 20</li>
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Maximum results to return for pulling paginated queries. Default value: 20
                     * @return Limit Maximum results to return for pulling paginated queries. Default value: 20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum results to return for pulling paginated queries. Default value: 20
                     * @param _limit Maximum results to return for pulling paginated queries. Default value: 20
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page number offset from the beginning of paginated queries. Default value: 0
                     * @return Offset Page number offset from the beginning of paginated queries. Default value: 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page number offset from the beginning of paginated queries. Default value: 0
                     * @param _offset Page number offset from the beginning of paginated queries. Default value: 0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     * @return SubAppId VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     * @param _subAppId VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * List of domain names. If this parameter is left empty, all domain names will be listed.
<li>Maximum number of domain names listed: 20</li>
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Maximum results to return for pulling paginated queries. Default value: 20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number offset from the beginning of paginated queries. Default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEVODDOMAINSREQUEST_H_
