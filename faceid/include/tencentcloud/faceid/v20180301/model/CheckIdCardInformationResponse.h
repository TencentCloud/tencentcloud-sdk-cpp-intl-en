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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKIDCARDINFORMATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKIDCARDINFORMATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Encryption.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * CheckIdCardInformation response structure.
                */
                class CheckIdCardInformationResponse : public AbstractModel
                {
                public:
                    CheckIdCardInformationResponse();
                    ~CheckIdCardInformationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Similarity. - Value ranges from 0.00 to 100.00. - Recommend threshold at least 70 to judge as same person, self-adjust based on specific scenario (pass rate for threshold 70 is 0.01%).</p>
                     * @return Sim <p>Similarity. - Value ranges from 0.00 to 100.00. - Recommend threshold at least 70 to judge as same person, self-adjust based on specific scenario (pass rate for threshold 70 is 0.01%).</p>
                     * 
                     */
                    double GetSim() const;

                    /**
                     * 判断参数 Sim 是否已赋值
                     * @return Sim 是否已赋值
                     * 
                     */
                    bool SimHasBeenSet() const;

                    /**
                     * 获取<p>Business error code.</p><ul><li>Success case returns Success.</li><li>For error conditions, refer to the FailedOperation part in the error code list below.</li></ul>
                     * @return Result <p>Business error code.</p><ul><li>Success case returns Success.</li><li>For error conditions, refer to the FailedOperation part in the error code list below.</li></ul>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取<p>Business result description.</p>
                     * @return Description <p>Business result description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Name.</p>
                     * @return Name <p>Name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Gender.</p>
                     * @return Sex <p>Gender.</p>
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
                     * 获取<p>Ethnicity.</p>
                     * @return Nation <p>Ethnicity.</p>
                     * 
                     */
                    std::string GetNation() const;

                    /**
                     * 判断参数 Nation 是否已赋值
                     * @return Nation 是否已赋值
                     * 
                     */
                    bool NationHasBeenSet() const;

                    /**
                     * 获取<p>Date of birth.</p>
                     * @return Birth <p>Date of birth.</p>
                     * 
                     */
                    std::string GetBirth() const;

                    /**
                     * 判断参数 Birth 是否已赋值
                     * @return Birth 是否已赋值
                     * 
                     */
                    bool BirthHasBeenSet() const;

                    /**
                     * 获取<p>Address.</p>
                     * @return Address <p>Address.</p>
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取<p>Identity card number.</p>
                     * @return IdNum <p>Identity card number.</p>
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
                     * 获取<p>The base64 encoding of the ID card portrait photo. If the image cropping fails, it will compare with the entire ID card and return null.</p>
                     * @return Portrait <p>The base64 encoding of the ID card portrait photo. If the image cropping fails, it will compare with the entire ID card and return null.</p>
                     * 
                     */
                    std::string GetPortrait() const;

                    /**
                     * 判断参数 Portrait 是否已赋值
                     * @return Portrait 是否已赋值
                     * 
                     */
                    bool PortraitHasBeenSet() const;

                    /**
                     * 获取<p>Alarm information.</p><ul><li><p>When alarm information is configured in Config, portrait comparison will be disabled, Result returns an error (FailedOperation.OcrWarningOccurred) with this alarm information.</p></li><li><p>Code list of alarm codes and definition:<br>&#39;-9101&#39;: Incomplete ID card border alarm.<br>&#39;-9102&#39;: ID card copy alarm.<br>&#39;-9103&#39;: ID card photocopy alarm.<br>&#39;-9105&#39;: ID card frame occlusion alarm.<br>&#39;-9104&#39;: Temporary ID card alarm.<br>&#39;-9106&#39;: ID card PS alarm (suspected PS traces).<br>&#39;-8001&#39;: Warn about blurry images.</p></li><li><p>Multiple codes are separated by "|", such as "-9101|-9106|-9104".</p></li></ul>
                     * @return Warnings <p>Alarm information.</p><ul><li><p>When alarm information is configured in Config, portrait comparison will be disabled, Result returns an error (FailedOperation.OcrWarningOccurred) with this alarm information.</p></li><li><p>Code list of alarm codes and definition:<br>&#39;-9101&#39;: Incomplete ID card border alarm.<br>&#39;-9102&#39;: ID card copy alarm.<br>&#39;-9103&#39;: ID card photocopy alarm.<br>&#39;-9105&#39;: ID card frame occlusion alarm.<br>&#39;-9104&#39;: Temporary ID card alarm.<br>&#39;-9106&#39;: ID card PS alarm (suspected PS traces).<br>&#39;-8001&#39;: Warn about blurry images.</p></li><li><p>Multiple codes are separated by "|", such as "-9101|-9106|-9104".</p></li></ul>
                     * 
                     */
                    std::string GetWarnings() const;

                    /**
                     * 判断参数 Warnings 是否已赋值
                     * @return Warnings 是否已赋值
                     * 
                     */
                    bool WarningsHasBeenSet() const;

                    /**
                     * 获取<p>Image quality score.</p><ul><li>This parameter is significant only when warn about blurry images is configured in the request Config.</li><li>Value ranges from 0 to 100. The current default threshold is 50. A score lower than 50 triggers blurry image warnings.</li></ul>
                     * @return Quality <p>Image quality score.</p><ul><li>This parameter is significant only when warn about blurry images is configured in the request Config.</li><li>Value ranges from 0 to 100. The current default threshold is 50. A score lower than 50 triggers blurry image warnings.</li></ul>
                     * 
                     */
                    double GetQuality() const;

                    /**
                     * 判断参数 Quality 是否已赋值
                     * @return Quality 是否已赋值
                     * 
                     */
                    bool QualityHasBeenSet() const;

                    /**
                     * 获取<p>Sensitive data encryption info.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Encryption <p>Sensitive data encryption info.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取<p>Encrypted data.</p>
                     * @return EncryptedBody <p>Encrypted data.</p>
                     * 
                     */
                    std::string GetEncryptedBody() const;

                    /**
                     * 判断参数 EncryptedBody 是否已赋值
                     * @return EncryptedBody 是否已赋值
                     * 
                     */
                    bool EncryptedBodyHasBeenSet() const;

                private:

                    /**
                     * <p>Similarity. - Value ranges from 0.00 to 100.00. - Recommend threshold at least 70 to judge as same person, self-adjust based on specific scenario (pass rate for threshold 70 is 0.01%).</p>
                     */
                    double m_sim;
                    bool m_simHasBeenSet;

                    /**
                     * <p>Business error code.</p><ul><li>Success case returns Success.</li><li>For error conditions, refer to the FailedOperation part in the error code list below.</li></ul>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>Business result description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Gender.</p>
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * <p>Ethnicity.</p>
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * <p>Date of birth.</p>
                     */
                    std::string m_birth;
                    bool m_birthHasBeenSet;

                    /**
                     * <p>Address.</p>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>Identity card number.</p>
                     */
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * <p>The base64 encoding of the ID card portrait photo. If the image cropping fails, it will compare with the entire ID card and return null.</p>
                     */
                    std::string m_portrait;
                    bool m_portraitHasBeenSet;

                    /**
                     * <p>Alarm information.</p><ul><li><p>When alarm information is configured in Config, portrait comparison will be disabled, Result returns an error (FailedOperation.OcrWarningOccurred) with this alarm information.</p></li><li><p>Code list of alarm codes and definition:<br>&#39;-9101&#39;: Incomplete ID card border alarm.<br>&#39;-9102&#39;: ID card copy alarm.<br>&#39;-9103&#39;: ID card photocopy alarm.<br>&#39;-9105&#39;: ID card frame occlusion alarm.<br>&#39;-9104&#39;: Temporary ID card alarm.<br>&#39;-9106&#39;: ID card PS alarm (suspected PS traces).<br>&#39;-8001&#39;: Warn about blurry images.</p></li><li><p>Multiple codes are separated by "|", such as "-9101|-9106|-9104".</p></li></ul>
                     */
                    std::string m_warnings;
                    bool m_warningsHasBeenSet;

                    /**
                     * <p>Image quality score.</p><ul><li>This parameter is significant only when warn about blurry images is configured in the request Config.</li><li>Value ranges from 0 to 100. The current default threshold is 50. A score lower than 50 triggers blurry image warnings.</li></ul>
                     */
                    double m_quality;
                    bool m_qualityHasBeenSet;

                    /**
                     * <p>Sensitive data encryption info.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>Encrypted data.</p>
                     */
                    std::string m_encryptedBody;
                    bool m_encryptedBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKIDCARDINFORMATIONRESPONSE_H_
