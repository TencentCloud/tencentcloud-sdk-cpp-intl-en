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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectResultItem.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectContainerDiagnoseResultItem.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectLLMDetectionReport.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Output of the audio and video quality inspection task.
                */
                class QualityInspectTaskOutput : public AbstractModel
                {
                public:
                    QualityInspectTaskOutput();
                    ~QualityInspectTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether the media file has no audio track. Value range:</p><li>0: No, it has audio tracks;</li><li>1: Yes, no audio track.</li>
                     * @return NoAudio <p>Whether the media file has no audio track. Value range:</p><li>0: No, it has audio tracks;</li><li>1: Yes, no audio track.</li>
                     * 
                     */
                    int64_t GetNoAudio() const;

                    /**
                     * 设置<p>Whether the media file has no audio track. Value range:</p><li>0: No, it has audio tracks;</li><li>1: Yes, no audio track.</li>
                     * @param _noAudio <p>Whether the media file has no audio track. Value range:</p><li>0: No, it has audio tracks;</li><li>1: Yes, no audio track.</li>
                     * 
                     */
                    void SetNoAudio(const int64_t& _noAudio);

                    /**
                     * 判断参数 NoAudio 是否已赋值
                     * @return NoAudio 是否已赋值
                     * 
                     */
                    bool NoAudioHasBeenSet() const;

                    /**
                     * 获取<p>Whether the media file has no video track. Value range:</p><li>0: No, meaning it has a video track;</li><li>1: Yes, meaning it has no video track.</li>
                     * @return NoVideo <p>Whether the media file has no video track. Value range:</p><li>0: No, meaning it has a video track;</li><li>1: Yes, meaning it has no video track.</li>
                     * 
                     */
                    int64_t GetNoVideo() const;

                    /**
                     * 设置<p>Whether the media file has no video track. Value range:</p><li>0: No, meaning it has a video track;</li><li>1: Yes, meaning it has no video track.</li>
                     * @param _noVideo <p>Whether the media file has no video track. Value range:</p><li>0: No, meaning it has a video track;</li><li>1: Yes, meaning it has no video track.</li>
                     * 
                     */
                    void SetNoVideo(const int64_t& _noVideo);

                    /**
                     * 判断参数 NoVideo 是否已赋值
                     * @return NoVideo 是否已赋值
                     * 
                     */
                    bool NoVideoHasBeenSet() const;

                    /**
                     * 获取<p>Video picture quality score. Value range: [0, 100].</p>
                     * @return QualityEvaluationScore <p>Video picture quality score. Value range: [0, 100].</p>
                     * 
                     */
                    uint64_t GetQualityEvaluationScore() const;

                    /**
                     * 设置<p>Video picture quality score. Value range: [0, 100].</p>
                     * @param _qualityEvaluationScore <p>Video picture quality score. Value range: [0, 100].</p>
                     * 
                     */
                    void SetQualityEvaluationScore(const uint64_t& _qualityEvaluationScore);

                    /**
                     * 判断参数 QualityEvaluationScore 是否已赋值
                     * @return QualityEvaluationScore 是否已赋值
                     * 
                     */
                    bool QualityEvaluationScoreHasBeenSet() const;

                    /**
                     * 获取<p>List of abnormalities detected in audio and video quality.</p>
                     * @return QualityInspectResultSet <p>List of abnormalities detected in audio and video quality.</p>
                     * 
                     */
                    std::vector<QualityInspectResultItem> GetQualityInspectResultSet() const;

                    /**
                     * 设置<p>List of abnormalities detected in audio and video quality.</p>
                     * @param _qualityInspectResultSet <p>List of abnormalities detected in audio and video quality.</p>
                     * 
                     */
                    void SetQualityInspectResultSet(const std::vector<QualityInspectResultItem>& _qualityInspectResultSet);

                    /**
                     * 判断参数 QualityInspectResultSet 是否已赋值
                     * @return QualityInspectResultSet 是否已赋值
                     * 
                     */
                    bool QualityInspectResultSetHasBeenSet() const;

                    /**
                     * 获取<p>No-reference quality score of the video (MOS).</p>
                     * @return QualityEvaluationMeanOpinionScore <p>No-reference quality score of the video (MOS).</p>
                     * 
                     */
                    double GetQualityEvaluationMeanOpinionScore() const;

                    /**
                     * 设置<p>No-reference quality score of the video (MOS).</p>
                     * @param _qualityEvaluationMeanOpinionScore <p>No-reference quality score of the video (MOS).</p>
                     * 
                     */
                    void SetQualityEvaluationMeanOpinionScore(const double& _qualityEvaluationMeanOpinionScore);

                    /**
                     * 判断参数 QualityEvaluationMeanOpinionScore 是否已赋值
                     * @return QualityEvaluationMeanOpinionScore 是否已赋值
                     * 
                     */
                    bool QualityEvaluationMeanOpinionScoreHasBeenSet() const;

                    /**
                     * 获取<p>Video aesthetic score. Value range: [0, 100].</p>
                     * @return AestheticEvaluationScore <p>Video aesthetic score. Value range: [0, 100].</p>
                     * 
                     */
                    int64_t GetAestheticEvaluationScore() const;

                    /**
                     * 设置<p>Video aesthetic score. Value range: [0, 100].</p>
                     * @param _aestheticEvaluationScore <p>Video aesthetic score. Value range: [0, 100].</p>
                     * 
                     */
                    void SetAestheticEvaluationScore(const int64_t& _aestheticEvaluationScore);

                    /**
                     * 判断参数 AestheticEvaluationScore 是否已赋值
                     * @return AestheticEvaluationScore 是否已赋值
                     * 
                     */
                    bool AestheticEvaluationScoreHasBeenSet() const;

                    /**
                     * 获取<p>Exception items detected in format diagnosis.</p>
                     * @return ContainerDiagnoseResultSet <p>Exception items detected in format diagnosis.</p>
                     * 
                     */
                    std::vector<QualityInspectContainerDiagnoseResultItem> GetContainerDiagnoseResultSet() const;

                    /**
                     * 设置<p>Exception items detected in format diagnosis.</p>
                     * @param _containerDiagnoseResultSet <p>Exception items detected in format diagnosis.</p>
                     * 
                     */
                    void SetContainerDiagnoseResultSet(const std::vector<QualityInspectContainerDiagnoseResultItem>& _containerDiagnoseResultSet);

                    /**
                     * 判断参数 ContainerDiagnoseResultSet 是否已赋值
                     * @return ContainerDiagnoseResultSet 是否已赋值
                     * 
                     */
                    bool ContainerDiagnoseResultSetHasBeenSet() const;

                    /**
                     * 获取<p>LLM AIGC quality detection result.</p>
                     * @return LLMDetectionReport <p>LLM AIGC quality detection result.</p>
                     * 
                     */
                    QualityInspectLLMDetectionReport GetLLMDetectionReport() const;

                    /**
                     * 设置<p>LLM AIGC quality detection result.</p>
                     * @param _lLMDetectionReport <p>LLM AIGC quality detection result.</p>
                     * 
                     */
                    void SetLLMDetectionReport(const QualityInspectLLMDetectionReport& _lLMDetectionReport);

                    /**
                     * 判断参数 LLMDetectionReport 是否已赋值
                     * @return LLMDetectionReport 是否已赋值
                     * 
                     */
                    bool LLMDetectionReportHasBeenSet() const;

                private:

                    /**
                     * <p>Whether the media file has no audio track. Value range:</p><li>0: No, it has audio tracks;</li><li>1: Yes, no audio track.</li>
                     */
                    int64_t m_noAudio;
                    bool m_noAudioHasBeenSet;

                    /**
                     * <p>Whether the media file has no video track. Value range:</p><li>0: No, meaning it has a video track;</li><li>1: Yes, meaning it has no video track.</li>
                     */
                    int64_t m_noVideo;
                    bool m_noVideoHasBeenSet;

                    /**
                     * <p>Video picture quality score. Value range: [0, 100].</p>
                     */
                    uint64_t m_qualityEvaluationScore;
                    bool m_qualityEvaluationScoreHasBeenSet;

                    /**
                     * <p>List of abnormalities detected in audio and video quality.</p>
                     */
                    std::vector<QualityInspectResultItem> m_qualityInspectResultSet;
                    bool m_qualityInspectResultSetHasBeenSet;

                    /**
                     * <p>No-reference quality score of the video (MOS).</p>
                     */
                    double m_qualityEvaluationMeanOpinionScore;
                    bool m_qualityEvaluationMeanOpinionScoreHasBeenSet;

                    /**
                     * <p>Video aesthetic score. Value range: [0, 100].</p>
                     */
                    int64_t m_aestheticEvaluationScore;
                    bool m_aestheticEvaluationScoreHasBeenSet;

                    /**
                     * <p>Exception items detected in format diagnosis.</p>
                     */
                    std::vector<QualityInspectContainerDiagnoseResultItem> m_containerDiagnoseResultSet;
                    bool m_containerDiagnoseResultSetHasBeenSet;

                    /**
                     * <p>LLM AIGC quality detection result.</p>
                     */
                    QualityInspectLLMDetectionReport m_lLMDetectionReport;
                    bool m_lLMDetectionReportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTASKOUTPUT_H_
