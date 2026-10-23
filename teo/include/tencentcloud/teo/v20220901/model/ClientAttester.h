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
#include <tencentcloud/teo/v20220901/model/TCEOCaptchaOption.h>


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
                     * 获取<p>Option ID for certification.</p>
                     * @return Id <p>Option ID for certification.</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>Option ID for certification.</p>
                     * @param _id <p>Option ID for certification.</p>
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
                     * 获取<p>Option name for authentication.</p>
                     * @return Name <p>Option name for authentication.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Option name for authentication.</p>
                     * @param _name <p>Option name for authentication.</p>
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
                     * 获取<p>Authentication rule type. Returned only in the response. Valid values:</p><li>PRESET: System preset rule. Only AttesterDuration can be modified.</li><li>CUSTOM: User-defined rule.</li>
                     * @return Type <p>Authentication rule type. Returned only in the response. Valid values:</p><li>PRESET: System preset rule. Only AttesterDuration can be modified.</li><li>CUSTOM: User-defined rule.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Authentication rule type. Returned only in the response. Valid values:</p><li>PRESET: System preset rule. Only AttesterDuration can be modified.</li><li>CUSTOM: User-defined rule.</li>
                     * @param _type <p>Authentication rule type. Returned only in the response. Valid values:</p><li>PRESET: System preset rule. Only AttesterDuration can be modified.</li><li>CUSTOM: User-defined rule.</li>
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
                     * 获取<p>Authentication method. Valid values:</p><li>TC-RCE: Use risk identification RCE for authentication;</li><li>TC-CAPTCHA: Use Tianyu verification code for authentication;</li><li>TC-EO-CAPTCHA: Use EdgeOne human-machine verification for authentication.</li>
                     * @return AttesterSource <p>Authentication method. Valid values:</p><li>TC-RCE: Use risk identification RCE for authentication;</li><li>TC-CAPTCHA: Use Tianyu verification code for authentication;</li><li>TC-EO-CAPTCHA: Use EdgeOne human-machine verification for authentication.</li>
                     * 
                     */
                    std::string GetAttesterSource() const;

                    /**
                     * 设置<p>Authentication method. Valid values:</p><li>TC-RCE: Use risk identification RCE for authentication;</li><li>TC-CAPTCHA: Use Tianyu verification code for authentication;</li><li>TC-EO-CAPTCHA: Use EdgeOne human-machine verification for authentication.</li>
                     * @param _attesterSource <p>Authentication method. Valid values:</p><li>TC-RCE: Use risk identification RCE for authentication;</li><li>TC-CAPTCHA: Use Tianyu verification code for authentication;</li><li>TC-EO-CAPTCHA: Use EdgeOne human-machine verification for authentication.</li>
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
                     * 获取<p>Authentication validity time. Default value is 60s. Supported measurement units:</p><li>s: second, value ranges from 60 to 43200.</li><li>m: minute, value ranges from 1 to 720.</li><li>h: hour, value ranges from 1 to 12.</li>
                     * @return AttesterDuration <p>Authentication validity time. Default value is 60s. Supported measurement units:</p><li>s: second, value ranges from 60 to 43200.</li><li>m: minute, value ranges from 1 to 720.</li><li>h: hour, value ranges from 1 to 12.</li>
                     * 
                     */
                    std::string GetAttesterDuration() const;

                    /**
                     * 设置<p>Authentication validity time. Default value is 60s. Supported measurement units:</p><li>s: second, value ranges from 60 to 43200.</li><li>m: minute, value ranges from 1 to 720.</li><li>h: hour, value ranges from 1 to 12.</li>
                     * @param _attesterDuration <p>Authentication validity time. Default value is 60s. Supported measurement units:</p><li>s: second, value ranges from 60 to 43200.</li><li>m: minute, value ranges from 1 to 720.</li><li>h: hour, value ranges from 1 to 12.</li>
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
                     * 获取<p>Whether to enable the usage limit for attestation results. </p><p>Valid values:</p><ul><li>on: Enabled</li><li>off: Disabled</li></ul><p>Default value: off</p>
                     * @return UsageLimit <p>Whether to enable the usage limit for attestation results. </p><p>Valid values:</p><ul><li>on: Enabled</li><li>off: Disabled</li></ul><p>Default value: off</p>
                     * 
                     */
                    std::string GetUsageLimit() const;

                    /**
                     * 设置<p>Whether to enable the usage limit for attestation results. </p><p>Valid values:</p><ul><li>on: Enabled</li><li>off: Disabled</li></ul><p>Default value: off</p>
                     * @param _usageLimit <p>Whether to enable the usage limit for attestation results. </p><p>Valid values:</p><ul><li>on: Enabled</li><li>off: Disabled</li></ul><p>Default value: off</p>
                     * 
                     */
                    void SetUsageLimit(const std::string& _usageLimit);

                    /**
                     * 判断参数 UsageLimit 是否已赋值
                     * @return UsageLimit 是否已赋值
                     * 
                     */
                    bool UsageLimitHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable the usage limit for attestation results. </p><p>Valid values:</p><ul><li>on: Enabled</li><li>off: Disabled</li></ul><p>Default value: off</p>
                     * @return MaxUsageCount <p>Whether to enable the usage limit for attestation results. </p><p>Valid values:</p><ul><li>on: Enabled</li><li>off: Disabled</li></ul><p>Default value: off</p>
                     * 
                     */
                    int64_t GetMaxUsageCount() const;

                    /**
                     * 设置<p>Whether to enable the usage limit for attestation results. </p><p>Valid values:</p><ul><li>on: Enabled</li><li>off: Disabled</li></ul><p>Default value: off</p>
                     * @param _maxUsageCount <p>Whether to enable the usage limit for attestation results. </p><p>Valid values:</p><ul><li>on: Enabled</li><li>off: Disabled</li></ul><p>Default value: off</p>
                     * 
                     */
                    void SetMaxUsageCount(const int64_t& _maxUsageCount);

                    /**
                     * 判断参数 MaxUsageCount 是否已赋值
                     * @return MaxUsageCount 是否已赋值
                     * 
                     */
                    bool MaxUsageCountHasBeenSet() const;

                    /**
                     * 获取<p>Configuration message for TC-RCE certification.</p><li>This field is required when the AttesterSource parameter value is TC-RCE.</li>
                     * @return TCRCEOption <p>Configuration message for TC-RCE certification.</p><li>This field is required when the AttesterSource parameter value is TC-RCE.</li>
                     * 
                     */
                    TCRCEOption GetTCRCEOption() const;

                    /**
                     * 设置<p>Configuration message for TC-RCE certification.</p><li>This field is required when the AttesterSource parameter value is TC-RCE.</li>
                     * @param _tCRCEOption <p>Configuration message for TC-RCE certification.</p><li>This field is required when the AttesterSource parameter value is TC-RCE.</li>
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
                     * 获取<p>Configuration message for TC-CAPTCHA certification.</p><li>This field is required when the AttesterSource parameter value is TC-CAPTCHA.</li>
                     * @return TCCaptchaOption <p>Configuration message for TC-CAPTCHA certification.</p><li>This field is required when the AttesterSource parameter value is TC-CAPTCHA.</li>
                     * 
                     */
                    TCCaptchaOption GetTCCaptchaOption() const;

                    /**
                     * 设置<p>Configuration message for TC-CAPTCHA certification.</p><li>This field is required when the AttesterSource parameter value is TC-CAPTCHA.</li>
                     * @param _tCCaptchaOption <p>Configuration message for TC-CAPTCHA certification.</p><li>This field is required when the AttesterSource parameter value is TC-CAPTCHA.</li>
                     * 
                     */
                    void SetTCCaptchaOption(const TCCaptchaOption& _tCCaptchaOption);

                    /**
                     * 判断参数 TCCaptchaOption 是否已赋值
                     * @return TCCaptchaOption 是否已赋值
                     * 
                     */
                    bool TCCaptchaOptionHasBeenSet() const;

                    /**
                     * 获取<p>Configuration message for TC-EO-CAPTCHA certification.</p><li>This field is required when the AttesterSource parameter value is TC-EO-CAPTCHA.</li>
                     * @return TCEOCaptchaOption <p>Configuration message for TC-EO-CAPTCHA certification.</p><li>This field is required when the AttesterSource parameter value is TC-EO-CAPTCHA.</li>
                     * 
                     */
                    TCEOCaptchaOption GetTCEOCaptchaOption() const;

                    /**
                     * 设置<p>Configuration message for TC-EO-CAPTCHA certification.</p><li>This field is required when the AttesterSource parameter value is TC-EO-CAPTCHA.</li>
                     * @param _tCEOCaptchaOption <p>Configuration message for TC-EO-CAPTCHA certification.</p><li>This field is required when the AttesterSource parameter value is TC-EO-CAPTCHA.</li>
                     * 
                     */
                    void SetTCEOCaptchaOption(const TCEOCaptchaOption& _tCEOCaptchaOption);

                    /**
                     * 判断参数 TCEOCaptchaOption 是否已赋值
                     * @return TCEOCaptchaOption 是否已赋值
                     * 
                     */
                    bool TCEOCaptchaOptionHasBeenSet() const;

                private:

                    /**
                     * <p>Option ID for certification.</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Option name for authentication.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Authentication rule type. Returned only in the response. Valid values:</p><li>PRESET: System preset rule. Only AttesterDuration can be modified.</li><li>CUSTOM: User-defined rule.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Authentication method. Valid values:</p><li>TC-RCE: Use risk identification RCE for authentication;</li><li>TC-CAPTCHA: Use Tianyu verification code for authentication;</li><li>TC-EO-CAPTCHA: Use EdgeOne human-machine verification for authentication.</li>
                     */
                    std::string m_attesterSource;
                    bool m_attesterSourceHasBeenSet;

                    /**
                     * <p>Authentication validity time. Default value is 60s. Supported measurement units:</p><li>s: second, value ranges from 60 to 43200.</li><li>m: minute, value ranges from 1 to 720.</li><li>h: hour, value ranges from 1 to 12.</li>
                     */
                    std::string m_attesterDuration;
                    bool m_attesterDurationHasBeenSet;

                    /**
                     * <p>Whether to enable the usage limit for attestation results. </p><p>Valid values:</p><ul><li>on: Enabled</li><li>off: Disabled</li></ul><p>Default value: off</p>
                     */
                    std::string m_usageLimit;
                    bool m_usageLimitHasBeenSet;

                    /**
                     * <p>Whether to enable the usage limit for attestation results. </p><p>Valid values:</p><ul><li>on: Enabled</li><li>off: Disabled</li></ul><p>Default value: off</p>
                     */
                    int64_t m_maxUsageCount;
                    bool m_maxUsageCountHasBeenSet;

                    /**
                     * <p>Configuration message for TC-RCE certification.</p><li>This field is required when the AttesterSource parameter value is TC-RCE.</li>
                     */
                    TCRCEOption m_tCRCEOption;
                    bool m_tCRCEOptionHasBeenSet;

                    /**
                     * <p>Configuration message for TC-CAPTCHA certification.</p><li>This field is required when the AttesterSource parameter value is TC-CAPTCHA.</li>
                     */
                    TCCaptchaOption m_tCCaptchaOption;
                    bool m_tCCaptchaOptionHasBeenSet;

                    /**
                     * <p>Configuration message for TC-EO-CAPTCHA certification.</p><li>This field is required when the AttesterSource parameter value is TC-EO-CAPTCHA.</li>
                     */
                    TCEOCaptchaOption m_tCEOCaptchaOption;
                    bool m_tCEOCaptchaOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTER_H_
