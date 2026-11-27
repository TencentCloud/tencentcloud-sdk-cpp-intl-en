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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_WEBVERIFICATIONCONFIGINTL_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_WEBVERIFICATIONCONFIGINTL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * eKYC Web page related configurations
                */
                class WebVerificationConfigIntl : public AbstractModel
                {
                public:
                    WebVerificationConfigIntl();
                    ~WebVerificationConfigIntl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Indicates whether to skip the start verification page when starting verification. If set to true, the verification process starts directly. The default value is false. If a fallback policy is triggered, this configuration does not take effect.</p>
                     * @return AutoSkipStartPage <p>Indicates whether to skip the start verification page when starting verification. If set to true, the verification process starts directly. The default value is false. If a fallback policy is triggered, this configuration does not take effect.</p>
                     * 
                     */
                    bool GetAutoSkipStartPage() const;

                    /**
                     * 设置<p>Indicates whether to skip the start verification page when starting verification. If set to true, the verification process starts directly. The default value is false. If a fallback policy is triggered, this configuration does not take effect.</p>
                     * @param _autoSkipStartPage <p>Indicates whether to skip the start verification page when starting verification. If set to true, the verification process starts directly. The default value is false. If a fallback policy is triggered, this configuration does not take effect.</p>
                     * 
                     */
                    void SetAutoSkipStartPage(const bool& _autoSkipStartPage);

                    /**
                     * 判断参数 AutoSkipStartPage 是否已赋值
                     * @return AutoSkipStartPage 是否已赋值
                     * 
                     */
                    bool AutoSkipStartPageHasBeenSet() const;

                    /**
                     * 获取<p>Indicates whether to skip the result display page and automatically redirect to RedirectURL when verification succeeds. The default value is false.</p>
                     * @return AutoSkip <p>Indicates whether to skip the result display page and automatically redirect to RedirectURL when verification succeeds. The default value is false.</p>
                     * 
                     */
                    bool GetAutoSkip() const;

                    /**
                     * 设置<p>Indicates whether to skip the result display page and automatically redirect to RedirectURL when verification succeeds. The default value is false.</p>
                     * @param _autoSkip <p>Indicates whether to skip the result display page and automatically redirect to RedirectURL when verification succeeds. The default value is false.</p>
                     * 
                     */
                    void SetAutoSkip(const bool& _autoSkip);

                    /**
                     * 判断参数 AutoSkip 是否已赋值
                     * @return AutoSkip 是否已赋值
                     * 
                     */
                    bool AutoSkipHasBeenSet() const;

                    /**
                     * 获取<p>Detection mode. Valid values: <br>1: OCR + liveness detection + face comparison; <br>2: Liveness detection + face comparison; <br>3: Liveness detection; <br>4: OCR. <br>The default value is 2.</p>
                     * @return CheckMode <p>Detection mode. Valid values: <br>1: OCR + liveness detection + face comparison; <br>2: Liveness detection + face comparison; <br>3: Liveness detection; <br>4: OCR. <br>The default value is 2.</p>
                     * 
                     */
                    int64_t GetCheckMode() const;

                    /**
                     * 设置<p>Detection mode. Valid values: <br>1: OCR + liveness detection + face comparison; <br>2: Liveness detection + face comparison; <br>3: Liveness detection; <br>4: OCR. <br>The default value is 2.</p>
                     * @param _checkMode <p>Detection mode. Valid values: <br>1: OCR + liveness detection + face comparison; <br>2: Liveness detection + face comparison; <br>3: Liveness detection; <br>4: OCR. <br>The default value is 2.</p>
                     * 
                     */
                    void SetCheckMode(const int64_t& _checkMode);

                    /**
                     * 判断参数 CheckMode 是否已赋值
                     * @return CheckMode 是否已赋值
                     * 
                     */
                    bool CheckModeHasBeenSet() const;

                    /**
                     * 获取<p>The type of card used for authentication. Currently supported types: <br>1. HKIDCard: Hong Kong (China) ID card <br>2. MLIDCard: Malaysian ID card <br>3. IndonesiaIDCard: Indonesian ID card <br>4. PhilippinesVoteID: Philippine voter's card <br>5. PhilippinesDrivingLicense: Philippine driving license <br>6. PhilippinesTinID: Philippine TIN ID <br>7. PhilippinesSSSID: Philippine SSS ID <br>8. PhilippinesUMID: Philippine UMID <br>9. InternationalIDPassport: Passports from Hong Kong/Macao/Taiwan (China) and overseas <br>10. ThailandIDCard: Thai ID card <br>11. SingaporeIDCard: Singaporean ID card <br>12. MainlandIDCard: Mainland ID card</p>
                     * @return IDCardType <p>The type of card used for authentication. Currently supported types: <br>1. HKIDCard: Hong Kong (China) ID card <br>2. MLIDCard: Malaysian ID card <br>3. IndonesiaIDCard: Indonesian ID card <br>4. PhilippinesVoteID: Philippine voter's card <br>5. PhilippinesDrivingLicense: Philippine driving license <br>6. PhilippinesTinID: Philippine TIN ID <br>7. PhilippinesSSSID: Philippine SSS ID <br>8. PhilippinesUMID: Philippine UMID <br>9. InternationalIDPassport: Passports from Hong Kong/Macao/Taiwan (China) and overseas <br>10. ThailandIDCard: Thai ID card <br>11. SingaporeIDCard: Singaporean ID card <br>12. MainlandIDCard: Mainland ID card</p>
                     * 
                     */
                    std::string GetIDCardType() const;

                    /**
                     * 设置<p>The type of card used for authentication. Currently supported types: <br>1. HKIDCard: Hong Kong (China) ID card <br>2. MLIDCard: Malaysian ID card <br>3. IndonesiaIDCard: Indonesian ID card <br>4. PhilippinesVoteID: Philippine voter's card <br>5. PhilippinesDrivingLicense: Philippine driving license <br>6. PhilippinesTinID: Philippine TIN ID <br>7. PhilippinesSSSID: Philippine SSS ID <br>8. PhilippinesUMID: Philippine UMID <br>9. InternationalIDPassport: Passports from Hong Kong/Macao/Taiwan (China) and overseas <br>10. ThailandIDCard: Thai ID card <br>11. SingaporeIDCard: Singaporean ID card <br>12. MainlandIDCard: Mainland ID card</p>
                     * @param _iDCardType <p>The type of card used for authentication. Currently supported types: <br>1. HKIDCard: Hong Kong (China) ID card <br>2. MLIDCard: Malaysian ID card <br>3. IndonesiaIDCard: Indonesian ID card <br>4. PhilippinesVoteID: Philippine voter's card <br>5. PhilippinesDrivingLicense: Philippine driving license <br>6. PhilippinesTinID: Philippine TIN ID <br>7. PhilippinesSSSID: Philippine SSS ID <br>8. PhilippinesUMID: Philippine UMID <br>9. InternationalIDPassport: Passports from Hong Kong/Macao/Taiwan (China) and overseas <br>10. ThailandIDCard: Thai ID card <br>11. SingaporeIDCard: Singaporean ID card <br>12. MainlandIDCard: Mainland ID card</p>
                     * 
                     */
                    void SetIDCardType(const std::string& _iDCardType);

                    /**
                     * 判断参数 IDCardType 是否已赋值
                     * @return IDCardType 是否已赋值
                     * 
                     */
                    bool IDCardTypeHasBeenSet() const;

                    /**
                     * 获取<p>Indicates whether to disable document alerts. The default value is false, which means the alert detection feature is enabled. When enabled, the identity authentication process will be blocked based on document alerts. If you need to use the document authentication feature, please <a href="https://www.tencentcloud.com/zh/contact-us">contact us</a>.</p>
                     * @return DisableCheckOcrWarnings <p>Indicates whether to disable document alerts. The default value is false, which means the alert detection feature is enabled. When enabled, the identity authentication process will be blocked based on document alerts. If you need to use the document authentication feature, please <a href="https://www.tencentcloud.com/zh/contact-us">contact us</a>.</p>
                     * 
                     */
                    bool GetDisableCheckOcrWarnings() const;

                    /**
                     * 设置<p>Indicates whether to disable document alerts. The default value is false, which means the alert detection feature is enabled. When enabled, the identity authentication process will be blocked based on document alerts. If you need to use the document authentication feature, please <a href="https://www.tencentcloud.com/zh/contact-us">contact us</a>.</p>
                     * @param _disableCheckOcrWarnings <p>Indicates whether to disable document alerts. The default value is false, which means the alert detection feature is enabled. When enabled, the identity authentication process will be blocked based on document alerts. If you need to use the document authentication feature, please <a href="https://www.tencentcloud.com/zh/contact-us">contact us</a>.</p>
                     * 
                     */
                    void SetDisableCheckOcrWarnings(const bool& _disableCheckOcrWarnings);

                    /**
                     * 判断参数 DisableCheckOcrWarnings 是否已赋值
                     * @return DisableCheckOcrWarnings 是否已赋值
                     * 
                     */
                    bool DisableCheckOcrWarningsHasBeenSet() const;

                    /**
                     * 获取<p>Security level of authentication: <br>1: Silent liveness; <br>2: Motion liveness; <br>3: Light liveness; <br>4: Motion + light liveness; <br>The default value is 3.</p>
                     * @return SecurityLevel <p>Security level of authentication: <br>1: Silent liveness; <br>2: Motion liveness; <br>3: Light liveness; <br>4: Motion + light liveness; <br>The default value is 3.</p>
                     * 
                     */
                    int64_t GetSecurityLevel() const;

                    /**
                     * 设置<p>Security level of authentication: <br>1: Silent liveness; <br>2: Motion liveness; <br>3: Light liveness; <br>4: Motion + light liveness; <br>The default value is 3.</p>
                     * @param _securityLevel <p>Security level of authentication: <br>1: Silent liveness; <br>2: Motion liveness; <br>3: Light liveness; <br>4: Motion + light liveness; <br>The default value is 3.</p>
                     * 
                     */
                    void SetSecurityLevel(const int64_t& _securityLevel);

                    /**
                     * 判断参数 SecurityLevel 是否已赋值
                     * @return SecurityLevel 是否已赋值
                     * 
                     */
                    bool SecurityLevelHasBeenSet() const;

                    /**
                     * 获取<p>Indicates whether to skip the agreement page. The default value is false. When SkipPrivacyPolicy is false, the agreement page is displayed and the privacy agreement must be selected. When SkipPrivacyPolicy is true, the agreement page is skipped and the liveness process starts directly without selecting the privacy agreement.</p>
                     * @return SkipPrivacyPolicy <p>Indicates whether to skip the agreement page. The default value is false. When SkipPrivacyPolicy is false, the agreement page is displayed and the privacy agreement must be selected. When SkipPrivacyPolicy is true, the agreement page is skipped and the liveness process starts directly without selecting the privacy agreement.</p>
                     * 
                     */
                    bool GetSkipPrivacyPolicy() const;

                    /**
                     * 设置<p>Indicates whether to skip the agreement page. The default value is false. When SkipPrivacyPolicy is false, the agreement page is displayed and the privacy agreement must be selected. When SkipPrivacyPolicy is true, the agreement page is skipped and the liveness process starts directly without selecting the privacy agreement.</p>
                     * @param _skipPrivacyPolicy <p>Indicates whether to skip the agreement page. The default value is false. When SkipPrivacyPolicy is false, the agreement page is displayed and the privacy agreement must be selected. When SkipPrivacyPolicy is true, the agreement page is skipped and the liveness process starts directly without selecting the privacy agreement.</p>
                     * 
                     */
                    void SetSkipPrivacyPolicy(const bool& _skipPrivacyPolicy);

                    /**
                     * 判断参数 SkipPrivacyPolicy 是否已赋值
                     * @return SkipPrivacyPolicy 是否已赋值
                     * 
                     */
                    bool SkipPrivacyPolicyHasBeenSet() const;

                    /**
                     * 获取<p>The default value is false. When set to false, the original document image is displayed. When set to true, the cropped document image is displayed.</p>
                     * @return IdCardCutReturn <p>The default value is false. When set to false, the original document image is displayed. When set to true, the cropped document image is displayed.</p>
                     * 
                     */
                    bool GetIdCardCutReturn() const;

                    /**
                     * 设置<p>The default value is false. When set to false, the original document image is displayed. When set to true, the cropped document image is displayed.</p>
                     * @param _idCardCutReturn <p>The default value is false. When set to false, the original document image is displayed. When set to true, the cropped document image is displayed.</p>
                     * 
                     */
                    void SetIdCardCutReturn(const bool& _idCardCutReturn);

                    /**
                     * 判断参数 IdCardCutReturn 是否已赋值
                     * @return IdCardCutReturn 是否已赋值
                     * 
                     */
                    bool IdCardCutReturnHasBeenSet() const;

                    /**
                     * 获取<p>Frontend theme color, in the format of an RGB hexadecimal color code. The default value is "#2d72f1". If the format is incorrect, the default color is used.</p>
                     * @return ThemeColor <p>Frontend theme color, in the format of an RGB hexadecimal color code. The default value is "#2d72f1". If the format is incorrect, the default color is used.</p>
                     * 
                     */
                    std::string GetThemeColor() const;

                    /**
                     * 设置<p>Frontend theme color, in the format of an RGB hexadecimal color code. The default value is "#2d72f1". If the format is incorrect, the default color is used.</p>
                     * @param _themeColor <p>Frontend theme color, in the format of an RGB hexadecimal color code. The default value is "#2d72f1". If the format is incorrect, the default color is used.</p>
                     * 
                     */
                    void SetThemeColor(const std::string& _themeColor);

                    /**
                     * 判断参数 ThemeColor 是否已赋值
                     * @return ThemeColor 是否已赋值
                     * 
                     */
                    bool ThemeColorHasBeenSet() const;

                    /**
                     * 获取<p>Internationalization language. The default value is en (English). Currently supported languages: <br>th: Thai; <br>en: English; <br>zh-cn: Simplified Chinese; <br>zh-tc: Traditional Chinese; <br>id: Indonesian.</p>
                     * @return Language <p>Internationalization language. The default value is en (English). Currently supported languages: <br>th: Thai; <br>en: English; <br>zh-cn: Simplified Chinese; <br>zh-tc: Traditional Chinese; <br>id: Indonesian.</p>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>Internationalization language. The default value is en (English). Currently supported languages: <br>th: Thai; <br>en: English; <br>zh-cn: Simplified Chinese; <br>zh-tc: Traditional Chinese; <br>id: Indonesian.</p>
                     * @param _language <p>Internationalization language. The default value is en (English). Currently supported languages: <br>th: Thai; <br>en: English; <br>zh-cn: Simplified Chinese; <br>zh-tc: Traditional Chinese; <br>id: Indonesian.</p>
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取<p>Automatic fallback mode. Valid values: <br>1: Fall back to silent liveness mode; <br>2: Disable fallback mode. <br>The default value is 1.</p>
                     * @return AutoDowngrade <p>Automatic fallback mode. Valid values: <br>1: Fall back to silent liveness mode; <br>2: Disable fallback mode. <br>The default value is 1.</p>
                     * 
                     */
                    int64_t GetAutoDowngrade() const;

                    /**
                     * 设置<p>Automatic fallback mode. Valid values: <br>1: Fall back to silent liveness mode; <br>2: Disable fallback mode. <br>The default value is 1.</p>
                     * @param _autoDowngrade <p>Automatic fallback mode. Valid values: <br>1: Fall back to silent liveness mode; <br>2: Disable fallback mode. <br>The default value is 1.</p>
                     * 
                     */
                    void SetAutoDowngrade(const int64_t& _autoDowngrade);

                    /**
                     * 判断参数 AutoDowngrade 是否已赋值
                     * @return AutoDowngrade 是否已赋值
                     * 
                     */
                    bool AutoDowngradeHasBeenSet() const;

                    /**
                     * 获取<p>Controls the action sequence. The action types are as follows: <br>"blink" <br>"mouth" <br>"nod" <br>"shake" <br>You can select 1 to 2 actions from the four. <br>Single action example: "blink" <br>Multiple actions example: "blink,mouth". <br>The default value is blink. <br>This parameter takes effect only when SecurityLevel is 2, 4, or 5. Otherwise, an error is reported.</p>
                     * @return ActionList <p>Controls the action sequence. The action types are as follows: <br>"blink" <br>"mouth" <br>"nod" <br>"shake" <br>You can select 1 to 2 actions from the four. <br>Single action example: "blink" <br>Multiple actions example: "blink,mouth". <br>The default value is blink. <br>This parameter takes effect only when SecurityLevel is 2, 4, or 5. Otherwise, an error is reported.</p>
                     * 
                     */
                    std::string GetActionList() const;

                    /**
                     * 设置<p>Controls the action sequence. The action types are as follows: <br>"blink" <br>"mouth" <br>"nod" <br>"shake" <br>You can select 1 to 2 actions from the four. <br>Single action example: "blink" <br>Multiple actions example: "blink,mouth". <br>The default value is blink. <br>This parameter takes effect only when SecurityLevel is 2, 4, or 5. Otherwise, an error is reported.</p>
                     * @param _actionList <p>Controls the action sequence. The action types are as follows: <br>"blink" <br>"mouth" <br>"nod" <br>"shake" <br>You can select 1 to 2 actions from the four. <br>Single action example: "blink" <br>Multiple actions example: "blink,mouth". <br>The default value is blink. <br>This parameter takes effect only when SecurityLevel is 2, 4, or 5. Otherwise, an error is reported.</p>
                     * 
                     */
                    void SetActionList(const std::string& _actionList);

                    /**
                     * 判断参数 ActionList 是否已赋值
                     * @return ActionList 是否已赋值
                     * 
                     */
                    bool ActionListHasBeenSet() const;

                    /**
                     * 获取<p>Maximum number of liveness verification attempts. The valid range is 1–99. The default value is 99.</p>
                     * @return LivenessRetryLimit <p>Maximum number of liveness verification attempts. The valid range is 1–99. The default value is 99.</p>
                     * 
                     */
                    int64_t GetLivenessRetryLimit() const;

                    /**
                     * 设置<p>Maximum number of liveness verification attempts. The valid range is 1–99. The default value is 99.</p>
                     * @param _livenessRetryLimit <p>Maximum number of liveness verification attempts. The valid range is 1–99. The default value is 99.</p>
                     * 
                     */
                    void SetLivenessRetryLimit(const int64_t& _livenessRetryLimit);

                    /**
                     * 判断参数 LivenessRetryLimit 是否已赋值
                     * @return LivenessRetryLimit 是否已赋值
                     * 
                     */
                    bool LivenessRetryLimitHasBeenSet() const;

                    /**
                     * 获取<p>Controls the liveness detection timeout in seconds. The valid range is (0, 600]. The default value is 45 seconds.</p>
                     * @return LivenessTimeout <p>Controls the liveness detection timeout in seconds. The valid range is (0, 600]. The default value is 45 seconds.</p>
                     * 
                     */
                    uint64_t GetLivenessTimeout() const;

                    /**
                     * 设置<p>Controls the liveness detection timeout in seconds. The valid range is (0, 600]. The default value is 45 seconds.</p>
                     * @param _livenessTimeout <p>Controls the liveness detection timeout in seconds. The valid range is (0, 600]. The default value is 45 seconds.</p>
                     * 
                     */
                    void SetLivenessTimeout(const uint64_t& _livenessTimeout);

                    /**
                     * 判断参数 LivenessTimeout 是否已赋值
                     * @return LivenessTimeout 是否已赋值
                     * 
                     */
                    bool LivenessTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Selects the OCR alerts to pay attention to. When a selected OCR alert occurs, the identity authentication process is interrupted. The default value is empty, indicating that all alerts are selected. This feature requires the parameter DisableCheckOcrWarnings=false. If alerts are disabled, this parameter does not take effect.</p><p>List of alert codes and their meanings: <br>-9101 Incomplete border alert <br>-9102 Photocopy alert <br>-9103 Recapture alert <br>-9104 Photoshop alert <br>-9107 Reflection alert <br>-9108 Blur alert <br>-9109 Alert not enabled</p>
                     * @return SelectedWarningCodes <p>Selects the OCR alerts to pay attention to. When a selected OCR alert occurs, the identity authentication process is interrupted. The default value is empty, indicating that all alerts are selected. This feature requires the parameter DisableCheckOcrWarnings=false. If alerts are disabled, this parameter does not take effect.</p><p>List of alert codes and their meanings: <br>-9101 Incomplete border alert <br>-9102 Photocopy alert <br>-9103 Recapture alert <br>-9104 Photoshop alert <br>-9107 Reflection alert <br>-9108 Blur alert <br>-9109 Alert not enabled</p>
                     * 
                     */
                    std::string GetSelectedWarningCodes() const;

                    /**
                     * 设置<p>Selects the OCR alerts to pay attention to. When a selected OCR alert occurs, the identity authentication process is interrupted. The default value is empty, indicating that all alerts are selected. This feature requires the parameter DisableCheckOcrWarnings=false. If alerts are disabled, this parameter does not take effect.</p><p>List of alert codes and their meanings: <br>-9101 Incomplete border alert <br>-9102 Photocopy alert <br>-9103 Recapture alert <br>-9104 Photoshop alert <br>-9107 Reflection alert <br>-9108 Blur alert <br>-9109 Alert not enabled</p>
                     * @param _selectedWarningCodes <p>Selects the OCR alerts to pay attention to. When a selected OCR alert occurs, the identity authentication process is interrupted. The default value is empty, indicating that all alerts are selected. This feature requires the parameter DisableCheckOcrWarnings=false. If alerts are disabled, this parameter does not take effect.</p><p>List of alert codes and their meanings: <br>-9101 Incomplete border alert <br>-9102 Photocopy alert <br>-9103 Recapture alert <br>-9104 Photoshop alert <br>-9107 Reflection alert <br>-9108 Blur alert <br>-9109 Alert not enabled</p>
                     * 
                     */
                    void SetSelectedWarningCodes(const std::string& _selectedWarningCodes);

                    /**
                     * 判断参数 SelectedWarningCodes 是否已赋值
                     * @return SelectedWarningCodes 是否已赋值
                     * 
                     */
                    bool SelectedWarningCodesHasBeenSet() const;

                    /**
                     * 获取<p>Indicates whether expired identity documents are allowed to enter the liveness detection process. This parameter takes effect only when the document type is Hong Kong (China) identity card (HKID). <br>true (default): Expired Hong Kong (China) identity cards are allowed to enter the liveness detection process. <br>false: Expired Hong Kong (China) identity cards are rejected and cannot enter the liveness detection process.</p>
                     * @return AllowExpiredDocument <p>Indicates whether expired identity documents are allowed to enter the liveness detection process. This parameter takes effect only when the document type is Hong Kong (China) identity card (HKID). <br>true (default): Expired Hong Kong (China) identity cards are allowed to enter the liveness detection process. <br>false: Expired Hong Kong (China) identity cards are rejected and cannot enter the liveness detection process.</p>
                     * 
                     */
                    bool GetAllowExpiredDocument() const;

                    /**
                     * 设置<p>Indicates whether expired identity documents are allowed to enter the liveness detection process. This parameter takes effect only when the document type is Hong Kong (China) identity card (HKID). <br>true (default): Expired Hong Kong (China) identity cards are allowed to enter the liveness detection process. <br>false: Expired Hong Kong (China) identity cards are rejected and cannot enter the liveness detection process.</p>
                     * @param _allowExpiredDocument <p>Indicates whether expired identity documents are allowed to enter the liveness detection process. This parameter takes effect only when the document type is Hong Kong (China) identity card (HKID). <br>true (default): Expired Hong Kong (China) identity cards are allowed to enter the liveness detection process. <br>false: Expired Hong Kong (China) identity cards are rejected and cannot enter the liveness detection process.</p>
                     * 
                     */
                    void SetAllowExpiredDocument(const bool& _allowExpiredDocument);

                    /**
                     * 判断参数 AllowExpiredDocument 是否已赋值
                     * @return AllowExpiredDocument 是否已赋值
                     * 
                     */
                    bool AllowExpiredDocumentHasBeenSet() const;

                    /**
                     * 获取<p>Service edition, including the basic edition (BASIC) and the PLUS edition (PLUS).</p><p>Valid values:</p><ul><li>BASIC: Basic edition</li><li>PLUS: PLUS edition</li></ul><p>Default value: BASIC</p>
                     * @return Version <p>Service edition, including the basic edition (BASIC) and the PLUS edition (PLUS).</p><p>Valid values:</p><ul><li>BASIC: Basic edition</li><li>PLUS: PLUS edition</li></ul><p>Default value: BASIC</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>Service edition, including the basic edition (BASIC) and the PLUS edition (PLUS).</p><p>Valid values:</p><ul><li>BASIC: Basic edition</li><li>PLUS: PLUS edition</li></ul><p>Default value: BASIC</p>
                     * @param _version <p>Service edition, including the basic edition (BASIC) and the PLUS edition (PLUS).</p><p>Valid values:</p><ul><li>BASIC: Basic edition</li><li>PLUS: PLUS edition</li></ul><p>Default value: BASIC</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>When <code>CheckMode = 1</code>, this parameter defines the waiting policy for the OCR recognition result.</p><p>Valid values:</p><ul><li>required: Wait until the OCR verification result is confirmed before proceeding to liveness detection.</li><li>skip: Proceed to liveness detection directly after the document photo is submitted.</li></ul><p>Default value: required</p>
                     * @return OcrWaitPolicy <p>When <code>CheckMode = 1</code>, this parameter defines the waiting policy for the OCR recognition result.</p><p>Valid values:</p><ul><li>required: Wait until the OCR verification result is confirmed before proceeding to liveness detection.</li><li>skip: Proceed to liveness detection directly after the document photo is submitted.</li></ul><p>Default value: required</p>
                     * 
                     */
                    std::string GetOcrWaitPolicy() const;

                    /**
                     * 设置<p>When <code>CheckMode = 1</code>, this parameter defines the waiting policy for the OCR recognition result.</p><p>Valid values:</p><ul><li>required: Wait until the OCR verification result is confirmed before proceeding to liveness detection.</li><li>skip: Proceed to liveness detection directly after the document photo is submitted.</li></ul><p>Default value: required</p>
                     * @param _ocrWaitPolicy <p>When <code>CheckMode = 1</code>, this parameter defines the waiting policy for the OCR recognition result.</p><p>Valid values:</p><ul><li>required: Wait until the OCR verification result is confirmed before proceeding to liveness detection.</li><li>skip: Proceed to liveness detection directly after the document photo is submitted.</li></ul><p>Default value: required</p>
                     * 
                     */
                    void SetOcrWaitPolicy(const std::string& _ocrWaitPolicy);

                    /**
                     * 判断参数 OcrWaitPolicy 是否已赋值
                     * @return OcrWaitPolicy 是否已赋值
                     * 
                     */
                    bool OcrWaitPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Verification status callback URL. After this URL is configured, the service actively pushes notifications to this URL when the process ends. Leave it empty to disable the callback capability. As callbacks cannot be guaranteed to be 100% reliable, it is recommended to use them together with a polling mechanism to ensure that the final status is obtained.</p>
                     * @return WebhookUrl <p>Verification status callback URL. After this URL is configured, the service actively pushes notifications to this URL when the process ends. Leave it empty to disable the callback capability. As callbacks cannot be guaranteed to be 100% reliable, it is recommended to use them together with a polling mechanism to ensure that the final status is obtained.</p>
                     * 
                     */
                    std::string GetWebhookUrl() const;

                    /**
                     * 设置<p>Verification status callback URL. After this URL is configured, the service actively pushes notifications to this URL when the process ends. Leave it empty to disable the callback capability. As callbacks cannot be guaranteed to be 100% reliable, it is recommended to use them together with a polling mechanism to ensure that the final status is obtained.</p>
                     * @param _webhookUrl <p>Verification status callback URL. After this URL is configured, the service actively pushes notifications to this URL when the process ends. Leave it empty to disable the callback capability. As callbacks cannot be guaranteed to be 100% reliable, it is recommended to use them together with a polling mechanism to ensure that the final status is obtained.</p>
                     * 
                     */
                    void SetWebhookUrl(const std::string& _webhookUrl);

                    /**
                     * 判断参数 WebhookUrl 是否已赋值
                     * @return WebhookUrl 是否已赋值
                     * 
                     */
                    bool WebhookUrlHasBeenSet() const;

                private:

                    /**
                     * <p>Indicates whether to skip the start verification page when starting verification. If set to true, the verification process starts directly. The default value is false. If a fallback policy is triggered, this configuration does not take effect.</p>
                     */
                    bool m_autoSkipStartPage;
                    bool m_autoSkipStartPageHasBeenSet;

                    /**
                     * <p>Indicates whether to skip the result display page and automatically redirect to RedirectURL when verification succeeds. The default value is false.</p>
                     */
                    bool m_autoSkip;
                    bool m_autoSkipHasBeenSet;

                    /**
                     * <p>Detection mode. Valid values: <br>1: OCR + liveness detection + face comparison; <br>2: Liveness detection + face comparison; <br>3: Liveness detection; <br>4: OCR. <br>The default value is 2.</p>
                     */
                    int64_t m_checkMode;
                    bool m_checkModeHasBeenSet;

                    /**
                     * <p>The type of card used for authentication. Currently supported types: <br>1. HKIDCard: Hong Kong (China) ID card <br>2. MLIDCard: Malaysian ID card <br>3. IndonesiaIDCard: Indonesian ID card <br>4. PhilippinesVoteID: Philippine voter's card <br>5. PhilippinesDrivingLicense: Philippine driving license <br>6. PhilippinesTinID: Philippine TIN ID <br>7. PhilippinesSSSID: Philippine SSS ID <br>8. PhilippinesUMID: Philippine UMID <br>9. InternationalIDPassport: Passports from Hong Kong/Macao/Taiwan (China) and overseas <br>10. ThailandIDCard: Thai ID card <br>11. SingaporeIDCard: Singaporean ID card <br>12. MainlandIDCard: Mainland ID card</p>
                     */
                    std::string m_iDCardType;
                    bool m_iDCardTypeHasBeenSet;

                    /**
                     * <p>Indicates whether to disable document alerts. The default value is false, which means the alert detection feature is enabled. When enabled, the identity authentication process will be blocked based on document alerts. If you need to use the document authentication feature, please <a href="https://www.tencentcloud.com/zh/contact-us">contact us</a>.</p>
                     */
                    bool m_disableCheckOcrWarnings;
                    bool m_disableCheckOcrWarningsHasBeenSet;

                    /**
                     * <p>Security level of authentication: <br>1: Silent liveness; <br>2: Motion liveness; <br>3: Light liveness; <br>4: Motion + light liveness; <br>The default value is 3.</p>
                     */
                    int64_t m_securityLevel;
                    bool m_securityLevelHasBeenSet;

                    /**
                     * <p>Indicates whether to skip the agreement page. The default value is false. When SkipPrivacyPolicy is false, the agreement page is displayed and the privacy agreement must be selected. When SkipPrivacyPolicy is true, the agreement page is skipped and the liveness process starts directly without selecting the privacy agreement.</p>
                     */
                    bool m_skipPrivacyPolicy;
                    bool m_skipPrivacyPolicyHasBeenSet;

                    /**
                     * <p>The default value is false. When set to false, the original document image is displayed. When set to true, the cropped document image is displayed.</p>
                     */
                    bool m_idCardCutReturn;
                    bool m_idCardCutReturnHasBeenSet;

                    /**
                     * <p>Frontend theme color, in the format of an RGB hexadecimal color code. The default value is "#2d72f1". If the format is incorrect, the default color is used.</p>
                     */
                    std::string m_themeColor;
                    bool m_themeColorHasBeenSet;

                    /**
                     * <p>Internationalization language. The default value is en (English). Currently supported languages: <br>th: Thai; <br>en: English; <br>zh-cn: Simplified Chinese; <br>zh-tc: Traditional Chinese; <br>id: Indonesian.</p>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * <p>Automatic fallback mode. Valid values: <br>1: Fall back to silent liveness mode; <br>2: Disable fallback mode. <br>The default value is 1.</p>
                     */
                    int64_t m_autoDowngrade;
                    bool m_autoDowngradeHasBeenSet;

                    /**
                     * <p>Controls the action sequence. The action types are as follows: <br>"blink" <br>"mouth" <br>"nod" <br>"shake" <br>You can select 1 to 2 actions from the four. <br>Single action example: "blink" <br>Multiple actions example: "blink,mouth". <br>The default value is blink. <br>This parameter takes effect only when SecurityLevel is 2, 4, or 5. Otherwise, an error is reported.</p>
                     */
                    std::string m_actionList;
                    bool m_actionListHasBeenSet;

                    /**
                     * <p>Maximum number of liveness verification attempts. The valid range is 1–99. The default value is 99.</p>
                     */
                    int64_t m_livenessRetryLimit;
                    bool m_livenessRetryLimitHasBeenSet;

                    /**
                     * <p>Controls the liveness detection timeout in seconds. The valid range is (0, 600]. The default value is 45 seconds.</p>
                     */
                    uint64_t m_livenessTimeout;
                    bool m_livenessTimeoutHasBeenSet;

                    /**
                     * <p>Selects the OCR alerts to pay attention to. When a selected OCR alert occurs, the identity authentication process is interrupted. The default value is empty, indicating that all alerts are selected. This feature requires the parameter DisableCheckOcrWarnings=false. If alerts are disabled, this parameter does not take effect.</p><p>List of alert codes and their meanings: <br>-9101 Incomplete border alert <br>-9102 Photocopy alert <br>-9103 Recapture alert <br>-9104 Photoshop alert <br>-9107 Reflection alert <br>-9108 Blur alert <br>-9109 Alert not enabled</p>
                     */
                    std::string m_selectedWarningCodes;
                    bool m_selectedWarningCodesHasBeenSet;

                    /**
                     * <p>Indicates whether expired identity documents are allowed to enter the liveness detection process. This parameter takes effect only when the document type is Hong Kong (China) identity card (HKID). <br>true (default): Expired Hong Kong (China) identity cards are allowed to enter the liveness detection process. <br>false: Expired Hong Kong (China) identity cards are rejected and cannot enter the liveness detection process.</p>
                     */
                    bool m_allowExpiredDocument;
                    bool m_allowExpiredDocumentHasBeenSet;

                    /**
                     * <p>Service edition, including the basic edition (BASIC) and the PLUS edition (PLUS).</p><p>Valid values:</p><ul><li>BASIC: Basic edition</li><li>PLUS: PLUS edition</li></ul><p>Default value: BASIC</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>When <code>CheckMode = 1</code>, this parameter defines the waiting policy for the OCR recognition result.</p><p>Valid values:</p><ul><li>required: Wait until the OCR verification result is confirmed before proceeding to liveness detection.</li><li>skip: Proceed to liveness detection directly after the document photo is submitted.</li></ul><p>Default value: required</p>
                     */
                    std::string m_ocrWaitPolicy;
                    bool m_ocrWaitPolicyHasBeenSet;

                    /**
                     * <p>Verification status callback URL. After this URL is configured, the service actively pushes notifications to this URL when the process ends. Leave it empty to disable the callback capability. As callbacks cannot be guaranteed to be 100% reliable, it is recommended to use them together with a polling mechanism to ensure that the final status is obtained.</p>
                     */
                    std::string m_webhookUrl;
                    bool m_webhookUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_WEBVERIFICATIONCONFIGINTL_H_
