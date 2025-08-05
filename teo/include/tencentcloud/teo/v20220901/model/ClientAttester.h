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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/TCRCEOption.h>
#include <tencentcloud/teo/v20220901/model/TCCaptchaOption.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Specifies the authentication option configuration.
                */
                class ClientAttester : public AbstractModel
                {
                public:
                    ClientAttester();
                    ~ClientAttester() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Authentication option ID.
                     * @return Id Authentication option ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Authentication option ID.
                     * @param _id Authentication option ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Specifies the authentication option name.
                     * @return Name Specifies the authentication option name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specifies the authentication option name.
                     * @param _name Specifies the authentication option name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Authentication rule type. only returned in the response. valid values:.
<li>PRESET: system PRESET rule. only AttesterDuration can be modified.</li>.
<Li>CUSTOM: user-defined rules.</li>.
                     * @return Type Authentication rule type. only returned in the response. valid values:.
<li>PRESET: system PRESET rule. only AttesterDuration can be modified.</li>.
<Li>CUSTOM: user-defined rules.</li>.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Authentication rule type. only returned in the response. valid values:.
<li>PRESET: system PRESET rule. only AttesterDuration can be modified.</li>.
<Li>CUSTOM: user-defined rules.</li>.
                     * @param _type Authentication rule type. only returned in the response. valid values:.
<li>PRESET: system PRESET rule. only AttesterDuration can be modified.</li>.
<Li>CUSTOM: user-defined rules.</li>.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Authentication method. valid values:.
<Li>TC-RCE: uses the full-stack risk control engine for authentication.</li>.
<Li>TC-CAPTCHA-Intl: specifies authentication using captcha-intl.</li>.
                     * @return AttesterSource Authentication method. valid values:.
<Li>TC-RCE: uses the full-stack risk control engine for authentication.</li>.
<Li>TC-CAPTCHA-Intl: specifies authentication using captcha-intl.</li>.
                     * 
                     */
                    std::string GetAttesterSource() const;

                    /**
                     * 设置Authentication method. valid values:.
<Li>TC-RCE: uses the full-stack risk control engine for authentication.</li>.
<Li>TC-CAPTCHA-Intl: specifies authentication using captcha-intl.</li>.
                     * @param _attesterSource Authentication method. valid values:.
<Li>TC-RCE: uses the full-stack risk control engine for authentication.</li>.
<Li>TC-CAPTCHA-Intl: specifies authentication using captcha-intl.</li>.
                     * 
                     */
                    void SetAttesterSource(const std::string& _attesterSource);

                    /**
                     * 判断参数 AttesterSource 是否已赋值
                     * @return AttesterSource 是否已赋值
                     * 
                     */
                    bool AttesterSourceHasBeenSet() const;

                    /**
                     * 获取Validity time of the authentication. defaults to 60s. supported measurement units:.
<Li>S: specifies seconds. value range: 60–43200.</li>.
<Li>M: specifies minutes. value range: 1–720.</li>.
<Li>H. specifies the hour. value range: 1–12.</li>.
                     * @return AttesterDuration Validity time of the authentication. defaults to 60s. supported measurement units:.
<Li>S: specifies seconds. value range: 60–43200.</li>.
<Li>M: specifies minutes. value range: 1–720.</li>.
<Li>H. specifies the hour. value range: 1–12.</li>.
                     * 
                     */
                    std::string GetAttesterDuration() const;

                    /**
                     * 设置Validity time of the authentication. defaults to 60s. supported measurement units:.
<Li>S: specifies seconds. value range: 60–43200.</li>.
<Li>M: specifies minutes. value range: 1–720.</li>.
<Li>H. specifies the hour. value range: 1–12.</li>.
                     * @param _attesterDuration Validity time of the authentication. defaults to 60s. supported measurement units:.
<Li>S: specifies seconds. value range: 60–43200.</li>.
<Li>M: specifies minutes. value range: 1–720.</li>.
<Li>H. specifies the hour. value range: 1–12.</li>.
                     * 
                     */
                    void SetAttesterDuration(const std::string& _attesterDuration);

                    /**
                     * 判断参数 AttesterDuration 是否已赋值
                     * @return AttesterDuration 是否已赋值
                     * 
                     */
                    bool AttesterDurationHasBeenSet() const;

                    /**
                     * 获取TC-RCE authentication configuration message.
<li>Specifies the required field when the AttesterSource parameter value is TC-RCE.</li>.
                     * @return TCRCEOption TC-RCE authentication configuration message.
<li>Specifies the required field when the AttesterSource parameter value is TC-RCE.</li>.
                     * 
                     */
                    TCRCEOption GetTCRCEOption() const;

                    /**
                     * 设置TC-RCE authentication configuration message.
<li>Specifies the required field when the AttesterSource parameter value is TC-RCE.</li>.
                     * @param _tCRCEOption TC-RCE authentication configuration message.
<li>Specifies the required field when the AttesterSource parameter value is TC-RCE.</li>.
                     * 
                     */
                    void SetTCRCEOption(const TCRCEOption& _tCRCEOption);

                    /**
                     * 判断参数 TCRCEOption 是否已赋值
                     * @return TCRCEOption 是否已赋值
                     * 
                     */
                    bool TCRCEOptionHasBeenSet() const;

                    /**
                     * 获取Specifies the configuration message for TC-CAPTCHA certification.
<li>Specifies the required field when the AttesterSource parameter value is TC-CAPTCHA.</li>.
                     * @return TCCaptchaOption Specifies the configuration message for TC-CAPTCHA certification.
<li>Specifies the required field when the AttesterSource parameter value is TC-CAPTCHA.</li>.
                     * 
                     */
                    TCCaptchaOption GetTCCaptchaOption() const;

                    /**
                     * 设置Specifies the configuration message for TC-CAPTCHA certification.
<li>Specifies the required field when the AttesterSource parameter value is TC-CAPTCHA.</li>.
                     * @param _tCCaptchaOption Specifies the configuration message for TC-CAPTCHA certification.
<li>Specifies the required field when the AttesterSource parameter value is TC-CAPTCHA.</li>.
                     * 
                     */
                    void SetTCCaptchaOption(const TCCaptchaOption& _tCCaptchaOption);

                    /**
                     * 判断参数 TCCaptchaOption 是否已赋值
                     * @return TCCaptchaOption 是否已赋值
                     * 
                     */
                    bool TCCaptchaOptionHasBeenSet() const;

                private:

                    /**
                     * Authentication option ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Specifies the authentication option name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Authentication rule type. only returned in the response. valid values:.
<li>PRESET: system PRESET rule. only AttesterDuration can be modified.</li>.
<Li>CUSTOM: user-defined rules.</li>.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Authentication method. valid values:.
<Li>TC-RCE: uses the full-stack risk control engine for authentication.</li>.
<Li>TC-CAPTCHA-Intl: specifies authentication using captcha-intl.</li>.
                     */
                    std::string m_attesterSource;
                    bool m_attesterSourceHasBeenSet;

                    /**
                     * Validity time of the authentication. defaults to 60s. supported measurement units:.
<Li>S: specifies seconds. value range: 60–43200.</li>.
<Li>M: specifies minutes. value range: 1–720.</li>.
<Li>H. specifies the hour. value range: 1–12.</li>.
                     */
                    std::string m_attesterDuration;
                    bool m_attesterDurationHasBeenSet;

                    /**
                     * TC-RCE authentication configuration message.
<li>Specifies the required field when the AttesterSource parameter value is TC-RCE.</li>.
                     */
                    TCRCEOption m_tCRCEOption;
                    bool m_tCRCEOptionHasBeenSet;

                    /**
                     * Specifies the configuration message for TC-CAPTCHA certification.
<li>Specifies the required field when the AttesterSource parameter value is TC-CAPTCHA.</li>.
                     */
                    TCCaptchaOption m_tCCaptchaOption;
                    bool m_tCCaptchaOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTER_H_
