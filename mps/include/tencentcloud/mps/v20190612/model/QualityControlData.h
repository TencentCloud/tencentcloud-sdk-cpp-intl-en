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
                     * 获取Whether there is an audio track. `true` indicates that there isn't.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NoAudio Whether there is an audio track. `true` indicates that there isn't.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetNoAudio() const;

                    /**
                     * 设置Whether there is an audio track. `true` indicates that there isn't.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _noAudio Whether there is an audio track. `true` indicates that there isn't.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether there is a video track. `true` indicates that there isn't.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NoVideo Whether there is a video track. `true` indicates that there isn't.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetNoVideo() const;

                    /**
                     * 设置Whether there is a video track. `true` indicates that there isn't.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _noVideo Whether there is a video track. `true` indicates that there isn't.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The no-reference video quality score. Value range: 0-100.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QualityEvaluationScore The no-reference video quality score. Value range: 0-100.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetQualityEvaluationScore() const;

                    /**
                     * 设置The no-reference video quality score. Value range: 0-100.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qualityEvaluationScore The no-reference video quality score. Value range: 0-100.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Exception items detected in content quality inspection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QualityControlResultSet Exception items detected in content quality inspection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<QualityControlResult> GetQualityControlResultSet() const;

                    /**
                     * 设置Exception items detected in content quality inspection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qualityControlResultSet Exception items detected in content quality inspection.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Exception items detected in format diagnosis.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerDiagnoseResultSet Exception items detected in format diagnosis.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ContainerDiagnoseResultItem> GetContainerDiagnoseResultSet() const;

                    /**
                     * 设置Exception items detected in format diagnosis.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _containerDiagnoseResultSet Exception items detected in format diagnosis.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Whether there is an audio track. `true` indicates that there isn't.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_noAudio;
                    bool m_noAudioHasBeenSet;

                    /**
                     * Whether there is a video track. `true` indicates that there isn't.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_noVideo;
                    bool m_noVideoHasBeenSet;

                    /**
                     * The no-reference video quality score. Value range: 0-100.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_qualityEvaluationScore;
                    bool m_qualityEvaluationScoreHasBeenSet;

                    /**
                     * Exception items detected in content quality inspection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<QualityControlResult> m_qualityControlResultSet;
                    bool m_qualityControlResultSetHasBeenSet;

                    /**
                     * Exception items detected in format diagnosis.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ContainerDiagnoseResultItem> m_containerDiagnoseResultSet;
                    bool m_containerDiagnoseResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLDATA_H_
