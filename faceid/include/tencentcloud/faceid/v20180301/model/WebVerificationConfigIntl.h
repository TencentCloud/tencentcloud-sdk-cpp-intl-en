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
                * eKYC Web related configuration
                */
                class WebVerificationConfigIntl : public AbstractModel
                {
                public:
                    WebVerificationConfigIntl();
                    ~WebVerificationConfigIntl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether to skip the start verification webpage when starting verification. If true, directly enter the verification process. Default false. If the degradation policy is triggered, this configuration will not take effect.</p>
                     * @return AutoSkipStartPage <p>Whether to skip the start verification webpage when starting verification. If true, directly enter the verification process. Default false. If the degradation policy is triggered, this configuration will not take effect.</p>
                     * 
                     */
                    bool GetAutoSkipStartPage() const;

                    /**
                     * 设置<p>Whether to skip the start verification webpage when starting verification. If true, directly enter the verification process. Default false. If the degradation policy is triggered, this configuration will not take effect.</p>
                     * @param _autoSkipStartPage <p>Whether to skip the start verification webpage when starting verification. If true, directly enter the verification process. Default false. If the degradation policy is triggered, this configuration will not take effect.</p>
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
                     * 获取<p>Whether to skip the result display page and automatically jump to RedirectURL when verification is successful. Default false.</p>
                     * @return AutoSkip <p>Whether to skip the result display page and automatically jump to RedirectURL when verification is successful. Default false.</p>
                     * 
                     */
                    bool GetAutoSkip() const;

                    /**
                     * 设置<p>Whether to skip the result display page and automatically jump to RedirectURL when verification is successful. Default false.</p>
                     * @param _autoSkip <p>Whether to skip the result display page and automatically jump to RedirectURL when verification is successful. Default false.</p>
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
                     * 获取<p>Detection mode. Parameter values are as follows:<br>1: OCR+liveness detection+face comparison;<br>2: liveness detection+face comparison;<br>3: liveness detection;<br>4: OCR;<br>Default value is 2.</p>
                     * @return CheckMode <p>Detection mode. Parameter values are as follows:<br>1: OCR+liveness detection+face comparison;<br>2: liveness detection+face comparison;<br>3: liveness detection;<br>4: OCR;<br>Default value is 2.</p>
                     * 
                     */
                    int64_t GetCheckMode() const;

                    /**
                     * 设置<p>Detection mode. Parameter values are as follows:<br>1: OCR+liveness detection+face comparison;<br>2: liveness detection+face comparison;<br>3: liveness detection;<br>4: OCR;<br>Default value is 2.</p>
                     * @param _checkMode <p>Detection mode. Parameter values are as follows:<br>1: OCR+liveness detection+face comparison;<br>2: liveness detection+face comparison;<br>3: liveness detection;<br>4: OCR;<br>Default value is 2.</p>
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
                     * 获取<p>Identity document type used for authentication. Currently supported:<br>1.HKIDCard: Hong Kong (China) identity card<br>2.MLIDCard: Malaysian identity card<br>3.IndonesiaIDCard: Indonesian Identity Card<br>4.PhilippinesVoteID: Philippines voter card<br>5.PhilippinesDrivingLicense: Philippines driving license<br>6.PhilippinesTinID: Philippines TinID<br>7.PhilippinesSSSID: Philippines SSSID<br>8.PhilippinesUMID: Philippines UMID<br>9.InternationalIDPassport: Passport for Hong Kong (China), Macao (China), and Taiwan (China) as well as overseas passport<br>10.ThailandIDCard: Thai Identity Card<br>11.SingaporeIDCard: Singapore ID card<br>12.MainlandIDCard: Mainland ID card</p>
                     * @return IDCardType <p>Identity document type used for authentication. Currently supported:<br>1.HKIDCard: Hong Kong (China) identity card<br>2.MLIDCard: Malaysian identity card<br>3.IndonesiaIDCard: Indonesian Identity Card<br>4.PhilippinesVoteID: Philippines voter card<br>5.PhilippinesDrivingLicense: Philippines driving license<br>6.PhilippinesTinID: Philippines TinID<br>7.PhilippinesSSSID: Philippines SSSID<br>8.PhilippinesUMID: Philippines UMID<br>9.InternationalIDPassport: Passport for Hong Kong (China), Macao (China), and Taiwan (China) as well as overseas passport<br>10.ThailandIDCard: Thai Identity Card<br>11.SingaporeIDCard: Singapore ID card<br>12.MainlandIDCard: Mainland ID card</p>
                     * 
                     */
                    std::string GetIDCardType() const;

                    /**
                     * 设置<p>Identity document type used for authentication. Currently supported:<br>1.HKIDCard: Hong Kong (China) identity card<br>2.MLIDCard: Malaysian identity card<br>3.IndonesiaIDCard: Indonesian Identity Card<br>4.PhilippinesVoteID: Philippines voter card<br>5.PhilippinesDrivingLicense: Philippines driving license<br>6.PhilippinesTinID: Philippines TinID<br>7.PhilippinesSSSID: Philippines SSSID<br>8.PhilippinesUMID: Philippines UMID<br>9.InternationalIDPassport: Passport for Hong Kong (China), Macao (China), and Taiwan (China) as well as overseas passport<br>10.ThailandIDCard: Thai Identity Card<br>11.SingaporeIDCard: Singapore ID card<br>12.MainlandIDCard: Mainland ID card</p>
                     * @param _iDCardType <p>Identity document type used for authentication. Currently supported:<br>1.HKIDCard: Hong Kong (China) identity card<br>2.MLIDCard: Malaysian identity card<br>3.IndonesiaIDCard: Indonesian Identity Card<br>4.PhilippinesVoteID: Philippines voter card<br>5.PhilippinesDrivingLicense: Philippines driving license<br>6.PhilippinesTinID: Philippines TinID<br>7.PhilippinesSSSID: Philippines SSSID<br>8.PhilippinesUMID: Philippines UMID<br>9.InternationalIDPassport: Passport for Hong Kong (China), Macao (China), and Taiwan (China) as well as overseas passport<br>10.ThailandIDCard: Thai Identity Card<br>11.SingaporeIDCard: Singapore ID card<br>12.MainlandIDCard: Mainland ID card</p>
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
                     * 获取<p>Want to close document alarm, false by default (enable alarm detection). When enabled, the identity verification process will intercept based on the document alarm status. If you need to use document anti-counterfeiting functionality, <a href="https://www.tencentcloud.com/zh/contact-us">contact us</a>.</p>
                     * @return DisableCheckOcrWarnings <p>Want to close document alarm, false by default (enable alarm detection). When enabled, the identity verification process will intercept based on the document alarm status. If you need to use document anti-counterfeiting functionality, <a href="https://www.tencentcloud.com/zh/contact-us">contact us</a>.</p>
                     * 
                     */
                    bool GetDisableCheckOcrWarnings() const;

                    /**
                     * 设置<p>Want to close document alarm, false by default (enable alarm detection). When enabled, the identity verification process will intercept based on the document alarm status. If you need to use document anti-counterfeiting functionality, <a href="https://www.tencentcloud.com/zh/contact-us">contact us</a>.</p>
                     * @param _disableCheckOcrWarnings <p>Want to close document alarm, false by default (enable alarm detection). When enabled, the identity verification process will intercept based on the document alarm status. If you need to use document anti-counterfeiting functionality, <a href="https://www.tencentcloud.com/zh/contact-us">contact us</a>.</p>
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
                     * 获取<p>Security level of authentication:<br>1: Silent liveness;<br>2: Action liveness;<br>3: Light liveness;<br>4: Action + light liveness;<br>Default value is 3.</p>
                     * @return SecurityLevel <p>Security level of authentication:<br>1: Silent liveness;<br>2: Action liveness;<br>3: Light liveness;<br>4: Action + light liveness;<br>Default value is 3.</p>
                     * 
                     */
                    int64_t GetSecurityLevel() const;

                    /**
                     * 设置<p>Security level of authentication:<br>1: Silent liveness;<br>2: Action liveness;<br>3: Light liveness;<br>4: Action + light liveness;<br>Default value is 3.</p>
                     * @param _securityLevel <p>Security level of authentication:<br>1: Silent liveness;<br>2: Action liveness;<br>3: Light liveness;<br>4: Action + light liveness;<br>Default value is 3.</p>
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
                     * 获取<p>Whether to skip the privacy agreement webpage, default false. When SkipPrivacyPolicy is false, the privacy agreement webpage will show and the privacy agreement must be checked. When SkipPrivacyPolicy is true, the privacy agreement webpage will be skipped to directly enter the Live Face Process without the need to check the privacy agreement webpage.</p>
                     * @return SkipPrivacyPolicy <p>Whether to skip the privacy agreement webpage, default false. When SkipPrivacyPolicy is false, the privacy agreement webpage will show and the privacy agreement must be checked. When SkipPrivacyPolicy is true, the privacy agreement webpage will be skipped to directly enter the Live Face Process without the need to check the privacy agreement webpage.</p>
                     * 
                     */
                    bool GetSkipPrivacyPolicy() const;

                    /**
                     * 设置<p>Whether to skip the privacy agreement webpage, default false. When SkipPrivacyPolicy is false, the privacy agreement webpage will show and the privacy agreement must be checked. When SkipPrivacyPolicy is true, the privacy agreement webpage will be skipped to directly enter the Live Face Process without the need to check the privacy agreement webpage.</p>
                     * @param _skipPrivacyPolicy <p>Whether to skip the privacy agreement webpage, default false. When SkipPrivacyPolicy is false, the privacy agreement webpage will show and the privacy agreement must be checked. When SkipPrivacyPolicy is true, the privacy agreement webpage will be skipped to directly enter the Live Face Process without the need to check the privacy agreement webpage.</p>
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
                     * 获取<p>Default false. When false, show the original document image. When true, show the split document image.</p>
                     * @return IdCardCutReturn <p>Default false. When false, show the original document image. When true, show the split document image.</p>
                     * 
                     */
                    bool GetIdCardCutReturn() const;

                    /**
                     * 设置<p>Default false. When false, show the original document image. When true, show the split document image.</p>
                     * @param _idCardCutReturn <p>Default false. When false, show the original document image. When true, show the split document image.</p>
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
                     * 获取<p>Frontend theme color in base 16 RGB format. Defaults to "#2d72f1". Uses default values if the format is incorrect.</p>
                     * @return ThemeColor <p>Frontend theme color in base 16 RGB format. Defaults to "#2d72f1". Uses default values if the format is incorrect.</p>
                     * 
                     */
                    std::string GetThemeColor() const;

                    /**
                     * 设置<p>Frontend theme color in base 16 RGB format. Defaults to "#2d72f1". Uses default values if the format is incorrect.</p>
                     * @param _themeColor <p>Frontend theme color in base 16 RGB format. Defaults to "#2d72f1". Uses default values if the format is incorrect.</p>
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
                     * 获取<p>Internationalized language, defaults to en (English). Currently supported:<br>th: Thai;<br>en: English;<br>zh-cn: Simplified Chinese;<br>zh-tc: Traditional Chinese;<br>id: Indonesia;</p>
                     * @return Language <p>Internationalized language, defaults to en (English). Currently supported:<br>th: Thai;<br>en: English;<br>zh-cn: Simplified Chinese;<br>zh-tc: Traditional Chinese;<br>id: Indonesia;</p>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>Internationalized language, defaults to en (English). Currently supported:<br>th: Thai;<br>en: English;<br>zh-cn: Simplified Chinese;<br>zh-tc: Traditional Chinese;<br>id: Indonesia;</p>
                     * @param _language <p>Internationalized language, defaults to en (English). Currently supported:<br>th: Thai;<br>en: English;<br>zh-cn: Simplified Chinese;<br>zh-tc: Traditional Chinese;<br>id: Indonesia;</p>
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
                     * 获取<p>Automatic downgrade mode. Parameter values as follows:<br>1: Downgrade to silent liveness mode.<br>2: Disable downgrade mode.<br>Default value: 1.</p>
                     * @return AutoDowngrade <p>Automatic downgrade mode. Parameter values as follows:<br>1: Downgrade to silent liveness mode.<br>2: Disable downgrade mode.<br>Default value: 1.</p>
                     * 
                     */
                    int64_t GetAutoDowngrade() const;

                    /**
                     * 设置<p>Automatic downgrade mode. Parameter values as follows:<br>1: Downgrade to silent liveness mode.<br>2: Disable downgrade mode.<br>Default value: 1.</p>
                     * @param _autoDowngrade <p>Automatic downgrade mode. Parameter values as follows:<br>1: Downgrade to silent liveness mode.<br>2: Disable downgrade mode.<br>Default value: 1.</p>
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
                     * 获取<p>Control the action sequence. Action types are as follows:<br>"blink"<br>"mouth"<br>"nod"<br>"shake"<br>Choose 1-2 actions from the four.<br>Single action example: "blink"<br>Multi-action example: "blink,mouth".<br>Default value: blink<br>Input this parameter only when SecurityLevel is 2, 4, or 5 for different action types to take effect; otherwise, an API error occurs.</p>
                     * @return ActionList <p>Control the action sequence. Action types are as follows:<br>"blink"<br>"mouth"<br>"nod"<br>"shake"<br>Choose 1-2 actions from the four.<br>Single action example: "blink"<br>Multi-action example: "blink,mouth".<br>Default value: blink<br>Input this parameter only when SecurityLevel is 2, 4, or 5 for different action types to take effect; otherwise, an API error occurs.</p>
                     * 
                     */
                    std::string GetActionList() const;

                    /**
                     * 设置<p>Control the action sequence. Action types are as follows:<br>"blink"<br>"mouth"<br>"nod"<br>"shake"<br>Choose 1-2 actions from the four.<br>Single action example: "blink"<br>Multi-action example: "blink,mouth".<br>Default value: blink<br>Input this parameter only when SecurityLevel is 2, 4, or 5 for different action types to take effect; otherwise, an API error occurs.</p>
                     * @param _actionList <p>Control the action sequence. Action types are as follows:<br>"blink"<br>"mouth"<br>"nod"<br>"shake"<br>Choose 1-2 actions from the four.<br>Single action example: "blink"<br>Multi-action example: "blink,mouth".<br>Default value: blink<br>Input this parameter only when SecurityLevel is 2, 4, or 5 for different action types to take effect; otherwise, an API error occurs.</p>
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
                     * 获取<p>Maximum liveness verification attempts. Value ranges from 1 to 99. Default value is 99.</p>
                     * @return LivenessRetryLimit <p>Maximum liveness verification attempts. Value ranges from 1 to 99. Default value is 99.</p>
                     * 
                     */
                    int64_t GetLivenessRetryLimit() const;

                    /**
                     * 设置<p>Maximum liveness verification attempts. Value ranges from 1 to 99. Default value is 99.</p>
                     * @param _livenessRetryLimit <p>Maximum liveness verification attempts. Value ranges from 1 to 99. Default value is 99.</p>
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
                     * 获取<p>Control the liveness detection timeout period in seconds. The value ranges from 0 to 600. Default: 45 seconds.</p>
                     * @return LivenessTimeout <p>Control the liveness detection timeout period in seconds. The value ranges from 0 to 600. Default: 45 seconds.</p>
                     * 
                     */
                    uint64_t GetLivenessTimeout() const;

                    /**
                     * 设置<p>Control the liveness detection timeout period in seconds. The value ranges from 0 to 600. Default: 45 seconds.</p>
                     * @param _livenessTimeout <p>Control the liveness detection timeout period in seconds. The value ranges from 0 to 600. Default: 45 seconds.</p>
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
                     * 获取<p>Select OCR alarms that require attention. When an OCR alarm is generated, the identity verification process will be interrupted. The default value is empty, indicating all alarms are monitored. This feature requires the parameter DisableCheckOcrWarnings=false. If the alarm is disabled, this parameter will not be effective.</p><p>Alarm code list and definitions:<br>-9101 Incomplete border alarm<br>-9102 Photocopies alarm<br>-9103 Alarm for rephotographing<br>-9104 ps alarm<br>-9107 Reflective alarm<br>-9108 Blurry alarm<br>-9109 Alarm not enabled</p>
                     * @return SelectedWarningCodes <p>Select OCR alarms that require attention. When an OCR alarm is generated, the identity verification process will be interrupted. The default value is empty, indicating all alarms are monitored. This feature requires the parameter DisableCheckOcrWarnings=false. If the alarm is disabled, this parameter will not be effective.</p><p>Alarm code list and definitions:<br>-9101 Incomplete border alarm<br>-9102 Photocopies alarm<br>-9103 Alarm for rephotographing<br>-9104 ps alarm<br>-9107 Reflective alarm<br>-9108 Blurry alarm<br>-9109 Alarm not enabled</p>
                     * 
                     */
                    std::string GetSelectedWarningCodes() const;

                    /**
                     * 设置<p>Select OCR alarms that require attention. When an OCR alarm is generated, the identity verification process will be interrupted. The default value is empty, indicating all alarms are monitored. This feature requires the parameter DisableCheckOcrWarnings=false. If the alarm is disabled, this parameter will not be effective.</p><p>Alarm code list and definitions:<br>-9101 Incomplete border alarm<br>-9102 Photocopies alarm<br>-9103 Alarm for rephotographing<br>-9104 ps alarm<br>-9107 Reflective alarm<br>-9108 Blurry alarm<br>-9109 Alarm not enabled</p>
                     * @param _selectedWarningCodes <p>Select OCR alarms that require attention. When an OCR alarm is generated, the identity verification process will be interrupted. The default value is empty, indicating all alarms are monitored. This feature requires the parameter DisableCheckOcrWarnings=false. If the alarm is disabled, this parameter will not be effective.</p><p>Alarm code list and definitions:<br>-9101 Incomplete border alarm<br>-9102 Photocopies alarm<br>-9103 Alarm for rephotographing<br>-9104 ps alarm<br>-9107 Reflective alarm<br>-9108 Blurry alarm<br>-9109 Alarm not enabled</p>
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
                     * 获取<p>Whether to allow expired identity documents to enter the liveness detection process. This parameter is valid only when the document type is Hong Kong identity card (HKID).<br>true (default value): Allow expired Hong Kong identity card to enter the liveness detection process.<br>false: Reject expired Hong Kong identity card, not accessible to the liveness detection process.</p>
                     * @return AllowExpiredDocument <p>Whether to allow expired identity documents to enter the liveness detection process. This parameter is valid only when the document type is Hong Kong identity card (HKID).<br>true (default value): Allow expired Hong Kong identity card to enter the liveness detection process.<br>false: Reject expired Hong Kong identity card, not accessible to the liveness detection process.</p>
                     * 
                     */
                    bool GetAllowExpiredDocument() const;

                    /**
                     * 设置<p>Whether to allow expired identity documents to enter the liveness detection process. This parameter is valid only when the document type is Hong Kong identity card (HKID).<br>true (default value): Allow expired Hong Kong identity card to enter the liveness detection process.<br>false: Reject expired Hong Kong identity card, not accessible to the liveness detection process.</p>
                     * @param _allowExpiredDocument <p>Whether to allow expired identity documents to enter the liveness detection process. This parameter is valid only when the document type is Hong Kong identity card (HKID).<br>true (default value): Allow expired Hong Kong identity card to enter the liveness detection process.<br>false: Reject expired Hong Kong identity card, not accessible to the liveness detection process.</p>
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
                     * 获取<p>Service version, including basic version (BASIC) and PLUS version (PLUS).</p><p>Enumeration value:</p><ul><li>BASIC: Basic version</li><li>PLUS: PLUS version</li></ul><p>Default value: BASIC.</p>
                     * @return Version <p>Service version, including basic version (BASIC) and PLUS version (PLUS).</p><p>Enumeration value:</p><ul><li>BASIC: Basic version</li><li>PLUS: PLUS version</li></ul><p>Default value: BASIC.</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>Service version, including basic version (BASIC) and PLUS version (PLUS).</p><p>Enumeration value:</p><ul><li>BASIC: Basic version</li><li>PLUS: PLUS version</li></ul><p>Default value: BASIC.</p>
                     * @param _version <p>Service version, including basic version (BASIC) and PLUS version (PLUS).</p><p>Enumeration value:</p><ul><li>BASIC: Basic version</li><li>PLUS: PLUS version</li></ul><p>Default value: BASIC.</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to skip the start verification webpage when starting verification. If true, directly enter the verification process. Default false. If the degradation policy is triggered, this configuration will not take effect.</p>
                     */
                    bool m_autoSkipStartPage;
                    bool m_autoSkipStartPageHasBeenSet;

                    /**
                     * <p>Whether to skip the result display page and automatically jump to RedirectURL when verification is successful. Default false.</p>
                     */
                    bool m_autoSkip;
                    bool m_autoSkipHasBeenSet;

                    /**
                     * <p>Detection mode. Parameter values are as follows:<br>1: OCR+liveness detection+face comparison;<br>2: liveness detection+face comparison;<br>3: liveness detection;<br>4: OCR;<br>Default value is 2.</p>
                     */
                    int64_t m_checkMode;
                    bool m_checkModeHasBeenSet;

                    /**
                     * <p>Identity document type used for authentication. Currently supported:<br>1.HKIDCard: Hong Kong (China) identity card<br>2.MLIDCard: Malaysian identity card<br>3.IndonesiaIDCard: Indonesian Identity Card<br>4.PhilippinesVoteID: Philippines voter card<br>5.PhilippinesDrivingLicense: Philippines driving license<br>6.PhilippinesTinID: Philippines TinID<br>7.PhilippinesSSSID: Philippines SSSID<br>8.PhilippinesUMID: Philippines UMID<br>9.InternationalIDPassport: Passport for Hong Kong (China), Macao (China), and Taiwan (China) as well as overseas passport<br>10.ThailandIDCard: Thai Identity Card<br>11.SingaporeIDCard: Singapore ID card<br>12.MainlandIDCard: Mainland ID card</p>
                     */
                    std::string m_iDCardType;
                    bool m_iDCardTypeHasBeenSet;

                    /**
                     * <p>Want to close document alarm, false by default (enable alarm detection). When enabled, the identity verification process will intercept based on the document alarm status. If you need to use document anti-counterfeiting functionality, <a href="https://www.tencentcloud.com/zh/contact-us">contact us</a>.</p>
                     */
                    bool m_disableCheckOcrWarnings;
                    bool m_disableCheckOcrWarningsHasBeenSet;

                    /**
                     * <p>Security level of authentication:<br>1: Silent liveness;<br>2: Action liveness;<br>3: Light liveness;<br>4: Action + light liveness;<br>Default value is 3.</p>
                     */
                    int64_t m_securityLevel;
                    bool m_securityLevelHasBeenSet;

                    /**
                     * <p>Whether to skip the privacy agreement webpage, default false. When SkipPrivacyPolicy is false, the privacy agreement webpage will show and the privacy agreement must be checked. When SkipPrivacyPolicy is true, the privacy agreement webpage will be skipped to directly enter the Live Face Process without the need to check the privacy agreement webpage.</p>
                     */
                    bool m_skipPrivacyPolicy;
                    bool m_skipPrivacyPolicyHasBeenSet;

                    /**
                     * <p>Default false. When false, show the original document image. When true, show the split document image.</p>
                     */
                    bool m_idCardCutReturn;
                    bool m_idCardCutReturnHasBeenSet;

                    /**
                     * <p>Frontend theme color in base 16 RGB format. Defaults to "#2d72f1". Uses default values if the format is incorrect.</p>
                     */
                    std::string m_themeColor;
                    bool m_themeColorHasBeenSet;

                    /**
                     * <p>Internationalized language, defaults to en (English). Currently supported:<br>th: Thai;<br>en: English;<br>zh-cn: Simplified Chinese;<br>zh-tc: Traditional Chinese;<br>id: Indonesia;</p>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * <p>Automatic downgrade mode. Parameter values as follows:<br>1: Downgrade to silent liveness mode.<br>2: Disable downgrade mode.<br>Default value: 1.</p>
                     */
                    int64_t m_autoDowngrade;
                    bool m_autoDowngradeHasBeenSet;

                    /**
                     * <p>Control the action sequence. Action types are as follows:<br>"blink"<br>"mouth"<br>"nod"<br>"shake"<br>Choose 1-2 actions from the four.<br>Single action example: "blink"<br>Multi-action example: "blink,mouth".<br>Default value: blink<br>Input this parameter only when SecurityLevel is 2, 4, or 5 for different action types to take effect; otherwise, an API error occurs.</p>
                     */
                    std::string m_actionList;
                    bool m_actionListHasBeenSet;

                    /**
                     * <p>Maximum liveness verification attempts. Value ranges from 1 to 99. Default value is 99.</p>
                     */
                    int64_t m_livenessRetryLimit;
                    bool m_livenessRetryLimitHasBeenSet;

                    /**
                     * <p>Control the liveness detection timeout period in seconds. The value ranges from 0 to 600. Default: 45 seconds.</p>
                     */
                    uint64_t m_livenessTimeout;
                    bool m_livenessTimeoutHasBeenSet;

                    /**
                     * <p>Select OCR alarms that require attention. When an OCR alarm is generated, the identity verification process will be interrupted. The default value is empty, indicating all alarms are monitored. This feature requires the parameter DisableCheckOcrWarnings=false. If the alarm is disabled, this parameter will not be effective.</p><p>Alarm code list and definitions:<br>-9101 Incomplete border alarm<br>-9102 Photocopies alarm<br>-9103 Alarm for rephotographing<br>-9104 ps alarm<br>-9107 Reflective alarm<br>-9108 Blurry alarm<br>-9109 Alarm not enabled</p>
                     */
                    std::string m_selectedWarningCodes;
                    bool m_selectedWarningCodesHasBeenSet;

                    /**
                     * <p>Whether to allow expired identity documents to enter the liveness detection process. This parameter is valid only when the document type is Hong Kong identity card (HKID).<br>true (default value): Allow expired Hong Kong identity card to enter the liveness detection process.<br>false: Reject expired Hong Kong identity card, not accessible to the liveness detection process.</p>
                     */
                    bool m_allowExpiredDocument;
                    bool m_allowExpiredDocumentHasBeenSet;

                    /**
                     * <p>Service version, including basic version (BASIC) and PLUS version (PLUS).</p><p>Enumeration value:</p><ul><li>BASIC: Basic version</li><li>PLUS: PLUS version</li></ul><p>Default value: BASIC.</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_WEBVERIFICATIONCONFIGINTL_H_
