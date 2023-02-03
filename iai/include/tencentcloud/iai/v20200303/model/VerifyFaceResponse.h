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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_VERIFYFACERESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_VERIFYFACERESPONSE_H_

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
                * VerifyFace response structure.
                */
                class VerifyFaceResponse : public AbstractModel
                {
                public:
                    VerifyFaceResponse();
                    ~VerifyFaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Similarity between given face image and `PersonId`. If there are multiple faces under the `PersonId`, the score of the highest similarity will be returned.

The returned similarity score varies by algorithm version.
If you need to verify whether the faces in the two images are the same person, then the 0.1%, 0.01%, and 0.001% FARs on v3.0 correspond to scores of 40, 50, and 60, respectively. Generally, if the score is above 50, it can be judged that they are the same person.
The 0.1%, 0.01%, and 0.001% FARs on v2.0 correspond to scores of 70, 80, and 90, respectively. Generally, if the score is above 80, it can be judged that they are the same person.
                     * @return Score Similarity between given face image and `PersonId`. If there are multiple faces under the `PersonId`, the score of the highest similarity will be returned.

The returned similarity score varies by algorithm version.
If you need to verify whether the faces in the two images are the same person, then the 0.1%, 0.01%, and 0.001% FARs on v3.0 correspond to scores of 40, 50, and 60, respectively. Generally, if the score is above 50, it can be judged that they are the same person.
The 0.1%, 0.01%, and 0.001% FARs on v2.0 correspond to scores of 70, 80, and 90, respectively. Generally, if the score is above 80, it can be judged that they are the same person.
                     */
                    double GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取Whether the person is the one in the image. The fixed threshold score is 60. If you want to adjust the threshold more flexibly, you can take the returned `Score` parameter value for judgment.
                     * @return IsMatch Whether the person is the one in the image. The fixed threshold score is 60. If you want to adjust the threshold more flexibly, you can take the returned `Score` parameter value for judgment.
                     */
                    bool GetIsMatch() const;

                    /**
                     * 判断参数 IsMatch 是否已赋值
                     * @return IsMatch 是否已赋值
                     */
                    bool IsMatchHasBeenSet() const;

                    /**
                     * 获取Algorithm model version used for face recognition in the group where the `Person` is, which is set when the group is created.
                     * @return FaceModelVersion Algorithm model version used for face recognition in the group where the `Person` is, which is set when the group is created.
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * Similarity between given face image and `PersonId`. If there are multiple faces under the `PersonId`, the score of the highest similarity will be returned.

The returned similarity score varies by algorithm version.
If you need to verify whether the faces in the two images are the same person, then the 0.1%, 0.01%, and 0.001% FARs on v3.0 correspond to scores of 40, 50, and 60, respectively. Generally, if the score is above 50, it can be judged that they are the same person.
The 0.1%, 0.01%, and 0.001% FARs on v2.0 correspond to scores of 70, 80, and 90, respectively. Generally, if the score is above 80, it can be judged that they are the same person.
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Whether the person is the one in the image. The fixed threshold score is 60. If you want to adjust the threshold more flexibly, you can take the returned `Score` parameter value for judgment.
                     */
                    bool m_isMatch;
                    bool m_isMatchHasBeenSet;

                    /**
                     * Algorithm model version used for face recognition in the group where the `Person` is, which is set when the group is created.
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_VERIFYFACERESPONSE_H_
