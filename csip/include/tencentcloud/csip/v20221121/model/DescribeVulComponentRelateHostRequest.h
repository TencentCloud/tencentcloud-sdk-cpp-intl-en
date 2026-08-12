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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULCOMPONENTRELATEHOSTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULCOMPONENTRELATEHOSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeVulComponentRelateHost request structure.
                */
                class DescribeVulComponentRelateHostRequest : public AbstractModel
                {
                public:
                    DescribeVulComponentRelateHostRequest();
                    ~DescribeVulComponentRelateHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Vulnerability ID (vul_vuls.id)</p>
                     * @return VulID <p>Vulnerability ID (vul_vuls.id)</p>
                     * 
                     */
                    uint64_t GetVulID() const;

                    /**
                     * 设置<p>Vulnerability ID (vul_vuls.id)</p>
                     * @param _vulID <p>Vulnerability ID (vul_vuls.id)</p>
                     * 
                     */
                    void SetVulID(const uint64_t& _vulID);

                    /**
                     * 判断参数 VulID 是否已赋值
                     * @return VulID 是否已赋值
                     * 
                     */
                    bool VulIDHasBeenSet() const;

                    /**
                     * 获取<p>Component name.</p>
                     * @return Name <p>Component name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Component name.</p>
                     * @param _name <p>Component name.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

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
                     * 获取<p>Filter conditions array, multi-condition with each other are AND relationship<br>Supported Filter.Name:<br>Keyword: keyword fuzzy search (fuzzy matching for host name/IP/InstanceID)</p>
                     * @return Filters <p>Filter conditions array, multi-condition with each other are AND relationship<br>Supported Filter.Name:<br>Keyword: keyword fuzzy search (fuzzy matching for host name/IP/InstanceID)</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Filter conditions array, multi-condition with each other are AND relationship<br>Supported Filter.Name:<br>Keyword: keyword fuzzy search (fuzzy matching for host name/IP/InstanceID)</p>
                     * @param _filters <p>Filter conditions array, multi-condition with each other are AND relationship<br>Supported Filter.Name:<br>Keyword: keyword fuzzy search (fuzzy matching for host name/IP/InstanceID)</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     * @return Limit <p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     * @param _limit <p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
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
                     * 获取<p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     * @return Offset <p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     * @param _offset <p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>Vulnerability ID (vul_vuls.id)</p>
                     */
                    uint64_t m_vulID;
                    bool m_vulIDHasBeenSet;

                    /**
                     * <p>Component name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Filter conditions array, multi-condition with each other are AND relationship<br>Supported Filter.Name:<br>Keyword: keyword fuzzy search (fuzzy matching for host name/IP/InstanceID)</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULCOMPONENTRELATEHOSTREQUEST_H_
