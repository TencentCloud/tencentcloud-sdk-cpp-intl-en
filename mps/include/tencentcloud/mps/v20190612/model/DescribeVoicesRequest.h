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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEVOICESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEVOICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeVoices request structure.
                */
                class DescribeVoicesRequest : public AbstractModel
                {
                public:
                    DescribeVoicesRequest();
                    ~DescribeVoicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Voice type. </p><p>Enumeration value: </p><ul><li>system: System audio.</li></ul>
                     * @return VoiceType <p>Voice type. </p><p>Enumeration value: </p><ul><li>system: System audio.</li></ul>
                     * 
                     */
                    std::string GetVoiceType() const;

                    /**
                     * 设置<p>Voice type. </p><p>Enumeration value: </p><ul><li>system: System audio.</li></ul>
                     * @param _voiceType <p>Voice type. </p><p>Enumeration value: </p><ul><li>system: System audio.</li></ul>
                     * 
                     */
                    void SetVoiceType(const std::string& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     * 
                     */
                    bool VoiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Extended parameters in the format of a JSON string. </p><p>Other filter criteria:
voiceName (String): Voice name, fuzzy matching. labels (Array of String): Tags. Matches voices that contain these tags.</p>
                     * @return ExtParam <p>Extended parameters in the format of a JSON string. </p><p>Other filter criteria:
voiceName (String): Voice name, fuzzy matching. labels (Array of String): Tags. Matches voices that contain these tags.</p>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>Extended parameters in the format of a JSON string. </p><p>Other filter criteria:
voiceName (String): Voice name, fuzzy matching. labels (Array of String): Tags. Matches voices that contain these tags.</p>
                     * @param _extParam <p>Extended parameters in the format of a JSON string. </p><p>Other filter criteria:
voiceName (String): Voice name, fuzzy matching. labels (Array of String): Tags. Matches voices that contain these tags.</p>
                     * 
                     */
                    void SetExtParam(const std::string& _extParam);

                    /**
                     * 判断参数 ExtParam 是否已赋值
                     * @return ExtParam 是否已赋值
                     * 
                     */
                    bool ExtParamHasBeenSet() const;

                private:

                    /**
                     * <p>Voice type. </p><p>Enumeration value: </p><ul><li>system: System audio.</li></ul>
                     */
                    std::string m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * <p>Extended parameters in the format of a JSON string. </p><p>Other filter criteria:
voiceName (String): Voice name, fuzzy matching. labels (Array of String): Tags. Matches voices that contain these tags.</p>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEVOICESREQUEST_H_
