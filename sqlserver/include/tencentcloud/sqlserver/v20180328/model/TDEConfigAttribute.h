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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_TDECONFIGATTRIBUTE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_TDECONFIGATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * TDE configuration
                */
                class TDEConfigAttribute : public AbstractModel
                {
                public:
                    TDEConfigAttribute();
                    ~TDEConfigAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TDE status. Valid values: `enable` (enabled), `disable` (disabled).
                     * @return Encryption TDE status. Valid values: `enable` (enabled), `disable` (disabled).
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 设置TDE status. Valid values: `enable` (enabled), `disable` (disabled).
                     * @param _encryption TDE status. Valid values: `enable` (enabled), `disable` (disabled).
                     * 
                     */
                    void SetEncryption(const std::string& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取Certificate ownership. Valid values: `self` (certificate of the this account), `others` (certificate of the other account), `none` (no certificate).
                     * @return CertificateAttribution Certificate ownership. Valid values: `self` (certificate of the this account), `others` (certificate of the other account), `none` (no certificate).
                     * 
                     */
                    std::string GetCertificateAttribution() const;

                    /**
                     * 设置Certificate ownership. Valid values: `self` (certificate of the this account), `others` (certificate of the other account), `none` (no certificate).
                     * @param _certificateAttribution Certificate ownership. Valid values: `self` (certificate of the this account), `others` (certificate of the other account), `none` (no certificate).
                     * 
                     */
                    void SetCertificateAttribution(const std::string& _certificateAttribution);

                    /**
                     * 判断参数 CertificateAttribution 是否已赋值
                     * @return CertificateAttribution 是否已赋值
                     * 
                     */
                    bool CertificateAttributionHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QuoteUin Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQuoteUin() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quoteUin Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQuoteUin(const std::string& _quoteUin);

                    /**
                     * 判断参数 QuoteUin 是否已赋值
                     * @return QuoteUin 是否已赋值
                     * 
                     */
                    bool QuoteUinHasBeenSet() const;

                private:

                    /**
                     * TDE status. Valid values: `enable` (enabled), `disable` (disabled).
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * Certificate ownership. Valid values: `self` (certificate of the this account), `others` (certificate of the other account), `none` (no certificate).
                     */
                    std::string m_certificateAttribution;
                    bool m_certificateAttributionHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_quoteUin;
                    bool m_quoteUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_TDECONFIGATTRIBUTE_H_
