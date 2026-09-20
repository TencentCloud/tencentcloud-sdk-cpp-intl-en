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
                * Audio/video moderation result
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
<li>Porn: whether image recognition involves offensive content</li>
<li>Terrorism: image recognition of whether unsafe information is involved</li>
<li>Political: Whether image recognition involves inappropriate information</li>
<li>Porn.Asr: ASR text (text in audio) authentication for whether it involves offensive content</li>
<li>Porn.Ocr: whether Ocr text identification involves offensive content</li>
<li>Political.Asr: ASR text (text in audio) authentication for whether it involves inappropriate information</li>
<li>Political.Ocr: Ocr text identification, whether it involves inappropriate information</li>
<li>Terrorism.Ocr: whether Ocr text identification involves unsafe information</li>
<li>Prohibited.Asr: Prohibited information recognition in ASR text (text in audio)</li>
<li>Prohibited.Ocr: OCR text prohibited information recognition</li>
                     * @return Type Task type. Valid values:
<li>Porn: whether image recognition involves offensive content</li>
<li>Terrorism: image recognition of whether unsafe information is involved</li>
<li>Political: Whether image recognition involves inappropriate information</li>
<li>Porn.Asr: ASR text (text in audio) authentication for whether it involves offensive content</li>
<li>Porn.Ocr: whether Ocr text identification involves offensive content</li>
<li>Political.Asr: ASR text (text in audio) authentication for whether it involves inappropriate information</li>
<li>Political.Ocr: Ocr text identification, whether it involves inappropriate information</li>
<li>Terrorism.Ocr: whether Ocr text identification involves unsafe information</li>
<li>Prohibited.Asr: Prohibited information recognition in ASR text (text in audio)</li>
<li>Prohibited.Ocr: OCR text prohibited information recognition</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Valid values:
<li>Porn: whether image recognition involves offensive content</li>
<li>Terrorism: image recognition of whether unsafe information is involved</li>
<li>Political: Whether image recognition involves inappropriate information</li>
<li>Porn.Asr: ASR text (text in audio) authentication for whether it involves offensive content</li>
<li>Porn.Ocr: whether Ocr text identification involves offensive content</li>
<li>Political.Asr: ASR text (text in audio) authentication for whether it involves inappropriate information</li>
<li>Political.Ocr: Ocr text identification, whether it involves inappropriate information</li>
<li>Terrorism.Ocr: whether Ocr text identification involves unsafe information</li>
<li>Prohibited.Asr: Prohibited information recognition in ASR text (text in audio)</li>
<li>Prohibited.Ocr: OCR text prohibited information recognition</li>
                     * @param _type Task type. Valid values:
<li>Porn: whether image recognition involves offensive content</li>
<li>Terrorism: image recognition of whether unsafe information is involved</li>
<li>Political: Whether image recognition involves inappropriate information</li>
<li>Porn.Asr: ASR text (text in audio) authentication for whether it involves offensive content</li>
<li>Porn.Ocr: whether Ocr text identification involves offensive content</li>
<li>Political.Asr: ASR text (text in audio) authentication for whether it involves inappropriate information</li>
<li>Political.Ocr: Ocr text identification, whether it involves inappropriate information</li>
<li>Terrorism.Ocr: whether Ocr text identification involves unsafe information</li>
<li>Prohibited.Asr: Prohibited information recognition in ASR text (text in audio)</li>
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
                     * 获取Query result of a video audio/video moderation task (frames involving offensive content). Valid when the task type is Porn.
                     * @return PornTask Query result of a video audio/video moderation task (frames involving offensive content). Valid when the task type is Porn.
                     * 
                     */
                    AiReviewTaskPornResult GetPornTask() const;

                    /**
                     * 设置Query result of a video audio/video moderation task (frames involving offensive content). Valid when the task type is Porn.
                     * @param _pornTask Query result of a video audio/video moderation task (frames involving offensive content). Valid when the task type is Porn.
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
                     * 获取Query result of a video audio/video moderation task (visuals involve unsafe information). Valid when the task type is Terrorism.
                     * @return TerrorismTask Query result of a video audio/video moderation task (visuals involve unsafe information). Valid when the task type is Terrorism.
                     * 
                     */
                    AiReviewTaskTerrorismResult GetTerrorismTask() const;

                    /**
                     * 设置Query result of a video audio/video moderation task (visuals involve unsafe information). Valid when the task type is Terrorism.
                     * @param _terrorismTask Query result of a video audio/video moderation task (visuals involve unsafe information). Valid when the task type is Terrorism.
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
                     * 获取Query result of a video audio/video moderation task (frames involving inappropriate information). Valid when the task type is Political.
                     * @return PoliticalTask Query result of a video audio/video moderation task (frames involving inappropriate information). Valid when the task type is Political.
                     * 
                     */
                    AiReviewTaskPoliticalResult GetPoliticalTask() const;

                    /**
                     * 设置Query result of a video audio/video moderation task (frames involving inappropriate information). Valid when the task type is Political.
                     * @param _politicalTask Query result of a video audio/video moderation task (frames involving inappropriate information). Valid when the task type is Political.
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
                     * 获取Query result of a video audio/video moderation task (ASR text involves offensive content). Valid when the task type is Porn.Asr.
                     * @return PornAsrTask Query result of a video audio/video moderation task (ASR text involves offensive content). Valid when the task type is Porn.Asr.
                     * 
                     */
                    AiReviewTaskPornAsrResult GetPornAsrTask() const;

                    /**
                     * 设置Query result of a video audio/video moderation task (ASR text involves offensive content). Valid when the task type is Porn.Asr.
                     * @param _pornAsrTask Query result of a video audio/video moderation task (ASR text involves offensive content). Valid when the task type is Porn.Asr.
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
                     * 获取Query result of a video audio/video moderation task (OCR text involving offensive content). Valid when the task type is Porn.Ocr.
                     * @return PornOcrTask Query result of a video audio/video moderation task (OCR text involving offensive content). Valid when the task type is Porn.Ocr.
                     * 
                     */
                    AiReviewTaskPornOcrResult GetPornOcrTask() const;

                    /**
                     * 设置Query result of a video audio/video moderation task (OCR text involving offensive content). Valid when the task type is Porn.Ocr.
                     * @param _pornOcrTask Query result of a video audio/video moderation task (OCR text involving offensive content). Valid when the task type is Porn.Ocr.
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
                     * 获取Query result of a video audio/video moderation task (ASR text involving inappropriate information). Valid when the task type is Political.Asr.
                     * @return PoliticalAsrTask Query result of a video audio/video moderation task (ASR text involving inappropriate information). Valid when the task type is Political.Asr.
                     * 
                     */
                    AiReviewTaskPoliticalAsrResult GetPoliticalAsrTask() const;

                    /**
                     * 设置Query result of a video audio/video moderation task (ASR text involving inappropriate information). Valid when the task type is Political.Asr.
                     * @param _politicalAsrTask Query result of a video audio/video moderation task (ASR text involving inappropriate information). Valid when the task type is Political.Asr.
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
                     * 获取Query result of a video audio/video moderation task (OCR text involves inappropriate information). Valid when the task type is Political.Ocr.
                     * @return PoliticalOcrTask Query result of a video audio/video moderation task (OCR text involves inappropriate information). Valid when the task type is Political.Ocr.
                     * 
                     */
                    AiReviewTaskPoliticalOcrResult GetPoliticalOcrTask() const;

                    /**
                     * 设置Query result of a video audio/video moderation task (OCR text involves inappropriate information). Valid when the task type is Political.Ocr.
                     * @param _politicalOcrTask Query result of a video audio/video moderation task (OCR text involves inappropriate information). Valid when the task type is Political.Ocr.
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
                     * 获取Query result of a video audio/video moderation task (OCR text involving unsafe information). Valid when the task type is Terrorism.Ocr.
                     * @return TerrorismOcrTask Query result of a video audio/video moderation task (OCR text involving unsafe information). Valid when the task type is Terrorism.Ocr.
                     * 
                     */
                    AiReviewTaskTerrorismOcrResult GetTerrorismOcrTask() const;

                    /**
                     * 设置Query result of a video audio/video moderation task (OCR text involving unsafe information). Valid when the task type is Terrorism.Ocr.
                     * @param _terrorismOcrTask Query result of a video audio/video moderation task (OCR text involving unsafe information). Valid when the task type is Terrorism.Ocr.
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
                     * 获取Query result of a video audio/video moderation OCR text prohibited task. Valid when the task type is Prohibited.Ocr.
                     * @return ProhibitedOcrTask Query result of a video audio/video moderation OCR text prohibited task. Valid when the task type is Prohibited.Ocr.
                     * 
                     */
                    AiReviewTaskProhibitedOcrResult GetProhibitedOcrTask() const;

                    /**
                     * 设置Query result of a video audio/video moderation OCR text prohibited task. Valid when the task type is Prohibited.Ocr.
                     * @param _prohibitedOcrTask Query result of a video audio/video moderation OCR text prohibited task. Valid when the task type is Prohibited.Ocr.
                     * 
                     */
                    void SetProhibitedOcrTask(const AiReviewTaskProhibitedOcrResult& _prohibitedOcrTask);

                    /**
                     * 判断参数 ProhibitedOcrTask 是否已赋值
                     * @return ProhibitedOcrTask 是否已赋值
                     * 
                     */
                    bool ProhibitedOcrTaskHasBeenSet() const;

                    /**
                     * 获取Query result of the ASR text prohibited moderation task for video and audio. Valid when the task type is Prohibited.Asr.
                     * @return ProhibitedAsrTask Query result of the ASR text prohibited moderation task for video and audio. Valid when the task type is Prohibited.Asr.
                     * 
                     */
                    AiReviewTaskProhibitedAsrResult GetProhibitedAsrTask() const;

                    /**
                     * 设置Query result of the ASR text prohibited moderation task for video and audio. Valid when the task type is Prohibited.Asr.
                     * @param _prohibitedAsrTask Query result of the ASR text prohibited moderation task for video and audio. Valid when the task type is Prohibited.Asr.
                     * 
                     */
                    void SetProhibitedAsrTask(const AiReviewTaskProhibitedAsrResult& _prohibitedAsrTask);

                    /**
                     * 判断参数 ProhibitedAsrTask 是否已赋值
                     * @return ProhibitedAsrTask 是否已赋值
                     * 
                     */
                    bool ProhibitedAsrTaskHasBeenSet() const;

                private:

                    /**
                     * Task type. Valid values:
<li>Porn: whether image recognition involves offensive content</li>
<li>Terrorism: image recognition of whether unsafe information is involved</li>
<li>Political: Whether image recognition involves inappropriate information</li>
<li>Porn.Asr: ASR text (text in audio) authentication for whether it involves offensive content</li>
<li>Porn.Ocr: whether Ocr text identification involves offensive content</li>
<li>Political.Asr: ASR text (text in audio) authentication for whether it involves inappropriate information</li>
<li>Political.Ocr: Ocr text identification, whether it involves inappropriate information</li>
<li>Terrorism.Ocr: whether Ocr text identification involves unsafe information</li>
<li>Prohibited.Asr: Prohibited information recognition in ASR text (text in audio)</li>
<li>Prohibited.Ocr: OCR text prohibited information recognition</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Query result of a video audio/video moderation task (frames involving offensive content). Valid when the task type is Porn.
                     */
                    AiReviewTaskPornResult m_pornTask;
                    bool m_pornTaskHasBeenSet;

                    /**
                     * Query result of a video audio/video moderation task (visuals involve unsafe information). Valid when the task type is Terrorism.
                     */
                    AiReviewTaskTerrorismResult m_terrorismTask;
                    bool m_terrorismTaskHasBeenSet;

                    /**
                     * Query result of a video audio/video moderation task (frames involving inappropriate information). Valid when the task type is Political.
                     */
                    AiReviewTaskPoliticalResult m_politicalTask;
                    bool m_politicalTaskHasBeenSet;

                    /**
                     * Query result of a video audio/video moderation task (ASR text involves offensive content). Valid when the task type is Porn.Asr.
                     */
                    AiReviewTaskPornAsrResult m_pornAsrTask;
                    bool m_pornAsrTaskHasBeenSet;

                    /**
                     * Query result of a video audio/video moderation task (OCR text involving offensive content). Valid when the task type is Porn.Ocr.
                     */
                    AiReviewTaskPornOcrResult m_pornOcrTask;
                    bool m_pornOcrTaskHasBeenSet;

                    /**
                     * Query result of a video audio/video moderation task (ASR text involving inappropriate information). Valid when the task type is Political.Asr.
                     */
                    AiReviewTaskPoliticalAsrResult m_politicalAsrTask;
                    bool m_politicalAsrTaskHasBeenSet;

                    /**
                     * Query result of a video audio/video moderation task (OCR text involves inappropriate information). Valid when the task type is Political.Ocr.
                     */
                    AiReviewTaskPoliticalOcrResult m_politicalOcrTask;
                    bool m_politicalOcrTaskHasBeenSet;

                    /**
                     * Query result of a video audio/video moderation task (OCR text involving unsafe information). Valid when the task type is Terrorism.Ocr.
                     */
                    AiReviewTaskTerrorismOcrResult m_terrorismOcrTask;
                    bool m_terrorismOcrTaskHasBeenSet;

                    /**
                     * Query result of a video audio/video moderation OCR text prohibited task. Valid when the task type is Prohibited.Ocr.
                     */
                    AiReviewTaskProhibitedOcrResult m_prohibitedOcrTask;
                    bool m_prohibitedOcrTaskHasBeenSet;

                    /**
                     * Query result of the ASR text prohibited moderation task for video and audio. Valid when the task type is Prohibited.Asr.
                     */
                    AiReviewTaskProhibitedAsrResult m_prohibitedAsrTask;
                    bool m_prohibitedAsrTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AICONTENTREVIEWRESULT_H_
