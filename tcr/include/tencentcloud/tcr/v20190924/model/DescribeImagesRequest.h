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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMAGESREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMAGESREQUEST_H_

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
                * DescribeImages request structure.
                */
                class DescribeImagesRequest : public AbstractModel
                {
                public:
                    DescribeImagesRequest();
                    ~DescribeImagesRequest() = default;
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
                     * 获取Namespace name
                     * @return NamespaceName Namespace name
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置Namespace name
                     * @param NamespaceName Namespace name
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取Image repository name
                     * @return RepositoryName Image repository name
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置Image repository name
                     * @param RepositoryName Image repository name
                     */
                    void SetRepositoryName(const std::string& _repositoryName);

                    /**
                     * 判断参数 RepositoryName 是否已赋值
                     * @return RepositoryName 是否已赋值
                     */
                    bool RepositoryNameHasBeenSet() const;

                    /**
                     * 获取Image tag specified for fuzzy search
                     * @return ImageVersion Image tag specified for fuzzy search
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置Image tag specified for fuzzy search
                     * @param ImageVersion Image tag specified for fuzzy search
                     */
                    void SetImageVersion(const std::string& _imageVersion);

                    /**
                     * 判断参数 ImageVersion 是否已赋值
                     * @return ImageVersion 是否已赋值
                     */
                    bool ImageVersionHasBeenSet() const;

                    /**
                     * 获取Number of entries per page, which is used for pagination. Default value: 20.
                     * @return Limit Number of entries per page, which is used for pagination. Default value: 20.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page, which is used for pagination. Default value: 20.
                     * @param Limit Number of entries per page, which is used for pagination. Default value: 20.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page number. Default value: 1.
                     * @return Offset Page number. Default value: 1.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: 1.
                     * @param Offset Page number. Default value: 1.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Image digest specified for search
                     * @return Digest Image digest specified for search
                     */
                    std::string GetDigest() const;

                    /**
                     * 设置Image digest specified for search
                     * @param Digest Image digest specified for search
                     */
                    void SetDigest(const std::string& _digest);

                    /**
                     * 判断参数 Digest 是否已赋值
                     * @return Digest 是否已赋值
                     */
                    bool DigestHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Namespace name
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * Image repository name
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * Image tag specified for fuzzy search
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                    /**
                     * Number of entries per page, which is used for pagination. Default value: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number. Default value: 1.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Image digest specified for search
                     */
                    std::string m_digest;
                    bool m_digestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMAGESREQUEST_H_
