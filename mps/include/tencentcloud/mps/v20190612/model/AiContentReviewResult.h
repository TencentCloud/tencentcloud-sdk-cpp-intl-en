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
                * Content moderation result
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
<li>Porn: porn detection.</li>
<li>Terrorism: sensitive image.</li>
<li>Political: sensitive image.</li>
<li>Porn.Asr: Pornography detection in ASR text</li>
<li>Porn.Ocr: Pornography detection in OCR text</li>
<li>Political.Asr: ASR text sensitivity</li>
<li>Political.Ocr: OCR text sensitivity</li>
<li>Terrorism.Ocr: OCR text sensitivity</li>
<li>Prohibited.Asr: ASR text prohibited information recognition</li>
<li>Prohibited.Ocr: OCR text prohibited information recognition</li>
                     * @return Type Task type. Valid values:
<li>Porn: porn detection.</li>
<li>Terrorism: sensitive image.</li>
<li>Political: sensitive image.</li>
<li>Porn.Asr: Pornography detection in ASR text</li>
<li>Porn.Ocr: Pornography detection in OCR text</li>
<li>Political.Asr: ASR text sensitivity</li>
<li>Political.Ocr: OCR text sensitivity</li>
<li>Terrorism.Ocr: OCR text sensitivity</li>
<li>Prohibited.Asr: ASR text prohibited information recognition</li>
<li>Prohibited.Ocr: OCR text prohibited information recognition</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Valid values:
<li>Porn: porn detection.</li>
<li>Terrorism: sensitive image.</li>
<li>Political: sensitive image.</li>
<li>Porn.Asr: Pornography detection in ASR text</li>
<li>Porn.Ocr: Pornography detection in OCR text</li>
<li>Political.Asr: ASR text sensitivity</li>
<li>Political.Ocr: OCR text sensitivity</li>
<li>Terrorism.Ocr: OCR text sensitivity</li>
<li>Prohibited.Asr: ASR text prohibited information recognition</li>
<li>Prohibited.Ocr: OCR text prohibited information recognition</li>
                     * @param _type Task type. Valid values:
<li>Porn: porn detection.</li>
<li>Terrorism: sensitive image.</li>
<li>Political: sensitive image.</li>
<li>Porn.Asr: Pornography detection in ASR text</li>
<li>Porn.Ocr: Pornography detection in OCR text</li>
<li>Political.Asr: ASR text sensitivity</li>
<li>Political.Ocr: OCR text sensitivity</li>
<li>Terrorism.Ocr: OCR text sensitivity</li>
<li>Prohibited.Asr: ASR text prohibited information recognition</li>
<li>Prohibited.Ocr: OCR text prohibited information recognition</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Sampling frequency, i.e., the number of frames captured per second for video review.
                     * @return SampleRate Sampling frequency, i.e., the number of frames captured per second for video review.
                     * 
                     */
                    double GetSampleRate() const;

                    /**
                     * 设置Sampling frequency, i.e., the number of frames captured per second for video review.
                     * @param _sampleRate Sampling frequency, i.e., the number of frames captured per second for video review.
                     * 
                     */
                    void SetSampleRate(const double& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取Video duration for review, in seconds.
                     * @return Duration Video duration for review, in seconds.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Video duration for review, in seconds.
                     * @param _duration Video duration for review, in seconds.
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取
                     * @return PornTask 
                     * 
                     */
                    AiReviewTaskPornResult GetPornTask() const;

                    /**
                     * 设置
                     * @param _pornTask 
                     * 
                     */
                    void SetPornTask(const AiReviewTaskPornResult& _pornTask);

                    /**
                     * 判断参数 PornTask 是否已赋值
                     * @return PornTask 是否已赋值
                     * 
                     */
                    bool PornTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return TerrorismTask 
                     * 
                     */
                    AiReviewTaskTerrorismResult GetTerrorismTask() const;

                    /**
                     * 设置
                     * @param _terrorismTask 
                     * 
                     */
                    void SetTerrorismTask(const AiReviewTaskTerrorismResult& _terrorismTask);

                    /**
                     * 判断参数 TerrorismTask 是否已赋值
                     * @return TerrorismTask 是否已赋值
                     * 
                     */
                    bool TerrorismTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return PoliticalTask 
                     * 
                     */
                    AiReviewTaskPoliticalResult GetPoliticalTask() const;

                    /**
                     * 设置
                     * @param _politicalTask 
                     * 
                     */
                    void SetPoliticalTask(const AiReviewTaskPoliticalResult& _politicalTask);

                    /**
                     * 判断参数 PoliticalTask 是否已赋值
                     * @return PoliticalTask 是否已赋值
                     * 
                     */
                    bool PoliticalTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return PornAsrTask 
                     * 
                     */
                    AiReviewTaskPornAsrResult GetPornAsrTask() const;

                    /**
                     * 设置
                     * @param _pornAsrTask 
                     * 
                     */
                    void SetPornAsrTask(const AiReviewTaskPornAsrResult& _pornAsrTask);

                    /**
                     * 判断参数 PornAsrTask 是否已赋值
                     * @return PornAsrTask 是否已赋值
                     * 
                     */
                    bool PornAsrTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return PornOcrTask 
                     * 
                     */
                    AiReviewTaskPornOcrResult GetPornOcrTask() const;

                    /**
                     * 设置
                     * @param _pornOcrTask 
                     * 
                     */
                    void SetPornOcrTask(const AiReviewTaskPornOcrResult& _pornOcrTask);

                    /**
                     * 判断参数 PornOcrTask 是否已赋值
                     * @return PornOcrTask 是否已赋值
                     * 
                     */
                    bool PornOcrTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return PoliticalAsrTask 
                     * 
                     */
                    AiReviewTaskPoliticalAsrResult GetPoliticalAsrTask() const;

                    /**
                     * 设置
                     * @param _politicalAsrTask 
                     * 
                     */
                    void SetPoliticalAsrTask(const AiReviewTaskPoliticalAsrResult& _politicalAsrTask);

                    /**
                     * 判断参数 PoliticalAsrTask 是否已赋值
                     * @return PoliticalAsrTask 是否已赋值
                     * 
                     */
                    bool PoliticalAsrTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return PoliticalOcrTask 
                     * 
                     */
                    AiReviewTaskPoliticalOcrResult GetPoliticalOcrTask() const;

                    /**
                     * 设置
                     * @param _politicalOcrTask 
                     * 
                     */
                    void SetPoliticalOcrTask(const AiReviewTaskPoliticalOcrResult& _politicalOcrTask);

                    /**
                     * 判断参数 PoliticalOcrTask 是否已赋值
                     * @return PoliticalOcrTask 是否已赋值
                     * 
                     */
                    bool PoliticalOcrTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return TerrorismOcrTask 
                     * 
                     */
                    AiReviewTaskTerrorismOcrResult GetTerrorismOcrTask() const;

                    /**
                     * 设置
                     * @param _terrorismOcrTask 
                     * 
                     */
                    void SetTerrorismOcrTask(const AiReviewTaskTerrorismOcrResult& _terrorismOcrTask);

                    /**
                     * 判断参数 TerrorismOcrTask 是否已赋值
                     * @return TerrorismOcrTask 是否已赋值
                     * 
                     */
                    bool TerrorismOcrTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProhibitedAsrTask 
                     * 
                     */
                    AiReviewTaskProhibitedAsrResult GetProhibitedAsrTask() const;

                    /**
                     * 设置
                     * @param _prohibitedAsrTask 
                     * 
                     */
                    void SetProhibitedAsrTask(const AiReviewTaskProhibitedAsrResult& _prohibitedAsrTask);

                    /**
                     * 判断参数 ProhibitedAsrTask 是否已赋值
                     * @return ProhibitedAsrTask 是否已赋值
                     * 
                     */
                    bool ProhibitedAsrTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProhibitedOcrTask 
                     * 
                     */
                    AiReviewTaskProhibitedOcrResult GetProhibitedOcrTask() const;

                    /**
                     * 设置
                     * @param _prohibitedOcrTask 
                     * 
                     */
                    void SetProhibitedOcrTask(const AiReviewTaskProhibitedOcrResult& _prohibitedOcrTask);

                    /**
                     * 判断参数 ProhibitedOcrTask 是否已赋值
                     * @return ProhibitedOcrTask 是否已赋值
                     * 
                     */
                    bool ProhibitedOcrTaskHasBeenSet() const;

                private:

                    /**
                     * Task type. Valid values:
<li>Porn: porn detection.</li>
<li>Terrorism: sensitive image.</li>
<li>Political: sensitive image.</li>
<li>Porn.Asr: Pornography detection in ASR text</li>
<li>Porn.Ocr: Pornography detection in OCR text</li>
<li>Political.Asr: ASR text sensitivity</li>
<li>Political.Ocr: OCR text sensitivity</li>
<li>Terrorism.Ocr: OCR text sensitivity</li>
<li>Prohibited.Asr: ASR text prohibited information recognition</li>
<li>Prohibited.Ocr: OCR text prohibited information recognition</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Sampling frequency, i.e., the number of frames captured per second for video review.
                     */
                    double m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * Video duration for review, in seconds.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 
                     */
                    AiReviewTaskPornResult m_pornTask;
                    bool m_pornTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiReviewTaskTerrorismResult m_terrorismTask;
                    bool m_terrorismTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiReviewTaskPoliticalResult m_politicalTask;
                    bool m_politicalTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiReviewTaskPornAsrResult m_pornAsrTask;
                    bool m_pornAsrTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiReviewTaskPornOcrResult m_pornOcrTask;
                    bool m_pornOcrTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiReviewTaskPoliticalAsrResult m_politicalAsrTask;
                    bool m_politicalAsrTaskHasBeenSet;

                    /**
                     * 
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
