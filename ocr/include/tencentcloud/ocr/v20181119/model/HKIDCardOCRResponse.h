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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_HKIDCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_HKIDCARDOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * HKIDCardOCR response structure.
                */
                class HKIDCardOCRResponse : public AbstractModel
                {
                public:
                    HKIDCardOCRResponse();
                    ~HKIDCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Name in Chinese
                     * @return CnName Name in Chinese
                     * 
                     */
                    std::string GetCnName() const;

                    /**
                     * 判断参数 CnName 是否已赋值
                     * @return CnName 是否已赋值
                     * 
                     */
                    bool CnNameHasBeenSet() const;

                    /**
                     * 获取Name in English
                     * @return EnName Name in English
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * 
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取Telecode for the name in Chinese
                     * @return TelexCode Telecode for the name in Chinese
                     * 
                     */
                    std::string GetTelexCode() const;

                    /**
                     * 判断参数 TelexCode 是否已赋值
                     * @return TelexCode 是否已赋值
                     * 
                     */
                    bool TelexCodeHasBeenSet() const;

                    /**
                     * 获取Gender. Valid values: Male, Female
                     * @return Sex Gender. Valid values: Male, Female
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取Date of birth
                     * @return Birthday Date of birth
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取Permanent identity card.
0: non-permanent;
1: permanent;
-1: unknown.
                     * @return Permanent Permanent identity card.
0: non-permanent;
1: permanent;
-1: unknown.
                     * 
                     */
                    int64_t GetPermanent() const;

                    /**
                     * 判断参数 Permanent 是否已赋值
                     * @return Permanent 是否已赋值
                     * 
                     */
                    bool PermanentHasBeenSet() const;

                    /**
                     * 获取Identity card number
                     * @return IdNum Identity card number
                     * 
                     */
                    std::string GetIdNum() const;

                    /**
                     * 判断参数 IdNum 是否已赋值
                     * @return IdNum 是否已赋值
                     * 
                     */
                    bool IdNumHasBeenSet() const;

                    /**
                     * 获取Document symbol, i.e., the symbol under the date of birth, such as "***AZ"
                     * @return Symbol Document symbol, i.e., the symbol under the date of birth, such as "***AZ"
                     * 
                     */
                    std::string GetSymbol() const;

                    /**
                     * 判断参数 Symbol 是否已赋值
                     * @return Symbol 是否已赋值
                     * 
                     */
                    bool SymbolHasBeenSet() const;

                    /**
                     * 获取First issue date
                     * @return FirstIssueDate First issue date
                     * 
                     */
                    std::string GetFirstIssueDate() const;

                    /**
                     * 判断参数 FirstIssueDate 是否已赋值
                     * @return FirstIssueDate 是否已赋值
                     * 
                     */
                    bool FirstIssueDateHasBeenSet() const;

                    /**
                     * 获取Last receipt date
                     * @return CurrentIssueDate Last receipt date
                     * 
                     */
                    std::string GetCurrentIssueDate() const;

                    /**
                     * 判断参数 CurrentIssueDate 是否已赋值
                     * @return CurrentIssueDate 是否已赋值
                     * 
                     */
                    bool CurrentIssueDateHasBeenSet() const;

                    /**
                     * 获取Authenticity check.
0: unable to judge (because the image is blurred, incomplete, reflective, too dark, etc.);
1: forged;
2: authentic.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FakeDetectResult Authenticity check.
0: unable to judge (because the image is blurred, incomplete, reflective, too dark, etc.);
1: forged;
2: authentic.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    int64_t GetFakeDetectResult() const;

                    /**
                     * 判断参数 FakeDetectResult 是否已赋值
                     * @return FakeDetectResult 是否已赋值
                     * @deprecated
                     */
                    bool FakeDetectResultHasBeenSet() const;

                    /**
                     * 获取Base64-encoded identity photo
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HeadImage Base64-encoded identity photo
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHeadImage() const;

                    /**
                     * 判断参数 HeadImage 是否已赋值
                     * @return HeadImage 是否已赋值
                     * 
                     */
                    bool HeadImageHasBeenSet() const;

                    /**
                     * 获取Multiple alarm codes. If the ID card is spoofed, photocopied, or photoshopped, the corresponding alarm code will be returned.
-9102: Alarm for photocopied document
-9103: Alarm for spoofed document
                     * @return WarningCode Multiple alarm codes. If the ID card is spoofed, photocopied, or photoshopped, the corresponding alarm code will be returned.
-9102: Alarm for photocopied document
-9103: Alarm for spoofed document
                     * @deprecated
                     */
                    std::vector<int64_t> GetWarningCode() const;

                    /**
                     * 判断参数 WarningCode 是否已赋值
                     * @return WarningCode 是否已赋值
                     * @deprecated
                     */
                    bool WarningCodeHasBeenSet() const;

                    /**
                     * 获取Card Warning Information

-9101 Alarm for covered certificate,
-9102 Alarm for photocopied certificate,
-9103 Alarm for photographed certificate,
-9104 Alarm for PS certificate,
-9107 Alarm for reflective certificate,
-9108 Alarm for blurry image,
-9109 This capability is not enabled.
                     * @return WarnCardInfos Card Warning Information

-9101 Alarm for covered certificate,
-9102 Alarm for photocopied certificate,
-9103 Alarm for photographed certificate,
-9104 Alarm for PS certificate,
-9107 Alarm for reflective certificate,
-9108 Alarm for blurry image,
-9109 This capability is not enabled.
                     * 
                     */
                    std::vector<int64_t> GetWarnCardInfos() const;

                    /**
                     * 判断参数 WarnCardInfos 是否已赋值
                     * @return WarnCardInfos 是否已赋值
                     * 
                     */
                    bool WarnCardInfosHasBeenSet() const;

                private:

                    /**
                     * Name in Chinese
                     */
                    std::string m_cnName;
                    bool m_cnNameHasBeenSet;

                    /**
                     * Name in English
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * Telecode for the name in Chinese
                     */
                    std::string m_telexCode;
                    bool m_telexCodeHasBeenSet;

                    /**
                     * Gender. Valid values: Male, Female
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Date of birth
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Permanent identity card.
0: non-permanent;
1: permanent;
-1: unknown.
                     */
                    int64_t m_permanent;
                    bool m_permanentHasBeenSet;

                    /**
                     * Identity card number
                     */
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * Document symbol, i.e., the symbol under the date of birth, such as "***AZ"
                     */
                    std::string m_symbol;
                    bool m_symbolHasBeenSet;

                    /**
                     * First issue date
                     */
                    std::string m_firstIssueDate;
                    bool m_firstIssueDateHasBeenSet;

                    /**
                     * Last receipt date
                     */
                    std::string m_currentIssueDate;
                    bool m_currentIssueDateHasBeenSet;

                    /**
                     * Authenticity check.
0: unable to judge (because the image is blurred, incomplete, reflective, too dark, etc.);
1: forged;
2: authentic.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fakeDetectResult;
                    bool m_fakeDetectResultHasBeenSet;

                    /**
                     * Base64-encoded identity photo
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_headImage;
                    bool m_headImageHasBeenSet;

                    /**
                     * Multiple alarm codes. If the ID card is spoofed, photocopied, or photoshopped, the corresponding alarm code will be returned.
-9102: Alarm for photocopied document
-9103: Alarm for spoofed document
                     */
                    std::vector<int64_t> m_warningCode;
                    bool m_warningCodeHasBeenSet;

                    /**
                     * Card Warning Information

-9101 Alarm for covered certificate,
-9102 Alarm for photocopied certificate,
-9103 Alarm for photographed certificate,
-9104 Alarm for PS certificate,
-9107 Alarm for reflective certificate,
-9108 Alarm for blurry image,
-9109 This capability is not enabled.
                     */
                    std::vector<int64_t> m_warnCardInfos;
                    bool m_warnCardInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_HKIDCARDOCRRESPONSE_H_
