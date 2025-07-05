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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEHOSTSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEHOSTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/SearchItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeHosts request structure.
                */
                class DescribeHostsRequest : public AbstractModel
                {
                public:
                    DescribeHostsRequest();
                    ~DescribeHostsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Protection domain. If a specific protection domain is to be queried, this parameter should be input. It requires an accurate domain and does not support fuzzy search.
                     * @return Domain Protection domain. If a specific protection domain is to be queried, this parameter should be input. It requires an accurate domain and does not support fuzzy search.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Protection domain. If a specific protection domain is to be queried, this parameter should be input. It requires an accurate domain and does not support fuzzy search.
                     * @param _domain Protection domain. If a specific protection domain is to be queried, this parameter should be input. It requires an accurate domain and does not support fuzzy search.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Protection domain ID. If it is to query a specific protection domain, this parameter is input, requiring the accurate domain ID. This parameter does not support fuzzy search.
                     * @return DomainId Protection domain ID. If it is to query a specific protection domain, this parameter is input, requiring the accurate domain ID. This parameter does not support fuzzy search.
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置Protection domain ID. If it is to query a specific protection domain, this parameter is input, requiring the accurate domain ID. This parameter does not support fuzzy search.
                     * @param _domainId Protection domain ID. If it is to query a specific protection domain, this parameter is input, requiring the accurate domain ID. This parameter does not support fuzzy search.
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取Searching criteria, fuzzy search on domain based on this parameter
                     * @return Search Searching criteria, fuzzy search on domain based on this parameter
                     * 
                     */
                    std::string GetSearch() const;

                    /**
                     * 设置Searching criteria, fuzzy search on domain based on this parameter
                     * @param _search Searching criteria, fuzzy search on domain based on this parameter
                     * 
                     */
                    void SetSearch(const std::string& _search);

                    /**
                     * 判断参数 Search 是否已赋值
                     * @return Search 是否已赋值
                     * 
                     */
                    bool SearchHasBeenSet() const;

                    /**
                     * 获取Complex search criteria
                     * @return Item Complex search criteria
                     * 
                     */
                    SearchItem GetItem() const;

                    /**
                     * 设置Complex search criteria
                     * @param _item Complex search criteria
                     * 
                     */
                    void SetItem(const SearchItem& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceID Instance ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceID Instance ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                private:

                    /**
                     * Protection domain. If a specific protection domain is to be queried, this parameter should be input. It requires an accurate domain and does not support fuzzy search.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Protection domain ID. If it is to query a specific protection domain, this parameter is input, requiring the accurate domain ID. This parameter does not support fuzzy search.
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * Searching criteria, fuzzy search on domain based on this parameter
                     */
                    std::string m_search;
                    bool m_searchHasBeenSet;

                    /**
                     * Complex search criteria
                     */
                    SearchItem m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEHOSTSREQUEST_H_
