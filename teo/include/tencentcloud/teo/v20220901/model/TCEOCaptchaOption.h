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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_TCEOCAPTCHAOPTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_TCEOCAPTCHAOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * EdgeOne human-machine verification authenticates instance information.
                */
                class TCEOCaptchaOption : public AbstractModel
                {
                public:
                    TCEOCaptchaOption();
                    ~TCEOCaptchaOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Browser-side WebView human-machine verification interaction mode.</p><p>Enumeration values:</p><ul><li>Invisible: invisible verification</li><li>Adaptive: self adaptive interactive verification</li></ul><p>Default value: Invisible</p>
                     * @return CaptchaMode <p>Browser-side WebView human-machine verification interaction mode.</p><p>Enumeration values:</p><ul><li>Invisible: invisible verification</li><li>Adaptive: self adaptive interactive verification</li></ul><p>Default value: Invisible</p>
                     * 
                     */
                    std::string GetCaptchaMode() const;

                    /**
                     * 设置<p>Browser-side WebView human-machine verification interaction mode.</p><p>Enumeration values:</p><ul><li>Invisible: invisible verification</li><li>Adaptive: self adaptive interactive verification</li></ul><p>Default value: Invisible</p>
                     * @param _captchaMode <p>Browser-side WebView human-machine verification interaction mode.</p><p>Enumeration values:</p><ul><li>Invisible: invisible verification</li><li>Adaptive: self adaptive interactive verification</li></ul><p>Default value: Invisible</p>
                     * 
                     */
                    void SetCaptchaMode(const std::string& _captchaMode);

                    /**
                     * 判断参数 CaptchaMode 是否已赋值
                     * @return CaptchaMode 是否已赋值
                     * 
                     */
                    bool CaptchaModeHasBeenSet() const;

                    /**
                     * 获取<p>Human-machine verification interaction mode for native apps on mobile terminals.</p><p>Enumeration values:</p><ul><li>Invisible: Invisible verification</li><li>Visible: interactive verification</li></ul><p>Default value: Invisible</p>
                     * @return MobileCaptchaMode <p>Human-machine verification interaction mode for native apps on mobile terminals.</p><p>Enumeration values:</p><ul><li>Invisible: Invisible verification</li><li>Visible: interactive verification</li></ul><p>Default value: Invisible</p>
                     * 
                     */
                    std::string GetMobileCaptchaMode() const;

                    /**
                     * 设置<p>Human-machine verification interaction mode for native apps on mobile terminals.</p><p>Enumeration values:</p><ul><li>Invisible: Invisible verification</li><li>Visible: interactive verification</li></ul><p>Default value: Invisible</p>
                     * @param _mobileCaptchaMode <p>Human-machine verification interaction mode for native apps on mobile terminals.</p><p>Enumeration values:</p><ul><li>Invisible: Invisible verification</li><li>Visible: interactive verification</li></ul><p>Default value: Invisible</p>
                     * 
                     */
                    void SetMobileCaptchaMode(const std::string& _mobileCaptchaMode);

                    /**
                     * 判断参数 MobileCaptchaMode 是否已赋值
                     * @return MobileCaptchaMode 是否已赋值
                     * 
                     */
                    bool MobileCaptchaModeHasBeenSet() const;

                private:

                    /**
                     * <p>Browser-side WebView human-machine verification interaction mode.</p><p>Enumeration values:</p><ul><li>Invisible: invisible verification</li><li>Adaptive: self adaptive interactive verification</li></ul><p>Default value: Invisible</p>
                     */
                    std::string m_captchaMode;
                    bool m_captchaModeHasBeenSet;

                    /**
                     * <p>Human-machine verification interaction mode for native apps on mobile terminals.</p><p>Enumeration values:</p><ul><li>Invisible: Invisible verification</li><li>Visible: interactive verification</li></ul><p>Default value: Invisible</p>
                     */
                    std::string m_mobileCaptchaMode;
                    bool m_mobileCaptchaModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_TCEOCAPTCHAOPTION_H_
