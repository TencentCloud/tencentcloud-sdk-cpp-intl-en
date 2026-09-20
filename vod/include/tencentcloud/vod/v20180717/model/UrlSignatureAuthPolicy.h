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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_URLSIGNATUREAUTHPOLICY_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_URLSIGNATUREAUTHPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Signature-based Key anti-leech information
                */
                class UrlSignatureAuthPolicy : public AbstractModel
                {
                public:
                    UrlSignatureAuthPolicy();
                    ~UrlSignatureAuthPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取[Key hotlink protection](https://www.tencentcloud.com/document/product/266/14047?from_cn_redirect=1) setting status. Available values:
<li>Enabled: enabled.</li>
<li>Disabled: disabled.</li>
                     * @return Status [Key hotlink protection](https://www.tencentcloud.com/document/product/266/14047?from_cn_redirect=1) setting status. Available values:
<li>Enabled: enabled.</li>
<li>Disabled: disabled.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置[Key hotlink protection](https://www.tencentcloud.com/document/product/266/14047?from_cn_redirect=1) setting status. Available values:
<li>Enabled: enabled.</li>
<li>Disabled: disabled.</li>
                     * @param _status [Key hotlink protection](https://www.tencentcloud.com/document/product/266/14047?from_cn_redirect=1) setting status. Available values:
<li>Enabled: enabled.</li>
<li>Disabled: disabled.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Key used for generating signature in [Key hotlink protection](https://www.tencentcloud.com/document/product/266/14047?from_cn_redirect=1).
The length of the EncryptedKey string is 8–40 bytes. It cannot contain invisible characters.
                     * @return EncryptedKey Key used for generating signature in [Key hotlink protection](https://www.tencentcloud.com/document/product/266/14047?from_cn_redirect=1).
The length of the EncryptedKey string is 8–40 bytes. It cannot contain invisible characters.
                     * 
                     */
                    std::string GetEncryptedKey() const;

                    /**
                     * 设置Key used for generating signature in [Key hotlink protection](https://www.tencentcloud.com/document/product/266/14047?from_cn_redirect=1).
The length of the EncryptedKey string is 8–40 bytes. It cannot contain invisible characters.
                     * @param _encryptedKey Key used for generating signature in [Key hotlink protection](https://www.tencentcloud.com/document/product/266/14047?from_cn_redirect=1).
The length of the EncryptedKey string is 8–40 bytes. It cannot contain invisible characters.
                     * 
                     */
                    void SetEncryptedKey(const std::string& _encryptedKey);

                    /**
                     * 判断参数 EncryptedKey 是否已赋值
                     * @return EncryptedKey 是否已赋值
                     * 
                     */
                    bool EncryptedKeyHasBeenSet() const;

                private:

                    /**
                     * [Key hotlink protection](https://www.tencentcloud.com/document/product/266/14047?from_cn_redirect=1) setting status. Available values:
<li>Enabled: enabled.</li>
<li>Disabled: disabled.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Key used for generating signature in [Key hotlink protection](https://www.tencentcloud.com/document/product/266/14047?from_cn_redirect=1).
The length of the EncryptedKey string is 8–40 bytes. It cannot contain invisible characters.
                     */
                    std::string m_encryptedKey;
                    bool m_encryptedKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_URLSIGNATUREAUTHPOLICY_H_
