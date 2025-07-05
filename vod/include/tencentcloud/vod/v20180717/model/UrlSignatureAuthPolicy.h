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
                * Key hotlink protection information for generating the signature
                */
                class UrlSignatureAuthPolicy : public AbstractModel
                {
                public:
                    UrlSignatureAuthPolicy();
                    ~UrlSignatureAuthPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable or disable [key hotlink protection](https://intl.cloud.tencent.com/document/product/266/33986). Valid values:
<li>`Enabled`: enable</li>
<li>`Disabled`: disable</li>
                     * @return Status Whether to enable or disable [key hotlink protection](https://intl.cloud.tencent.com/document/product/266/33986). Valid values:
<li>`Enabled`: enable</li>
<li>`Disabled`: disable</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Whether to enable or disable [key hotlink protection](https://intl.cloud.tencent.com/document/product/266/33986). Valid values:
<li>`Enabled`: enable</li>
<li>`Disabled`: disable</li>
                     * @param _status Whether to enable or disable [key hotlink protection](https://intl.cloud.tencent.com/document/product/266/33986). Valid values:
<li>`Enabled`: enable</li>
<li>`Disabled`: disable</li>
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
                     * 获取The key for generating the signature of [key hotlink protection](https://intl.cloud.tencent.com/document/product/266/33986).
`EncryptedKey` can contain 8-40 bytes, and cannot contain non-printable characters.
                     * @return EncryptedKey The key for generating the signature of [key hotlink protection](https://intl.cloud.tencent.com/document/product/266/33986).
`EncryptedKey` can contain 8-40 bytes, and cannot contain non-printable characters.
                     * 
                     */
                    std::string GetEncryptedKey() const;

                    /**
                     * 设置The key for generating the signature of [key hotlink protection](https://intl.cloud.tencent.com/document/product/266/33986).
`EncryptedKey` can contain 8-40 bytes, and cannot contain non-printable characters.
                     * @param _encryptedKey The key for generating the signature of [key hotlink protection](https://intl.cloud.tencent.com/document/product/266/33986).
`EncryptedKey` can contain 8-40 bytes, and cannot contain non-printable characters.
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
                     * Whether to enable or disable [key hotlink protection](https://intl.cloud.tencent.com/document/product/266/33986). Valid values:
<li>`Enabled`: enable</li>
<li>`Disabled`: disable</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The key for generating the signature of [key hotlink protection](https://intl.cloud.tencent.com/document/product/266/33986).
`EncryptedKey` can contain 8-40 bytes, and cannot contain non-printable characters.
                     */
                    std::string m_encryptedKey;
                    bool m_encryptedKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_URLSIGNATUREAUTHPOLICY_H_
