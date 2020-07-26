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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CREATEKEYPAIRREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CREATEKEYPAIRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


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
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置Name of the key pair, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     * @param KeyName Name of the key pair, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取The ID of the project to which the new key pair belongs.
You can query the project IDs in two ways:
<li>Query the project IDs in the project list.
<li>Call `DescribeProject` and look for `projectId` in the response.
                     * @return ProjectId The ID of the project to which the new key pair belongs.
You can query the project IDs in two ways:
<li>Query the project IDs in the project list.
<li>Call `DescribeProject` and look for `projectId` in the response.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置The ID of the project to which the new key pair belongs.
You can query the project IDs in two ways:
<li>Query the project IDs in the project list.
<li>Call `DescribeProject` and look for `projectId` in the response.
                     * @param ProjectId The ID of the project to which the new key pair belongs.
You can query the project IDs in two ways:
<li>Query the project IDs in the project list.
<li>Call `DescribeProject` and look for `projectId` in the response.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * Name of the key pair, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * The ID of the project to which the new key pair belongs.
You can query the project IDs in two ways:
<li>Query the project IDs in the project list.
<li>Call `DescribeProject` and look for `projectId` in the response.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CREATEKEYPAIRREQUEST_H_
