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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CREATEKEYPAIRREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CREATEKEYPAIRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateKeyPair request structure.
                */
                class CreateKeyPairRequest : public AbstractModel
                {
                public:
                    CreateKeyPairRequest();
                    ~CreateKeyPairRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the key pair, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     * @return KeyName Name of the key pair, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置Name of the key pair, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     * @param _keyName Name of the key pair, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取ID of the project to which the created key pair belongs.

You can obtain a project ID in the following ways:
<li>Query the project ID through the project list.</li>
<li>Call the [DescribeProjects](https://intl.cloud.tencent.com/document/api/651/78725?from_cn_redirect=1) API and obtain the `projectId` from the return information.</li>
                     * @return ProjectId ID of the project to which the created key pair belongs.

You can obtain a project ID in the following ways:
<li>Query the project ID through the project list.</li>
<li>Call the [DescribeProjects](https://intl.cloud.tencent.com/document/api/651/78725?from_cn_redirect=1) API and obtain the `projectId` from the return information.</li>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置ID of the project to which the created key pair belongs.

You can obtain a project ID in the following ways:
<li>Query the project ID through the project list.</li>
<li>Call the [DescribeProjects](https://intl.cloud.tencent.com/document/api/651/78725?from_cn_redirect=1) API and obtain the `projectId` from the return information.</li>
                     * @param _projectId ID of the project to which the created key pair belongs.

You can obtain a project ID in the following ways:
<li>Query the project ID through the project list.</li>
<li>Call the [DescribeProjects](https://intl.cloud.tencent.com/document/api/651/78725?from_cn_redirect=1) API and obtain the `projectId` from the return information.</li>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Tag description list. This parameter is used to bind a tag to a key pair.
                     * @return TagSpecification Tag description list. This parameter is used to bind a tag to a key pair.
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置Tag description list. This parameter is used to bind a tag to a key pair.
                     * @param _tagSpecification Tag description list. This parameter is used to bind a tag to a key pair.
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                private:

                    /**
                     * Name of the key pair, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * ID of the project to which the created key pair belongs.

You can obtain a project ID in the following ways:
<li>Query the project ID through the project list.</li>
<li>Call the [DescribeProjects](https://intl.cloud.tencent.com/document/api/651/78725?from_cn_redirect=1) API and obtain the `projectId` from the return information.</li>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Tag description list. This parameter is used to bind a tag to a key pair.
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CREATEKEYPAIRREQUEST_H_
