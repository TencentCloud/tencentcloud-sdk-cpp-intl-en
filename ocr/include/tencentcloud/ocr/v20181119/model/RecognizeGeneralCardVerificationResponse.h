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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALCARDVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALCARDVERIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/GeneralCard.h>
#include <tencentcloud/ocr/v20181119/model/SkippedCheck.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeGeneralCardVerification response structure.
                */
                class RecognizeGeneralCardVerificationResponse : public AbstractModel
                {
                public:
                    RecognizeGeneralCardVerificationResponse();
                    ~RecognizeGeneralCardVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Recognition result of the front side of the card. Returned only when recognition is enabled (EnableRecognition=true) and succeeds.
                     * @return FrontCardInfo Recognition result of the front side of the card. Returned only when recognition is enabled (EnableRecognition=true) and succeeds.
                     * 
                     */
                    GeneralCard GetFrontCardInfo() const;

                    /**
                     * 判断参数 FrontCardInfo 是否已赋值
                     * @return FrontCardInfo 是否已赋值
                     * 
                     */
                    bool FrontCardInfoHasBeenSet() const;

                    /**
                     * 获取Recognition result of the back side of the card. Returned only for double-sided card types when recognition is enabled. The structure is the same as that of FrontCardInfo.
                     * @return BackCardInfo Recognition result of the back side of the card. Returned only for double-sided card types when recognition is enabled. The structure is the same as that of FrontCardInfo.
                     * 
                     */
                    GeneralCard GetBackCardInfo() const;

                    /**
                     * 判断参数 BackCardInfo 是否已赋值
                     * @return BackCardInfo 是否已赋值
                     * 
                     */
                    bool BackCardInfoHasBeenSet() const;

                    /**
                     * 获取Base64-encoded portrait image of the card. Returned only when ReturnHeadImage=true.
                     * @return HeadImageBase64 Base64-encoded portrait image of the card. Returned only when ReturnHeadImage=true.
                     * 
                     */
                    std::string GetHeadImageBase64() const;

                    /**
                     * 判断参数 HeadImageBase64 是否已赋值
                     * @return HeadImageBase64 是否已赋值
                     * 
                     */
                    bool HeadImageBase64HasBeenSet() const;

                    /**
                     * 获取Card Warning Information

-9102 Alarm for photocopied certificate
-9103 Alarm for photographed certificate
-9104 Alarm for tamper certificate
-9105 Alarm for an incomplete card border. 
-9106 Alarm for a covered card. 
-9107 Alarm for reflective certificate
-9108 Alarm for blurry certificate 
-8101 Alarm for document information format verification
-8102 Alarm for document information consistency verification
                     * @return WarnCardInfos Card Warning Information

-9102 Alarm for photocopied certificate
-9103 Alarm for photographed certificate
-9104 Alarm for tamper certificate
-9105 Alarm for an incomplete card border. 
-9106 Alarm for a covered card. 
-9107 Alarm for reflective certificate
-9108 Alarm for blurry certificate 
-8101 Alarm for document information format verification
-8102 Alarm for document information consistency verification
                     * 
                     */
                    std::vector<int64_t> GetWarnCardInfos() const;

                    /**
                     * 判断参数 WarnCardInfos 是否已赋值
                     * @return WarnCardInfos 是否已赋值
                     * 
                     */
                    bool WarnCardInfosHasBeenSet() const;

                    /**
                     * 获取Check items actually executed. Valid values: Recognition, QualityCheck, TamperCheck, CopyCheck, RecaptureCheck, FormatCheck, ConsistencyCheck.
                     * @return ExecutedChecks Check items actually executed. Valid values: Recognition, QualityCheck, TamperCheck, CopyCheck, RecaptureCheck, FormatCheck, ConsistencyCheck.
                     * 
                     */
                    std::vector<std::string> GetExecutedChecks() const;

                    /**
                     * 判断参数 ExecutedChecks 是否已赋值
                     * @return ExecutedChecks 是否已赋值
                     * 
                     */
                    bool ExecutedChecksHasBeenSet() const;

                    /**
                     * 获取Check items that were skipped and the reasons.
                     * @return SkippedChecks Check items that were skipped and the reasons.
                     * 
                     */
                    std::vector<SkippedCheck> GetSkippedChecks() const;

                    /**
                     * 判断参数 SkippedChecks 是否已赋值
                     * @return SkippedChecks 是否已赋值
                     * 
                     */
                    bool SkippedChecksHasBeenSet() const;

                private:

                    /**
                     * Recognition result of the front side of the card. Returned only when recognition is enabled (EnableRecognition=true) and succeeds.
                     */
                    GeneralCard m_frontCardInfo;
                    bool m_frontCardInfoHasBeenSet;

                    /**
                     * Recognition result of the back side of the card. Returned only for double-sided card types when recognition is enabled. The structure is the same as that of FrontCardInfo.
                     */
                    GeneralCard m_backCardInfo;
                    bool m_backCardInfoHasBeenSet;

                    /**
                     * Base64-encoded portrait image of the card. Returned only when ReturnHeadImage=true.
                     */
                    std::string m_headImageBase64;
                    bool m_headImageBase64HasBeenSet;

                    /**
                     * Card Warning Information

-9102 Alarm for photocopied certificate
-9103 Alarm for photographed certificate
-9104 Alarm for tamper certificate
-9105 Alarm for an incomplete card border. 
-9106 Alarm for a covered card. 
-9107 Alarm for reflective certificate
-9108 Alarm for blurry certificate 
-8101 Alarm for document information format verification
-8102 Alarm for document information consistency verification
                     */
                    std::vector<int64_t> m_warnCardInfos;
                    bool m_warnCardInfosHasBeenSet;

                    /**
                     * Check items actually executed. Valid values: Recognition, QualityCheck, TamperCheck, CopyCheck, RecaptureCheck, FormatCheck, ConsistencyCheck.
                     */
                    std::vector<std::string> m_executedChecks;
                    bool m_executedChecksHasBeenSet;

                    /**
                     * Check items that were skipped and the reasons.
                     */
                    std::vector<SkippedCheck> m_skippedChecks;
                    bool m_skippedChecksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALCARDVERIFICATIONRESPONSE_H_
