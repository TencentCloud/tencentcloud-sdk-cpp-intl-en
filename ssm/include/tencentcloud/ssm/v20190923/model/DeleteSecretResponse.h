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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETRESPONSE_H_

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
                * DeleteSecret response structure.
                */
                class DeleteSecretResponse : public AbstractModel
                {
                public:
                    DeleteSecretResponse();
                    ~DeleteSecretResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of deleted Secret.
                     * @return SecretName Name of deleted Secret.
                     */
                    std::string GetSecretName() const;

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取Secret deletion time, formatted as a Unix timestamp.
                     * @return DeleteTime Secret deletion time, formatted as a Unix timestamp.
                     */
                    int64_t GetDeleteTime() const;

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     */
                    bool DeleteTimeHasBeenSet() const;

                private:

                    /**
                     * Name of deleted Secret.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * Secret deletion time, formatted as a Unix timestamp.
                     */
                    int64_t m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETRESPONSE_H_
