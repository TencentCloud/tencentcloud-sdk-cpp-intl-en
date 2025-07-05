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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_FACEQUALITYINFO_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_FACEQUALITYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/FaceQualityCompleteness.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Face quality information, including score, sharpness, brightness, and completeness. Valid information will be returned only if `NeedFaceDetection` is set to 1.
                */
                class FaceQualityInfo : public AbstractModel
                {
                public:
                    FaceQualityInfo();
                    ~FaceQualityInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Quality score. Value range: [0,100]. It comprehensively evaluates whether the image quality is suitable for face recognition; the higher the score, the higher the quality. 
In normal cases, you only need to use `Score` as the overall quality standard score. Specific item scores such as `Sharpness`, `Brightness`, `Completeness` are for reference only.
Reference range: [0,40]: poor; [40,60]: fine; [60,80]: good; [80,100]: excellent. 
We recommend selecting images with a score above 70 for adding faces.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Score Quality score. Value range: [0,100]. It comprehensively evaluates whether the image quality is suitable for face recognition; the higher the score, the higher the quality. 
In normal cases, you only need to use `Score` as the overall quality standard score. Specific item scores such as `Sharpness`, `Brightness`, `Completeness` are for reference only.
Reference range: [0,40]: poor; [40,60]: fine; [60,80]: good; [80,100]: excellent. 
We recommend selecting images with a score above 70 for adding faces.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置Quality score. Value range: [0,100]. It comprehensively evaluates whether the image quality is suitable for face recognition; the higher the score, the higher the quality. 
In normal cases, you only need to use `Score` as the overall quality standard score. Specific item scores such as `Sharpness`, `Brightness`, `Completeness` are for reference only.
Reference range: [0,40]: poor; [40,60]: fine; [60,80]: good; [80,100]: excellent. 
We recommend selecting images with a score above 70 for adding faces.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _score Quality score. Value range: [0,100]. It comprehensively evaluates whether the image quality is suitable for face recognition; the higher the score, the higher the quality. 
In normal cases, you only need to use `Score` as the overall quality standard score. Specific item scores such as `Sharpness`, `Brightness`, `Completeness` are for reference only.
Reference range: [0,40]: poor; [40,60]: fine; [60,80]: good; [80,100]: excellent. 
We recommend selecting images with a score above 70 for adding faces.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取Sharpness. Value range: [0,100]. It evaluates the sharpness of the image. The higher the score, the sharper the image. 
Reference range: [0,40]: very blurry; [40,60]: blurry; [60,80]: fine; [80,100]: sharp. 
We recommend selecting images with a score above 80 for adding faces.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Sharpness Sharpness. Value range: [0,100]. It evaluates the sharpness of the image. The higher the score, the sharper the image. 
Reference range: [0,40]: very blurry; [40,60]: blurry; [60,80]: fine; [80,100]: sharp. 
We recommend selecting images with a score above 80 for adding faces.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSharpness() const;

                    /**
                     * 设置Sharpness. Value range: [0,100]. It evaluates the sharpness of the image. The higher the score, the sharper the image. 
Reference range: [0,40]: very blurry; [40,60]: blurry; [60,80]: fine; [80,100]: sharp. 
We recommend selecting images with a score above 80 for adding faces.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sharpness Sharpness. Value range: [0,100]. It evaluates the sharpness of the image. The higher the score, the sharper the image. 
Reference range: [0,40]: very blurry; [40,60]: blurry; [60,80]: fine; [80,100]: sharp. 
We recommend selecting images with a score above 80 for adding faces.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSharpness(const int64_t& _sharpness);

                    /**
                     * 判断参数 Sharpness 是否已赋值
                     * @return Sharpness 是否已赋值
                     * 
                     */
                    bool SharpnessHasBeenSet() const;

                    /**
                     * 获取Brightness. Value range: [0,100]. The brighter the image, the higher the score. 
Reference range: [0,30]: dark; [30,70]: normal; [70,100]: bright. 
We recommend selecting images in the [30,70] range for adding faces.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Brightness Brightness. Value range: [0,100]. The brighter the image, the higher the score. 
Reference range: [0,30]: dark; [30,70]: normal; [70,100]: bright. 
We recommend selecting images in the [30,70] range for adding faces.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBrightness() const;

                    /**
                     * 设置Brightness. Value range: [0,100]. The brighter the image, the higher the score. 
Reference range: [0,30]: dark; [30,70]: normal; [70,100]: bright. 
We recommend selecting images in the [30,70] range for adding faces.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _brightness Brightness. Value range: [0,100]. The brighter the image, the higher the score. 
Reference range: [0,30]: dark; [30,70]: normal; [70,100]: bright. 
We recommend selecting images in the [30,70] range for adding faces.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBrightness(const int64_t& _brightness);

                    /**
                     * 判断参数 Brightness 是否已赋值
                     * @return Brightness 是否已赋值
                     * 
                     */
                    bool BrightnessHasBeenSet() const;

                    /**
                     * 获取Completeness of facial features, which assesses the completeness of the eyebrows, eyes, nose, cheeks, mouth, and chin.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Completeness Completeness of facial features, which assesses the completeness of the eyebrows, eyes, nose, cheeks, mouth, and chin.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FaceQualityCompleteness GetCompleteness() const;

                    /**
                     * 设置Completeness of facial features, which assesses the completeness of the eyebrows, eyes, nose, cheeks, mouth, and chin.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _completeness Completeness of facial features, which assesses the completeness of the eyebrows, eyes, nose, cheeks, mouth, and chin.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCompleteness(const FaceQualityCompleteness& _completeness);

                    /**
                     * 判断参数 Completeness 是否已赋值
                     * @return Completeness 是否已赋值
                     * 
                     */
                    bool CompletenessHasBeenSet() const;

                private:

                    /**
                     * Quality score. Value range: [0,100]. It comprehensively evaluates whether the image quality is suitable for face recognition; the higher the score, the higher the quality. 
In normal cases, you only need to use `Score` as the overall quality standard score. Specific item scores such as `Sharpness`, `Brightness`, `Completeness` are for reference only.
Reference range: [0,40]: poor; [40,60]: fine; [60,80]: good; [80,100]: excellent. 
We recommend selecting images with a score above 70 for adding faces.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Sharpness. Value range: [0,100]. It evaluates the sharpness of the image. The higher the score, the sharper the image. 
Reference range: [0,40]: very blurry; [40,60]: blurry; [60,80]: fine; [80,100]: sharp. 
We recommend selecting images with a score above 80 for adding faces.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sharpness;
                    bool m_sharpnessHasBeenSet;

                    /**
                     * Brightness. Value range: [0,100]. The brighter the image, the higher the score. 
Reference range: [0,30]: dark; [30,70]: normal; [70,100]: bright. 
We recommend selecting images in the [30,70] range for adding faces.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_brightness;
                    bool m_brightnessHasBeenSet;

                    /**
                     * Completeness of facial features, which assesses the completeness of the eyebrows, eyes, nose, cheeks, mouth, and chin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FaceQualityCompleteness m_completeness;
                    bool m_completenessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_FACEQUALITYINFO_H_
