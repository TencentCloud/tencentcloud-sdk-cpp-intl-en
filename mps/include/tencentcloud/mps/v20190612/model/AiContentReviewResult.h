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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AICONTENTREVIEWRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AICONTENTREVIEWRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskPornResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskTerrorismResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskPoliticalResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskPornAsrResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskPornOcrResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskPoliticalAsrResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskPoliticalOcrResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskTerrorismOcrResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskProhibitedAsrResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskProhibitedOcrResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Content audit result
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
<li>Porn: Porn information detection in image</li>
<li>Terrorism: Terrorism information detection in image</li>
<li>Political: Politically sensitive information detection in image</li>
<li>Porn.Asr: ASR-based porn information detection in text</li>
<li>Porn.Ocr: OCR-based porn information detection in text</li>
<li>Porn.Voice: Porn information detection in speech</li>
<li>Political.Asr: ASR-based politically sensitive information detection in text</li>
<li>Political.Ocr: OCR-based politically sensitive information detection in text</li>
                     * @return Type Task type. Valid values:
<li>Porn: Porn information detection in image</li>
<li>Terrorism: Terrorism information detection in image</li>
<li>Political: Politically sensitive information detection in image</li>
<li>Porn.Asr: ASR-based porn information detection in text</li>
<li>Porn.Ocr: OCR-based porn information detection in text</li>
<li>Porn.Voice: Porn information detection in speech</li>
<li>Political.Asr: ASR-based politically sensitive information detection in text</li>
<li>Political.Ocr: OCR-based politically sensitive information detection in text</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Valid values:
<li>Porn: Porn information detection in image</li>
<li>Terrorism: Terrorism information detection in image</li>
<li>Political: Politically sensitive information detection in image</li>
<li>Porn.Asr: ASR-based porn information detection in text</li>
<li>Porn.Ocr: OCR-based porn information detection in text</li>
<li>Porn.Voice: Porn information detection in speech</li>
<li>Political.Asr: ASR-based politically sensitive information detection in text</li>
<li>Political.Ocr: OCR-based politically sensitive information detection in text</li>
                     * @param Type Task type. Valid values:
<li>Porn: Porn information detection in image</li>
<li>Terrorism: Terrorism information detection in image</li>
<li>Political: Politically sensitive information detection in image</li>
<li>Porn.Asr: ASR-based porn information detection in text</li>
<li>Porn.Ocr: OCR-based porn information detection in text</li>
<li>Porn.Voice: Porn information detection in speech</li>
<li>Political.Asr: ASR-based politically sensitive information detection in text</li>
<li>Political.Ocr: OCR-based politically sensitive information detection in text</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return SampleRate 
                     */
                    double GetSampleRate() const;

                    /**
                     * 设置
                     * @param SampleRate 
                     */
                    void SetSampleRate(const double& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取
                     * @return Duration 
                     */
                    double GetDuration() const;

                    /**
                     * 设置
                     * @param Duration 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Query result of an intelligent porn information detection in image task in video content audit, which is valid when task type is `Porn`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PornTask Query result of an intelligent porn information detection in image task in video content audit, which is valid when task type is `Porn`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskPornResult GetPornTask() const;

                    /**
                     * 设置Query result of an intelligent porn information detection in image task in video content audit, which is valid when task type is `Porn`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PornTask Query result of an intelligent porn information detection in image task in video content audit, which is valid when task type is `Porn`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPornTask(const AiReviewTaskPornResult& _pornTask);

                    /**
                     * 判断参数 PornTask 是否已赋值
                     * @return PornTask 是否已赋值
                     */
                    bool PornTaskHasBeenSet() const;

                    /**
                     * 获取Query result of an intelligent terrorism information detection in image task in video content audit, which is valid when task type is `Terrorism`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TerrorismTask Query result of an intelligent terrorism information detection in image task in video content audit, which is valid when task type is `Terrorism`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskTerrorismResult GetTerrorismTask() const;

                    /**
                     * 设置Query result of an intelligent terrorism information detection in image task in video content audit, which is valid when task type is `Terrorism`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TerrorismTask Query result of an intelligent terrorism information detection in image task in video content audit, which is valid when task type is `Terrorism`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTerrorismTask(const AiReviewTaskTerrorismResult& _terrorismTask);

                    /**
                     * 判断参数 TerrorismTask 是否已赋值
                     * @return TerrorismTask 是否已赋值
                     */
                    bool TerrorismTaskHasBeenSet() const;

                    /**
                     * 获取Query result of an intelligent politically sensitive information detection in image task in video content audit, which is valid when task type is `Political`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PoliticalTask Query result of an intelligent politically sensitive information detection in image task in video content audit, which is valid when task type is `Political`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskPoliticalResult GetPoliticalTask() const;

                    /**
                     * 设置Query result of an intelligent politically sensitive information detection in image task in video content audit, which is valid when task type is `Political`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PoliticalTask Query result of an intelligent politically sensitive information detection in image task in video content audit, which is valid when task type is `Political`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPoliticalTask(const AiReviewTaskPoliticalResult& _politicalTask);

                    /**
                     * 判断参数 PoliticalTask 是否已赋值
                     * @return PoliticalTask 是否已赋值
                     */
                    bool PoliticalTaskHasBeenSet() const;

                    /**
                     * 获取Query result of an ASR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Asr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PornAsrTask Query result of an ASR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Asr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskPornAsrResult GetPornAsrTask() const;

                    /**
                     * 设置Query result of an ASR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Asr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PornAsrTask Query result of an ASR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Asr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPornAsrTask(const AiReviewTaskPornAsrResult& _pornAsrTask);

                    /**
                     * 判断参数 PornAsrTask 是否已赋值
                     * @return PornAsrTask 是否已赋值
                     */
                    bool PornAsrTaskHasBeenSet() const;

                    /**
                     * 获取Query result of an OCR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Ocr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PornOcrTask Query result of an OCR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Ocr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskPornOcrResult GetPornOcrTask() const;

                    /**
                     * 设置Query result of an OCR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Ocr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PornOcrTask Query result of an OCR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Ocr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPornOcrTask(const AiReviewTaskPornOcrResult& _pornOcrTask);

                    /**
                     * 判断参数 PornOcrTask 是否已赋值
                     * @return PornOcrTask 是否已赋值
                     */
                    bool PornOcrTaskHasBeenSet() const;

                    /**
                     * 获取Query result of an ASR-based politically sensitive information detection in text task in video content audit, which is valid when task type is `Political.Asr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PoliticalAsrTask Query result of an ASR-based politically sensitive information detection in text task in video content audit, which is valid when task type is `Political.Asr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskPoliticalAsrResult GetPoliticalAsrTask() const;

                    /**
                     * 设置Query result of an ASR-based politically sensitive information detection in text task in video content audit, which is valid when task type is `Political.Asr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PoliticalAsrTask Query result of an ASR-based politically sensitive information detection in text task in video content audit, which is valid when task type is `Political.Asr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPoliticalAsrTask(const AiReviewTaskPoliticalAsrResult& _politicalAsrTask);

                    /**
                     * 判断参数 PoliticalAsrTask 是否已赋值
                     * @return PoliticalAsrTask 是否已赋值
                     */
                    bool PoliticalAsrTaskHasBeenSet() const;

                    /**
                     * 获取Query result of an OCR-based politically sensitive information detection in text task in video content audit, which is valid when task type is `Political.Ocr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PoliticalOcrTask Query result of an OCR-based politically sensitive information detection in text task in video content audit, which is valid when task type is `Political.Ocr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskPoliticalOcrResult GetPoliticalOcrTask() const;

                    /**
                     * 设置Query result of an OCR-based politically sensitive information detection in text task in video content audit, which is valid when task type is `Political.Ocr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PoliticalOcrTask Query result of an OCR-based politically sensitive information detection in text task in video content audit, which is valid when task type is `Political.Ocr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPoliticalOcrTask(const AiReviewTaskPoliticalOcrResult& _politicalOcrTask);

                    /**
                     * 判断参数 PoliticalOcrTask 是否已赋值
                     * @return PoliticalOcrTask 是否已赋值
                     */
                    bool PoliticalOcrTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return TerrorismOcrTask 
                     */
                    AiReviewTaskTerrorismOcrResult GetTerrorismOcrTask() const;

                    /**
                     * 设置
                     * @param TerrorismOcrTask 
                     */
                    void SetTerrorismOcrTask(const AiReviewTaskTerrorismOcrResult& _terrorismOcrTask);

                    /**
                     * 判断参数 TerrorismOcrTask 是否已赋值
                     * @return TerrorismOcrTask 是否已赋值
                     */
                    bool TerrorismOcrTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProhibitedAsrTask 
                     */
                    AiReviewTaskProhibitedAsrResult GetProhibitedAsrTask() const;

                    /**
                     * 设置
                     * @param ProhibitedAsrTask 
                     */
                    void SetProhibitedAsrTask(const AiReviewTaskProhibitedAsrResult& _prohibitedAsrTask);

                    /**
                     * 判断参数 ProhibitedAsrTask 是否已赋值
                     * @return ProhibitedAsrTask 是否已赋值
                     */
                    bool ProhibitedAsrTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProhibitedOcrTask 
                     */
                    AiReviewTaskProhibitedOcrResult GetProhibitedOcrTask() const;

                    /**
                     * 设置
                     * @param ProhibitedOcrTask 
                     */
                    void SetProhibitedOcrTask(const AiReviewTaskProhibitedOcrResult& _prohibitedOcrTask);

                    /**
                     * 判断参数 ProhibitedOcrTask 是否已赋值
                     * @return ProhibitedOcrTask 是否已赋值
                     */
                    bool ProhibitedOcrTaskHasBeenSet() const;

                private:

                    /**
                     * Task type. Valid values:
<li>Porn: Porn information detection in image</li>
<li>Terrorism: Terrorism information detection in image</li>
<li>Political: Politically sensitive information detection in image</li>
<li>Porn.Asr: ASR-based porn information detection in text</li>
<li>Porn.Ocr: OCR-based porn information detection in text</li>
<li>Porn.Voice: Porn information detection in speech</li>
<li>Political.Asr: ASR-based politically sensitive information detection in text</li>
<li>Political.Ocr: OCR-based politically sensitive information detection in text</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    double m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Query result of an intelligent porn information detection in image task in video content audit, which is valid when task type is `Porn`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskPornResult m_pornTask;
                    bool m_pornTaskHasBeenSet;

                    /**
                     * Query result of an intelligent terrorism information detection in image task in video content audit, which is valid when task type is `Terrorism`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskTerrorismResult m_terrorismTask;
                    bool m_terrorismTaskHasBeenSet;

                    /**
                     * Query result of an intelligent politically sensitive information detection in image task in video content audit, which is valid when task type is `Political`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskPoliticalResult m_politicalTask;
                    bool m_politicalTaskHasBeenSet;

                    /**
                     * Query result of an ASR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Asr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskPornAsrResult m_pornAsrTask;
                    bool m_pornAsrTaskHasBeenSet;

                    /**
                     * Query result of an OCR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Ocr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskPornOcrResult m_pornOcrTask;
                    bool m_pornOcrTaskHasBeenSet;

                    /**
                     * Query result of an ASR-based politically sensitive information detection in text task in video content audit, which is valid when task type is `Political.Asr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskPoliticalAsrResult m_politicalAsrTask;
                    bool m_politicalAsrTaskHasBeenSet;

                    /**
                     * Query result of an OCR-based politically sensitive information detection in text task in video content audit, which is valid when task type is `Political.Ocr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskPoliticalOcrResult m_politicalOcrTask;
                    bool m_politicalOcrTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiReviewTaskTerrorismOcrResult m_terrorismOcrTask;
                    bool m_terrorismOcrTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiReviewTaskProhibitedAsrResult m_prohibitedAsrTask;
                    bool m_prohibitedAsrTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiReviewTaskProhibitedOcrResult m_prohibitedOcrTask;
                    bool m_prohibitedOcrTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AICONTENTREVIEWRESULT_H_
