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
<li>Porn (in images)</li>
<li>Terrorism (in images)</li>
<li>Political (in images)</li>
<li>Porn.Asr</li>
<li>Porn.Ocr</li>
<li>Political.Asr</li>
<li>Political.Ocr</li>
<li>Terrorism.Ocr</li>
<li>Prohibited.Asr</li>
<li>Prohibited.Ocr</li>
                     * @return Type Task type. Valid values:
<li>Porn (in images)</li>
<li>Terrorism (in images)</li>
<li>Political (in images)</li>
<li>Porn.Asr</li>
<li>Porn.Ocr</li>
<li>Political.Asr</li>
<li>Political.Ocr</li>
<li>Terrorism.Ocr</li>
<li>Prohibited.Asr</li>
<li>Prohibited.Ocr</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Valid values:
<li>Porn (in images)</li>
<li>Terrorism (in images)</li>
<li>Political (in images)</li>
<li>Porn.Asr</li>
<li>Porn.Ocr</li>
<li>Political.Asr</li>
<li>Political.Ocr</li>
<li>Terrorism.Ocr</li>
<li>Prohibited.Asr</li>
<li>Prohibited.Ocr</li>
                     * @param _type Task type. Valid values:
<li>Porn (in images)</li>
<li>Terrorism (in images)</li>
<li>Political (in images)</li>
<li>Porn.Asr</li>
<li>Porn.Ocr</li>
<li>Political.Asr</li>
<li>Political.Ocr</li>
<li>Terrorism.Ocr</li>
<li>Prohibited.Asr</li>
<li>Prohibited.Ocr</li>
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
                     * 获取Sample rate, which indicates the number of video frames captured per second for audit
                     * @return SampleRate Sample rate, which indicates the number of video frames captured per second for audit
                     * 
                     */
                    double GetSampleRate() const;

                    /**
                     * 设置Sample rate, which indicates the number of video frames captured per second for audit
                     * @param _sampleRate Sample rate, which indicates the number of video frames captured per second for audit
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
                     * 获取Audited video duration in seconds.
                     * @return Duration Audited video duration in seconds.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Audited video duration in seconds.
                     * @param _duration Audited video duration in seconds.
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
                     * 获取Query result of an intelligent porn information detection in image task in video content audit, which is valid when task type is `Porn`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PornTask Query result of an intelligent porn information detection in image task in video content audit, which is valid when task type is `Porn`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiReviewTaskPornResult GetPornTask() const;

                    /**
                     * 设置Query result of an intelligent porn information detection in image task in video content audit, which is valid when task type is `Porn`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pornTask Query result of an intelligent porn information detection in image task in video content audit, which is valid when task type is `Porn`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The result of detecting terrorism content in images, which is valid when the task type is `Terrorism`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TerrorismTask The result of detecting terrorism content in images, which is valid when the task type is `Terrorism`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    AiReviewTaskTerrorismResult GetTerrorismTask() const;

                    /**
                     * 设置The result of detecting terrorism content in images, which is valid when the task type is `Terrorism`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _terrorismTask The result of detecting terrorism content in images, which is valid when the task type is `Terrorism`.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The result of detecting politically sensitive information in images, which is valid when the task type is `Political`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PoliticalTask The result of detecting politically sensitive information in images, which is valid when the task type is `Political`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    AiReviewTaskPoliticalResult GetPoliticalTask() const;

                    /**
                     * 设置The result of detecting politically sensitive information in images, which is valid when the task type is `Political`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _politicalTask The result of detecting politically sensitive information in images, which is valid when the task type is `Political`.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Query result of an ASR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Asr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PornAsrTask Query result of an ASR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Asr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiReviewTaskPornAsrResult GetPornAsrTask() const;

                    /**
                     * 设置Query result of an ASR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Asr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pornAsrTask Query result of an ASR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Asr`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Query result of an OCR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Ocr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PornOcrTask Query result of an OCR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Ocr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiReviewTaskPornOcrResult GetPornOcrTask() const;

                    /**
                     * 设置Query result of an OCR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Ocr`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pornOcrTask Query result of an OCR-based porn information detection in text task in video content audit, which is valid when task type is `Porn.Ocr`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The result of detecting politically sensitive information based on ASR, which is valid when the task type is `Political.Asr`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PoliticalAsrTask The result of detecting politically sensitive information based on ASR, which is valid when the task type is `Political.Asr`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    AiReviewTaskPoliticalAsrResult GetPoliticalAsrTask() const;

                    /**
                     * 设置The result of detecting politically sensitive information based on ASR, which is valid when the task type is `Political.Asr`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _politicalAsrTask The result of detecting politically sensitive information based on ASR, which is valid when the task type is `Political.Asr`.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The result of detecting politically sensitive information based on OCR, which is valid when the task type is `Political.Ocr`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PoliticalOcrTask The result of detecting politically sensitive information based on OCR, which is valid when the task type is `Political.Ocr`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    AiReviewTaskPoliticalOcrResult GetPoliticalOcrTask() const;

                    /**
                     * 设置The result of detecting politically sensitive information based on OCR, which is valid when the task type is `Political.Ocr`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _politicalOcrTask The result of detecting politically sensitive information based on OCR, which is valid when the task type is `Political.Ocr`.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The result of detecting terrorism content based on OCR, which is valid when task type is `Terrorism.Ocr`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TerrorismOcrTask The result of detecting terrorism content based on OCR, which is valid when task type is `Terrorism.Ocr`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    AiReviewTaskTerrorismOcrResult GetTerrorismOcrTask() const;

                    /**
                     * 设置The result of detecting terrorism content based on OCR, which is valid when task type is `Terrorism.Ocr`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _terrorismOcrTask The result of detecting terrorism content based on OCR, which is valid when task type is `Terrorism.Ocr`.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Query result of ASR-based prohibited information detection in speech task in video content audit, which is valid if task type is `Prohibited.Asr`.
                     * @return ProhibitedAsrTask Query result of ASR-based prohibited information detection in speech task in video content audit, which is valid if task type is `Prohibited.Asr`.
                     * 
                     */
                    AiReviewTaskProhibitedAsrResult GetProhibitedAsrTask() const;

                    /**
                     * 设置Query result of ASR-based prohibited information detection in speech task in video content audit, which is valid if task type is `Prohibited.Asr`.
                     * @param _prohibitedAsrTask Query result of ASR-based prohibited information detection in speech task in video content audit, which is valid if task type is `Prohibited.Asr`.
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
                     * 获取Query result of OCR-based prohibited information detection in text task in video content audit, which is valid if task type is `Prohibited.Ocr`.
                     * @return ProhibitedOcrTask Query result of OCR-based prohibited information detection in text task in video content audit, which is valid if task type is `Prohibited.Ocr`.
                     * 
                     */
                    AiReviewTaskProhibitedOcrResult GetProhibitedOcrTask() const;

                    /**
                     * 设置Query result of OCR-based prohibited information detection in text task in video content audit, which is valid if task type is `Prohibited.Ocr`.
                     * @param _prohibitedOcrTask Query result of OCR-based prohibited information detection in text task in video content audit, which is valid if task type is `Prohibited.Ocr`.
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
<li>Porn (in images)</li>
<li>Terrorism (in images)</li>
<li>Political (in images)</li>
<li>Porn.Asr</li>
<li>Porn.Ocr</li>
<li>Political.Asr</li>
<li>Political.Ocr</li>
<li>Terrorism.Ocr</li>
<li>Prohibited.Asr</li>
<li>Prohibited.Ocr</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Sample rate, which indicates the number of video frames captured per second for audit
                     */
                    double m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * Audited video duration in seconds.
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
                     * The result of detecting terrorism content in images, which is valid when the task type is `Terrorism`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskTerrorismResult m_terrorismTask;
                    bool m_terrorismTaskHasBeenSet;

                    /**
                     * The result of detecting politically sensitive information in images, which is valid when the task type is `Political`.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * The result of detecting politically sensitive information based on ASR, which is valid when the task type is `Political.Asr`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskPoliticalAsrResult m_politicalAsrTask;
                    bool m_politicalAsrTaskHasBeenSet;

                    /**
                     * The result of detecting politically sensitive information based on OCR, which is valid when the task type is `Political.Ocr`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskPoliticalOcrResult m_politicalOcrTask;
                    bool m_politicalOcrTaskHasBeenSet;

                    /**
                     * The result of detecting terrorism content based on OCR, which is valid when task type is `Terrorism.Ocr`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    AiReviewTaskTerrorismOcrResult m_terrorismOcrTask;
                    bool m_terrorismOcrTaskHasBeenSet;

                    /**
                     * Query result of ASR-based prohibited information detection in speech task in video content audit, which is valid if task type is `Prohibited.Asr`.
                     */
                    AiReviewTaskProhibitedAsrResult m_prohibitedAsrTask;
                    bool m_prohibitedAsrTaskHasBeenSet;

                    /**
                     * Query result of OCR-based prohibited information detection in text task in video content audit, which is valid if task type is `Prohibited.Ocr`.
                     */
                    AiReviewTaskProhibitedOcrResult m_prohibitedOcrTask;
                    bool m_prohibitedOcrTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AICONTENTREVIEWRESULT_H_
