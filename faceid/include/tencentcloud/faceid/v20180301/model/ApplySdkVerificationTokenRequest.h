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

1. HK (default): hong kong (china) identity card.
2. ML: malaysian identity card.
3. Indonesian identity card.
4. PhilippinesVoteID: specifies the voter card in the philippines.
5. PhilippinesDrivingLicense: specifies the driving license in philippines.
6. PhilippinesTinID: specifies the philippines tin id.
7. PhilippinesSSSID: specifies the SSSID in the philippines.
8. philippines UMID: specifies the philippines UMID.
9. MLIDPassport: specifies the passport for hong kong (china), macao (china), and taiwan (china) as well as overseas passports.
10. ThailandIDCard: specifies the thai identity card.
11. Mainland id card.
12. SingaporeIDCard: specifies the Singapore id card.
13. HMTPermit: specifies the hong kong, macau and taiwan travel permit.
                     * @return IdCardType Specifies the identity document type used for authentication. valid values:.  

1. HK (default): hong kong (china) identity card.
2. ML: malaysian identity card.
3. Indonesian identity card.
4. PhilippinesVoteID: specifies the voter card in the philippines.
5. PhilippinesDrivingLicense: specifies the driving license in philippines.
6. PhilippinesTinID: specifies the philippines tin id.
7. PhilippinesSSSID: specifies the SSSID in the philippines.
8. philippines UMID: specifies the philippines UMID.
9. MLIDPassport: specifies the passport for hong kong (china), macao (china), and taiwan (china) as well as overseas passports.
10. ThailandIDCard: specifies the thai identity card.
11. Mainland id card.
12. SingaporeIDCard: specifies the Singapore id card.
13. HMTPermit: specifies the hong kong, macau and taiwan travel permit.
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置Specifies the identity document type used for authentication. valid values:.  

1. HK (default): hong kong (china) identity card.
2. ML: malaysian identity card.
3. Indonesian identity card.
4. PhilippinesVoteID: specifies the voter card in the philippines.
5. PhilippinesDrivingLicense: specifies the driving license in philippines.
6. PhilippinesTinID: specifies the philippines tin id.
7. PhilippinesSSSID: specifies the SSSID in the philippines.
8. philippines UMID: specifies the philippines UMID.
9. MLIDPassport: specifies the passport for hong kong (china), macao (china), and taiwan (china) as well as overseas passports.
10. ThailandIDCard: specifies the thai identity card.
11. Mainland id card.
12. SingaporeIDCard: specifies the Singapore id card.
13. HMTPermit: specifies the hong kong, macau and taiwan travel permit.
                     * @param _idCardType Specifies the identity document type used for authentication. valid values:.  

1. HK (default): hong kong (china) identity card.
2. ML: malaysian identity card.
3. Indonesian identity card.
4. PhilippinesVoteID: specifies the voter card in the philippines.
5. PhilippinesDrivingLicense: specifies the driving license in philippines.
6. PhilippinesTinID: specifies the philippines tin id.
7. PhilippinesSSSID: specifies the SSSID in the philippines.
8. philippines UMID: specifies the philippines UMID.
9. MLIDPassport: specifies the passport for hong kong (china), macao (china), and taiwan (china) as well as overseas passports.
10. ThailandIDCard: specifies the thai identity card.
11. Mainland id card.
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
                     * 获取BASIC: Basic version (Default).
ENHANCE: Enhance version, enable additional output of device risk level field.
PRO: Pro version, enable additional output of attack type fields.
PLUS: Plus version, enable additional output of device risk level and attack type fields.
Please contact us to access enhance version & plus version.	
                     * @return SdkVersion BASIC: Basic version (Default).
ENHANCE: Enhance version, enable additional output of device risk level field.
PRO: Pro version, enable additional output of attack type fields.
PLUS: Plus version, enable additional output of device risk level and attack type fields.
Please contact us to access enhance version & plus version.	
                     * 
                     */
                    std::string GetSdkVersion() const;

                    /**
                     * 设置BASIC: Basic version (Default).
ENHANCE: Enhance version, enable additional output of device risk level field.
PRO: Pro version, enable additional output of attack type fields.
PLUS: Plus version, enable additional output of device risk level and attack type fields.
Please contact us to access enhance version & plus version.	
                     * @param _sdkVersion BASIC: Basic version (Default).
ENHANCE: Enhance version, enable additional output of device risk level field.
PRO: Pro version, enable additional output of attack type fields.
PLUS: Plus version, enable additional output of device risk level and attack type fields.
Please contact us to access enhance version & plus version.	
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

                    /**
                     * 获取<p>Controls visibility of the final result page</p><p>Enumeration values:</p><ul><li>true: Do not display the result page</li><li>false: Display the result page</li></ul><p>Default value: false</p>
                     * @return SkipResultPage <p>Controls visibility of the final result page</p><p>Enumeration values:</p><ul><li>true: Do not display the result page</li><li>false: Display the result page</li></ul><p>Default value: false</p>
                     * 
                     */
                    bool GetSkipResultPage() const;

                    /**
                     * 设置<p>Controls visibility of the final result page</p><p>Enumeration values:</p><ul><li>true: Do not display the result page</li><li>false: Display the result page</li></ul><p>Default value: false</p>
                     * @param _skipResultPage <p>Controls visibility of the final result page</p><p>Enumeration values:</p><ul><li>true: Do not display the result page</li><li>false: Display the result page</li></ul><p>Default value: false</p>
                     * 
                     */
                    void SetSkipResultPage(const bool& _skipResultPage);

                    /**
                     * 判断参数 SkipResultPage 是否已赋值
                     * @return SkipResultPage 是否已赋值
                     * 
                     */
                    bool SkipResultPageHasBeenSet() const;

                    /**
                     * 获取<p>Identified fields displayed during document OCR</p><p>Parameter format: ["ChineseName","FullName"]</p><p>Input constraints: <strong>Supported field names by document type:</strong><br><strong>HK (Hong Kong Identity Card):</strong> "ChineseName","FullName","LicenseNumber","Birthday","Sex", "IssuedDate", "Permanent", "Symbol", "CurrentIssueDate"<br><strong>ML (Malaysia Identity Card):</strong> "FullName","LicenseNumber","Sex", "Birthday", "Type", "FormattedAddress"<br><strong>IndonesiaIDCard (Indonesia Identity Card):</strong> "LicenseNumber","FullName","Sex", "Birthday", "FormattedAddress", "Nationality", "DueDate", "IssuedDate", "Street", "Village","Area","Province","City","MaritalStatus", "BloodType", "Religion", "Occupation"<br><strong>PhilippinesVoteID (Philippines Voter's ID):</strong> "FirstName","LastName","Birthday"<br><strong>PhilippinesDrivingLicense (Philippines Driving License):</strong> "LastName","FirstName","MiddleName","Sex","Birthday"<br><strong>PhilippinesTinID (Philippines TIN ID):</strong> "LicenseNumber", "FullName", "Birthday"<br><strong>PhilippinesSSSID (Philippines SSS ID):</strong> "LicenseNumber", "FullName", "Birthday"<br><strong>PhilippinesUMID (Philippines UMID):</strong> "Surname", "MiddleName", "GivenName", "Sex", "Birthday"<br><strong>MLIDPassport (Passports of Hong Kong, Macao, Taiwan and overseas regions):</strong> "LicenseNumber","FullName", "Surname", "GivenName", "Birthday", "Sex","DateOfExpiration","IssuingCountry"<br><strong>ThailandIDCard (Thailand Identity Card):</strong> "FullName", "LastName", "FirstName", "FormattedAddress", "LicenseNumber", "Birthday", "ExpirationDate", "IssuedDate", "RegistrationNumber", "Religion", "ThaiBirthday", "ThaiExpirationDate", "ThaiIssueDate"<br><strong>MainlandIDCard (Chinese Mainland Identity Card):</strong> "LicenseNumber", "FullName", "Sex", "Nation", "Birthday", "FormattedAddress"<br><strong>SingaporeIDCard (Singapore Identity Card):</strong> "ChineseName","Sex","Birthday","LicenseNumber","Nationality","FullName","Address"<br><strong>HMTPermit (Mainland Travel Permit for Hong Kong and Macao Residents / Mainland Travel Permit for Taiwan Residents):</strong> "Name", "EnglishName", "Sex", "Number", "ValidDate", "Birthday"</p><p>If no fields are specified, all identified fields will be displayed by default.</p>

                     * @return CardOcrDisplayFields <p>Identified fields displayed during document OCR</p><p>Parameter format: ["ChineseName","FullName"]</p><p>Input constraints: <strong>Supported field names by document type:</strong><br><strong>HK (Hong Kong Identity Card):</strong> "ChineseName","FullName","LicenseNumber","Birthday","Sex", "IssuedDate", "Permanent", "Symbol", "CurrentIssueDate"<br><strong>ML (Malaysia Identity Card):</strong> "FullName","LicenseNumber","Sex", "Birthday", "Type", "FormattedAddress"<br><strong>IndonesiaIDCard (Indonesia Identity Card):</strong> "LicenseNumber","FullName","Sex", "Birthday", "FormattedAddress", "Nationality", "DueDate", "IssuedDate", "Street", "Village","Area","Province","City","MaritalStatus", "BloodType", "Religion", "Occupation"<br><strong>PhilippinesVoteID (Philippines Voter's ID):</strong> "FirstName","LastName","Birthday"<br><strong>PhilippinesDrivingLicense (Philippines Driving License):</strong> "LastName","FirstName","MiddleName","Sex","Birthday"<br><strong>PhilippinesTinID (Philippines TIN ID):</strong> "LicenseNumber", "FullName", "Birthday"<br><strong>PhilippinesSSSID (Philippines SSS ID):</strong> "LicenseNumber", "FullName", "Birthday"<br><strong>PhilippinesUMID (Philippines UMID):</strong> "Surname", "MiddleName", "GivenName", "Sex", "Birthday"<br><strong>MLIDPassport (Passports of Hong Kong, Macao, Taiwan and overseas regions):</strong> "LicenseNumber","FullName", "Surname", "GivenName", "Birthday", "Sex","DateOfExpiration","IssuingCountry"<br><strong>ThailandIDCard (Thailand Identity Card):</strong> "FullName", "LastName", "FirstName", "FormattedAddress", "LicenseNumber", "Birthday", "ExpirationDate", "IssuedDate", "RegistrationNumber", "Religion", "ThaiBirthday", "ThaiExpirationDate", "ThaiIssueDate"<br><strong>MainlandIDCard (Chinese Mainland Identity Card):</strong> "LicenseNumber", "FullName", "Sex", "Nation", "Birthday", "FormattedAddress"<br><strong>SingaporeIDCard (Singapore Identity Card):</strong> "ChineseName","Sex","Birthday","LicenseNumber","Nationality","FullName","Address"<br><strong>HMTPermit (Mainland Travel Permit for Hong Kong and Macao Residents / Mainland Travel Permit for Taiwan Residents):</strong> "Name", "EnglishName", "Sex", "Number", "ValidDate", "Birthday"</p><p>If no fields are specified, all identified fields will be displayed by default.</p>

                     * 
                     */
                    std::vector<std::string> GetCardOcrDisplayFields() const;

                    /**
                     * 设置<p>Identified fields displayed during document OCR</p><p>Parameter format: ["ChineseName","FullName"]</p><p>Input constraints: <strong>Supported field names by document type:</strong><br><strong>HK (Hong Kong Identity Card):</strong> "ChineseName","FullName","LicenseNumber","Birthday","Sex", "IssuedDate", "Permanent", "Symbol", "CurrentIssueDate"<br><strong>ML (Malaysia Identity Card):</strong> "FullName","LicenseNumber","Sex", "Birthday", "Type", "FormattedAddress"<br><strong>IndonesiaIDCard (Indonesia Identity Card):</strong> "LicenseNumber","FullName","Sex", "Birthday", "FormattedAddress", "Nationality", "DueDate", "IssuedDate", "Street", "Village","Area","Province","City","MaritalStatus", "BloodType", "Religion", "Occupation"<br><strong>PhilippinesVoteID (Philippines Voter's ID):</strong> "FirstName","LastName","Birthday"<br><strong>PhilippinesDrivingLicense (Philippines Driving License):</strong> "LastName","FirstName","MiddleName","Sex","Birthday"<br><strong>PhilippinesTinID (Philippines TIN ID):</strong> "LicenseNumber", "FullName", "Birthday"<br><strong>PhilippinesSSSID (Philippines SSS ID):</strong> "LicenseNumber", "FullName", "Birthday"<br><strong>PhilippinesUMID (Philippines UMID):</strong> "Surname", "MiddleName", "GivenName", "Sex", "Birthday"<br><strong>MLIDPassport (Passports of Hong Kong, Macao, Taiwan and overseas regions):</strong> "LicenseNumber","FullName", "Surname", "GivenName", "Birthday", "Sex","DateOfExpiration","IssuingCountry"<br><strong>ThailandIDCard (Thailand Identity Card):</strong> "FullName", "LastName", "FirstName", "FormattedAddress", "LicenseNumber", "Birthday", "ExpirationDate", "IssuedDate", "RegistrationNumber", "Religion", "ThaiBirthday", "ThaiExpirationDate", "ThaiIssueDate"<br><strong>MainlandIDCard (Chinese Mainland Identity Card):</strong> "LicenseNumber", "FullName", "Sex", "Nation", "Birthday", "FormattedAddress"<br><strong>SingaporeIDCard (Singapore Identity Card):</strong> "ChineseName","Sex","Birthday","LicenseNumber","Nationality","FullName","Address"<br><strong>HMTPermit (Mainland Travel Permit for Hong Kong and Macao Residents / Mainland Travel Permit for Taiwan Residents):</strong> "Name", "EnglishName", "Sex", "Number", "ValidDate", "Birthday"</p><p>If no fields are specified, all identified fields will be displayed by default.</p>

                     * @param _cardOcrDisplayFields <p>Identified fields displayed during document OCR</p><p>Parameter format: ["ChineseName","FullName"]</p><p>Input constraints: <strong>Supported field names by document type:</strong><br><strong>HK (Hong Kong Identity Card):</strong> "ChineseName","FullName","LicenseNumber","Birthday","Sex", "IssuedDate", "Permanent", "Symbol", "CurrentIssueDate"<br><strong>ML (Malaysia Identity Card):</strong> "FullName","LicenseNumber","Sex", "Birthday", "Type", "FormattedAddress"<br><strong>IndonesiaIDCard (Indonesia Identity Card):</strong> "LicenseNumber","FullName","Sex", "Birthday", "FormattedAddress", "Nationality", "DueDate", "IssuedDate", "Street", "Village","Area","Province","City","MaritalStatus", "BloodType", "Religion", "Occupation"<br><strong>PhilippinesVoteID (Philippines Voter's ID):</strong> "FirstName","LastName","Birthday"<br><strong>PhilippinesDrivingLicense (Philippines Driving License):</strong> "LastName","FirstName","MiddleName","Sex","Birthday"<br><strong>PhilippinesTinID (Philippines TIN ID):</strong> "LicenseNumber", "FullName", "Birthday"<br><strong>PhilippinesSSSID (Philippines SSS ID):</strong> "LicenseNumber", "FullName", "Birthday"<br><strong>PhilippinesUMID (Philippines UMID):</strong> "Surname", "MiddleName", "GivenName", "Sex", "Birthday"<br><strong>MLIDPassport (Passports of Hong Kong, Macao, Taiwan and overseas regions):</strong> "LicenseNumber","FullName", "Surname", "GivenName", "Birthday", "Sex","DateOfExpiration","IssuingCountry"<br><strong>ThailandIDCard (Thailand Identity Card):</strong> "FullName", "LastName", "FirstName", "FormattedAddress", "LicenseNumber", "Birthday", "ExpirationDate", "IssuedDate", "RegistrationNumber", "Religion", "ThaiBirthday", "ThaiExpirationDate", "ThaiIssueDate"<br><strong>MainlandIDCard (Chinese Mainland Identity Card):</strong> "LicenseNumber", "FullName", "Sex", "Nation", "Birthday", "FormattedAddress"<br><strong>SingaporeIDCard (Singapore Identity Card):</strong> "ChineseName","Sex","Birthday","LicenseNumber","Nationality","FullName","Address"<br><strong>HMTPermit (Mainland Travel Permit for Hong Kong and Macao Residents / Mainland Travel Permit for Taiwan Residents):</strong> "Name", "EnglishName", "Sex", "Number", "ValidDate", "Birthday"</p><p>If no fields are specified, all identified fields will be displayed by default.</p>

                     * 
                     */
                    void SetCardOcrDisplayFields(const std::vector<std::string>& _cardOcrDisplayFields);

                    /**
                     * 判断参数 CardOcrDisplayFields 是否已赋值
                     * @return CardOcrDisplayFields 是否已赋值
                     * 
                     */
                    bool CardOcrDisplayFieldsHasBeenSet() const;

                    /**
                     * 获取<p>Liveness retry attempts</p><p>Value range: [1, 5]</p><p>Default value: 5</p>
                     * @return RetryLimit <p>Liveness retry attempts</p><p>Value range: [1, 5]</p><p>Default value: 5</p>
                     * 
                     */
                    int64_t GetRetryLimit() const;

                    /**
                     * 设置<p>Liveness retry attempts</p><p>Value range: [1, 5]</p><p>Default value: 5</p>
                     * @param _retryLimit <p>Liveness retry attempts</p><p>Value range: [1, 5]</p><p>Default value: 5</p>
                     * 
                     */
                    void SetRetryLimit(const int64_t& _retryLimit);

                    /**
                     * 判断参数 RetryLimit 是否已赋值
                     * @return RetryLimit 是否已赋值
                     * 
                     */
                    bool RetryLimitHasBeenSet() const;

                    /**
                     * 获取<p>Enable multi-image anti-spoofing for single-angle Identity Document Recognition</p><p>Default value: false</p><p>true - Enabled; false - Disabled</p>
                     * @return EnableForgeryDetectionImages <p>Enable multi-image anti-spoofing for single-angle Identity Document Recognition</p><p>Default value: false</p><p>true - Enabled; false - Disabled</p>
                     * 
                     */
                    bool GetEnableForgeryDetectionImages() const;

                    /**
                     * 设置<p>Enable multi-image anti-spoofing for single-angle Identity Document Recognition</p><p>Default value: false</p><p>true - Enabled; false - Disabled</p>
                     * @param _enableForgeryDetectionImages <p>Enable multi-image anti-spoofing for single-angle Identity Document Recognition</p><p>Default value: false</p><p>true - Enabled; false - Disabled</p>
                     * 
                     */
                    void SetEnableForgeryDetectionImages(const bool& _enableForgeryDetectionImages);

                    /**
                     * 判断参数 EnableForgeryDetectionImages 是否已赋值
                     * @return EnableForgeryDetectionImages 是否已赋值
                     * 
                     */
                    bool EnableForgeryDetectionImagesHasBeenSet() const;

                    /**
                     * 获取Encrypted metadata generated by the SDK
                     * @return MetaData Encrypted metadata generated by the SDK
                     * 
                     */
                    std::string GetMetaData() const;

                    /**
                     * 设置Encrypted metadata generated by the SDK
                     * @param _metaData Encrypted metadata generated by the SDK
                     * 
                     */
                    void SetMetaData(const std::string& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取<p>Controls visibility of the launch page</p><p>Enumeration values:</p><ul><li>true: Do not display the launch page</li><li>false: Display the launch page</li></ul><p>Default value: false</p>
                     * @return SkipLaunchPage <p>Controls visibility of the launch page</p><p>Enumeration values:</p><ul><li>true: Do not display the launch page</li><li>false: Display the launch page</li></ul><p>Default value: false</p>
                     * 
                     */
                    bool GetSkipLaunchPage() const;

                    /**
                     * 设置<p>Controls visibility of the launch page</p><p>Enumeration values:</p><ul><li>true: Do not display the launch page</li><li>false: Display the launch page</li></ul><p>Default value: false</p>
                     * @param _skipLaunchPage <p>Controls visibility of the launch page</p><p>Enumeration values:</p><ul><li>true: Do not display the launch page</li><li>false: Display the launch page</li></ul><p>Default value: false</p>
                     * 
                     */
                    void SetSkipLaunchPage(const bool& _skipLaunchPage);

                    /**
                     * 判断参数 SkipLaunchPage 是否已赋值
                     * @return SkipLaunchPage 是否已赋值
                     * 
                     */
                    bool SkipLaunchPageHasBeenSet() const;

                    /**
                     * 获取<p>Controls visibility of the information confirmation page </p><p>Enumeration values:</p><ul><li>true: Do not display the information confirmation page</li><li>false: Display the information confirmation page</li></ul><p>Default value: false</p>
                     * @return SkipOcrConfirmPage <p>Controls visibility of the information confirmation page </p><p>Enumeration values:</p><ul><li>true: Do not display the information confirmation page</li><li>false: Display the information confirmation page</li></ul><p>Default value: false</p>
                     * 
                     */
                    bool GetSkipOcrConfirmPage() const;

                    /**
                     * 设置<p>Controls visibility of the information confirmation page </p><p>Enumeration values:</p><ul><li>true: Do not display the information confirmation page</li><li>false: Display the information confirmation page</li></ul><p>Default value: false</p>
                     * @param _skipOcrConfirmPage <p>Controls visibility of the information confirmation page </p><p>Enumeration values:</p><ul><li>true: Do not display the information confirmation page</li><li>false: Display the information confirmation page</li></ul><p>Default value: false</p>
                     * 
                     */
                    void SetSkipOcrConfirmPage(const bool& _skipOcrConfirmPage);

                    /**
                     * 判断参数 SkipOcrConfirmPage 是否已赋值
                     * @return SkipOcrConfirmPage 是否已赋值
                     * 
                     */
                    bool SkipOcrConfirmPageHasBeenSet() const;

                    /**
                     * 获取<p>Controls whether to hide the top progress bar across all pages of the entire process </p><p>Enumeration values:</p><ul><li>true: Do not display the progress bar</li><li>false: Display the progress bar</li></ul><p>Default value: false</p>
                     * @return HideProgressBar <p>Controls whether to hide the top progress bar across all pages of the entire process </p><p>Enumeration values:</p><ul><li>true: Do not display the progress bar</li><li>false: Display the progress bar</li></ul><p>Default value: false</p>
                     * 
                     */
                    bool GetHideProgressBar() const;

                    /**
                     * 设置<p>Controls whether to hide the top progress bar across all pages of the entire process </p><p>Enumeration values:</p><ul><li>true: Do not display the progress bar</li><li>false: Display the progress bar</li></ul><p>Default value: false</p>
                     * @param _hideProgressBar <p>Controls whether to hide the top progress bar across all pages of the entire process </p><p>Enumeration values:</p><ul><li>true: Do not display the progress bar</li><li>false: Display the progress bar</li></ul><p>Default value: false</p>
                     * 
                     */
                    void SetHideProgressBar(const bool& _hideProgressBar);

                    /**
                     * 判断参数 HideProgressBar 是否已赋值
                     * @return HideProgressBar 是否已赋值
                     * 
                     */
                    bool HideProgressBarHasBeenSet() const;

                    /**
                     * 获取<p>Whether uploading photos from the album is permitted for verification during the ID validation phase (prohibited when single-angle multi-image forgery detection is enabled)
 </p><p>Enumeration values:</p><ul><li>true: Album photo upload for verification enabled</li><li>false: Album photo upload for verification disabled</li></ul><p>Default value: false</p>
                     * @return AllowUploadPhoto <p>Whether uploading photos from the album is permitted for verification during the ID validation phase (prohibited when single-angle multi-image forgery detection is enabled)
 </p><p>Enumeration values:</p><ul><li>true: Album photo upload for verification enabled</li><li>false: Album photo upload for verification disabled</li></ul><p>Default value: false</p>
                     * 
                     */
                    bool GetAllowUploadPhoto() const;

                    /**
                     * 设置<p>Whether uploading photos from the album is permitted for verification during the ID validation phase (prohibited when single-angle multi-image forgery detection is enabled)
 </p><p>Enumeration values:</p><ul><li>true: Album photo upload for verification enabled</li><li>false: Album photo upload for verification disabled</li></ul><p>Default value: false</p>
                     * @param _allowUploadPhoto <p>Whether uploading photos from the album is permitted for verification during the ID validation phase (prohibited when single-angle multi-image forgery detection is enabled)
 </p><p>Enumeration values:</p><ul><li>true: Album photo upload for verification enabled</li><li>false: Album photo upload for verification disabled</li></ul><p>Default value: false</p>
                     * 
                     */
                    void SetAllowUploadPhoto(const bool& _allowUploadPhoto);

                    /**
                     * 判断参数 AllowUploadPhoto 是否已赋值
                     * @return AllowUploadPhoto 是否已赋值
                     * 
                     */
                    bool AllowUploadPhotoHasBeenSet() const;

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

1. HK (default): hong kong (china) identity card.
2. ML: malaysian identity card.
3. Indonesian identity card.
4. PhilippinesVoteID: specifies the voter card in the philippines.
5. PhilippinesDrivingLicense: specifies the driving license in philippines.
6. PhilippinesTinID: specifies the philippines tin id.
7. PhilippinesSSSID: specifies the SSSID in the philippines.
8. philippines UMID: specifies the philippines UMID.
9. MLIDPassport: specifies the passport for hong kong (china), macao (china), and taiwan (china) as well as overseas passports.
10. ThailandIDCard: specifies the thai identity card.
11. Mainland id card.
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
                     * BASIC: Basic version (Default).
ENHANCE: Enhance version, enable additional output of device risk level field.
PRO: Pro version, enable additional output of attack type fields.
PLUS: Plus version, enable additional output of device risk level and attack type fields.
Please contact us to access enhance version & plus version.	
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

                    /**
                     * <p>Controls visibility of the final result page</p><p>Enumeration values:</p><ul><li>true: Do not display the result page</li><li>false: Display the result page</li></ul><p>Default value: false</p>
                     */
                    bool m_skipResultPage;
                    bool m_skipResultPageHasBeenSet;

                    /**
                     * <p>Identified fields displayed during document OCR</p><p>Parameter format: ["ChineseName","FullName"]</p><p>Input constraints: <strong>Supported field names by document type:</strong><br><strong>HK (Hong Kong Identity Card):</strong> "ChineseName","FullName","LicenseNumber","Birthday","Sex", "IssuedDate", "Permanent", "Symbol", "CurrentIssueDate"<br><strong>ML (Malaysia Identity Card):</strong> "FullName","LicenseNumber","Sex", "Birthday", "Type", "FormattedAddress"<br><strong>IndonesiaIDCard (Indonesia Identity Card):</strong> "LicenseNumber","FullName","Sex", "Birthday", "FormattedAddress", "Nationality", "DueDate", "IssuedDate", "Street", "Village","Area","Province","City","MaritalStatus", "BloodType", "Religion", "Occupation"<br><strong>PhilippinesVoteID (Philippines Voter's ID):</strong> "FirstName","LastName","Birthday"<br><strong>PhilippinesDrivingLicense (Philippines Driving License):</strong> "LastName","FirstName","MiddleName","Sex","Birthday"<br><strong>PhilippinesTinID (Philippines TIN ID):</strong> "LicenseNumber", "FullName", "Birthday"<br><strong>PhilippinesSSSID (Philippines SSS ID):</strong> "LicenseNumber", "FullName", "Birthday"<br><strong>PhilippinesUMID (Philippines UMID):</strong> "Surname", "MiddleName", "GivenName", "Sex", "Birthday"<br><strong>MLIDPassport (Passports of Hong Kong, Macao, Taiwan and overseas regions):</strong> "LicenseNumber","FullName", "Surname", "GivenName", "Birthday", "Sex","DateOfExpiration","IssuingCountry"<br><strong>ThailandIDCard (Thailand Identity Card):</strong> "FullName", "LastName", "FirstName", "FormattedAddress", "LicenseNumber", "Birthday", "ExpirationDate", "IssuedDate", "RegistrationNumber", "Religion", "ThaiBirthday", "ThaiExpirationDate", "ThaiIssueDate"<br><strong>MainlandIDCard (Chinese Mainland Identity Card):</strong> "LicenseNumber", "FullName", "Sex", "Nation", "Birthday", "FormattedAddress"<br><strong>SingaporeIDCard (Singapore Identity Card):</strong> "ChineseName","Sex","Birthday","LicenseNumber","Nationality","FullName","Address"<br><strong>HMTPermit (Mainland Travel Permit for Hong Kong and Macao Residents / Mainland Travel Permit for Taiwan Residents):</strong> "Name", "EnglishName", "Sex", "Number", "ValidDate", "Birthday"</p><p>If no fields are specified, all identified fields will be displayed by default.</p>

                     */
                    std::vector<std::string> m_cardOcrDisplayFields;
                    bool m_cardOcrDisplayFieldsHasBeenSet;

                    /**
                     * <p>Liveness retry attempts</p><p>Value range: [1, 5]</p><p>Default value: 5</p>
                     */
                    int64_t m_retryLimit;
                    bool m_retryLimitHasBeenSet;

                    /**
                     * <p>Enable multi-image anti-spoofing for single-angle Identity Document Recognition</p><p>Default value: false</p><p>true - Enabled; false - Disabled</p>
                     */
                    bool m_enableForgeryDetectionImages;
                    bool m_enableForgeryDetectionImagesHasBeenSet;

                    /**
                     * Encrypted metadata generated by the SDK
                     */
                    std::string m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * <p>Controls visibility of the launch page</p><p>Enumeration values:</p><ul><li>true: Do not display the launch page</li><li>false: Display the launch page</li></ul><p>Default value: false</p>
                     */
                    bool m_skipLaunchPage;
                    bool m_skipLaunchPageHasBeenSet;

                    /**
                     * <p>Controls visibility of the information confirmation page </p><p>Enumeration values:</p><ul><li>true: Do not display the information confirmation page</li><li>false: Display the information confirmation page</li></ul><p>Default value: false</p>
                     */
                    bool m_skipOcrConfirmPage;
                    bool m_skipOcrConfirmPageHasBeenSet;

                    /**
                     * <p>Controls whether to hide the top progress bar across all pages of the entire process </p><p>Enumeration values:</p><ul><li>true: Do not display the progress bar</li><li>false: Display the progress bar</li></ul><p>Default value: false</p>
                     */
                    bool m_hideProgressBar;
                    bool m_hideProgressBarHasBeenSet;

                    /**
                     * <p>Whether uploading photos from the album is permitted for verification during the ID validation phase (prohibited when single-angle multi-image forgery detection is enabled)
 </p><p>Enumeration values:</p><ul><li>true: Album photo upload for verification enabled</li><li>false: Album photo upload for verification disabled</li></ul><p>Default value: false</p>
                     */
                    bool m_allowUploadPhoto;
                    bool m_allowUploadPhotoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYSDKVERIFICATIONTOKENREQUEST_H_
