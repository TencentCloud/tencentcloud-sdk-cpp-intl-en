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
                     * 获取When starting verification, whether to skip the starting verification page. If true, enter the verification process directly. The default is false. This configuration will not take effect if the downgrade policy is triggered.
                     * @return AutoSkipStartPage When starting verification, whether to skip the starting verification page. If true, enter the verification process directly. The default is false. This configuration will not take effect if the downgrade policy is triggered.
                     * 
                     */
                    bool GetAutoSkipStartPage() const;

                    /**
                     * 设置When starting verification, whether to skip the starting verification page. If true, enter the verification process directly. The default is false. This configuration will not take effect if the downgrade policy is triggered.
                     * @param _autoSkipStartPage When starting verification, whether to skip the starting verification page. If true, enter the verification process directly. The default is false. This configuration will not take effect if the downgrade policy is triggered.
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
Example value: false
                     * @return AutoSkip When the verification passed, whether to skip the result page and automatically jump to RedirectURL. The default value is false.
Example value: false
                     * 
                     */
                    bool GetAutoSkip() const;

                    /**
                     * 设置When the verification passed, whether to skip the result page and automatically jump to RedirectURL. The default value is false.
Example value: false
                     * @param _autoSkip When the verification passed, whether to skip the result page and automatically jump to RedirectURL. The default value is false.
Example value: false
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
1: OCR+living detection & face comparison;
2: Living detection & face comparison;
3: Living detection;
4: OCR;
The default value is 2.
Example value: 3
                     * @return CheckMode Detection mode, parameter values are as follows:
1: OCR+living detection & face comparison;
2: Living detection & face comparison;
3: Living detection;
4: OCR;
The default value is 2.
Example value: 3
                     * 
                     */
                    int64_t GetCheckMode() const;

                    /**
                     * 设置Detection mode, parameter values are as follows:
1: OCR+living detection & face comparison;
2: Living detection & face comparison;
3: Living detection;
4: OCR;
The default value is 2.
Example value: 3
                     * @param _checkMode Detection mode, parameter values are as follows:
1: OCR+living detection & face comparison;
2: Living detection & face comparison;
3: Living detection;
4: OCR;
The default value is 2.
Example value: 3
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
                     * 获取The type of lisence used for verification. The following types are supported.
1.HKIDCard: Hong Kong (China) ID card
2.MLIDCard: Malaysia ID card
3.IndonesiaIDCard: Indonesia ID card
4.PhilippinesVoteID: Philippines VoteID card
5.PhilippinesDrivingLicense: Philippines driving license
6.PhilippinesTinID: Philippines TinID card
7.PhilippinesSSSID: Philippines SSSID card
8.PhilippinesUMID: Philippines UMID card
9.InternationalIDPassport: ID cards of Hong Kong (China), Macao (China) and Taiwan (China), and international passport.
10.IndonesiaDrivingLicense:Indonesia driving license
11.ThailandIDCard: Thailand ID card
12.ThailandDrivingLicense: Thailand driving license
13.MLDrivingLicense: Malaysia driving license
14.SingaporeIDCard: Singapore ID card
15.SingaporeDrivingLicense: Singapore driving license
16.JapanIDCard: Japan ID card
17.JapanDrivingLicense: Japan driving license
18.PhilippinesIDCard: Philippines ID card
19.MainlandIDCard: Mainland (China) ID card
20.MacaoIDCard: Macao (China) ID card
Example: HKIDCard
                     * @return IDCardType The type of lisence used for verification. The following types are supported.
1.HKIDCard: Hong Kong (China) ID card
2.MLIDCard: Malaysia ID card
3.IndonesiaIDCard: Indonesia ID card
4.PhilippinesVoteID: Philippines VoteID card
5.PhilippinesDrivingLicense: Philippines driving license
6.PhilippinesTinID: Philippines TinID card
7.PhilippinesSSSID: Philippines SSSID card
8.PhilippinesUMID: Philippines UMID card
9.InternationalIDPassport: ID cards of Hong Kong (China), Macao (China) and Taiwan (China), and international passport.
10.IndonesiaDrivingLicense:Indonesia driving license
11.ThailandIDCard: Thailand ID card
12.ThailandDrivingLicense: Thailand driving license
13.MLDrivingLicense: Malaysia driving license
14.SingaporeIDCard: Singapore ID card
15.SingaporeDrivingLicense: Singapore driving license
16.JapanIDCard: Japan ID card
17.JapanDrivingLicense: Japan driving license
18.PhilippinesIDCard: Philippines ID card
19.MainlandIDCard: Mainland (China) ID card
20.MacaoIDCard: Macao (China) ID card
Example: HKIDCard
                     * 
                     */
                    std::string GetIDCardType() const;

                    /**
                     * 设置The type of lisence used for verification. The following types are supported.
1.HKIDCard: Hong Kong (China) ID card
2.MLIDCard: Malaysia ID card
3.IndonesiaIDCard: Indonesia ID card
4.PhilippinesVoteID: Philippines VoteID card
5.PhilippinesDrivingLicense: Philippines driving license
6.PhilippinesTinID: Philippines TinID card
7.PhilippinesSSSID: Philippines SSSID card
8.PhilippinesUMID: Philippines UMID card
9.InternationalIDPassport: ID cards of Hong Kong (China), Macao (China) and Taiwan (China), and international passport.
10.IndonesiaDrivingLicense:Indonesia driving license
11.ThailandIDCard: Thailand ID card
12.ThailandDrivingLicense: Thailand driving license
13.MLDrivingLicense: Malaysia driving license
14.SingaporeIDCard: Singapore ID card
15.SingaporeDrivingLicense: Singapore driving license
16.JapanIDCard: Japan ID card
17.JapanDrivingLicense: Japan driving license
18.PhilippinesIDCard: Philippines ID card
19.MainlandIDCard: Mainland (China) ID card
20.MacaoIDCard: Macao (China) ID card
Example: HKIDCard
                     * @param _iDCardType The type of lisence used for verification. The following types are supported.
1.HKIDCard: Hong Kong (China) ID card
2.MLIDCard: Malaysia ID card
3.IndonesiaIDCard: Indonesia ID card
4.PhilippinesVoteID: Philippines VoteID card
5.PhilippinesDrivingLicense: Philippines driving license
6.PhilippinesTinID: Philippines TinID card
7.PhilippinesSSSID: Philippines SSSID card
8.PhilippinesUMID: Philippines UMID card
9.InternationalIDPassport: ID cards of Hong Kong (China), Macao (China) and Taiwan (China), and international passport.
10.IndonesiaDrivingLicense:Indonesia driving license
11.ThailandIDCard: Thailand ID card
12.ThailandDrivingLicense: Thailand driving license
13.MLDrivingLicense: Malaysia driving license
14.SingaporeIDCard: Singapore ID card
15.SingaporeDrivingLicense: Singapore driving license
16.JapanIDCard: Japan ID card
17.JapanDrivingLicense: Japan driving license
18.PhilippinesIDCard: Philippines ID card
19.MainlandIDCard: Mainland (China) ID card
20.MacaoIDCard: Macao (China) ID card
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
                     * @return DisableCheckOcrWarnings Whether to turn off document alarms, the default is false (the alarm detection function is turned on). When enabled, the identity authentication process will be intercepted based on the alarm status of the certificate. If you need to use the document authentication function, please contact us.
                     * 
                     */
                    bool GetDisableCheckOcrWarnings() const;

                    /**
                     * 设置Whether to turn off document alarms, the default is false (the alarm detection function is turned on). When enabled, the identity authentication process will be intercepted based on the alarm status of the certificate. If you need to use the document authentication function, please contact us.
                     * @param _disableCheckOcrWarnings Whether to turn off document alarms, the default is false (the alarm detection function is turned on). When enabled, the identity authentication process will be intercepted based on the alarm status of the certificate. If you need to use the document authentication function, please contact us.
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
                     * 获取Liveness security level: 1:Silent mode;2:Action mode;3:Lighting mode;4:Action+Lighting mode;5:Action+Lighting(High security) mode; default value is 3
                     * @return SecurityLevel Liveness security level: 1:Silent mode;2:Action mode;3:Lighting mode;4:Action+Lighting mode;5:Action+Lighting(High security) mode; default value is 3
                     * 
                     */
                    int64_t GetSecurityLevel() const;

                    /**
                     * 设置Liveness security level: 1:Silent mode;2:Action mode;3:Lighting mode;4:Action+Lighting mode;5:Action+Lighting(High security) mode; default value is 3
                     * @param _securityLevel Liveness security level: 1:Silent mode;2:Action mode;3:Lighting mode;4:Action+Lighting mode;5:Action+Lighting(High security) mode; default value is 3
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
                     * 获取Whether to skip the agreement page, the default is false. When SkipPrivacyPolicy is false, the agreement page will be displayed and the privacy agreement needs to be checked; when SkipPrivacyPolicy is true, the agreement page will be skipped and the liveness process will be entered directly without checking the privacy agreement page.
                     * @return SkipPrivacyPolicy Whether to skip the agreement page, the default is false. When SkipPrivacyPolicy is false, the agreement page will be displayed and the privacy agreement needs to be checked; when SkipPrivacyPolicy is true, the agreement page will be skipped and the liveness process will be entered directly without checking the privacy agreement page.
                     * 
                     */
                    bool GetSkipPrivacyPolicy() const;

                    /**
                     * 设置Whether to skip the agreement page, the default is false. When SkipPrivacyPolicy is false, the agreement page will be displayed and the privacy agreement needs to be checked; when SkipPrivacyPolicy is true, the agreement page will be skipped and the liveness process will be entered directly without checking the privacy agreement page.
                     * @param _skipPrivacyPolicy Whether to skip the agreement page, the default is false. When SkipPrivacyPolicy is false, the agreement page will be displayed and the privacy agreement needs to be checked; when SkipPrivacyPolicy is true, the agreement page will be skipped and the liveness process will be entered directly without checking the privacy agreement page.
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
                     * 获取The default value is false. If it is false, the original ID image will be displayed. If it is true, the cut ID image will be displayed.
                     * @return IdCardCutReturn The default value is false. If it is false, the original ID image will be displayed. If it is true, the cut ID image will be displayed.
                     * 
                     */
                    bool GetIdCardCutReturn() const;

                    /**
                     * 设置The default value is false. If it is false, the original ID image will be displayed. If it is true, the cut ID image will be displayed.
                     * @param _idCardCutReturn The default value is false. If it is false, the original ID image will be displayed. If it is true, the cut ID image will be displayed.
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
                     * 获取Front-end theme color, in the format of RGB hexadecimal color code. The default value is "#2d72+1". If the format is incorrect, the default value color will be used.
                     * @return ThemeColor Front-end theme color, in the format of RGB hexadecimal color code. The default value is "#2d72+1". If the format is incorrect, the default value color will be used.
                     * 
                     */
                    std::string GetThemeColor() const;

                    /**
                     * 设置Front-end theme color, in the format of RGB hexadecimal color code. The default value is "#2d72+1". If the format is incorrect, the default value color will be used.
                     * @param _themeColor Front-end theme color, in the format of RGB hexadecimal color code. The default value is "#2d72+1". If the format is incorrect, the default value color will be used.
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
                     * 获取International language, the default value is en (English). Currently supported: th: Thai; en: English; zh-cn: Simplified Chinese; zh-tc: Tradionnal Chinese; id: Bahasa Indonesia.
                     * @return Language International language, the default value is en (English). Currently supported: th: Thai; en: English; zh-cn: Simplified Chinese; zh-tc: Tradionnal Chinese; id: Bahasa Indonesia.
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置International language, the default value is en (English). Currently supported: th: Thai; en: English; zh-cn: Simplified Chinese; zh-tc: Tradionnal Chinese; id: Bahasa Indonesia.
                     * @param _language International language, the default value is en (English). Currently supported: th: Thai; en: English; zh-cn: Simplified Chinese; zh-tc: Tradionnal Chinese; id: Bahasa Indonesia.
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
                     * 获取Automatic downgrade mode, with the following parameter values: 1: Downgrade to silent live mode; 2: Disable downgrade mode. The default value is 1.
                     * @return AutoDowngrade Automatic downgrade mode, with the following parameter values: 1: Downgrade to silent live mode; 2: Disable downgrade mode. The default value is 1.
                     * 
                     */
                    int64_t GetAutoDowngrade() const;

                    /**
                     * 设置Automatic downgrade mode, with the following parameter values: 1: Downgrade to silent live mode; 2: Disable downgrade mode. The default value is 1.
                     * @param _autoDowngrade Automatic downgrade mode, with the following parameter values: 1: Downgrade to silent live mode; 2: Disable downgrade mode. The default value is 1.
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
Action types are as follows:
"blink"
"mouth"
"nod"
"shake"
You can choose 1-2 actions out of the four.
Single action example: "blink"
Multiple action example: "blink,mouth"
The default value is blink. The different action types passed in this parameter take effect only when the SecurityLevel is 2, 4, or 5; otherwise, the interface reports an error.
                     * @return ActionList This interface is used to control th action sequences.
Action types are as follows:
"blink"
"mouth"
"nod"
"shake"
You can choose 1-2 actions out of the four.
Single action example: "blink"
Multiple action example: "blink,mouth"
The default value is blink. The different action types passed in this parameter take effect only when the SecurityLevel is 2, 4, or 5; otherwise, the interface reports an error.
                     * 
                     */
                    std::string GetActionList() const;

                    /**
                     * 设置This interface is used to control th action sequences.
Action types are as follows:
"blink"
"mouth"
"nod"
"shake"
You can choose 1-2 actions out of the four.
Single action example: "blink"
Multiple action example: "blink,mouth"
The default value is blink. The different action types passed in this parameter take effect only when the SecurityLevel is 2, 4, or 5; otherwise, the interface reports an error.
                     * @param _actionList This interface is used to control th action sequences.
Action types are as follows:
"blink"
"mouth"
"nod"
"shake"
You can choose 1-2 actions out of the four.
Single action example: "blink"
Multiple action example: "blink,mouth"
The default value is blink. The different action types passed in this parameter take effect only when the SecurityLevel is 2, 4, or 5; otherwise, the interface reports an error.
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
                     * @return LivenessRetryLimit Control liveness retry number.The value range is 1-99.
                     * 
                     */
                    int64_t GetLivenessRetryLimit() const;

                    /**
                     * 设置Control liveness retry number.The value range is 1-99.
                     * @param _livenessRetryLimit Control liveness retry number.The value range is 1-99.
                     * 
                     */
                    void SetLivenessRetryLimit(const int64_t& _livenessRetryLimit);

                    /**
                     * 判断参数 LivenessRetryLimit 是否已赋值
                     * @return LivenessRetryLimit 是否已赋值
                     * 
                     */
                    bool LivenessRetryLimitHasBeenSet() const;

                private:

                    /**
                     * When starting verification, whether to skip the starting verification page. If true, enter the verification process directly. The default is false. This configuration will not take effect if the downgrade policy is triggered.
                     */
                    bool m_autoSkipStartPage;
                    bool m_autoSkipStartPageHasBeenSet;

                    /**
                     * When the verification passed, whether to skip the result page and automatically jump to RedirectURL. The default value is false.
Example value: false
                     */
                    bool m_autoSkip;
                    bool m_autoSkipHasBeenSet;

                    /**
                     * Detection mode, parameter values are as follows:
1: OCR+living detection & face comparison;
2: Living detection & face comparison;
3: Living detection;
4: OCR;
The default value is 2.
Example value: 3
                     */
                    int64_t m_checkMode;
                    bool m_checkModeHasBeenSet;

                    /**
                     * The type of lisence used for verification. The following types are supported.
1.HKIDCard: Hong Kong (China) ID card
2.MLIDCard: Malaysia ID card
3.IndonesiaIDCard: Indonesia ID card
4.PhilippinesVoteID: Philippines VoteID card
5.PhilippinesDrivingLicense: Philippines driving license
6.PhilippinesTinID: Philippines TinID card
7.PhilippinesSSSID: Philippines SSSID card
8.PhilippinesUMID: Philippines UMID card
9.InternationalIDPassport: ID cards of Hong Kong (China), Macao (China) and Taiwan (China), and international passport.
10.IndonesiaDrivingLicense:Indonesia driving license
11.ThailandIDCard: Thailand ID card
12.ThailandDrivingLicense: Thailand driving license
13.MLDrivingLicense: Malaysia driving license
14.SingaporeIDCard: Singapore ID card
15.SingaporeDrivingLicense: Singapore driving license
16.JapanIDCard: Japan ID card
17.JapanDrivingLicense: Japan driving license
18.PhilippinesIDCard: Philippines ID card
19.MainlandIDCard: Mainland (China) ID card
20.MacaoIDCard: Macao (China) ID card
Example: HKIDCard
                     */
                    std::string m_iDCardType;
                    bool m_iDCardTypeHasBeenSet;

                    /**
                     * Whether to turn off document alarms, the default is false (the alarm detection function is turned on). When enabled, the identity authentication process will be intercepted based on the alarm status of the certificate. If you need to use the document authentication function, please contact us.
                     */
                    bool m_disableCheckOcrWarnings;
                    bool m_disableCheckOcrWarningsHasBeenSet;

                    /**
                     * Liveness security level: 1:Silent mode;2:Action mode;3:Lighting mode;4:Action+Lighting mode;5:Action+Lighting(High security) mode; default value is 3
                     */
                    int64_t m_securityLevel;
                    bool m_securityLevelHasBeenSet;

                    /**
                     * Whether to skip the agreement page, the default is false. When SkipPrivacyPolicy is false, the agreement page will be displayed and the privacy agreement needs to be checked; when SkipPrivacyPolicy is true, the agreement page will be skipped and the liveness process will be entered directly without checking the privacy agreement page.
                     */
                    bool m_skipPrivacyPolicy;
                    bool m_skipPrivacyPolicyHasBeenSet;

                    /**
                     * The default value is false. If it is false, the original ID image will be displayed. If it is true, the cut ID image will be displayed.
                     */
                    bool m_idCardCutReturn;
                    bool m_idCardCutReturnHasBeenSet;

                    /**
                     * Front-end theme color, in the format of RGB hexadecimal color code. The default value is "#2d72+1". If the format is incorrect, the default value color will be used.
                     */
                    std::string m_themeColor;
                    bool m_themeColorHasBeenSet;

                    /**
                     * International language, the default value is en (English). Currently supported: th: Thai; en: English; zh-cn: Simplified Chinese; zh-tc: Tradionnal Chinese; id: Bahasa Indonesia.
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * Automatic downgrade mode, with the following parameter values: 1: Downgrade to silent live mode; 2: Disable downgrade mode. The default value is 1.
                     */
                    int64_t m_autoDowngrade;
                    bool m_autoDowngradeHasBeenSet;

                    /**
                     * This interface is used to control th action sequences.
Action types are as follows:
"blink"
"mouth"
"nod"
"shake"
You can choose 1-2 actions out of the four.
Single action example: "blink"
Multiple action example: "blink,mouth"
The default value is blink. The different action types passed in this parameter take effect only when the SecurityLevel is 2, 4, or 5; otherwise, the interface reports an error.
                     */
                    std::string m_actionList;
                    bool m_actionListHasBeenSet;

                    /**
                     * Control liveness retry number.The value range is 1-99.
                     */
                    int64_t m_livenessRetryLimit;
                    bool m_livenessRetryLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_WEBVERIFICATIONCONFIGINTL_H_
