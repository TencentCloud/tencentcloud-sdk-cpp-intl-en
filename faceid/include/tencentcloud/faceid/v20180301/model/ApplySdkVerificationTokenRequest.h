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
                     * 获取Specifies the identity document type used for authentication. valid values:.  

HK (default): hong kong (china) identity card.
2. ML: malaysian identity card.
Indonesian identity card.
4. PhilippinesVoteID: specifies the voter card in the philippines.
5. PhilippinesDrivingLicense: specifies the driving license in philippines.
6. PhilippinesTinID: specifies the philippines tin id.
7. PhilippinesSSSID: specifies the SSSID in the philippines.
8. philippines UMID: specifies the philippines UMID.
9. MLIDPassport: specifies the passport for hong kong (china), macao (china), and taiwan (china) as well as overseas passports.
ThailandIDCard: specifies the thai identity card.
Mainland id card.
12. SingaporeIDCard: specifies the Singapore id card.
13. HMTPermit: specifies the hong kong, macau and taiwan travel permit.
                     * @return IdCardType Specifies the identity document type used for authentication. valid values:.  

HK (default): hong kong (china) identity card.
2. ML: malaysian identity card.
Indonesian identity card.
4. PhilippinesVoteID: specifies the voter card in the philippines.
5. PhilippinesDrivingLicense: specifies the driving license in philippines.
6. PhilippinesTinID: specifies the philippines tin id.
7. PhilippinesSSSID: specifies the SSSID in the philippines.
8. philippines UMID: specifies the philippines UMID.
9. MLIDPassport: specifies the passport for hong kong (china), macao (china), and taiwan (china) as well as overseas passports.
ThailandIDCard: specifies the thai identity card.
Mainland id card.
12. SingaporeIDCard: specifies the Singapore id card.
13. HMTPermit: specifies the hong kong, macau and taiwan travel permit.
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置Specifies the identity document type used for authentication. valid values:.  

HK (default): hong kong (china) identity card.
2. ML: malaysian identity card.
Indonesian identity card.
4. PhilippinesVoteID: specifies the voter card in the philippines.
5. PhilippinesDrivingLicense: specifies the driving license in philippines.
6. PhilippinesTinID: specifies the philippines tin id.
7. PhilippinesSSSID: specifies the SSSID in the philippines.
8. philippines UMID: specifies the philippines UMID.
9. MLIDPassport: specifies the passport for hong kong (china), macao (china), and taiwan (china) as well as overseas passports.
ThailandIDCard: specifies the thai identity card.
Mainland id card.
12. SingaporeIDCard: specifies the Singapore id card.
13. HMTPermit: specifies the hong kong, macau and taiwan travel permit.
                     * @param _idCardType Specifies the identity document type used for authentication. valid values:.  

HK (default): hong kong (china) identity card.
2. ML: malaysian identity card.
Indonesian identity card.
4. PhilippinesVoteID: specifies the voter card in the philippines.
5. PhilippinesDrivingLicense: specifies the driving license in philippines.
6. PhilippinesTinID: specifies the philippines tin id.
7. PhilippinesSSSID: specifies the SSSID in the philippines.
8. philippines UMID: specifies the philippines UMID.
9. MLIDPassport: specifies the passport for hong kong (china), macao (china), and taiwan (china) as well as overseas passports.
ThailandIDCard: specifies the thai identity card.
Mainland id card.
12. SingaporeIDCard: specifies the Singapore id card.
13. HMTPermit: specifies the hong kong, macau and taiwan travel permit.
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
                     * 获取Customize which alarm codes to block. If left blank, all alarm codes will be blocked by default.
Optional alarm codes are: -9101 (occlusion or incomplete border), -9102 (photocopying), -9103 (screen capture by camera), -9104 (image editing/PS modification), -9107 (glare/reflection), -9108 (blurriness), -9901 (other alarms).
                     * @return SelectedWarningCodes Customize which alarm codes to block. If left blank, all alarm codes will be blocked by default.
Optional alarm codes are: -9101 (occlusion or incomplete border), -9102 (photocopying), -9103 (screen capture by camera), -9104 (image editing/PS modification), -9107 (glare/reflection), -9108 (blurriness), -9901 (other alarms).
                     * 
                     */
                    std::vector<int64_t> GetSelectedWarningCodes() const;

                    /**
                     * 设置Customize which alarm codes to block. If left blank, all alarm codes will be blocked by default.
Optional alarm codes are: -9101 (occlusion or incomplete border), -9102 (photocopying), -9103 (screen capture by camera), -9104 (image editing/PS modification), -9107 (glare/reflection), -9108 (blurriness), -9901 (other alarms).
                     * @param _selectedWarningCodes Customize which alarm codes to block. If left blank, all alarm codes will be blocked by default.
Optional alarm codes are: -9101 (occlusion or incomplete border), -9102 (photocopying), -9103 (screen capture by camera), -9104 (image editing/PS modification), -9107 (glare/reflection), -9108 (blurriness), -9901 (other alarms).
                     * 
                     */
                    void SetSelectedWarningCodes(const std::vector<int64_t>& _selectedWarningCodes);

                    /**
                     * 判断参数 SelectedWarningCodes 是否已赋值
                     * @return SelectedWarningCodes 是否已赋值
                     * 
                     */
                    bool SelectedWarningCodesHasBeenSet() const;

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
                     * 获取BASIC: Basic Version (default).
                     * @return SdkVersion BASIC: Basic Version (default).
                     * 
                     */
                    std::string GetSdkVersion() const;

                    /**
                     * 设置BASIC: Basic Version (default).
                     * @param _sdkVersion BASIC: Basic Version (default).
                     * 
                     */
                    void SetSdkVersion(const std::string& _sdkVersion);

                    /**
                     * 判断参数 SdkVersion 是否已赋值
                     * @return SdkVersion 是否已赋值
                     * 
                     */
                    bool SdkVersionHasBeenSet() const;

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
                     * Specifies the identity document type used for authentication. valid values:.  

HK (default): hong kong (china) identity card.
2. ML: malaysian identity card.
Indonesian identity card.
4. PhilippinesVoteID: specifies the voter card in the philippines.
5. PhilippinesDrivingLicense: specifies the driving license in philippines.
6. PhilippinesTinID: specifies the philippines tin id.
7. PhilippinesSSSID: specifies the SSSID in the philippines.
8. philippines UMID: specifies the philippines UMID.
9. MLIDPassport: specifies the passport for hong kong (china), macao (china), and taiwan (china) as well as overseas passports.
ThailandIDCard: specifies the thai identity card.
Mainland id card.
12. SingaporeIDCard: specifies the Singapore id card.
13. HMTPermit: specifies the hong kong, macau and taiwan travel permit.
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
                     * Customize which alarm codes to block. If left blank, all alarm codes will be blocked by default.
Optional alarm codes are: -9101 (occlusion or incomplete border), -9102 (photocopying), -9103 (screen capture by camera), -9104 (image editing/PS modification), -9107 (glare/reflection), -9108 (blurriness), -9901 (other alarms).
                     */
                    std::vector<int64_t> m_selectedWarningCodes;
                    bool m_selectedWarningCodesHasBeenSet;

                    /**
                     * A passthrough field, which is returned together with the verification result and can contain up to 1,024 bits.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * BASIC: Basic Version (default).
                     */
                    std::string m_sdkVersion;
                    bool m_sdkVersionHasBeenSet;

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

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYSDKVERIFICATIONTOKENREQUEST_H_
