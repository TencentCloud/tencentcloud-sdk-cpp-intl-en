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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AICONTENTREVIEWRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AICONTENTREVIEWRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiReviewTaskPornResult.h>
#include <tencentcloud/vod/v20180717/model/AiReviewTaskTerrorismResult.h>
#include <tencentcloud/vod/v20180717/model/AiReviewTaskPoliticalResult.h>
#include <tencentcloud/vod/v20180717/model/AiReviewTaskPornAsrResult.h>
#include <tencentcloud/vod/v20180717/model/AiReviewTaskPornOcrResult.h>
#include <tencentcloud/vod/v20180717/model/AiReviewTaskPoliticalAsrResult.h>
#include <tencentcloud/vod/v20180717/model/AiReviewTaskPoliticalOcrResult.h>
#include <tencentcloud/vod/v20180717/model/AiReviewTaskTerrorismOcrResult.h>
#include <tencentcloud/vod/v20180717/model/AiReviewTaskProhibitedOcrResult.h>
#include <tencentcloud/vod/v20180717/model/AiReviewTaskProhibitedAsrResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Intelligent recognition result
                */
                class AiContentReviewResult : public AbstractModel
                {
                public:
                    AiContentReviewResult();
                    ~AiContentReviewResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task type. Valid values:
<li>`Porn`: porn information recognition in images</li>
<li>`Terrorism`: terrorism information recognition in images</li>
<li>`Political`: politically sensitive information recognition in images</li>
<li>`Porn.Asr`: ASR-based porn information recognition in speech</li>
<li>`Porn.Ocr`: OCR-based porn information recognition in text</li>
<li>`Political.Asr`: ASR-based politically sensitive information recognition in speech</li>
<li>`Political.Ocr`: OCR-based politically sensitive information recognition in text</li>
<li>`Terrorism.Ocr`: OCR-based terrorism information recognition in text</li>
<li>`Prohibited.Asr`: ASR-based prohibited information recognition in speech</li>
<li>`Prohibited.Ocr`: OCR-based prohibited information recognition in text</li>
                     * @return Type Task type. Valid values:
<li>`Porn`: porn information recognition in images</li>
<li>`Terrorism`: terrorism information recognition in images</li>
<li>`Political`: politically sensitive information recognition in images</li>
<li>`Porn.Asr`: ASR-based porn information recognition in speech</li>
<li>`Porn.Ocr`: OCR-based porn information recognition in text</li>
<li>`Political.Asr`: ASR-based politically sensitive information recognition in speech</li>
<li>`Political.Ocr`: OCR-based politically sensitive information recognition in text</li>
<li>`Terrorism.Ocr`: OCR-based terrorism information recognition in text</li>
<li>`Prohibited.Asr`: ASR-based prohibited information recognition in speech</li>
<li>`Prohibited.Ocr`: OCR-based prohibited information recognition in text</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Valid values:
<li>`Porn`: porn information recognition in images</li>
<li>`Terrorism`: terrorism information recognition in images</li>
<li>`Political`: politically sensitive information recognition in images</li>
<li>`Porn.Asr`: ASR-based porn information recognition in speech</li>
<li>`Porn.Ocr`: OCR-based porn information recognition in text</li>
<li>`Political.Asr`: ASR-based politically sensitive information recognition in speech</li>
<li>`Political.Ocr`: OCR-based politically sensitive information recognition in text</li>
<li>`Terrorism.Ocr`: OCR-based terrorism information recognition in text</li>
<li>`Prohibited.Asr`: ASR-based prohibited information recognition in speech</li>
<li>`Prohibited.Ocr`: OCR-based prohibited information recognition in text</li>
                     * @param Type Task type. Valid values:
<li>`Porn`: porn information recognition in images</li>
<li>`Terrorism`: terrorism information recognition in images</li>
<li>`Political`: politically sensitive information recognition in images</li>
<li>`Porn.Asr`: ASR-based porn information recognition in speech</li>
<li>`Porn.Ocr`: OCR-based porn information recognition in text</li>
<li>`Political.Asr`: ASR-based politically sensitive information recognition in speech</li>
<li>`Political.Ocr`: OCR-based politically sensitive information recognition in text</li>
<li>`Terrorism.Ocr`: OCR-based terrorism information recognition in text</li>
<li>`Prohibited.Asr`: ASR-based prohibited information recognition in speech</li>
<li>`Prohibited.Ocr`: OCR-based prohibited information recognition in text</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Result for intelligent recognition of pornographic content in images. This parameter is valid when `Type` is `Porn`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return PornTask Result for intelligent recognition of pornographic content in images. This parameter is valid when `Type` is `Porn`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskPornResult GetPornTask() const;

                    /**
                     * 设置Result for intelligent recognition of pornographic content in images. This parameter is valid when `Type` is `Porn`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param PornTask Result for intelligent recognition of pornographic content in images. This parameter is valid when `Type` is `Porn`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetPornTask(const AiReviewTaskPornResult& _pornTask);

                    /**
                     * 判断参数 PornTask 是否已赋值
                     * @return PornTask 是否已赋值
                     */
                    bool PornTaskHasBeenSet() const;

                    /**
                     * 获取Result for intelligent recognition of terrorism content in images. This parameter is valid when `Type` is `Terrorism`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return TerrorismTask Result for intelligent recognition of terrorism content in images. This parameter is valid when `Type` is `Terrorism`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskTerrorismResult GetTerrorismTask() const;

                    /**
                     * 设置Result for intelligent recognition of terrorism content in images. This parameter is valid when `Type` is `Terrorism`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param TerrorismTask Result for intelligent recognition of terrorism content in images. This parameter is valid when `Type` is `Terrorism`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetTerrorismTask(const AiReviewTaskTerrorismResult& _terrorismTask);

                    /**
                     * 判断参数 TerrorismTask 是否已赋值
                     * @return TerrorismTask 是否已赋值
                     */
                    bool TerrorismTaskHasBeenSet() const;

                    /**
                     * 获取Result for intelligent recognition of politically sensitive content in images. This parameter is valid when `Type` is `Political`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return PoliticalTask Result for intelligent recognition of politically sensitive content in images. This parameter is valid when `Type` is `Political`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskPoliticalResult GetPoliticalTask() const;

                    /**
                     * 设置Result for intelligent recognition of politically sensitive content in images. This parameter is valid when `Type` is `Political`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param PoliticalTask Result for intelligent recognition of politically sensitive content in images. This parameter is valid when `Type` is `Political`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetPoliticalTask(const AiReviewTaskPoliticalResult& _politicalTask);

                    /**
                     * 判断参数 PoliticalTask 是否已赋值
                     * @return PoliticalTask 是否已赋值
                     */
                    bool PoliticalTaskHasBeenSet() const;

                    /**
                     * 获取Result for ASR-based recognition of pornographic content. This parameter is valid when `Type` is `Porn.Asr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return PornAsrTask Result for ASR-based recognition of pornographic content. This parameter is valid when `Type` is `Porn.Asr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskPornAsrResult GetPornAsrTask() const;

                    /**
                     * 设置Result for ASR-based recognition of pornographic content. This parameter is valid when `Type` is `Porn.Asr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param PornAsrTask Result for ASR-based recognition of pornographic content. This parameter is valid when `Type` is `Porn.Asr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetPornAsrTask(const AiReviewTaskPornAsrResult& _pornAsrTask);

                    /**
                     * 判断参数 PornAsrTask 是否已赋值
                     * @return PornAsrTask 是否已赋值
                     */
                    bool PornAsrTaskHasBeenSet() const;

                    /**
                     * 获取Result for OCR-based recognition of pornographic content. This parameter is valid when `Type` is `Porn.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return PornOcrTask Result for OCR-based recognition of pornographic content. This parameter is valid when `Type` is `Porn.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskPornOcrResult GetPornOcrTask() const;

                    /**
                     * 设置Result for OCR-based recognition of pornographic content. This parameter is valid when `Type` is `Porn.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param PornOcrTask Result for OCR-based recognition of pornographic content. This parameter is valid when `Type` is `Porn.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetPornOcrTask(const AiReviewTaskPornOcrResult& _pornOcrTask);

                    /**
                     * 判断参数 PornOcrTask 是否已赋值
                     * @return PornOcrTask 是否已赋值
                     */
                    bool PornOcrTaskHasBeenSet() const;

                    /**
                     * 获取Result for ASR-based recognition of politically sensitive content. This parameter is valid when `Type` is `Political.Asr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return PoliticalAsrTask Result for ASR-based recognition of politically sensitive content. This parameter is valid when `Type` is `Political.Asr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskPoliticalAsrResult GetPoliticalAsrTask() const;

                    /**
                     * 设置Result for ASR-based recognition of politically sensitive content. This parameter is valid when `Type` is `Political.Asr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param PoliticalAsrTask Result for ASR-based recognition of politically sensitive content. This parameter is valid when `Type` is `Political.Asr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetPoliticalAsrTask(const AiReviewTaskPoliticalAsrResult& _politicalAsrTask);

                    /**
                     * 判断参数 PoliticalAsrTask 是否已赋值
                     * @return PoliticalAsrTask 是否已赋值
                     */
                    bool PoliticalAsrTaskHasBeenSet() const;

                    /**
                     * 获取Result for OCR-based recognition of politically sensitive content. This parameter is valid when `Type` is `Political.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return PoliticalOcrTask Result for OCR-based recognition of politically sensitive content. This parameter is valid when `Type` is `Political.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskPoliticalOcrResult GetPoliticalOcrTask() const;

                    /**
                     * 设置Result for OCR-based recognition of politically sensitive content. This parameter is valid when `Type` is `Political.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param PoliticalOcrTask Result for OCR-based recognition of politically sensitive content. This parameter is valid when `Type` is `Political.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetPoliticalOcrTask(const AiReviewTaskPoliticalOcrResult& _politicalOcrTask);

                    /**
                     * 判断参数 PoliticalOcrTask 是否已赋值
                     * @return PoliticalOcrTask 是否已赋值
                     */
                    bool PoliticalOcrTaskHasBeenSet() const;

                    /**
                     * 获取Result for OCR-based recognition of terrorism content. This parameter is valid when `Type` is `Terrorism.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return TerrorismOcrTask Result for OCR-based recognition of terrorism content. This parameter is valid when `Type` is `Terrorism.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskTerrorismOcrResult GetTerrorismOcrTask() const;

                    /**
                     * 设置Result for OCR-based recognition of terrorism content. This parameter is valid when `Type` is `Terrorism.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param TerrorismOcrTask Result for OCR-based recognition of terrorism content. This parameter is valid when `Type` is `Terrorism.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetTerrorismOcrTask(const AiReviewTaskTerrorismOcrResult& _terrorismOcrTask);

                    /**
                     * 判断参数 TerrorismOcrTask 是否已赋值
                     * @return TerrorismOcrTask 是否已赋值
                     */
                    bool TerrorismOcrTaskHasBeenSet() const;

                    /**
                     * 获取Result for OCR-based recognition of banned content. This parameter is valid when `Type` is `Prohibited.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return ProhibitedOcrTask Result for OCR-based recognition of banned content. This parameter is valid when `Type` is `Prohibited.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskProhibitedOcrResult GetProhibitedOcrTask() const;

                    /**
                     * 设置Result for OCR-based recognition of banned content. This parameter is valid when `Type` is `Prohibited.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param ProhibitedOcrTask Result for OCR-based recognition of banned content. This parameter is valid when `Type` is `Prohibited.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetProhibitedOcrTask(const AiReviewTaskProhibitedOcrResult& _prohibitedOcrTask);

                    /**
                     * 判断参数 ProhibitedOcrTask 是否已赋值
                     * @return ProhibitedOcrTask 是否已赋值
                     */
                    bool ProhibitedOcrTaskHasBeenSet() const;

                    /**
                     * 获取Result for ASR-based recognition of banned content. This parameter is valid when `Type` is `Prohibited.Asr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return ProhibitedAsrTask Result for ASR-based recognition of banned content. This parameter is valid when `Type` is `Prohibited.Asr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskProhibitedAsrResult GetProhibitedAsrTask() const;

                    /**
                     * 设置Result for ASR-based recognition of banned content. This parameter is valid when `Type` is `Prohibited.Asr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param ProhibitedAsrTask Result for ASR-based recognition of banned content. This parameter is valid when `Type` is `Prohibited.Asr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetProhibitedAsrTask(const AiReviewTaskProhibitedAsrResult& _prohibitedAsrTask);

                    /**
                     * 判断参数 ProhibitedAsrTask 是否已赋值
                     * @return ProhibitedAsrTask 是否已赋值
                     */
                    bool ProhibitedAsrTaskHasBeenSet() const;

                private:

                    /**
                     * Task type. Valid values:
<li>`Porn`: porn information recognition in images</li>
<li>`Terrorism`: terrorism information recognition in images</li>
<li>`Political`: politically sensitive information recognition in images</li>
<li>`Porn.Asr`: ASR-based porn information recognition in speech</li>
<li>`Porn.Ocr`: OCR-based porn information recognition in text</li>
<li>`Political.Asr`: ASR-based politically sensitive information recognition in speech</li>
<li>`Political.Ocr`: OCR-based politically sensitive information recognition in text</li>
<li>`Terrorism.Ocr`: OCR-based terrorism information recognition in text</li>
<li>`Prohibited.Asr`: ASR-based prohibited information recognition in speech</li>
<li>`Prohibited.Ocr`: OCR-based prohibited information recognition in text</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Result for intelligent recognition of pornographic content in images. This parameter is valid when `Type` is `Porn`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskPornResult m_pornTask;
                    bool m_pornTaskHasBeenSet;

                    /**
                     * Result for intelligent recognition of terrorism content in images. This parameter is valid when `Type` is `Terrorism`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskTerrorismResult m_terrorismTask;
                    bool m_terrorismTaskHasBeenSet;

                    /**
                     * Result for intelligent recognition of politically sensitive content in images. This parameter is valid when `Type` is `Political`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskPoliticalResult m_politicalTask;
                    bool m_politicalTaskHasBeenSet;

                    /**
                     * Result for ASR-based recognition of pornographic content. This parameter is valid when `Type` is `Porn.Asr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskPornAsrResult m_pornAsrTask;
                    bool m_pornAsrTaskHasBeenSet;

                    /**
                     * Result for OCR-based recognition of pornographic content. This parameter is valid when `Type` is `Porn.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskPornOcrResult m_pornOcrTask;
                    bool m_pornOcrTaskHasBeenSet;

                    /**
                     * Result for ASR-based recognition of politically sensitive content. This parameter is valid when `Type` is `Political.Asr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskPoliticalAsrResult m_politicalAsrTask;
                    bool m_politicalAsrTaskHasBeenSet;

                    /**
                     * Result for OCR-based recognition of politically sensitive content. This parameter is valid when `Type` is `Political.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskPoliticalOcrResult m_politicalOcrTask;
                    bool m_politicalOcrTaskHasBeenSet;

                    /**
                     * Result for OCR-based recognition of terrorism content. This parameter is valid when `Type` is `Terrorism.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskTerrorismOcrResult m_terrorismOcrTask;
                    bool m_terrorismOcrTaskHasBeenSet;

                    /**
                     * Result for OCR-based recognition of banned content. This parameter is valid when `Type` is `Prohibited.Ocr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskProhibitedOcrResult m_prohibitedOcrTask;
                    bool m_prohibitedOcrTaskHasBeenSet;

                    /**
                     * Result for ASR-based recognition of banned content. This parameter is valid when `Type` is `Prohibited.Asr`.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    AiReviewTaskProhibitedAsrResult m_prohibitedAsrTask;
                    bool m_prohibitedAsrTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AICONTENTREVIEWRESULT_H_
