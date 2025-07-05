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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_DETECTLIVEFACERESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_DETECTLIVEFACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * DetectLiveFace response structure.
                */
                class DetectLiveFaceResponse : public AbstractModel
                {
                public:
                    DetectLiveFaceResponse();
                    ~DetectLiveFaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Liveness score. Value range: [0,100]. The score is generally between 80 and 100, but 0 is also a common value. As a recommendation, when the score is greater than 87, it can be judged that the person in the image is alive. You can adjust the threshold according to your specific scenario.
This field is meaningful only if `FaceModelVersion` is 2.0.
                     * @return Score Liveness score. Value range: [0,100]. The score is generally between 80 and 100, but 0 is also a common value. As a recommendation, when the score is greater than 87, it can be judged that the person in the image is alive. You can adjust the threshold according to your specific scenario.
This field is meaningful only if `FaceModelVersion` is 2.0.
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取Algorithm model version used for face recognition.
                     * @return FaceModelVersion Algorithm model version used for face recognition.
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     * 
                     */
                    bool FaceModelVersionHasBeenSet() const;

                    /**
                     * 获取Whether liveness detection is passed.
This field is meaningful only if `FaceModelVersion` is 3.0.
                     * @return IsLiveness Whether liveness detection is passed.
This field is meaningful only if `FaceModelVersion` is 3.0.
                     * 
                     */
                    bool GetIsLiveness() const;

                    /**
                     * 判断参数 IsLiveness 是否已赋值
                     * @return IsLiveness 是否已赋值
                     * 
                     */
                    bool IsLivenessHasBeenSet() const;

                private:

                    /**
                     * Liveness score. Value range: [0,100]. The score is generally between 80 and 100, but 0 is also a common value. As a recommendation, when the score is greater than 87, it can be judged that the person in the image is alive. You can adjust the threshold according to your specific scenario.
This field is meaningful only if `FaceModelVersion` is 2.0.
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Algorithm model version used for face recognition.
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                    /**
                     * Whether liveness detection is passed.
This field is meaningful only if `FaceModelVersion` is 3.0.
                     */
                    bool m_isLiveness;
                    bool m_isLivenessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_DETECTLIVEFACERESPONSE_H_
