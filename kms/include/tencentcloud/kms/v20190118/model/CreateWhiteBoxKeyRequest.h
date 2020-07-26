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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_CREATEWHITEBOXKEYREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_CREATEWHITEBOXKEYREQUEST_H_

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
                * CreateWhiteBoxKey request structure.
                */
                class CreateWhiteBoxKeyRequest : public AbstractModel
                {
                public:
                    CreateWhiteBoxKeyRequest();
                    ~CreateWhiteBoxKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique alias that makes a key more recognizable and understandable. This parameter should be 1 to 60 letters, digits, `-`, and `_`; it must begin with a letter or digit and cannot be left empty.
                     * @return Alias Unique alias that makes a key more recognizable and understandable. This parameter should be 1 to 60 letters, digits, `-`, and `_`; it must begin with a letter or digit and cannot be left empty.
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Unique alias that makes a key more recognizable and understandable. This parameter should be 1 to 60 letters, digits, `-`, and `_`; it must begin with a letter or digit and cannot be left empty.
                     * @param Alias Unique alias that makes a key more recognizable and understandable. This parameter should be 1 to 60 letters, digits, `-`, and `_`; it must begin with a letter or digit and cannot be left empty.
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取All algorithm types for creating keys. Valid values: AES_256, SM4
                     * @return Algorithm All algorithm types for creating keys. Valid values: AES_256, SM4
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置All algorithm types for creating keys. Valid values: AES_256, SM4
                     * @param Algorithm All algorithm types for creating keys. Valid values: AES_256, SM4
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取Key description of up to 1024 bytes
                     * @return Description Key description of up to 1024 bytes
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Key description of up to 1024 bytes
                     * @param Description Key description of up to 1024 bytes
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Unique alias that makes a key more recognizable and understandable. This parameter should be 1 to 60 letters, digits, `-`, and `_`; it must begin with a letter or digit and cannot be left empty.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * All algorithm types for creating keys. Valid values: AES_256, SM4
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * Key description of up to 1024 bytes
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_CREATEWHITEBOXKEYREQUEST_H_
