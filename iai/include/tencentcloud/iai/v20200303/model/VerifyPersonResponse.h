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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_VERIFYPERSONRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_VERIFYPERSONRESPONSE_H_

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
                * VerifyPerson response structure.
                */
                class VerifyPersonResponse : public AbstractModel
                {
                public:
                    VerifyPersonResponse();
                    ~VerifyPersonResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Similarity between given face image and `PersonId`. If there are multiple faces under the `PersonId`, their information will be fused for verification.
                     * @return Score Similarity between given face image and `PersonId`. If there are multiple faces under the `PersonId`, their information will be fused for verification.
                     */
                    double GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取Whether the person in the image matches the `PersonId`.
                     * @return IsMatch Whether the person in the image matches the `PersonId`.
                     */
                    bool GetIsMatch() const;

                    /**
                     * 判断参数 IsMatch 是否已赋值
                     * @return IsMatch 是否已赋值
                     */
                    bool IsMatchHasBeenSet() const;

                    /**
                     * 获取Algorithm model version used for face recognition in the group where the `Person` is, which is set when the group is created. For more information, please see [Algorithm Model Version](https://intl.cloud.tencent.com/document/product/867/40042?from_cn_redirect=1)
                     * @return FaceModelVersion Algorithm model version used for face recognition in the group where the `Person` is, which is set when the group is created. For more information, please see [Algorithm Model Version](https://intl.cloud.tencent.com/document/product/867/40042?from_cn_redirect=1)
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * Similarity between given face image and `PersonId`. If there are multiple faces under the `PersonId`, their information will be fused for verification.
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Whether the person in the image matches the `PersonId`.
                     */
                    bool m_isMatch;
                    bool m_isMatchHasBeenSet;

                    /**
                     * Algorithm model version used for face recognition in the group where the `Person` is, which is set when the group is created. For more information, please see [Algorithm Model Version](https://intl.cloud.tencent.com/document/product/867/40042?from_cn_redirect=1)
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_VERIFYPERSONRESPONSE_H_
