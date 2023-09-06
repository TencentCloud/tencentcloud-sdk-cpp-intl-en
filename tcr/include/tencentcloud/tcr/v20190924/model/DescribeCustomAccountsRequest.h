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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBECUSTOMACCOUNTSREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBECUSTOMACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/Filter.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeCustomAccounts request structure.
                */
                class DescribeCustomAccountsRequest : public AbstractModel
                {
                public:
                    DescribeCustomAccountsRequest();
                    ~DescribeCustomAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return RegistryId Instance ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Instance ID
                     * @param _registryId Instance ID
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取All custom accounts
                     * @return All All custom accounts
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置All custom accounts
                     * @param _all All custom accounts
                     * 
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取Whether to enter the policy
                     * @return EmbedPermission Whether to enter the policy
                     * 
                     */
                    bool GetEmbedPermission() const;

                    /**
                     * 设置Whether to enter the policy
                     * @param _embedPermission Whether to enter the policy
                     * 
                     */
                    void SetEmbedPermission(const bool& _embedPermission);

                    /**
                     * 判断参数 EmbedPermission 是否已赋值
                     * @return EmbedPermission 是否已赋值
                     * 
                     */
                    bool EmbedPermissionHasBeenSet() const;

                    /**
                     * 获取Filters
                     * @return Filters Filters
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filters
                     * @param _filters Filters
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: `0`
                     * @return Offset Offset. Default value: `0`
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`
                     * @param _offset Offset. Default value: `0`
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
                     * 获取Maximum number of output entries. Default value: `20`. Maximum value: 100`.
                     * @return Limit Maximum number of output entries. Default value: `20`. Maximum value: 100`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of output entries. Default value: `20`. Maximum value: 100`.
                     * @param _limit Maximum number of output entries. Default value: `20`. Maximum value: 100`.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * All custom accounts
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * Whether to enter the policy
                     */
                    bool m_embedPermission;
                    bool m_embedPermissionHasBeenSet;

                    /**
                     * Filters
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: `0`
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of output entries. Default value: `20`. Maximum value: 100`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBECUSTOMACCOUNTSREQUEST_H_
