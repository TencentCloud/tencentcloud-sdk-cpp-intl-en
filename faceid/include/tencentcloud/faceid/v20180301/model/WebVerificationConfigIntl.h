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
                     * 获取When starting verification, whether to skip the starting verification page. If true, enter the verification process directly. This configuration will not take effect if the downgrade policy is triggered. The default is false.
Example: false
                     * @return AutoSkipStartPage When starting verification, whether to skip the starting verification page. If true, enter the verification process directly. This configuration will not take effect if the downgrade policy is triggered. The default is false.
Example: false
                     * 
                     */
                    bool GetAutoSkipStartPage() const;

                    /**
                     * 设置When starting verification, whether to skip the starting verification page. If true, enter the verification process directly. This configuration will not take effect if the downgrade policy is triggered. The default is false.
Example: false
                     * @param _autoSkipStartPage When starting verification, whether to skip the starting verification page. If true, enter the verification process directly. This configuration will not take effect if the downgrade policy is triggered. The default is false.
Example: false
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
                     * 获取When the verification passed, whether to skip the result page and automatically jump to RedirectURL. The default value is false.
Example: false
                     * @return AutoSkip When the verification passed, whether to skip the result page and automatically jump to RedirectURL. The default value is false.
Example: false
                     * 
                     */
                    bool GetAutoSkip() const;

                    /**
                     * 设置When the verification passed, whether to skip the result page and automatically jump to RedirectURL. The default value is false.
Example: false
                     * @param _autoSkip When the verification passed, whether to skip the result page and automatically jump to RedirectURL. The default value is false.
Example: false
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
                     * 获取Detection mode, parameter values are as follows:
1: OCR+liveness detection & face comparison;
2: Liveness detection & face comparison;
3: Liveness detection;
4: OCR;
The default value is 2.
Example: 3
                     * @return CheckMode Detection mode, parameter values are as follows:
1: OCR+liveness detection & face comparison;
2: Liveness detection & face comparison;
3: Liveness detection;
4: OCR;
The default value is 2.
Example: 3
                     * 
                     */
                    int64_t GetCheckMode() const;

                    /**
                     * 设置Detection mode, parameter values are as follows:
1: OCR+liveness detection & face comparison;
2: Liveness detection & face comparison;
3: Liveness detection;
4: OCR;
The default value is 2.
Example: 3
                     * @param _checkMode Detection mode, parameter values are as follows:
1: OCR+liveness detection & face comparison;
2: Liveness detection & face comparison;
3: Liveness detection;
4: OCR;
The default value is 2.
Example: 3
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
                     * 获取Card Type for verification. The following types are supported:
1.HKIDCard: Hong Kong (China) ID card
2.MLIDCard: Malaysia ID card
3.IndonesialDCard: Indonesia ID card
4.PhilippinesVoteID: Philippines Vote lD card
5.PhilippinesDrivingLicense: Philippines driving license
6.PhilippinesTinID: Philippines TinID card
7.PhilippinesSSSID: Philippines SSSID card
8.PhilippinesUMID: Philippines UMID card
9.InternationallDPassport: ID cards of Hong Kong (China), Macao (China) and Taiwan (China), and international passport.
10.ThailandIDCard: Thailand ID card
11.SingaporelDCard: Singapore ID card
12.MainlandIDCard: Mainland (China) ID card
Example: HKIDCard
                     * @return IDCardType Card Type for verification. The following types are supported:
1.HKIDCard: Hong Kong (China) ID card
2.MLIDCard: Malaysia ID card
3.IndonesialDCard: Indonesia ID card
4.PhilippinesVoteID: Philippines Vote lD card
5.PhilippinesDrivingLicense: Philippines driving license
6.PhilippinesTinID: Philippines TinID card
7.PhilippinesSSSID: Philippines SSSID card
8.PhilippinesUMID: Philippines UMID card
9.InternationallDPassport: ID cards of Hong Kong (China), Macao (China) and Taiwan (China), and international passport.
10.ThailandIDCard: Thailand ID card
11.SingaporelDCard: Singapore ID card
12.MainlandIDCard: Mainland (China) ID card
Example: HKIDCard
                     * 
                     */
                    std::string GetIDCardType() const;

                    /**
                     * 设置Card Type for verification. The following types are supported:
1.HKIDCard: Hong Kong (China) ID card
2.MLIDCard: Malaysia ID card
3.IndonesialDCard: Indonesia ID card
4.PhilippinesVoteID: Philippines Vote lD card
5.PhilippinesDrivingLicense: Philippines driving license
6.PhilippinesTinID: Philippines TinID card
7.PhilippinesSSSID: Philippines SSSID card
8.PhilippinesUMID: Philippines UMID card
9.InternationallDPassport: ID cards of Hong Kong (China), Macao (China) and Taiwan (China), and international passport.
10.ThailandIDCard: Thailand ID card
11.SingaporelDCard: Singapore ID card
12.MainlandIDCard: Mainland (China) ID card
Example: HKIDCard
                     * @param _iDCardType Card Type for verification. The following types are supported:
1.HKIDCard: Hong Kong (China) ID card
2.MLIDCard: Malaysia ID card
3.IndonesialDCard: Indonesia ID card
4.PhilippinesVoteID: Philippines Vote lD card
5.PhilippinesDrivingLicense: Philippines driving license
6.PhilippinesTinID: Philippines TinID card
7.PhilippinesSSSID: Philippines SSSID card
8.PhilippinesUMID: Philippines UMID card
9.InternationallDPassport: ID cards of Hong Kong (China), Macao (China) and Taiwan (China), and international passport.
10.ThailandIDCard: Thailand ID card
11.SingaporelDCard: Singapore ID card
12.MainlandIDCard: Mainland (China) ID card
Example: HKIDCard
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
                     * 获取Whether to turn off document alarms, the default is false (the alarm detection function is turned on). When enabled, the identity authentication process will be intercepted based on the alarm status of the certificate. If you need to use the document authentication function, please contact us.
Example: false
                     * @return DisableCheckOcrWarnings Whether to turn off document alarms, the default is false (the alarm detection function is turned on). When enabled, the identity authentication process will be intercepted based on the alarm status of the certificate. If you need to use the document authentication function, please contact us.
Example: false
                     * 
                     */
                    bool GetDisableCheckOcrWarnings() const;

                    /**
                     * 设置Whether to turn off document alarms, the default is false (the alarm detection function is turned on). When enabled, the identity authentication process will be intercepted based on the alarm status of the certificate. If you need to use the document authentication function, please contact us.
Example: false
                     * @param _disableCheckOcrWarnings Whether to turn off document alarms, the default is false (the alarm detection function is turned on). When enabled, the identity authentication process will be intercepted based on the alarm status of the certificate. If you need to use the document authentication function, please contact us.
Example: false
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
                     * 获取Liveness security level, the default value is 3. The currently supported security level are as follows:
1:Silent mode;
2:Action mode;
3:Lighting mode;
4:Action+Lighting mode;
5:Action+Lighting(High security) mode.
Example: 4
                     * @return SecurityLevel Liveness security level, the default value is 3. The currently supported security level are as follows:
1:Silent mode;
2:Action mode;
3:Lighting mode;
4:Action+Lighting mode;
5:Action+Lighting(High security) mode.
Example: 4
                     * 
                     */
                    int64_t GetSecurityLevel() const;

                    /**
                     * 设置Liveness security level, the default value is 3. The currently supported security level are as follows:
1:Silent mode;
2:Action mode;
3:Lighting mode;
4:Action+Lighting mode;
5:Action+Lighting(High security) mode.
Example: 4
                     * @param _securityLevel Liveness security level, the default value is 3. The currently supported security level are as follows:
1:Silent mode;
2:Action mode;
3:Lighting mode;
4:Action+Lighting mode;
5:Action+Lighting(High security) mode.
Example: 4
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
                     * 获取Whether to skip the agreement page. When SkipPrivacyPolicy is false, the agreement page will be displayed and the privacy agreement needs to be checked; when SkipPrivacyPolicy is true, the agreement page will be skipped and the liveness process will be entered directly without checking the privacy agreement page. The default is false.
Example: false
                     * @return SkipPrivacyPolicy Whether to skip the agreement page. When SkipPrivacyPolicy is false, the agreement page will be displayed and the privacy agreement needs to be checked; when SkipPrivacyPolicy is true, the agreement page will be skipped and the liveness process will be entered directly without checking the privacy agreement page. The default is false.
Example: false
                     * 
                     */
                    bool GetSkipPrivacyPolicy() const;

                    /**
                     * 设置Whether to skip the agreement page. When SkipPrivacyPolicy is false, the agreement page will be displayed and the privacy agreement needs to be checked; when SkipPrivacyPolicy is true, the agreement page will be skipped and the liveness process will be entered directly without checking the privacy agreement page. The default is false.
Example: false
                     * @param _skipPrivacyPolicy Whether to skip the agreement page. When SkipPrivacyPolicy is false, the agreement page will be displayed and the privacy agreement needs to be checked; when SkipPrivacyPolicy is true, the agreement page will be skipped and the liveness process will be entered directly without checking the privacy agreement page. The default is false.
Example: false
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
                     * 获取whether to display the cropped ID card image. When set to false, the original ID card image is displayed. When set to true, the cropped version is displayed. The default value is false. 
Example: false
                     * @return IdCardCutReturn whether to display the cropped ID card image. When set to false, the original ID card image is displayed. When set to true, the cropped version is displayed. The default value is false. 
Example: false
                     * 
                     */
                    bool GetIdCardCutReturn() const;

                    /**
                     * 设置whether to display the cropped ID card image. When set to false, the original ID card image is displayed. When set to true, the cropped version is displayed. The default value is false. 
Example: false
                     * @param _idCardCutReturn whether to display the cropped ID card image. When set to false, the original ID card image is displayed. When set to true, the cropped version is displayed. The default value is false. 
Example: false
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
                     * 获取Front-end theme color, in the format of RGB hexadecimal color code. If the format is incorrect, the default value color will be used. The default value is "#2d72f1".
Example: #2d72f1
                     * @return ThemeColor Front-end theme color, in the format of RGB hexadecimal color code. If the format is incorrect, the default value color will be used. The default value is "#2d72f1".
Example: #2d72f1
                     * 
                     */
                    std::string GetThemeColor() const;

                    /**
                     * 设置Front-end theme color, in the format of RGB hexadecimal color code. If the format is incorrect, the default value color will be used. The default value is "#2d72f1".
Example: #2d72f1
                     * @param _themeColor Front-end theme color, in the format of RGB hexadecimal color code. If the format is incorrect, the default value color will be used. The default value is "#2d72f1".
Example: #2d72f1
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
                     * 获取International language, the default value is en (English). The currently supported language are as follows: 
th: Thai; 
en: English; 
zh-cn: Simplified Chinese; 
zh-tc: Tradionnal Chinese; 
id: Bahasa Indonesia.
                     * @return Language International language, the default value is en (English). The currently supported language are as follows: 
th: Thai; 
en: English; 
zh-cn: Simplified Chinese; 
zh-tc: Tradionnal Chinese; 
id: Bahasa Indonesia.
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置International language, the default value is en (English). The currently supported language are as follows: 
th: Thai; 
en: English; 
zh-cn: Simplified Chinese; 
zh-tc: Tradionnal Chinese; 
id: Bahasa Indonesia.
                     * @param _language International language, the default value is en (English). The currently supported language are as follows: 
th: Thai; 
en: English; 
zh-cn: Simplified Chinese; 
zh-tc: Tradionnal Chinese; 
id: Bahasa Indonesia.
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
                     * 获取Automatic downgrade mode, the following parameter are supported: 
1: Downgrade to silent live mode; 
2: Disable downgrade mode. 
The default value is 1.
                     * @return AutoDowngrade Automatic downgrade mode, the following parameter are supported: 
1: Downgrade to silent live mode; 
2: Disable downgrade mode. 
The default value is 1.
                     * 
                     */
                    int64_t GetAutoDowngrade() const;

                    /**
                     * 设置Automatic downgrade mode, the following parameter are supported: 
1: Downgrade to silent live mode; 
2: Disable downgrade mode. 
The default value is 1.
                     * @param _autoDowngrade Automatic downgrade mode, the following parameter are supported: 
1: Downgrade to silent live mode; 
2: Disable downgrade mode. 
The default value is 1.
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
                     * 获取This interface is used to control th action sequences.
The supported action types are as follows:
"blink";
"mouth";
"nod";
"shake".
You can choose 1-2 actions out of the four. Single action example: "blink". Multiple action example: "blink,mouth". The different action types passed in this parameter take effect only when the SecurityLevel is 2, 4, or 5; otherwise, the interface reports an error.
The default value is blink.
                     * @return ActionList This interface is used to control th action sequences.
The supported action types are as follows:
"blink";
"mouth";
"nod";
"shake".
You can choose 1-2 actions out of the four. Single action example: "blink". Multiple action example: "blink,mouth". The different action types passed in this parameter take effect only when the SecurityLevel is 2, 4, or 5; otherwise, the interface reports an error.
The default value is blink.
                     * 
                     */
                    std::string GetActionList() const;

                    /**
                     * 设置This interface is used to control th action sequences.
The supported action types are as follows:
"blink";
"mouth";
"nod";
"shake".
You can choose 1-2 actions out of the four. Single action example: "blink". Multiple action example: "blink,mouth". The different action types passed in this parameter take effect only when the SecurityLevel is 2, 4, or 5; otherwise, the interface reports an error.
The default value is blink.
                     * @param _actionList This interface is used to control th action sequences.
The supported action types are as follows:
"blink";
"mouth";
"nod";
"shake".
You can choose 1-2 actions out of the four. Single action example: "blink". Multiple action example: "blink,mouth". The different action types passed in this parameter take effect only when the SecurityLevel is 2, 4, or 5; otherwise, the interface reports an error.
The default value is blink.
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
                     * 获取Control liveness retry number.The value range is 1-99.
The default value is 99.
                     * @return LivenessRetryLimit Control liveness retry number.The value range is 1-99.
The default value is 99.
                     * 
                     */
                    int64_t GetLivenessRetryLimit() const;

                    /**
                     * 设置Control liveness retry number.The value range is 1-99.
The default value is 99.
                     * @param _livenessRetryLimit Control liveness retry number.The value range is 1-99.
The default value is 99.
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
                     * 获取Specifies the liveness detection timeout period in seconds. value range: (0,600].
The default value is 45.
                     * @return LivenessTimeout Specifies the liveness detection timeout period in seconds. value range: (0,600].
The default value is 45.
                     * 
                     */
                    uint64_t GetLivenessTimeout() const;

                    /**
                     * 设置Specifies the liveness detection timeout period in seconds. value range: (0,600].
The default value is 45.
                     * @param _livenessTimeout Specifies the liveness detection timeout period in seconds. value range: (0,600].
The default value is 45.
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
                     * 获取Selects OCR alarms requiring attention. When an OCR Alarm occurs, the identity verification process will be interrupted. Default value is empty, indicating all alarms are monitored. This feature requires the parameter DisableCheckOcrWarnings=false. If the Alarm is disabled, this parameter will not be effective. The supported alarm types are as follows:
-9101: Incomplete Border Alert;
-9102: Copy Document Alert;
-9103: Remediated Document Alert;
-9104: PS-altered Document Alert;
-9107: Glare Alert;
-9108: Blurriness Alert;
-9109: Alert Not Activated.
                     * @return SelectedWarningCodes Selects OCR alarms requiring attention. When an OCR Alarm occurs, the identity verification process will be interrupted. Default value is empty, indicating all alarms are monitored. This feature requires the parameter DisableCheckOcrWarnings=false. If the Alarm is disabled, this parameter will not be effective. The supported alarm types are as follows:
-9101: Incomplete Border Alert;
-9102: Copy Document Alert;
-9103: Remediated Document Alert;
-9104: PS-altered Document Alert;
-9107: Glare Alert;
-9108: Blurriness Alert;
-9109: Alert Not Activated.
                     * 
                     */
                    std::string GetSelectedWarningCodes() const;

                    /**
                     * 设置Selects OCR alarms requiring attention. When an OCR Alarm occurs, the identity verification process will be interrupted. Default value is empty, indicating all alarms are monitored. This feature requires the parameter DisableCheckOcrWarnings=false. If the Alarm is disabled, this parameter will not be effective. The supported alarm types are as follows:
-9101: Incomplete Border Alert;
-9102: Copy Document Alert;
-9103: Remediated Document Alert;
-9104: PS-altered Document Alert;
-9107: Glare Alert;
-9108: Blurriness Alert;
-9109: Alert Not Activated.
                     * @param _selectedWarningCodes Selects OCR alarms requiring attention. When an OCR Alarm occurs, the identity verification process will be interrupted. Default value is empty, indicating all alarms are monitored. This feature requires the parameter DisableCheckOcrWarnings=false. If the Alarm is disabled, this parameter will not be effective. The supported alarm types are as follows:
-9101: Incomplete Border Alert;
-9102: Copy Document Alert;
-9103: Remediated Document Alert;
-9104: PS-altered Document Alert;
-9107: Glare Alert;
-9108: Blurriness Alert;
-9109: Alert Not Activated.
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
                     * 获取Whether expired identity documents are permitted to proceed to the liveness detection process. This parameter only takes effect when the document type is Hong Kong Identity Card (HKID).
true (default value): Expired HKID is allowed to enter the liveness process.
false : Expired HKID is rejected and cannot enter the liveness process.
                     * @return AllowExpiredDocument Whether expired identity documents are permitted to proceed to the liveness detection process. This parameter only takes effect when the document type is Hong Kong Identity Card (HKID).
true (default value): Expired HKID is allowed to enter the liveness process.
false : Expired HKID is rejected and cannot enter the liveness process.
                     * 
                     */
                    bool GetAllowExpiredDocument() const;

                    /**
                     * 设置Whether expired identity documents are permitted to proceed to the liveness detection process. This parameter only takes effect when the document type is Hong Kong Identity Card (HKID).
true (default value): Expired HKID is allowed to enter the liveness process.
false : Expired HKID is rejected and cannot enter the liveness process.
                     * @param _allowExpiredDocument Whether expired identity documents are permitted to proceed to the liveness detection process. This parameter only takes effect when the document type is Hong Kong Identity Card (HKID).
true (default value): Expired HKID is allowed to enter the liveness process.
false : Expired HKID is rejected and cannot enter the liveness process.
                     * 
                     */
                    void SetAllowExpiredDocument(const bool& _allowExpiredDocument);

                    /**
                     * 判断参数 AllowExpiredDocument 是否已赋值
                     * @return AllowExpiredDocument 是否已赋值
                     * 
                     */
                    bool AllowExpiredDocumentHasBeenSet() const;

                private:

                    /**
                     * When starting verification, whether to skip the starting verification page. If true, enter the verification process directly. This configuration will not take effect if the downgrade policy is triggered. The default is false.
Example: false
                     */
                    bool m_autoSkipStartPage;
                    bool m_autoSkipStartPageHasBeenSet;

                    /**
                     * When the verification passed, whether to skip the result page and automatically jump to RedirectURL. The default value is false.
Example: false
                     */
                    bool m_autoSkip;
                    bool m_autoSkipHasBeenSet;

                    /**
                     * Detection mode, parameter values are as follows:
1: OCR+liveness detection & face comparison;
2: Liveness detection & face comparison;
3: Liveness detection;
4: OCR;
The default value is 2.
Example: 3
                     */
                    int64_t m_checkMode;
                    bool m_checkModeHasBeenSet;

                    /**
                     * Card Type for verification. The following types are supported:
1.HKIDCard: Hong Kong (China) ID card
2.MLIDCard: Malaysia ID card
3.IndonesialDCard: Indonesia ID card
4.PhilippinesVoteID: Philippines Vote lD card
5.PhilippinesDrivingLicense: Philippines driving license
6.PhilippinesTinID: Philippines TinID card
7.PhilippinesSSSID: Philippines SSSID card
8.PhilippinesUMID: Philippines UMID card
9.InternationallDPassport: ID cards of Hong Kong (China), Macao (China) and Taiwan (China), and international passport.
10.ThailandIDCard: Thailand ID card
11.SingaporelDCard: Singapore ID card
12.MainlandIDCard: Mainland (China) ID card
Example: HKIDCard
                     */
                    std::string m_iDCardType;
                    bool m_iDCardTypeHasBeenSet;

                    /**
                     * Whether to turn off document alarms, the default is false (the alarm detection function is turned on). When enabled, the identity authentication process will be intercepted based on the alarm status of the certificate. If you need to use the document authentication function, please contact us.
Example: false
                     */
                    bool m_disableCheckOcrWarnings;
                    bool m_disableCheckOcrWarningsHasBeenSet;

                    /**
                     * Liveness security level, the default value is 3. The currently supported security level are as follows:
1:Silent mode;
2:Action mode;
3:Lighting mode;
4:Action+Lighting mode;
5:Action+Lighting(High security) mode.
Example: 4
                     */
                    int64_t m_securityLevel;
                    bool m_securityLevelHasBeenSet;

                    /**
                     * Whether to skip the agreement page. When SkipPrivacyPolicy is false, the agreement page will be displayed and the privacy agreement needs to be checked; when SkipPrivacyPolicy is true, the agreement page will be skipped and the liveness process will be entered directly without checking the privacy agreement page. The default is false.
Example: false
                     */
                    bool m_skipPrivacyPolicy;
                    bool m_skipPrivacyPolicyHasBeenSet;

                    /**
                     * whether to display the cropped ID card image. When set to false, the original ID card image is displayed. When set to true, the cropped version is displayed. The default value is false. 
Example: false
                     */
                    bool m_idCardCutReturn;
                    bool m_idCardCutReturnHasBeenSet;

                    /**
                     * Front-end theme color, in the format of RGB hexadecimal color code. If the format is incorrect, the default value color will be used. The default value is "#2d72f1".
Example: #2d72f1
                     */
                    std::string m_themeColor;
                    bool m_themeColorHasBeenSet;

                    /**
                     * International language, the default value is en (English). The currently supported language are as follows: 
th: Thai; 
en: English; 
zh-cn: Simplified Chinese; 
zh-tc: Tradionnal Chinese; 
id: Bahasa Indonesia.
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * Automatic downgrade mode, the following parameter are supported: 
1: Downgrade to silent live mode; 
2: Disable downgrade mode. 
The default value is 1.
                     */
                    int64_t m_autoDowngrade;
                    bool m_autoDowngradeHasBeenSet;

                    /**
                     * This interface is used to control th action sequences.
The supported action types are as follows:
"blink";
"mouth";
"nod";
"shake".
You can choose 1-2 actions out of the four. Single action example: "blink". Multiple action example: "blink,mouth". The different action types passed in this parameter take effect only when the SecurityLevel is 2, 4, or 5; otherwise, the interface reports an error.
The default value is blink.
                     */
                    std::string m_actionList;
                    bool m_actionListHasBeenSet;

                    /**
                     * Control liveness retry number.The value range is 1-99.
The default value is 99.
                     */
                    int64_t m_livenessRetryLimit;
                    bool m_livenessRetryLimitHasBeenSet;

                    /**
                     * Specifies the liveness detection timeout period in seconds. value range: (0,600].
The default value is 45.
                     */
                    uint64_t m_livenessTimeout;
                    bool m_livenessTimeoutHasBeenSet;

                    /**
                     * Selects OCR alarms requiring attention. When an OCR Alarm occurs, the identity verification process will be interrupted. Default value is empty, indicating all alarms are monitored. This feature requires the parameter DisableCheckOcrWarnings=false. If the Alarm is disabled, this parameter will not be effective. The supported alarm types are as follows:
-9101: Incomplete Border Alert;
-9102: Copy Document Alert;
-9103: Remediated Document Alert;
-9104: PS-altered Document Alert;
-9107: Glare Alert;
-9108: Blurriness Alert;
-9109: Alert Not Activated.
                     */
                    std::string m_selectedWarningCodes;
                    bool m_selectedWarningCodesHasBeenSet;

                    /**
                     * Whether expired identity documents are permitted to proceed to the liveness detection process. This parameter only takes effect when the document type is Hong Kong Identity Card (HKID).
true (default value): Expired HKID is allowed to enter the liveness process.
false : Expired HKID is rejected and cannot enter the liveness process.
                     */
                    bool m_allowExpiredDocument;
                    bool m_allowExpiredDocumentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_WEBVERIFICATIONCONFIGINTL_H_
