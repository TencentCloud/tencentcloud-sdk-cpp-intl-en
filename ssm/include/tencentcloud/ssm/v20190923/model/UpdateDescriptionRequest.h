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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_UPDATEDESCRIPTIONREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_UPDATEDESCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * UpdateDescription request structure.
                */
                class UpdateDescriptionRequest : public AbstractModel
                {
                public:
                    UpdateDescriptionRequest();
                    ~UpdateDescriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of a Secret whose description is to be updated.
                     * @return SecretName Name of a Secret whose description is to be updated.
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Name of a Secret whose description is to be updated.
                     * @param _secretName Name of a Secret whose description is to be updated.
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取New description information, which can be up to 2048 bytes.
                     * @return Description New description information, which can be up to 2048 bytes.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置New description information, which can be up to 2048 bytes.
                     * @param _description New description information, which can be up to 2048 bytes.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Name of a Secret whose description is to be updated.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * New description information, which can be up to 2048 bytes.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_UPDATEDESCRIPTIONREQUEST_H_
