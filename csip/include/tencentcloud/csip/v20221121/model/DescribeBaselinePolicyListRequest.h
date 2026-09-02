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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEPOLICYLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEPOLICYLISTREQUEST_H_

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
                * DescribeBaselinePolicyList request structure.
                */
                class DescribeBaselinePolicyListRequest : public AbstractModel
                {
                public:
                    DescribeBaselinePolicyListRequest();
                    ~DescribeBaselinePolicyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     * @return PolicyType <p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置<p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     * @param _policyType <p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
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
                     * 获取<p>Universal Filter Criteria. Supported filter fields are as follows:</p><li>Name - Policy Name (fuzzy matching)</li><li>Enable - whether enabled</li><li>CycleScanEnable - whether period scanning is enabled</li>
                     * @return Filters <p>Universal Filter Criteria. Supported filter fields are as follows:</p><li>Name - Policy Name (fuzzy matching)</li><li>Enable - whether enabled</li><li>CycleScanEnable - whether period scanning is enabled</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Universal Filter Criteria. Supported filter fields are as follows:</p><li>Name - Policy Name (fuzzy matching)</li><li>Enable - whether enabled</li><li>CycleScanEnable - whether period scanning is enabled</li>
                     * @param _filters <p>Universal Filter Criteria. Supported filter fields are as follows:</p><li>Name - Policy Name (fuzzy matching)</li><li>Enable - whether enabled</li><li>CycleScanEnable - whether period scanning is enabled</li>
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
                     * 获取<p>Number of items per page for paging query. Maximum value: 100. If exceeded, the server will automatically roll back to the default value 10.</p>
                     * @return Limit <p>Number of items per page for paging query. Maximum value: 100. If exceeded, the server will automatically roll back to the default value 10.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of items per page for paging query. Maximum value: 100. If exceeded, the server will automatically roll back to the default value 10.</p>
                     * @param _limit <p>Number of items per page for paging query. Maximum value: 100. If exceeded, the server will automatically roll back to the default value 10.</p>
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
                     * 获取<p>Starting offset amount for paging query. It starts from 0.</p>
                     * @return Offset <p>Starting offset amount for paging query. It starts from 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Starting offset amount for paging query. It starts from 0.</p>
                     * @param _offset <p>Starting offset amount for paging query. It starts from 0.</p>
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
                     * <p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Universal Filter Criteria. Supported filter fields are as follows:</p><li>Name - Policy Name (fuzzy matching)</li><li>Enable - whether enabled</li><li>CycleScanEnable - whether period scanning is enabled</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Number of items per page for paging query. Maximum value: 100. If exceeded, the server will automatically roll back to the default value 10.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Starting offset amount for paging query. It starts from 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEPOLICYLISTREQUEST_H_
