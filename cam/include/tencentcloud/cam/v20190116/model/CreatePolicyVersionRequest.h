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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATEPOLICYVERSIONREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATEPOLICYVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * CreatePolicyVersion request structure.
                */
                class CreatePolicyVersionRequest : public AbstractModel
                {
                public:
                    CreatePolicyVersionRequest();
                    ~CreatePolicyVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID
                     * @param PolicyId Policy ID
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取The policy document to use as the content for the new version
                     * @return PolicyDocument The policy document to use as the content for the new version
                     */
                    std::string GetPolicyDocument() const;

                    /**
                     * 设置The policy document to use as the content for the new version
                     * @param PolicyDocument The policy document to use as the content for the new version
                     */
                    void SetPolicyDocument(const std::string& _policyDocument);

                    /**
                     * 判断参数 PolicyDocument 是否已赋值
                     * @return PolicyDocument 是否已赋值
                     */
                    bool PolicyDocumentHasBeenSet() const;

                    /**
                     * 获取Specifies whether to set this version as the default version
                     * @return SetAsDefault Specifies whether to set this version as the default version
                     */
                    bool GetSetAsDefault() const;

                    /**
                     * 设置Specifies whether to set this version as the default version
                     * @param SetAsDefault Specifies whether to set this version as the default version
                     */
                    void SetSetAsDefault(const bool& _setAsDefault);

                    /**
                     * 判断参数 SetAsDefault 是否已赋值
                     * @return SetAsDefault 是否已赋值
                     */
                    bool SetAsDefaultHasBeenSet() const;

                private:

                    /**
                     * Policy ID
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * The policy document to use as the content for the new version
                     */
                    std::string m_policyDocument;
                    bool m_policyDocumentHasBeenSet;

                    /**
                     * Specifies whether to set this version as the default version
                     */
                    bool m_setAsDefault;
                    bool m_setAsDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATEPOLICYVERSIONREQUEST_H_
