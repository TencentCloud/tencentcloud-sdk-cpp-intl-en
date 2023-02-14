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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_PROOF_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_PROOF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * The credential signature.
                */
                class Proof : public AbstractModel
                {
                public:
                    Proof();
                    ~Proof() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The creation time.
                     * @return Created The creation time.
                     */
                    int64_t GetCreated() const;

                    /**
                     * 设置The creation time.
                     * @param Created The creation time.
                     */
                    void SetCreated(const int64_t& _created);

                    /**
                     * 判断参数 Created 是否已赋值
                     * @return Created 是否已赋值
                     */
                    bool CreatedHasBeenSet() const;

                    /**
                     * 获取The DID of the creator.
                     * @return Creator The DID of the creator.
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置The DID of the creator.
                     * @param Creator The DID of the creator.
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取The salt value.
                     * @return SaltJson The salt value.
                     */
                    std::string GetSaltJson() const;

                    /**
                     * 设置The salt value.
                     * @param SaltJson The salt value.
                     */
                    void SetSaltJson(const std::string& _saltJson);

                    /**
                     * 判断参数 SaltJson 是否已赋值
                     * @return SaltJson 是否已赋值
                     */
                    bool SaltJsonHasBeenSet() const;

                    /**
                     * 获取The signature.
                     * @return SignatureValue The signature.
                     */
                    std::string GetSignatureValue() const;

                    /**
                     * 设置The signature.
                     * @param SignatureValue The signature.
                     */
                    void SetSignatureValue(const std::string& _signatureValue);

                    /**
                     * 判断参数 SignatureValue 是否已赋值
                     * @return SignatureValue 是否已赋值
                     */
                    bool SignatureValueHasBeenSet() const;

                    /**
                     * 获取The type.
                     * @return Type The type.
                     */
                    std::string GetType() const;

                    /**
                     * 设置The type.
                     * @param Type The type.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * The creation time.
                     */
                    int64_t m_created;
                    bool m_createdHasBeenSet;

                    /**
                     * The DID of the creator.
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * The salt value.
                     */
                    std::string m_saltJson;
                    bool m_saltJsonHasBeenSet;

                    /**
                     * The signature.
                     */
                    std::string m_signatureValue;
                    bool m_signatureValueHasBeenSet;

                    /**
                     * The type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_PROOF_H_
