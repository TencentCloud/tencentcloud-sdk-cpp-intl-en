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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_STSCREDENTIALOUTPUT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_STSCREDENTIALOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * STS temporary key credential (dedicated for output parameters), used for the response of the query details API. The SecretID and SecretKey fields return masked values, and System returns the original text.
                */
                class STSCredentialOutput : public AbstractModel
                {
                public:
                    STSCredentialOutput();
                    ~STSCredentialOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Credential provider identifier (original), for example tencentCam, aws, aliyun
                     * @return System Credential provider identifier (original), for example tencentCam, aws, aliyun
                     * 
                     */
                    std::string GetSystem() const;

                    /**
                     * 设置Credential provider identifier (original), for example tencentCam, aws, aliyun
                     * @param _system Credential provider identifier (original), for example tencentCam, aws, aliyun
                     * 
                     */
                    void SetSystem(const std::string& _system);

                    /**
                     * 判断参数 System 是否已赋值
                     * @return System 是否已赋值
                     * 
                     */
                    bool SystemHasBeenSet() const;

                    /**
                     * 获取SecretID (masked)
Supplemental description: Reserve the first 3 and last 4 digits, replace the middle with ***. If the length is less than 7, use *** as a complete replacement.
                     * @return SecretID SecretID (masked)
Supplemental description: Reserve the first 3 and last 4 digits, replace the middle with ***. If the length is less than 7, use *** as a complete replacement.
                     * 
                     */
                    std::string GetSecretID() const;

                    /**
                     * 设置SecretID (masked)
Supplemental description: Reserve the first 3 and last 4 digits, replace the middle with ***. If the length is less than 7, use *** as a complete replacement.
                     * @param _secretID SecretID (masked)
Supplemental description: Reserve the first 3 and last 4 digits, replace the middle with ***. If the length is less than 7, use *** as a complete replacement.
                     * 
                     */
                    void SetSecretID(const std::string& _secretID);

                    /**
                     * 判断参数 SecretID 是否已赋值
                     * @return SecretID 是否已赋值
                     * 
                     */
                    bool SecretIDHasBeenSet() const;

                    /**
                     * 获取SecretKey (masked)
Supplemental description: Reserve the first 3 and last 4 digits, replace the middle with ***. If the length is less than 7, use *** as a complete replacement.
                     * @return SecretKey SecretKey (masked)
Supplemental description: Reserve the first 3 and last 4 digits, replace the middle with ***. If the length is less than 7, use *** as a complete replacement.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置SecretKey (masked)
Supplemental description: Reserve the first 3 and last 4 digits, replace the middle with ***. If the length is less than 7, use *** as a complete replacement.
                     * @param _secretKey SecretKey (masked)
Supplemental description: Reserve the first 3 and last 4 digits, replace the middle with ***. If the length is less than 7, use *** as a complete replacement.
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                private:

                    /**
                     * Credential provider identifier (original), for example tencentCam, aws, aliyun
                     */
                    std::string m_system;
                    bool m_systemHasBeenSet;

                    /**
                     * SecretID (masked)
Supplemental description: Reserve the first 3 and last 4 digits, replace the middle with ***. If the length is less than 7, use *** as a complete replacement.
                     */
                    std::string m_secretID;
                    bool m_secretIDHasBeenSet;

                    /**
                     * SecretKey (masked)
Supplemental description: Reserve the first 3 and last 4 digits, replace the middle with ***. If the length is less than 7, use *** as a complete replacement.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_STSCREDENTIALOUTPUT_H_
