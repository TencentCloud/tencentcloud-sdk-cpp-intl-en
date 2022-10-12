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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYREPOSITORYREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYREPOSITORYREQUEST_H_

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
                * ModifyRepository request structure.
                */
                class ModifyRepositoryRequest : public AbstractModel
                {
                public:
                    ModifyRepositoryRequest();
                    ~ModifyRepositoryRequest() = default;
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
                     * 获取Brief repository description
                     * @return BriefDescription Brief repository description
                     */
                    std::string GetBriefDescription() const;

                    /**
                     * 设置Brief repository description
                     * @param BriefDescription Brief repository description
                     */
                    void SetBriefDescription(const std::string& _briefDescription);

                    /**
                     * 判断参数 BriefDescription 是否已赋值
                     * @return BriefDescription 是否已赋值
                     */
                    bool BriefDescriptionHasBeenSet() const;

                    /**
                     * 获取Detailed repository description
                     * @return Description Detailed repository description
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Detailed repository description
                     * @param Description Detailed repository description
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

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
                     * Brief repository description
                     */
                    std::string m_briefDescription;
                    bool m_briefDescriptionHasBeenSet;

                    /**
                     * Detailed repository description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYREPOSITORYREQUEST_H_
