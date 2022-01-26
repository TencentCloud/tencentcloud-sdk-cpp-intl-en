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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_FACEATTRIBUTESINFO_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_FACEATTRIBUTESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/FaceHairAttributesInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Face attributes, including gender, age, expression, 
beauty, glass, mask, hair, and pose (pitch, roll, yaw). Valid information will be returned only if `NeedFaceAttributes` is set to 1. The face attribute information of up to 5 largest faces in the image will be returned, and `FaceAttributesInfo` of the 6th and rest faces is meaningless.
                */
                class FaceAttributesInfo : public AbstractModel
                {
                public:
                    FaceAttributesInfo();
                    ~FaceAttributesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Gender. The gender is female for the value range [0,49] and male for the value range [50,100]. The closer the value to 0 or 100, the higher the confidence. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Gender Gender. The gender is female for the value range [0,49] and male for the value range [50,100]. The closer the value to 0 or 100, the higher the confidence. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置Gender. The gender is female for the value range [0,49] and male for the value range [50,100]. The closer the value to 0 or 100, the higher the confidence. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param Gender Gender. The gender is female for the value range [0,49] and male for the value range [50,100]. The closer the value to 0 or 100, the higher the confidence. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取Age. Value range: [0,100]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Age Age. Value range: [0,100]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    int64_t GetAge() const;

                    /**
                     * 设置Age. Value range: [0,100]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param Age Age. Value range: [0,100]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    void SetAge(const int64_t& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取Expression. Value range: [0 (normal)–50 (smile)–100 (laugh)]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Expression Expression. Value range: [0 (normal)–50 (smile)–100 (laugh)]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    int64_t GetExpression() const;

                    /**
                     * 设置Expression. Value range: [0 (normal)–50 (smile)–100 (laugh)]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param Expression Expression. Value range: [0 (normal)–50 (smile)–100 (laugh)]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    void SetExpression(const int64_t& _expression);

                    /**
                     * 判断参数 Expression 是否已赋值
                     * @return Expression 是否已赋值
                     */
                    bool ExpressionHasBeenSet() const;

                    /**
                     * 获取Whether glasses are present. Valid values: true, false. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Glass Whether glasses are present. Valid values: true, false. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    bool GetGlass() const;

                    /**
                     * 设置Whether glasses are present. Valid values: true, false. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param Glass Whether glasses are present. Valid values: true, false. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    void SetGlass(const bool& _glass);

                    /**
                     * 判断参数 Glass 是否已赋值
                     * @return Glass 是否已赋值
                     */
                    bool GlassHasBeenSet() const;

                    /**
                     * 获取Vertical offset in degrees. Value range: [-30,30]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless. 
We recommend selecting images in the [-10,10] range for adding faces.
                     * @return Pitch Vertical offset in degrees. Value range: [-30,30]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless. 
We recommend selecting images in the [-10,10] range for adding faces.
                     */
                    int64_t GetPitch() const;

                    /**
                     * 设置Vertical offset in degrees. Value range: [-30,30]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless. 
We recommend selecting images in the [-10,10] range for adding faces.
                     * @param Pitch Vertical offset in degrees. Value range: [-30,30]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless. 
We recommend selecting images in the [-10,10] range for adding faces.
                     */
                    void SetPitch(const int64_t& _pitch);

                    /**
                     * 判断参数 Pitch 是否已赋值
                     * @return Pitch 是否已赋值
                     */
                    bool PitchHasBeenSet() const;

                    /**
                     * 获取Horizontal offset in degrees. Value range: [-30,30]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless. 
We recommend selecting images in the [-10,10] range for adding faces.
                     * @return Yaw Horizontal offset in degrees. Value range: [-30,30]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless. 
We recommend selecting images in the [-10,10] range for adding faces.
                     */
                    int64_t GetYaw() const;

                    /**
                     * 设置Horizontal offset in degrees. Value range: [-30,30]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless. 
We recommend selecting images in the [-10,10] range for adding faces.
                     * @param Yaw Horizontal offset in degrees. Value range: [-30,30]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless. 
We recommend selecting images in the [-10,10] range for adding faces.
                     */
                    void SetYaw(const int64_t& _yaw);

                    /**
                     * 判断参数 Yaw 是否已赋值
                     * @return Yaw 是否已赋值
                     */
                    bool YawHasBeenSet() const;

                    /**
                     * 获取Horizontal rotation in degrees. Value range: [-180,180]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.  
We recommend selecting images in the [-20,20] range for adding faces.
                     * @return Roll Horizontal rotation in degrees. Value range: [-180,180]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.  
We recommend selecting images in the [-20,20] range for adding faces.
                     */
                    int64_t GetRoll() const;

                    /**
                     * 设置Horizontal rotation in degrees. Value range: [-180,180]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.  
We recommend selecting images in the [-20,20] range for adding faces.
                     * @param Roll Horizontal rotation in degrees. Value range: [-180,180]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.  
We recommend selecting images in the [-20,20] range for adding faces.
                     */
                    void SetRoll(const int64_t& _roll);

                    /**
                     * 判断参数 Roll 是否已赋值
                     * @return Roll 是否已赋值
                     */
                    bool RollHasBeenSet() const;

                    /**
                     * 获取Beauty. Value range: [0,100]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Beauty Beauty. Value range: [0,100]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    int64_t GetBeauty() const;

                    /**
                     * 设置Beauty. Value range: [0,100]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param Beauty Beauty. Value range: [0,100]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    void SetBeauty(const int64_t& _beauty);

                    /**
                     * 判断参数 Beauty 是否已赋值
                     * @return Beauty 是否已赋值
                     */
                    bool BeautyHasBeenSet() const;

                    /**
                     * 获取Whether hat is present. Valid values: true, false. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Hat Whether hat is present. Valid values: true, false. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetHat() const;

                    /**
                     * 设置Whether hat is present. Valid values: true, false. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Hat Whether hat is present. Valid values: true, false. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHat(const bool& _hat);

                    /**
                     * 判断参数 Hat 是否已赋值
                     * @return Hat 是否已赋值
                     */
                    bool HatHasBeenSet() const;

                    /**
                     * 获取Whether mask is present. Valid values: true, false. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Mask Whether mask is present. Valid values: true, false. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetMask() const;

                    /**
                     * 设置Whether mask is present. Valid values: true, false. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Mask Whether mask is present. Valid values: true, false. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMask(const bool& _mask);

                    /**
                     * 判断参数 Mask 是否已赋值
                     * @return Mask 是否已赋值
                     */
                    bool MaskHasBeenSet() const;

                    /**
                     * 获取Hair information, including length, bang, and color. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Hair Hair information, including length, bang, and color. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FaceHairAttributesInfo GetHair() const;

                    /**
                     * 设置Hair information, including length, bang, and color. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Hair Hair information, including length, bang, and color. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHair(const FaceHairAttributesInfo& _hair);

                    /**
                     * 判断参数 Hair 是否已赋值
                     * @return Hair 是否已赋值
                     */
                    bool HairHasBeenSet() const;

                    /**
                     * 获取Whether the eyes are open. Valid values: true, false. As long as there is more than one eye closed, `false` will be returned. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EyeOpen Whether the eyes are open. Valid values: true, false. As long as there is more than one eye closed, `false` will be returned. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetEyeOpen() const;

                    /**
                     * 设置Whether the eyes are open. Valid values: true, false. As long as there is more than one eye closed, `false` will be returned. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param EyeOpen Whether the eyes are open. Valid values: true, false. As long as there is more than one eye closed, `false` will be returned. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEyeOpen(const bool& _eyeOpen);

                    /**
                     * 判断参数 EyeOpen 是否已赋值
                     * @return EyeOpen 是否已赋值
                     */
                    bool EyeOpenHasBeenSet() const;

                private:

                    /**
                     * Gender. The gender is female for the value range [0,49] and male for the value range [50,100]. The closer the value to 0 or 100, the higher the confidence. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * Age. Value range: [0,100]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    int64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * Expression. Value range: [0 (normal)–50 (smile)–100 (laugh)]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    int64_t m_expression;
                    bool m_expressionHasBeenSet;

                    /**
                     * Whether glasses are present. Valid values: true, false. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    bool m_glass;
                    bool m_glassHasBeenSet;

                    /**
                     * Vertical offset in degrees. Value range: [-30,30]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless. 
We recommend selecting images in the [-10,10] range for adding faces.
                     */
                    int64_t m_pitch;
                    bool m_pitchHasBeenSet;

                    /**
                     * Horizontal offset in degrees. Value range: [-30,30]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless. 
We recommend selecting images in the [-10,10] range for adding faces.
                     */
                    int64_t m_yaw;
                    bool m_yawHasBeenSet;

                    /**
                     * Horizontal rotation in degrees. Value range: [-180,180]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.  
We recommend selecting images in the [-20,20] range for adding faces.
                     */
                    int64_t m_roll;
                    bool m_rollHasBeenSet;

                    /**
                     * Beauty. Value range: [0,100]. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    int64_t m_beauty;
                    bool m_beautyHasBeenSet;

                    /**
                     * Whether hat is present. Valid values: true, false. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_hat;
                    bool m_hatHasBeenSet;

                    /**
                     * Whether mask is present. Valid values: true, false. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_mask;
                    bool m_maskHasBeenSet;

                    /**
                     * Hair information, including length, bang, and color. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FaceHairAttributesInfo m_hair;
                    bool m_hairHasBeenSet;

                    /**
                     * Whether the eyes are open. Valid values: true, false. As long as there is more than one eye closed, `false` will be returned. If `NeedFaceAttributes` is not 1 or more than 5 faces are detected, this parameter will still be returned but meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_eyeOpen;
                    bool m_eyeOpenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_FACEATTRIBUTESINFO_H_
