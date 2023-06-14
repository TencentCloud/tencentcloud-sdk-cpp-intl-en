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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_GETPARAMETERSFORIMPORTREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_GETPARAMETERSFORIMPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * GetParametersForImport request structure.
                */
                class GetParametersForImportRequest : public AbstractModel
                {
                public:
                    GetParametersForImportRequest();
                    ~GetParametersForImportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of a CMK. The CMK for which to get the key parameters must be of the `EXTERNAL` type, i.e., Type = 2 when the CMK is created by the `CreateKey` API.
                     * @return KeyId Unique ID of a CMK. The CMK for which to get the key parameters must be of the `EXTERNAL` type, i.e., Type = 2 when the CMK is created by the `CreateKey` API.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Unique ID of a CMK. The CMK for which to get the key parameters must be of the `EXTERNAL` type, i.e., Type = 2 when the CMK is created by the `CreateKey` API.
                     * @param _keyId Unique ID of a CMK. The CMK for which to get the key parameters must be of the `EXTERNAL` type, i.e., Type = 2 when the CMK is created by the `CreateKey` API.
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Specifies the algorithm for key material encryption. Currently, `RSAES_PKCS1_V1_5`, `RSAES_OAEP_SHA_1`, and `RSAES_OAEP_SHA_256` are supported.
                     * @return WrappingAlgorithm Specifies the algorithm for key material encryption. Currently, `RSAES_PKCS1_V1_5`, `RSAES_OAEP_SHA_1`, and `RSAES_OAEP_SHA_256` are supported.
                     * 
                     */
                    std::string GetWrappingAlgorithm() const;

                    /**
                     * 设置Specifies the algorithm for key material encryption. Currently, `RSAES_PKCS1_V1_5`, `RSAES_OAEP_SHA_1`, and `RSAES_OAEP_SHA_256` are supported.
                     * @param _wrappingAlgorithm Specifies the algorithm for key material encryption. Currently, `RSAES_PKCS1_V1_5`, `RSAES_OAEP_SHA_1`, and `RSAES_OAEP_SHA_256` are supported.
                     * 
                     */
                    void SetWrappingAlgorithm(const std::string& _wrappingAlgorithm);

                    /**
                     * 判断参数 WrappingAlgorithm 是否已赋值
                     * @return WrappingAlgorithm 是否已赋值
                     * 
                     */
                    bool WrappingAlgorithmHasBeenSet() const;

                    /**
                     * 获取Specifies the type of wrapping key. Currently, only `RSA_2048` is supported.
                     * @return WrappingKeySpec Specifies the type of wrapping key. Currently, only `RSA_2048` is supported.
                     * 
                     */
                    std::string GetWrappingKeySpec() const;

                    /**
                     * 设置Specifies the type of wrapping key. Currently, only `RSA_2048` is supported.
                     * @param _wrappingKeySpec Specifies the type of wrapping key. Currently, only `RSA_2048` is supported.
                     * 
                     */
                    void SetWrappingKeySpec(const std::string& _wrappingKeySpec);

                    /**
                     * 判断参数 WrappingKeySpec 是否已赋值
                     * @return WrappingKeySpec 是否已赋值
                     * 
                     */
                    bool WrappingKeySpecHasBeenSet() const;

                private:

                    /**
                     * Unique ID of a CMK. The CMK for which to get the key parameters must be of the `EXTERNAL` type, i.e., Type = 2 when the CMK is created by the `CreateKey` API.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Specifies the algorithm for key material encryption. Currently, `RSAES_PKCS1_V1_5`, `RSAES_OAEP_SHA_1`, and `RSAES_OAEP_SHA_256` are supported.
                     */
                    std::string m_wrappingAlgorithm;
                    bool m_wrappingAlgorithmHasBeenSet;

                    /**
                     * Specifies the type of wrapping key. Currently, only `RSA_2048` is supported.
                     */
                    std::string m_wrappingKeySpec;
                    bool m_wrappingKeySpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_GETPARAMETERSFORIMPORTREQUEST_H_
