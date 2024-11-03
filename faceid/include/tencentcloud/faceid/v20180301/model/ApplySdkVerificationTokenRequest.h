/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYSDKVERIFICATIONTOKENREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYSDKVERIFICATIONTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ApplySdkVerificationToken request structure.
                */
                class ApplySdkVerificationTokenRequest : public AbstractModel
                {
                public:
                    ApplySdkVerificationTokenRequest();
                    ~ApplySdkVerificationTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The verification mode. Valid values:
1: OCR + liveness detection + face comparison
2: Liveness detection + face comparison
3: Liveness detection
Default value: 1
                     * @return CheckMode The verification mode. Valid values:
1: OCR + liveness detection + face comparison
2: Liveness detection + face comparison
3: Liveness detection
Default value: 1
                     * 
                     */
                    int64_t GetCheckMode() const;

                    /**
                     * 设置The verification mode. Valid values:
1: OCR + liveness detection + face comparison
2: Liveness detection + face comparison
3: Liveness detection
Default value: 1
                     * @param _checkMode The verification mode. Valid values:
1: OCR + liveness detection + face comparison
2: Liveness detection + face comparison
3: Liveness detection
Default value: 1
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
                     * 获取The security level of the verification. Valid values:
1: Video-based liveness detection
2: Motion-based liveness detection
3: Reflection-based liveness detection
4: Motion- and reflection-based liveness detection
Default value: 4
                     * @return SecurityLevel The security level of the verification. Valid values:
1: Video-based liveness detection
2: Motion-based liveness detection
3: Reflection-based liveness detection
4: Motion- and reflection-based liveness detection
Default value: 4
                     * 
                     */
                    int64_t GetSecurityLevel() const;

                    /**
                     * 设置The security level of the verification. Valid values:
1: Video-based liveness detection
2: Motion-based liveness detection
3: Reflection-based liveness detection
4: Motion- and reflection-based liveness detection
Default value: 4
                     * @param _securityLevel The security level of the verification. Valid values:
1: Video-based liveness detection
2: Motion-based liveness detection
3: Reflection-based liveness detection
4: Motion- and reflection-based liveness detection
Default value: 4
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
                     * 获取The identity document type. Valid values: 
1. HK (default): Identity card of Hong Kong (China)
2. ML: Malaysian identity card
3. IndonesiaIDCard: Indonesian identity card
4. PhilippinesVoteID: Philippine voters ID card
5. PhilippinesDrivingLicense: Philippine driver's license
6. PhilippinesTinID: Philippine TIN ID card
7. PhilippinesSSSID: Philippine SSS ID card
8. PhilippinesUMID: Philippine UMID card
9. MLIDPassport: Passport issued in Hong Kong/Macao/Taiwan (China) or other countries/regions
10..MacaoIDCard: Macao ID Card
11.ThailandIDCard: Thailand ID Card
12.MainlandIDCard: Mainland ID Card
13.SingaporeIDCard: Singapore ID Card
14.JapanIDCard: Japan ID Card
15.MLDrivingLicense: Malaysian Driving License
16.IndonesiaDrivingLicense: Indonesia Driving License
17.ThailandDrivingLicense: Thailand Driving License
18.SingaporeDrivingLicense: Singapore Driving License
19.JapanDrivingLicense: Japan Driving License
20.TaiWanIDCard:Taiwan ID Card
21.HMTPermit: exit/entry permit (card) for traveling to and from Hong Kong, Macao, or Taiwan
                     * @return IdCardType The identity document type. Valid values: 
1. HK (default): Identity card of Hong Kong (China)
2. ML: Malaysian identity card
3. IndonesiaIDCard: Indonesian identity card
4. PhilippinesVoteID: Philippine voters ID card
5. PhilippinesDrivingLicense: Philippine driver's license
6. PhilippinesTinID: Philippine TIN ID card
7. PhilippinesSSSID: Philippine SSS ID card
8. PhilippinesUMID: Philippine UMID card
9. MLIDPassport: Passport issued in Hong Kong/Macao/Taiwan (China) or other countries/regions
10..MacaoIDCard: Macao ID Card
11.ThailandIDCard: Thailand ID Card
12.MainlandIDCard: Mainland ID Card
13.SingaporeIDCard: Singapore ID Card
14.JapanIDCard: Japan ID Card
15.MLDrivingLicense: Malaysian Driving License
16.IndonesiaDrivingLicense: Indonesia Driving License
17.ThailandDrivingLicense: Thailand Driving License
18.SingaporeDrivingLicense: Singapore Driving License
19.JapanDrivingLicense: Japan Driving License
20.TaiWanIDCard:Taiwan ID Card
21.HMTPermit: exit/entry permit (card) for traveling to and from Hong Kong, Macao, or Taiwan
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置The identity document type. Valid values: 
1. HK (default): Identity card of Hong Kong (China)
2. ML: Malaysian identity card
3. IndonesiaIDCard: Indonesian identity card
4. PhilippinesVoteID: Philippine voters ID card
5. PhilippinesDrivingLicense: Philippine driver's license
6. PhilippinesTinID: Philippine TIN ID card
7. PhilippinesSSSID: Philippine SSS ID card
8. PhilippinesUMID: Philippine UMID card
9. MLIDPassport: Passport issued in Hong Kong/Macao/Taiwan (China) or other countries/regions
10..MacaoIDCard: Macao ID Card
11.ThailandIDCard: Thailand ID Card
12.MainlandIDCard: Mainland ID Card
13.SingaporeIDCard: Singapore ID Card
14.JapanIDCard: Japan ID Card
15.MLDrivingLicense: Malaysian Driving License
16.IndonesiaDrivingLicense: Indonesia Driving License
17.ThailandDrivingLicense: Thailand Driving License
18.SingaporeDrivingLicense: Singapore Driving License
19.JapanDrivingLicense: Japan Driving License
20.TaiWanIDCard:Taiwan ID Card
21.HMTPermit: exit/entry permit (card) for traveling to and from Hong Kong, Macao, or Taiwan
                     * @param _idCardType The identity document type. Valid values: 
1. HK (default): Identity card of Hong Kong (China)
2. ML: Malaysian identity card
3. IndonesiaIDCard: Indonesian identity card
4. PhilippinesVoteID: Philippine voters ID card
5. PhilippinesDrivingLicense: Philippine driver's license
6. PhilippinesTinID: Philippine TIN ID card
7. PhilippinesSSSID: Philippine SSS ID card
8. PhilippinesUMID: Philippine UMID card
9. MLIDPassport: Passport issued in Hong Kong/Macao/Taiwan (China) or other countries/regions
10..MacaoIDCard: Macao ID Card
11.ThailandIDCard: Thailand ID Card
12.MainlandIDCard: Mainland ID Card
13.SingaporeIDCard: Singapore ID Card
14.JapanIDCard: Japan ID Card
15.MLDrivingLicense: Malaysian Driving License
16.IndonesiaDrivingLicense: Indonesia Driving License
17.ThailandDrivingLicense: Thailand Driving License
18.SingaporeDrivingLicense: Singapore Driving License
19.JapanDrivingLicense: Japan Driving License
20.TaiWanIDCard:Taiwan ID Card
21.HMTPermit: exit/entry permit (card) for traveling to and from Hong Kong, Macao, or Taiwan
                     * 
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     * 
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取The Base64-encoded value of the photo to compare, which is required only when `CheckMode` is set to `2`.
                     * @return CompareImage The Base64-encoded value of the photo to compare, which is required only when `CheckMode` is set to `2`.
                     * 
                     */
                    std::string GetCompareImage() const;

                    /**
                     * 设置The Base64-encoded value of the photo to compare, which is required only when `CheckMode` is set to `2`.
                     * @param _compareImage The Base64-encoded value of the photo to compare, which is required only when `CheckMode` is set to `2`.
                     * 
                     */
                    void SetCompareImage(const std::string& _compareImage);

                    /**
                     * 判断参数 CompareImage 是否已赋值
                     * @return CompareImage 是否已赋值
                     * 
                     */
                    bool CompareImageHasBeenSet() const;

                    /**
                     * 获取Whether ID card authentication is required. If not, only document OCR will be performed. Currently, authentication is available only when the value of `IdCardType` is `HK`.
                     * @return NeedVerifyIdCard Whether ID card authentication is required. If not, only document OCR will be performed. Currently, authentication is available only when the value of `IdCardType` is `HK`.
                     * @deprecated
                     */
                    bool GetNeedVerifyIdCard() const;

                    /**
                     * 设置Whether ID card authentication is required. If not, only document OCR will be performed. Currently, authentication is available only when the value of `IdCardType` is `HK`.
                     * @param _needVerifyIdCard Whether ID card authentication is required. If not, only document OCR will be performed. Currently, authentication is available only when the value of `IdCardType` is `HK`.
                     * @deprecated
                     */
                    void SetNeedVerifyIdCard(const bool& _needVerifyIdCard);

                    /**
                     * 判断参数 NeedVerifyIdCard 是否已赋值
                     * @return NeedVerifyIdCard 是否已赋值
                     * @deprecated
                     */
                    bool NeedVerifyIdCardHasBeenSet() const;

                    /**
                     * 获取Whether to forbid the modification of the OCR result by users. Default value: `false` (modification allowed). (Currently, this parameter is not applied.)
                     * @return DisableChangeOcrResult Whether to forbid the modification of the OCR result by users. Default value: `false` (modification allowed). (Currently, this parameter is not applied.)
                     * 
                     */
                    bool GetDisableChangeOcrResult() const;

                    /**
                     * 设置Whether to forbid the modification of the OCR result by users. Default value: `false` (modification allowed). (Currently, this parameter is not applied.)
                     * @param _disableChangeOcrResult Whether to forbid the modification of the OCR result by users. Default value: `false` (modification allowed). (Currently, this parameter is not applied.)
                     * 
                     */
                    void SetDisableChangeOcrResult(const bool& _disableChangeOcrResult);

                    /**
                     * 判断参数 DisableChangeOcrResult 是否已赋值
                     * @return DisableChangeOcrResult 是否已赋值
                     * 
                     */
                    bool DisableChangeOcrResultHasBeenSet() const;

                    /**
                     * 获取Whether to disable the OCR warnings. Default value: `false` (not disable), where OCR warnings are enabled and the OCR result will not be returned if there is a warning.
This feature applies only to Hong Kong (China) identity cards, Malaysian identity cards, and passports.
                     * @return DisableCheckOcrWarnings Whether to disable the OCR warnings. Default value: `false` (not disable), where OCR warnings are enabled and the OCR result will not be returned if there is a warning.
This feature applies only to Hong Kong (China) identity cards, Malaysian identity cards, and passports.
                     * 
                     */
                    bool GetDisableCheckOcrWarnings() const;

                    /**
                     * 设置Whether to disable the OCR warnings. Default value: `false` (not disable), where OCR warnings are enabled and the OCR result will not be returned if there is a warning.
This feature applies only to Hong Kong (China) identity cards, Malaysian identity cards, and passports.
                     * @param _disableCheckOcrWarnings Whether to disable the OCR warnings. Default value: `false` (not disable), where OCR warnings are enabled and the OCR result will not be returned if there is a warning.
This feature applies only to Hong Kong (China) identity cards, Malaysian identity cards, and passports.
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
                     * 获取A passthrough field, which is returned together with the verification result and can contain up to 1,024 bits.
                     * @return Extra A passthrough field, which is returned together with the verification result and can contain up to 1,024 bits.
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置A passthrough field, which is returned together with the verification result and can contain up to 1,024 bits.
                     * @param _extra A passthrough field, which is returned together with the verification result and can contain up to 1,024 bits.
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

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
The default value is blink. The different action types passed in this parameter take effect only when the SecurityLevel is 2 or 4; otherwise, the interface reports an error.
                     * @return ActionList This interface is used to control th action sequences.
Action types are as follows:
"blink"
"mouth"
"nod"
"shake"
You can choose 1-2 actions out of the four.
Single action example: "blink"
Multiple action example: "blink,mouth"
The default value is blink. The different action types passed in this parameter take effect only when the SecurityLevel is 2 or 4; otherwise, the interface reports an error.
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
The default value is blink. The different action types passed in this parameter take effect only when the SecurityLevel is 2 or 4; otherwise, the interface reports an error.
                     * @param _actionList This interface is used to control th action sequences.
Action types are as follows:
"blink"
"mouth"
"nod"
"shake"
You can choose 1-2 actions out of the four.
Single action example: "blink"
Multiple action example: "blink,mouth"
The default value is blink. The different action types passed in this parameter take effect only when the SecurityLevel is 2 or 4; otherwise, the interface reports an error.
                     * 
                     */
                    void SetActionList(const std::string& _actionList);

                    /**
                     * 判断参数 ActionList 是否已赋值
                     * @return ActionList 是否已赋值
                     * 
                     */
                    bool ActionListHasBeenSet() const;

                private:

                    /**
                     * The verification mode. Valid values:
1: OCR + liveness detection + face comparison
2: Liveness detection + face comparison
3: Liveness detection
Default value: 1
                     */
                    int64_t m_checkMode;
                    bool m_checkModeHasBeenSet;

                    /**
                     * The security level of the verification. Valid values:
1: Video-based liveness detection
2: Motion-based liveness detection
3: Reflection-based liveness detection
4: Motion- and reflection-based liveness detection
Default value: 4
                     */
                    int64_t m_securityLevel;
                    bool m_securityLevelHasBeenSet;

                    /**
                     * The identity document type. Valid values: 
1. HK (default): Identity card of Hong Kong (China)
2. ML: Malaysian identity card
3. IndonesiaIDCard: Indonesian identity card
4. PhilippinesVoteID: Philippine voters ID card
5. PhilippinesDrivingLicense: Philippine driver's license
6. PhilippinesTinID: Philippine TIN ID card
7. PhilippinesSSSID: Philippine SSS ID card
8. PhilippinesUMID: Philippine UMID card
9. MLIDPassport: Passport issued in Hong Kong/Macao/Taiwan (China) or other countries/regions
10..MacaoIDCard: Macao ID Card
11.ThailandIDCard: Thailand ID Card
12.MainlandIDCard: Mainland ID Card
13.SingaporeIDCard: Singapore ID Card
14.JapanIDCard: Japan ID Card
15.MLDrivingLicense: Malaysian Driving License
16.IndonesiaDrivingLicense: Indonesia Driving License
17.ThailandDrivingLicense: Thailand Driving License
18.SingaporeDrivingLicense: Singapore Driving License
19.JapanDrivingLicense: Japan Driving License
20.TaiWanIDCard:Taiwan ID Card
21.HMTPermit: exit/entry permit (card) for traveling to and from Hong Kong, Macao, or Taiwan
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * The Base64-encoded value of the photo to compare, which is required only when `CheckMode` is set to `2`.
                     */
                    std::string m_compareImage;
                    bool m_compareImageHasBeenSet;

                    /**
                     * Whether ID card authentication is required. If not, only document OCR will be performed. Currently, authentication is available only when the value of `IdCardType` is `HK`.
                     */
                    bool m_needVerifyIdCard;
                    bool m_needVerifyIdCardHasBeenSet;

                    /**
                     * Whether to forbid the modification of the OCR result by users. Default value: `false` (modification allowed). (Currently, this parameter is not applied.)
                     */
                    bool m_disableChangeOcrResult;
                    bool m_disableChangeOcrResultHasBeenSet;

                    /**
                     * Whether to disable the OCR warnings. Default value: `false` (not disable), where OCR warnings are enabled and the OCR result will not be returned if there is a warning.
This feature applies only to Hong Kong (China) identity cards, Malaysian identity cards, and passports.
                     */
                    bool m_disableCheckOcrWarnings;
                    bool m_disableCheckOcrWarningsHasBeenSet;

                    /**
                     * A passthrough field, which is returned together with the verification result and can contain up to 1,024 bits.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

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
The default value is blink. The different action types passed in this parameter take effect only when the SecurityLevel is 2 or 4; otherwise, the interface reports an error.
                     */
                    std::string m_actionList;
                    bool m_actionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYSDKVERIFICATIONTOKENREQUEST_H_
