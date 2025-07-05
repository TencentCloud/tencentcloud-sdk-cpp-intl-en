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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINCERTBINDINGSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINCERTBINDINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveDomainCertBindings request structure.
                */
                class DescribeLiveDomainCertBindingsRequest : public AbstractModel
                {
                public:
                    DescribeLiveDomainCertBindingsRequest();
                    ~DescribeLiveDomainCertBindingsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The keyword to use to search for domains.
                     * @return DomainSearch The keyword to use to search for domains.
                     * 
                     */
                    std::string GetDomainSearch() const;

                    /**
                     * 设置The keyword to use to search for domains.
                     * @param _domainSearch The keyword to use to search for domains.
                     * 
                     */
                    void SetDomainSearch(const std::string& _domainSearch);

                    /**
                     * 判断参数 DomainSearch 是否已赋值
                     * @return DomainSearch 是否已赋值
                     * 
                     */
                    bool DomainSearchHasBeenSet() const;

                    /**
                     * 获取The number of records to skip before starting to return any results. 0 means to start from the first record and is the default.
                     * @return Offset The number of records to skip before starting to return any results. 0 means to start from the first record and is the default.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The number of records to skip before starting to return any results. 0 means to start from the first record and is the default.
                     * @param _offset The number of records to skip before starting to return any results. 0 means to start from the first record and is the default.
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
                     * 获取The maximum number of records to return. The default is 50.
If this parameter is not specified, up to 50 records will be returned.
                     * @return Length The maximum number of records to return. The default is 50.
If this parameter is not specified, up to 50 records will be returned.
                     * 
                     */
                    int64_t GetLength() const;

                    /**
                     * 设置The maximum number of records to return. The default is 50.
If this parameter is not specified, up to 50 records will be returned.
                     * @param _length The maximum number of records to return. The default is 50.
If this parameter is not specified, up to 50 records will be returned.
                     * 
                     */
                    void SetLength(const int64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取The name of a particular domain to query.
                     * @return DomainName The name of a particular domain to query.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置The name of a particular domain to query.
                     * @param _domainName The name of a particular domain to query.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Valid values:
ExpireTimeAsc: Sort the records by certificate expiration time in ascending order.
ExpireTimeDesc: Sort the records by certificate expiration time in descending order.
                     * @return OrderBy Valid values:
ExpireTimeAsc: Sort the records by certificate expiration time in ascending order.
ExpireTimeDesc: Sort the records by certificate expiration time in descending order.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Valid values:
ExpireTimeAsc: Sort the records by certificate expiration time in ascending order.
ExpireTimeDesc: Sort the records by certificate expiration time in descending order.
                     * @param _orderBy Valid values:
ExpireTimeAsc: Sort the records by certificate expiration time in ascending order.
ExpireTimeDesc: Sort the records by certificate expiration time in descending order.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * The keyword to use to search for domains.
                     */
                    std::string m_domainSearch;
                    bool m_domainSearchHasBeenSet;

                    /**
                     * The number of records to skip before starting to return any results. 0 means to start from the first record and is the default.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The maximum number of records to return. The default is 50.
If this parameter is not specified, up to 50 records will be returned.
                     */
                    int64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * The name of a particular domain to query.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Valid values:
ExpireTimeAsc: Sort the records by certificate expiration time in ascending order.
ExpireTimeDesc: Sort the records by certificate expiration time in descending order.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINCERTBINDINGSREQUEST_H_
