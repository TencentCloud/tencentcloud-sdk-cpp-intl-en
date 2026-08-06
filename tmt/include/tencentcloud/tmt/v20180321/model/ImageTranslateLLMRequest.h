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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATELLMREQUEST_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATELLMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * ImageTranslateLLM request structure.
                */
                class ImageTranslateLLMRequest : public AbstractModel
                {
                public:
                    ImageTranslateLLMRequest();
                    ~ImageTranslateLLMRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Base64 string of the image data, no more than 9M after Base64 encoding. A resolution of 600*800 or higher is recommended. PNG, JPG, and JPEG formats are supported.</p>
                     * @return Data <p>Base64 string of the image data, no more than 9M after Base64 encoding. A resolution of 600*800 or higher is recommended. PNG, JPG, and JPEG formats are supported.</p>
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置<p>Base64 string of the image data, no more than 9M after Base64 encoding. A resolution of 600*800 or higher is recommended. PNG, JPG, and JPEG formats are supported.</p>
                     * @param _data <p>Base64 string of the image data, no more than 9M after Base64 encoding. A resolution of 600*800 or higher is recommended. PNG, JPG, and JPEG formats are supported.</p>
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>Target language, supported languages:</p><ul><li>Chinese: zh</li><li>Traditional (Taiwan): zh-TW</li><li>Traditional (Hong Kong (China)): zh-HK</li><li>English: en</li><li>Japanese: ja</li><li>Korean: ko</li><li>Thai: th</li><li>Vietnamese: vi</li><li>Russian: ru</li><li>German: de</li><li>French: fr</li><li>Arabic: ar</li><li>Spanish: es</li><li>Italian: it</li><li>Indonesian: id</li><li>Malay language: ms</li><li>Portuguese: pt</li><li>Turkish: tr<br>-</li></ul>
                     * @return Target <p>Target language, supported languages:</p><ul><li>Chinese: zh</li><li>Traditional (Taiwan): zh-TW</li><li>Traditional (Hong Kong (China)): zh-HK</li><li>English: en</li><li>Japanese: ja</li><li>Korean: ko</li><li>Thai: th</li><li>Vietnamese: vi</li><li>Russian: ru</li><li>German: de</li><li>French: fr</li><li>Arabic: ar</li><li>Spanish: es</li><li>Italian: it</li><li>Indonesian: id</li><li>Malay language: ms</li><li>Portuguese: pt</li><li>Turkish: tr<br>-</li></ul>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置<p>Target language, supported languages:</p><ul><li>Chinese: zh</li><li>Traditional (Taiwan): zh-TW</li><li>Traditional (Hong Kong (China)): zh-HK</li><li>English: en</li><li>Japanese: ja</li><li>Korean: ko</li><li>Thai: th</li><li>Vietnamese: vi</li><li>Russian: ru</li><li>German: de</li><li>French: fr</li><li>Arabic: ar</li><li>Spanish: es</li><li>Italian: it</li><li>Indonesian: id</li><li>Malay language: ms</li><li>Portuguese: pt</li><li>Turkish: tr<br>-</li></ul>
                     * @param _target <p>Target language, supported languages:</p><ul><li>Chinese: zh</li><li>Traditional (Taiwan): zh-TW</li><li>Traditional (Hong Kong (China)): zh-HK</li><li>English: en</li><li>Japanese: ja</li><li>Korean: ko</li><li>Thai: th</li><li>Vietnamese: vi</li><li>Russian: ru</li><li>German: de</li><li>French: fr</li><li>Arabic: ar</li><li>Spanish: es</li><li>Italian: it</li><li>Indonesian: id</li><li>Malay language: ms</li><li>Portuguese: pt</li><li>Turkish: tr<br>-</li></ul>
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>Enter image Url. When using a Url, the Data parameter requires the input of "". Image restrictions: less than 10MB, resolution recommendation 600*800 or higher, format support jpg, jpeg, png.</p>
                     * @return Url <p>Enter image Url. When using a Url, the Data parameter requires the input of "". Image restrictions: less than 10MB, resolution recommendation 600*800 or higher, format support jpg, jpeg, png.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Enter image Url. When using a Url, the Data parameter requires the input of "". Image restrictions: less than 10MB, resolution recommendation 600*800 or higher, format support jpg, jpeg, png.</p>
                     * @param _url <p>Enter image Url. When using a Url, the Data parameter requires the input of "". Image restrictions: less than 10MB, resolution recommendation 600*800 or higher, format support jpg, jpeg, png.</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>Invocation method.</p><p>Enumeration value:</p><ul><li>0: End-to-end image translation large model pro version</li><li>1: End-to-end image translation large model lite version</li></ul><p>Default value: 0</p>
                     * @return Mode <p>Invocation method.</p><p>Enumeration value:</p><ul><li>0: End-to-end image translation large model pro version</li><li>1: End-to-end image translation large model lite version</li></ul><p>Default value: 0</p>
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置<p>Invocation method.</p><p>Enumeration value:</p><ul><li>0: End-to-end image translation large model pro version</li><li>1: End-to-end image translation large model lite version</li></ul><p>Default value: 0</p>
                     * @param _mode <p>Invocation method.</p><p>Enumeration value:</p><ul><li>0: End-to-end image translation large model pro version</li><li>1: End-to-end image translation large model lite version</li></ul><p>Default value: 0</p>
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * <p>Base64 string of the image data, no more than 9M after Base64 encoding. A resolution of 600*800 or higher is recommended. PNG, JPG, and JPEG formats are supported.</p>
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>Target language, supported languages:</p><ul><li>Chinese: zh</li><li>Traditional (Taiwan): zh-TW</li><li>Traditional (Hong Kong (China)): zh-HK</li><li>English: en</li><li>Japanese: ja</li><li>Korean: ko</li><li>Thai: th</li><li>Vietnamese: vi</li><li>Russian: ru</li><li>German: de</li><li>French: fr</li><li>Arabic: ar</li><li>Spanish: es</li><li>Italian: it</li><li>Indonesian: id</li><li>Malay language: ms</li><li>Portuguese: pt</li><li>Turkish: tr<br>-</li></ul>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>Enter image Url. When using a Url, the Data parameter requires the input of "". Image restrictions: less than 10MB, resolution recommendation 600*800 or higher, format support jpg, jpeg, png.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Invocation method.</p><p>Enumeration value:</p><ul><li>0: End-to-end image translation large model pro version</li><li>1: End-to-end image translation large model lite version</li></ul><p>Default value: 0</p>
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATELLMREQUEST_H_
