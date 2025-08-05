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
                     * 获取When this field is set to true, it indicates that the video has no audio track.
                     * @return NoAudio When this field is set to true, it indicates that the video has no audio track.
                     * 
                     */
                    bool GetNoAudio() const;

                    /**
                     * 设置When this field is set to true, it indicates that the video has no audio track.
                     * @param _noAudio When this field is set to true, it indicates that the video has no audio track.
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
                     * 获取When this field is set to true, it indicates that the video has no video track.
                     * @return NoVideo When this field is set to true, it indicates that the video has no video track.
                     * 
                     */
                    bool GetNoVideo() const;

                    /**
                     * 设置When this field is set to true, it indicates that the video has no video track.
                     * @param _noVideo When this field is set to true, it indicates that the video has no video track.
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
                     * 获取No-reference quality score of the video (100 points in total).
                     * @return QualityEvaluationScore No-reference quality score of the video (100 points in total).
                     * 
                     */
                    int64_t GetQualityEvaluationScore() const;

                    /**
                     * 设置No-reference quality score of the video (100 points in total).
                     * @param _qualityEvaluationScore No-reference quality score of the video (100 points in total).
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
                     * 获取No-reference quality score of the video (MOS).
                     * @return QualityEvaluationMeanOpinionScore No-reference quality score of the video (MOS).
                     * 
                     */
                    double GetQualityEvaluationMeanOpinionScore() const;

                    /**
                     * 设置No-reference quality score of the video (MOS).
                     * @param _qualityEvaluationMeanOpinionScore No-reference quality score of the video (MOS).
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
                     * 获取Exception items identified in content quality inspection.
                     * @return QualityControlResultSet Exception items identified in content quality inspection.
                     * 
                     */
                    std::vector<QualityControlResult> GetQualityControlResultSet() const;

                    /**
                     * 设置Exception items identified in content quality inspection.
                     * @param _qualityControlResultSet Exception items identified in content quality inspection.
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
                     * 获取Exception items identified in format diagnosis.
                     * @return ContainerDiagnoseResultSet Exception items identified in format diagnosis.
                     * 
                     */
                    std::vector<ContainerDiagnoseResultItem> GetContainerDiagnoseResultSet() const;

                    /**
                     * 设置Exception items identified in format diagnosis.
                     * @param _containerDiagnoseResultSet Exception items identified in format diagnosis.
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
                     * When this field is set to true, it indicates that the video has no audio track.
                     */
                    bool m_noAudio;
                    bool m_noAudioHasBeenSet;

                    /**
                     * When this field is set to true, it indicates that the video has no video track.
                     */
                    bool m_noVideo;
                    bool m_noVideoHasBeenSet;

                    /**
                     * No-reference quality score of the video (100 points in total).
                     */
                    int64_t m_qualityEvaluationScore;
                    bool m_qualityEvaluationScoreHasBeenSet;

                    /**
                     * No-reference quality score of the video (MOS).
                     */
                    double m_qualityEvaluationMeanOpinionScore;
                    bool m_qualityEvaluationMeanOpinionScoreHasBeenSet;

                    /**
                     * Exception items identified in content quality inspection.
                     */
                    std::vector<QualityControlResult> m_qualityControlResultSet;
                    bool m_qualityControlResultSetHasBeenSet;

                    /**
                     * Exception items identified in format diagnosis.
                     */
                    std::vector<ContainerDiagnoseResultItem> m_containerDiagnoseResultSet;
                    bool m_containerDiagnoseResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLDATA_H_
