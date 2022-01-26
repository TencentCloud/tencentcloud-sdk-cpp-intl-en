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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_CREATEPERSONRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_CREATEPERSONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/FaceRect.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * CreatePerson response structure.
                */
                class CreatePersonResponse : public AbstractModel
                {
                public:
                    CreatePersonResponse();
                    ~CreatePersonResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of face image.
                     * @return FaceId Unique ID of face image.
                     */
                    std::string GetFaceId() const;

                    /**
                     * 判断参数 FaceId 是否已赋值
                     * @return FaceId 是否已赋值
                     */
                    bool FaceIdHasBeenSet() const;

                    /**
                     * 获取Position of detected face frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FaceRect Position of detected face frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FaceRect GetFaceRect() const;

                    /**
                     * 判断参数 FaceRect 是否已赋值
                     * @return FaceRect 是否已赋值
                     */
                    bool FaceRectHasBeenSet() const;

                    /**
                     * 获取`PersonId` of suspected duplicate person. 
This parameter is meaningful only if the `UniquePersonControl` parameter is not 0 and there is a suspected duplicate person in the group.
                     * @return SimilarPersonId `PersonId` of suspected duplicate person. 
This parameter is meaningful only if the `UniquePersonControl` parameter is not 0 and there is a suspected duplicate person in the group.
                     */
                    std::string GetSimilarPersonId() const;

                    /**
                     * 判断参数 SimilarPersonId 是否已赋值
                     * @return SimilarPersonId 是否已赋值
                     */
                    bool SimilarPersonIdHasBeenSet() const;

                    /**
                     * 获取Algorithm model version used for face recognition.
                     * @return FaceModelVersion Algorithm model version used for face recognition.
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * Unique ID of face image.
                     */
                    std::string m_faceId;
                    bool m_faceIdHasBeenSet;

                    /**
                     * Position of detected face frame.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FaceRect m_faceRect;
                    bool m_faceRectHasBeenSet;

                    /**
                     * `PersonId` of suspected duplicate person. 
This parameter is meaningful only if the `UniquePersonControl` parameter is not 0 and there is a suspected duplicate person in the group.
                     */
                    std::string m_similarPersonId;
                    bool m_similarPersonIdHasBeenSet;

                    /**
                     * Algorithm model version used for face recognition.
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CREATEPERSONRESPONSE_H_
