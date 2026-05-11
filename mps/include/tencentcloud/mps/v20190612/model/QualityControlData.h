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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLDATA_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/QualityControlResult.h>
#include <tencentcloud/mps/v20190612/model/ContainerDiagnoseResultItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Media quality inspection result output.
                */
                class QualityControlData : public AbstractModel
                {
                public:
                    QualityControlData();
                    ~QualityControlData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>A value of true indicates that the video has no audio track.</p>
                     * @return NoAudio <p>A value of true indicates that the video has no audio track.</p>
                     * 
                     */
                    bool GetNoAudio() const;

                    /**
                     * 设置<p>A value of true indicates that the video has no audio track.</p>
                     * @param _noAudio <p>A value of true indicates that the video has no audio track.</p>
                     * 
                     */
                    void SetNoAudio(const bool& _noAudio);

                    /**
                     * 判断参数 NoAudio 是否已赋值
                     * @return NoAudio 是否已赋值
                     * 
                     */
                    bool NoAudioHasBeenSet() const;

                    /**
                     * 获取<p>A value of true indicates that the video has no video track.</p>
                     * @return NoVideo <p>A value of true indicates that the video has no video track.</p>
                     * 
                     */
                    bool GetNoVideo() const;

                    /**
                     * 设置<p>A value of true indicates that the video has no video track.</p>
                     * @param _noVideo <p>A value of true indicates that the video has no video track.</p>
                     * 
                     */
                    void SetNoVideo(const bool& _noVideo);

                    /**
                     * 判断参数 NoVideo 是否已赋值
                     * @return NoVideo 是否已赋值
                     * 
                     */
                    bool NoVideoHasBeenSet() const;

                    /**
                     * 获取<p>No-reference quality score of the video, on a scale of 0 to 100.</p>
                     * @return QualityEvaluationScore <p>No-reference quality score of the video, on a scale of 0 to 100.</p>
                     * 
                     */
                    int64_t GetQualityEvaluationScore() const;

                    /**
                     * 设置<p>No-reference quality score of the video, on a scale of 0 to 100.</p>
                     * @param _qualityEvaluationScore <p>No-reference quality score of the video, on a scale of 0 to 100.</p>
                     * 
                     */
                    void SetQualityEvaluationScore(const int64_t& _qualityEvaluationScore);

                    /**
                     * 判断参数 QualityEvaluationScore 是否已赋值
                     * @return QualityEvaluationScore 是否已赋值
                     * 
                     */
                    bool QualityEvaluationScoreHasBeenSet() const;

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
                     * 获取<p>Exception items detected in content quality inspection.</p>
                     * @return QualityControlResultSet <p>Exception items detected in content quality inspection.</p>
                     * 
                     */
                    std::vector<QualityControlResult> GetQualityControlResultSet() const;

                    /**
                     * 设置<p>Exception items detected in content quality inspection.</p>
                     * @param _qualityControlResultSet <p>Exception items detected in content quality inspection.</p>
                     * 
                     */
                    void SetQualityControlResultSet(const std::vector<QualityControlResult>& _qualityControlResultSet);

                    /**
                     * 判断参数 QualityControlResultSet 是否已赋值
                     * @return QualityControlResultSet 是否已赋值
                     * 
                     */
                    bool QualityControlResultSetHasBeenSet() const;

                    /**
                     * 获取<p>Exception items detected in format diagnosis.</p>
                     * @return ContainerDiagnoseResultSet <p>Exception items detected in format diagnosis.</p>
                     * 
                     */
                    std::vector<ContainerDiagnoseResultItem> GetContainerDiagnoseResultSet() const;

                    /**
                     * 设置<p>Exception items detected in format diagnosis.</p>
                     * @param _containerDiagnoseResultSet <p>Exception items detected in format diagnosis.</p>
                     * 
                     */
                    void SetContainerDiagnoseResultSet(const std::vector<ContainerDiagnoseResultItem>& _containerDiagnoseResultSet);

                    /**
                     * 判断参数 ContainerDiagnoseResultSet 是否已赋值
                     * @return ContainerDiagnoseResultSet 是否已赋值
                     * 
                     */
                    bool ContainerDiagnoseResultSetHasBeenSet() const;

                private:

                    /**
                     * <p>A value of true indicates that the video has no audio track.</p>
                     */
                    bool m_noAudio;
                    bool m_noAudioHasBeenSet;

                    /**
                     * <p>A value of true indicates that the video has no video track.</p>
                     */
                    bool m_noVideo;
                    bool m_noVideoHasBeenSet;

                    /**
                     * <p>No-reference quality score of the video, on a scale of 0 to 100.</p>
                     */
                    int64_t m_qualityEvaluationScore;
                    bool m_qualityEvaluationScoreHasBeenSet;

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
                     * <p>Exception items detected in content quality inspection.</p>
                     */
                    std::vector<QualityControlResult> m_qualityControlResultSet;
                    bool m_qualityControlResultSetHasBeenSet;

                    /**
                     * <p>Exception items detected in format diagnosis.</p>
                     */
                    std::vector<ContainerDiagnoseResultItem> m_containerDiagnoseResultSet;
                    bool m_containerDiagnoseResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLDATA_H_
