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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_FACEQUALITYCOMPLETENESS_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_FACEQUALITYCOMPLETENESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Completeness of facial features, which assesses the completeness of the eyebrows, eyes, nose, cheeks, mouth, and chin.
                */
                class FaceQualityCompleteness : public AbstractModel
                {
                public:
                    FaceQualityCompleteness();
                    ~FaceQualityCompleteness() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Eyebrow completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,80], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Eyebrow Eyebrow completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,80], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEyebrow() const;

                    /**
                     * 设置Eyebrow completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,80], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _eyebrow Eyebrow completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,80], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEyebrow(const int64_t& _eyebrow);

                    /**
                     * 判断参数 Eyebrow 是否已赋值
                     * @return Eyebrow 是否已赋值
                     * 
                     */
                    bool EyebrowHasBeenSet() const;

                    /**
                     * 获取Eye completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,80], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Eye Eye completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,80], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEye() const;

                    /**
                     * 设置Eye completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,80], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _eye Eye completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,80], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEye(const int64_t& _eye);

                    /**
                     * 判断参数 Eye 是否已赋值
                     * @return Eye 是否已赋值
                     * 
                     */
                    bool EyeHasBeenSet() const;

                    /**
                     * 获取Nose completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,60], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Nose Nose completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,60], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNose() const;

                    /**
                     * 设置Nose completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,60], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _nose Nose completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,60], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNose(const int64_t& _nose);

                    /**
                     * 判断参数 Nose 是否已赋值
                     * @return Nose 是否已赋值
                     * 
                     */
                    bool NoseHasBeenSet() const;

                    /**
                     * 获取Cheek completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,70], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Cheek Cheek completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,70], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCheek() const;

                    /**
                     * 设置Cheek completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,70], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _cheek Cheek completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,70], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCheek(const int64_t& _cheek);

                    /**
                     * 判断参数 Cheek 是否已赋值
                     * @return Cheek 是否已赋值
                     * 
                     */
                    bool CheekHasBeenSet() const;

                    /**
                     * 获取Mouth completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,50], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Mouth Mouth completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,50], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMouth() const;

                    /**
                     * 设置Mouth completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,50], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _mouth Mouth completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,50], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMouth(const int64_t& _mouth);

                    /**
                     * 判断参数 Mouth 是否已赋值
                     * @return Mouth 是否已赋值
                     * 
                     */
                    bool MouthHasBeenSet() const;

                    /**
                     * 获取Chin completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,70], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Chin Chin completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,70], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetChin() const;

                    /**
                     * 设置Chin completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,70], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _chin Chin completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,70], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetChin(const int64_t& _chin);

                    /**
                     * 判断参数 Chin 是否已赋值
                     * @return Chin 是否已赋值
                     * 
                     */
                    bool ChinHasBeenSet() const;

                private:

                    /**
                     * Eyebrow completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,80], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_eyebrow;
                    bool m_eyebrowHasBeenSet;

                    /**
                     * Eye completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,80], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_eye;
                    bool m_eyeHasBeenSet;

                    /**
                     * Nose completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,60], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_nose;
                    bool m_noseHasBeenSet;

                    /**
                     * Cheek completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,70], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cheek;
                    bool m_cheekHasBeenSet;

                    /**
                     * Mouth completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,50], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_mouth;
                    bool m_mouthHasBeenSet;

                    /**
                     * Chin completeness. Value range: [0,100]. The higher the score, the higher the completeness. 
Reference range: [0,70], which means incomplete.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_chin;
                    bool m_chinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_FACEQUALITYCOMPLETENESS_H_
