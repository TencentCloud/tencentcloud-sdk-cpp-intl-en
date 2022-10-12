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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPOSITORIESREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPOSITORIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeRepositories request structure.
                */
                class DescribeRepositoriesRequest : public AbstractModel
                {
                public:
                    DescribeRepositoriesRequest();
                    ~DescribeRepositoriesRequest() = default;
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
                     * 获取Specified namespace. If this parameter is left empty, image repositories in all namespaces will be queried.
                     * @return NamespaceName Specified namespace. If this parameter is left empty, image repositories in all namespaces will be queried.
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置Specified namespace. If this parameter is left empty, image repositories in all namespaces will be queried.
                     * @param NamespaceName Specified namespace. If this parameter is left empty, image repositories in all namespaces will be queried.
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取Specified image repository. If this parameter is left empty, all image repositories in the specified namespace will be queried.
                     * @return RepositoryName Specified image repository. If this parameter is left empty, all image repositories in the specified namespace will be queried.
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置Specified image repository. If this parameter is left empty, all image repositories in the specified namespace will be queried.
                     * @param RepositoryName Specified image repository. If this parameter is left empty, all image repositories in the specified namespace will be queried.
                     */
                    void SetRepositoryName(const std::string& _repositoryName);

                    /**
                     * 判断参数 RepositoryName 是否已赋值
                     * @return RepositoryName 是否已赋值
                     */
                    bool RepositoryNameHasBeenSet() const;

                    /**
                     * 获取Page number, which is used for pagination
                     * @return Offset Page number, which is used for pagination
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number, which is used for pagination
                     * @param Offset Page number, which is used for pagination
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of entries per page, which is used for pagination
                     * @return Limit Number of entries per page, which is used for pagination
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page, which is used for pagination
                     * @param Limit Number of entries per page, which is used for pagination
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Sort field. Valid values: -creation_time, -name, -update_time.
                     * @return SortBy Sort field. Valid values: -creation_time, -name, -update_time.
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置Sort field. Valid values: -creation_time, -name, -update_time.
                     * @param SortBy Sort field. Valid values: -creation_time, -name, -update_time.
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     */
                    bool SortByHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Specified namespace. If this parameter is left empty, image repositories in all namespaces will be queried.
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * Specified image repository. If this parameter is left empty, all image repositories in the specified namespace will be queried.
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * Page number, which is used for pagination
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page, which is used for pagination
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sort field. Valid values: -creation_time, -name, -update_time.
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPOSITORIESREQUEST_H_
