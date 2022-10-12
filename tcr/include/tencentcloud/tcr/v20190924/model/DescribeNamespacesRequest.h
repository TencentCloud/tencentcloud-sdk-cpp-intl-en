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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBENAMESPACESREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBENAMESPACESREQUEST_H_

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
                * DescribeNamespaces request structure.
                */
                class DescribeNamespacesRequest : public AbstractModel
                {
                public:
                    DescribeNamespacesRequest();
                    ~DescribeNamespacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return RegistryId Instance ID
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Instance ID
                     * @param RegistryId Instance ID
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Specified namespace. If this parameter is left empty, all namespaces will be queried.
                     * @return NamespaceName Specified namespace. If this parameter is left empty, all namespaces will be queried.
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置Specified namespace. If this parameter is left empty, all namespaces will be queried.
                     * @param NamespaceName Specified namespace. If this parameter is left empty, all namespaces will be queried.
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取Number of entries per page
                     * @return Limit Number of entries per page
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page
                     * @param Limit Number of entries per page
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page offset (page number from which to return the results)
                     * @return Offset Page offset (page number from which to return the results)
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset (page number from which to return the results)
                     * @param Offset Page offset (page number from which to return the results)
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Whether to list all namespaces
                     * @return All Whether to list all namespaces
                     */
                    bool GetAll() const;

                    /**
                     * 设置Whether to list all namespaces
                     * @param All Whether to list all namespaces
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取Filters
                     * @return Filters Filters
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filters
                     * @param Filters Filters
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Whether to query only namespaces for which the KMS image signature is enabled
                     * @return KmsSignPolicy Whether to query only namespaces for which the KMS image signature is enabled
                     */
                    bool GetKmsSignPolicy() const;

                    /**
                     * 设置Whether to query only namespaces for which the KMS image signature is enabled
                     * @param KmsSignPolicy Whether to query only namespaces for which the KMS image signature is enabled
                     */
                    void SetKmsSignPolicy(const bool& _kmsSignPolicy);

                    /**
                     * 判断参数 KmsSignPolicy 是否已赋值
                     * @return KmsSignPolicy 是否已赋值
                     */
                    bool KmsSignPolicyHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Specified namespace. If this parameter is left empty, all namespaces will be queried.
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * Number of entries per page
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page offset (page number from which to return the results)
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Whether to list all namespaces
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * Filters
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Whether to query only namespaces for which the KMS image signature is enabled
                     */
                    bool m_kmsSignPolicy;
                    bool m_kmsSignPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBENAMESPACESREQUEST_H_
