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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATENAMESPACEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATENAMESPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateNamespace request structure.
                */
                class CreateNamespaceRequest : public AbstractModel
                {
                public:
                    CreateNamespaceRequest();
                    ~CreateNamespaceRequest() = default;
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
                     * 获取Namespace name, which can contain 2–30 lowercase letters, digits, and separators (".", "_", and "-") but can neither start or end with a separator nor contain consecutive separators.
                     * @return NamespaceName Namespace name, which can contain 2–30 lowercase letters, digits, and separators (".", "_", and "-") but can neither start or end with a separator nor contain consecutive separators.
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置Namespace name, which can contain 2–30 lowercase letters, digits, and separators (".", "_", and "-") but can neither start or end with a separator nor contain consecutive separators.
                     * @param NamespaceName Namespace name, which can contain 2–30 lowercase letters, digits, and separators (".", "_", and "-") but can neither start or end with a separator nor contain consecutive separators.
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取Whether to make public. Valid values: true: Yes; false: No.
                     * @return IsPublic Whether to make public. Valid values: true: Yes; false: No.
                     */
                    bool GetIsPublic() const;

                    /**
                     * 设置Whether to make public. Valid values: true: Yes; false: No.
                     * @param IsPublic Whether to make public. Valid values: true: Yes; false: No.
                     */
                    void SetIsPublic(const bool& _isPublic);

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     */
                    bool IsPublicHasBeenSet() const;

                    /**
                     * 获取Cloud tag description
                     * @return TagSpecification Cloud tag description
                     */
                    TagSpecification GetTagSpecification() const;

                    /**
                     * 设置Cloud tag description
                     * @param TagSpecification Cloud tag description
                     */
                    void SetTagSpecification(const TagSpecification& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     */
                    bool TagSpecificationHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Namespace name, which can contain 2–30 lowercase letters, digits, and separators (".", "_", and "-") but can neither start or end with a separator nor contain consecutive separators.
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * Whether to make public. Valid values: true: Yes; false: No.
                     */
                    bool m_isPublic;
                    bool m_isPublicHasBeenSet;

                    /**
                     * Cloud tag description
                     */
                    TagSpecification m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATENAMESPACEREQUEST_H_
