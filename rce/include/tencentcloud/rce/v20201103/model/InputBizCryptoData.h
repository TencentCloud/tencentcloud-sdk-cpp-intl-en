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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_INPUTBIZCRYPTODATA_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_INPUTBIZCRYPTODATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * Query input parameters of risk assessment results
                */
                class InputBizCryptoData : public AbstractModel
                {
                public:
                    InputBizCryptoData();
                    ~InputBizCryptoData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to authorize.
                     * @return IsAuthorized Whether to authorize.
                     * 
                     */
                    std::string GetIsAuthorized() const;

                    /**
                     * 设置Whether to authorize.
                     * @param _isAuthorized Whether to authorize.
                     * 
                     */
                    void SetIsAuthorized(const std::string& _isAuthorized);

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     * 
                     */
                    bool IsAuthorizedHasBeenSet() const;

                    /**
                     * 获取Encryption type.
                     * @return CryptoType Encryption type.
                     * 
                     */
                    std::string GetCryptoType() const;

                    /**
                     * 设置Encryption type.
                     * @param _cryptoType Encryption type.
                     * 
                     */
                    void SetCryptoType(const std::string& _cryptoType);

                    /**
                     * 判断参数 CryptoType 是否已赋值
                     * @return CryptoType 是否已赋值
                     * 
                     */
                    bool CryptoTypeHasBeenSet() const;

                    /**
                     * 获取Encrypted content.
                     * @return CryptoContent Encrypted content.
                     * 
                     */
                    std::string GetCryptoContent() const;

                    /**
                     * 设置Encrypted content.
                     * @param _cryptoContent Encrypted content.
                     * 
                     */
                    void SetCryptoContent(const std::string& _cryptoContent);

                    /**
                     * 判断参数 CryptoContent 是否已赋值
                     * @return CryptoContent 是否已赋值
                     * 
                     */
                    bool CryptoContentHasBeenSet() const;

                private:

                    /**
                     * Whether to authorize.
                     */
                    std::string m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                    /**
                     * Encryption type.
                     */
                    std::string m_cryptoType;
                    bool m_cryptoTypeHasBeenSet;

                    /**
                     * Encrypted content.
                     */
                    std::string m_cryptoContent;
                    bool m_cryptoContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_INPUTBIZCRYPTODATA_H_
