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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBENCRYPTATTRIBUTESRESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBENCRYPTATTRIBUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDBEncryptAttributes response structure.
                */
                class DescribeDBEncryptAttributesResponse : public AbstractModel
                {
                public:
                    DescribeDBEncryptAttributesResponse();
                    ~DescribeDBEncryptAttributesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether encryption is enabled. Valid values: `1` (enabled), `2` (disabled).
                     * @return EncryptStatus Whether encryption is enabled. Valid values: `1` (enabled), `2` (disabled).
                     * 
                     */
                    int64_t GetEncryptStatus() const;

                    /**
                     * 判断参数 EncryptStatus 是否已赋值
                     * @return EncryptStatus 是否已赋值
                     * 
                     */
                    bool EncryptStatusHasBeenSet() const;

                    /**
                     * 获取DEK
                     * @return CipherText DEK
                     * 
                     */
                    std::string GetCipherText() const;

                    /**
                     * 判断参数 CipherText 是否已赋值
                     * @return CipherText 是否已赋值
                     * 
                     */
                    bool CipherTextHasBeenSet() const;

                    /**
                     * 获取DEK expiration date
                     * @return ExpireDate DEK expiration date
                     * 
                     */
                    std::string GetExpireDate() const;

                    /**
                     * 判断参数 ExpireDate 是否已赋值
                     * @return ExpireDate 是否已赋值
                     * 
                     */
                    bool ExpireDateHasBeenSet() const;

                private:

                    /**
                     * Whether encryption is enabled. Valid values: `1` (enabled), `2` (disabled).
                     */
                    int64_t m_encryptStatus;
                    bool m_encryptStatusHasBeenSet;

                    /**
                     * DEK
                     */
                    std::string m_cipherText;
                    bool m_cipherTextHasBeenSet;

                    /**
                     * DEK expiration date
                     */
                    std::string m_expireDate;
                    bool m_expireDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBENCRYPTATTRIBUTESRESPONSE_H_
