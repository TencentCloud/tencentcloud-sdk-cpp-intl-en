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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_CREATESECRETRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_CREATESECRETRESPONSE_H_

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
                * CreateSecret response structure.
                */
                class CreateSecretResponse : public AbstractModel
                {
                public:
                    CreateSecretResponse();
                    ~CreateSecretResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the new Secret.
                     * @return SecretName Name of the new Secret.
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取ID of the new Secret version.
                     * @return VersionId ID of the new Secret version.
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取Return code of tag operation. `0`: success; `1`: internal error; `2`: business processing error
Note: This field may return `null`, indicating that no valid value was found.
                     * @return TagCode Return code of tag operation. `0`: success; `1`: internal error; `2`: business processing error
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetTagCode() const;

                    /**
                     * 判断参数 TagCode 是否已赋值
                     * @return TagCode 是否已赋值
                     * 
                     */
                    bool TagCodeHasBeenSet() const;

                    /**
                     * 获取Return message of tag operation.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return TagMsg Return message of tag operation.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetTagMsg() const;

                    /**
                     * 判断参数 TagMsg 是否已赋值
                     * @return TagMsg 是否已赋值
                     * 
                     */
                    bool TagMsgHasBeenSet() const;

                private:

                    /**
                     * Name of the new Secret.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * ID of the new Secret version.
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * Return code of tag operation. `0`: success; `1`: internal error; `2`: business processing error
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_tagCode;
                    bool m_tagCodeHasBeenSet;

                    /**
                     * Return message of tag operation.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_tagMsg;
                    bool m_tagMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_CREATESECRETRESPONSE_H_
