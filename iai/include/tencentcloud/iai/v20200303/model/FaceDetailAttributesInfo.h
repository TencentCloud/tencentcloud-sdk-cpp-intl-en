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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_FACEDETAILATTRIBUTESINFO_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_FACEDETAILATTRIBUTESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/AttributeItem.h>
#include <tencentcloud/iai/v20200303/model/Eye.h>
#include <tencentcloud/iai/v20200303/model/Eyebrow.h>
#include <tencentcloud/iai/v20200303/model/Hair.h>
#include <tencentcloud/iai/v20200303/model/Hat.h>
#include <tencentcloud/iai/v20200303/model/HeadPose.h>
#include <tencentcloud/iai/v20200303/model/Mouth.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Face attribute information. According to the types specified in `FaceAttributesType`, the following face attributes will be returned: Age, Beauty, 
Emotion, Eye, Eyebrow, Gender, 
Hair, Hat, Headpose, Mask, Mouth, Moustache, 
Nose, Shape, Skin, Smile, etc.  
If no types are specified in `FaceAttributesType`, the details returned by `FaceDetaiAttributesInfo` will be meaningless.
                */
                class FaceDetailAttributesInfo : public AbstractModel
                {
                public:
                    FaceDetailAttributesInfo();
                    ~FaceDetailAttributesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Age. Value range: [0,65], where 65 indicates 65 years old or above. 
If `FaceAttributesType` does not include `Age` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Age Age. Value range: [0,65], where 65 indicates 65 years old or above. 
If `FaceAttributesType` does not include `Age` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    int64_t GetAge() const;

                    /**
                     * 设置Age. Value range: [0,65], where 65 indicates 65 years old or above. 
If `FaceAttributesType` does not include `Age` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param _age Age. Value range: [0,65], where 65 indicates 65 years old or above. 
If `FaceAttributesType` does not include `Age` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    void SetAge(const int64_t& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取Beauty score. Value range: [0,100]. 
If `FaceAttributesType` does not include `Beauty` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Beauty Beauty score. Value range: [0,100]. 
If `FaceAttributesType` does not include `Beauty` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    int64_t GetBeauty() const;

                    /**
                     * 设置Beauty score. Value range: [0,100]. 
If `FaceAttributesType` does not include `Beauty` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param _beauty Beauty score. Value range: [0,100]. 
If `FaceAttributesType` does not include `Beauty` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    void SetBeauty(const int64_t& _beauty);

                    /**
                     * 判断参数 Beauty 是否已赋值
                     * @return Beauty 是否已赋值
                     * 
                     */
                    bool BeautyHasBeenSet() const;

                    /**
                     * 获取Emotion, including relaxed, happy, surprised, angry, sad, disgusted, and scared. 
The `Type` values of the `AttributeItem` include: 0: relaxed; 1: happy; 2: surprised; 3: angry; 4: sad; 5: disgusted; 6: scared.
If `FaceAttributesType` does not include `Emotion` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Emotion Emotion, including relaxed, happy, surprised, angry, sad, disgusted, and scared. 
The `Type` values of the `AttributeItem` include: 0: relaxed; 1: happy; 2: surprised; 3: angry; 4: sad; 5: disgusted; 6: scared.
If `FaceAttributesType` does not include `Emotion` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    AttributeItem GetEmotion() const;

                    /**
                     * 设置Emotion, including relaxed, happy, surprised, angry, sad, disgusted, and scared. 
The `Type` values of the `AttributeItem` include: 0: relaxed; 1: happy; 2: surprised; 3: angry; 4: sad; 5: disgusted; 6: scared.
If `FaceAttributesType` does not include `Emotion` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param _emotion Emotion, including relaxed, happy, surprised, angry, sad, disgusted, and scared. 
The `Type` values of the `AttributeItem` include: 0: relaxed; 1: happy; 2: surprised; 3: angry; 4: sad; 5: disgusted; 6: scared.
If `FaceAttributesType` does not include `Emotion` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    void SetEmotion(const AttributeItem& _emotion);

                    /**
                     * 判断参数 Emotion 是否已赋值
                     * @return Emotion 是否已赋值
                     * 
                     */
                    bool EmotionHasBeenSet() const;

                    /**
                     * 获取Eye information, including whether glasses are worn, whether eyes are closed, whether the person has double eyelids, and the eye size. 
If `FaceAttributesType` does not include `Eye` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Eye Eye information, including whether glasses are worn, whether eyes are closed, whether the person has double eyelids, and the eye size. 
If `FaceAttributesType` does not include `Eye` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    Eye GetEye() const;

                    /**
                     * 设置Eye information, including whether glasses are worn, whether eyes are closed, whether the person has double eyelids, and the eye size. 
If `FaceAttributesType` does not include `Eye` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param _eye Eye information, including whether glasses are worn, whether eyes are closed, whether the person has double eyelids, and the eye size. 
If `FaceAttributesType` does not include `Eye` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    void SetEye(const Eye& _eye);

                    /**
                     * 判断参数 Eye 是否已赋值
                     * @return Eye 是否已赋值
                     * 
                     */
                    bool EyeHasBeenSet() const;

                    /**
                     * 获取Eyebrow information, including whether the eyebrows are thick, curved, or long. 
If `FaceAttributesType` does not include `Eyebrow` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Eyebrow Eyebrow information, including whether the eyebrows are thick, curved, or long. 
If `FaceAttributesType` does not include `Eyebrow` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    Eyebrow GetEyebrow() const;

                    /**
                     * 设置Eyebrow information, including whether the eyebrows are thick, curved, or long. 
If `FaceAttributesType` does not include `Eyebrow` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param _eyebrow Eyebrow information, including whether the eyebrows are thick, curved, or long. 
If `FaceAttributesType` does not include `Eyebrow` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    void SetEyebrow(const Eyebrow& _eyebrow);

                    /**
                     * 判断参数 Eyebrow 是否已赋值
                     * @return Eyebrow 是否已赋值
                     * 
                     */
                    bool EyebrowHasBeenSet() const;

                    /**
                     * 获取Gender information. 
The `Type` values of the `AttributeItem` include: 0: male; 1: female.	
If `FaceAttributesType` does not include `Gender` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Gender Gender information. 
The `Type` values of the `AttributeItem` include: 0: male; 1: female.	
If `FaceAttributesType` does not include `Gender` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    AttributeItem GetGender() const;

                    /**
                     * 设置Gender information. 
The `Type` values of the `AttributeItem` include: 0: male; 1: female.	
If `FaceAttributesType` does not include `Gender` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param _gender Gender information. 
The `Type` values of the `AttributeItem` include: 0: male; 1: female.	
If `FaceAttributesType` does not include `Gender` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    void SetGender(const AttributeItem& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取Hair information, including length, bang, and color. 
If `FaceAttributesType` does not include `Hair` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Hair Hair information, including length, bang, and color. 
If `FaceAttributesType` does not include `Hair` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    Hair GetHair() const;

                    /**
                     * 设置Hair information, including length, bang, and color. 
If `FaceAttributesType` does not include `Hair` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param _hair Hair information, including length, bang, and color. 
If `FaceAttributesType` does not include `Hair` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    void SetHair(const Hair& _hair);

                    /**
                     * 判断参数 Hair 是否已赋值
                     * @return Hair 是否已赋值
                     * 
                     */
                    bool HairHasBeenSet() const;

                    /**
                     * 获取Hat information, including whether a hat is worn, hat style, and hat color. 
If `FaceAttributesType` does not include `Hat` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Hat Hat information, including whether a hat is worn, hat style, and hat color. 
If `FaceAttributesType` does not include `Hat` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    Hat GetHat() const;

                    /**
                     * 设置Hat information, including whether a hat is worn, hat style, and hat color. 
If `FaceAttributesType` does not include `Hat` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param _hat Hat information, including whether a hat is worn, hat style, and hat color. 
If `FaceAttributesType` does not include `Hat` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    void SetHat(const Hat& _hat);

                    /**
                     * 判断参数 Hat 是否已赋值
                     * @return Hat 是否已赋值
                     * 
                     */
                    bool HatHasBeenSet() const;

                    /**
                     * 获取Pose information, including the face pitch, yaw, and roll. 
If `FaceAttributesType` does not include `Headpose` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return HeadPose Pose information, including the face pitch, yaw, and roll. 
If `FaceAttributesType` does not include `Headpose` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    HeadPose GetHeadPose() const;

                    /**
                     * 设置Pose information, including the face pitch, yaw, and roll. 
If `FaceAttributesType` does not include `Headpose` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param _headPose Pose information, including the face pitch, yaw, and roll. 
If `FaceAttributesType` does not include `Headpose` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    void SetHeadPose(const HeadPose& _headPose);

                    /**
                     * 判断参数 HeadPose 是否已赋值
                     * @return HeadPose 是否已赋值
                     * 
                     */
                    bool HeadPoseHasBeenSet() const;

                    /**
                     * 获取Mask information. 
The `Type` values of the `AttributeItem` include: 0: no mask; 1: the mask is worn and does not cover the face; 2: the mask is worn and covers the chin; 3: the mask is worn and covers the mouth; 4: the mask is worn properly.
If `FaceAttributesType` does not include `Mask` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Mask Mask information. 
The `Type` values of the `AttributeItem` include: 0: no mask; 1: the mask is worn and does not cover the face; 2: the mask is worn and covers the chin; 3: the mask is worn and covers the mouth; 4: the mask is worn properly.
If `FaceAttributesType` does not include `Mask` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    AttributeItem GetMask() const;

                    /**
                     * 设置Mask information. 
The `Type` values of the `AttributeItem` include: 0: no mask; 1: the mask is worn and does not cover the face; 2: the mask is worn and covers the chin; 3: the mask is worn and covers the mouth; 4: the mask is worn properly.
If `FaceAttributesType` does not include `Mask` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param _mask Mask information. 
The `Type` values of the `AttributeItem` include: 0: no mask; 1: the mask is worn and does not cover the face; 2: the mask is worn and covers the chin; 3: the mask is worn and covers the mouth; 4: the mask is worn properly.
If `FaceAttributesType` does not include `Mask` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    void SetMask(const AttributeItem& _mask);

                    /**
                     * 判断参数 Mask 是否已赋值
                     * @return Mask 是否已赋值
                     * 
                     */
                    bool MaskHasBeenSet() const;

                    /**
                     * 获取Mouth information, including whether the mouth is open and the lip thickness. 
If `FaceAttributesType` does not include `Mouth` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Mouth Mouth information, including whether the mouth is open and the lip thickness. 
If `FaceAttributesType` does not include `Mouth` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    Mouth GetMouth() const;

                    /**
                     * 设置Mouth information, including whether the mouth is open and the lip thickness. 
If `FaceAttributesType` does not include `Mouth` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param _mouth Mouth information, including whether the mouth is open and the lip thickness. 
If `FaceAttributesType` does not include `Mouth` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    void SetMouth(const Mouth& _mouth);

                    /**
                     * 判断参数 Mouth 是否已赋值
                     * @return Mouth 是否已赋值
                     * 
                     */
                    bool MouthHasBeenSet() const;

                    /**
                     * 获取Beard information.
The `Type` values of the `AttributeItem` include: 0: no beard; 1: beard detected. 
If `FaceAttributesType` does not include `Moustache` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Moustache Beard information.
The `Type` values of the `AttributeItem` include: 0: no beard; 1: beard detected. 
If `FaceAttributesType` does not include `Moustache` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    AttributeItem GetMoustache() const;

                    /**
                     * 设置Beard information.
The `Type` values of the `AttributeItem` include: 0: no beard; 1: beard detected. 
If `FaceAttributesType` does not include `Moustache` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param _moustache Beard information.
The `Type` values of the `AttributeItem` include: 0: no beard; 1: beard detected. 
If `FaceAttributesType` does not include `Moustache` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    void SetMoustache(const AttributeItem& _moustache);

                    /**
                     * 判断参数 Moustache 是否已赋值
                     * @return Moustache 是否已赋值
                     * 
                     */
                    bool MoustacheHasBeenSet() const;

                    /**
                     * 获取Nose information. 
The `Type` values of the `AttributeItem` include: 0: upturned nose; 1: aquiline nose; 2: general nose; 3: bulbous nose.
If `FaceAttributesType` does not include `Nose` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Nose Nose information. 
The `Type` values of the `AttributeItem` include: 0: upturned nose; 1: aquiline nose; 2: general nose; 3: bulbous nose.
If `FaceAttributesType` does not include `Nose` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    AttributeItem GetNose() const;

                    /**
                     * 设置Nose information. 
The `Type` values of the `AttributeItem` include: 0: upturned nose; 1: aquiline nose; 2: general nose; 3: bulbous nose.
If `FaceAttributesType` does not include `Nose` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param _nose Nose information. 
The `Type` values of the `AttributeItem` include: 0: upturned nose; 1: aquiline nose; 2: general nose; 3: bulbous nose.
If `FaceAttributesType` does not include `Nose` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    void SetNose(const AttributeItem& _nose);

                    /**
                     * 判断参数 Nose 是否已赋值
                     * @return Nose 是否已赋值
                     * 
                     */
                    bool NoseHasBeenSet() const;

                    /**
                     * 获取Face shape information. 
The `Type` values of the `AttributeItem` include: 0: square; 1: triangular; 2: oval; 3: heart-shaped; 4: round.
If `FaceAttributesType` does not include `Shape` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Shape Face shape information. 
The `Type` values of the `AttributeItem` include: 0: square; 1: triangular; 2: oval; 3: heart-shaped; 4: round.
If `FaceAttributesType` does not include `Shape` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    AttributeItem GetShape() const;

                    /**
                     * 设置Face shape information. 
The `Type` values of the `AttributeItem` include: 0: square; 1: triangular; 2: oval; 3: heart-shaped; 4: round.
If `FaceAttributesType` does not include `Shape` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param _shape Face shape information. 
The `Type` values of the `AttributeItem` include: 0: square; 1: triangular; 2: oval; 3: heart-shaped; 4: round.
If `FaceAttributesType` does not include `Shape` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    void SetShape(const AttributeItem& _shape);

                    /**
                     * 判断参数 Shape 是否已赋值
                     * @return Shape 是否已赋值
                     * 
                     */
                    bool ShapeHasBeenSet() const;

                    /**
                     * 获取Skin color information. 
The `Type` values of the `AttributeItem` include: 0: yellow; 1: brown; 2: black; 3: white.
If `FaceAttributesType` does not include `Skin` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Skin Skin color information. 
The `Type` values of the `AttributeItem` include: 0: yellow; 1: brown; 2: black; 3: white.
If `FaceAttributesType` does not include `Skin` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    AttributeItem GetSkin() const;

                    /**
                     * 设置Skin color information. 
The `Type` values of the `AttributeItem` include: 0: yellow; 1: brown; 2: black; 3: white.
If `FaceAttributesType` does not include `Skin` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param _skin Skin color information. 
The `Type` values of the `AttributeItem` include: 0: yellow; 1: brown; 2: black; 3: white.
If `FaceAttributesType` does not include `Skin` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    void SetSkin(const AttributeItem& _skin);

                    /**
                     * 判断参数 Skin 是否已赋值
                     * @return Skin 是否已赋值
                     * 
                     */
                    bool SkinHasBeenSet() const;

                    /**
                     * 获取Smile level. Value range: [0,100]. 
If `FaceAttributesType` does not include `Smile` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @return Smile Smile level. Value range: [0,100]. 
If `FaceAttributesType` does not include `Smile` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    int64_t GetSmile() const;

                    /**
                     * 设置Smile level. Value range: [0,100]. 
If `FaceAttributesType` does not include `Smile` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * @param _smile Smile level. Value range: [0,100]. 
If `FaceAttributesType` does not include `Smile` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     * 
                     */
                    void SetSmile(const int64_t& _smile);

                    /**
                     * 判断参数 Smile 是否已赋值
                     * @return Smile 是否已赋值
                     * 
                     */
                    bool SmileHasBeenSet() const;

                private:

                    /**
                     * Age. Value range: [0,65], where 65 indicates 65 years old or above. 
If `FaceAttributesType` does not include `Age` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    int64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * Beauty score. Value range: [0,100]. 
If `FaceAttributesType` does not include `Beauty` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    int64_t m_beauty;
                    bool m_beautyHasBeenSet;

                    /**
                     * Emotion, including relaxed, happy, surprised, angry, sad, disgusted, and scared. 
The `Type` values of the `AttributeItem` include: 0: relaxed; 1: happy; 2: surprised; 3: angry; 4: sad; 5: disgusted; 6: scared.
If `FaceAttributesType` does not include `Emotion` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    AttributeItem m_emotion;
                    bool m_emotionHasBeenSet;

                    /**
                     * Eye information, including whether glasses are worn, whether eyes are closed, whether the person has double eyelids, and the eye size. 
If `FaceAttributesType` does not include `Eye` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    Eye m_eye;
                    bool m_eyeHasBeenSet;

                    /**
                     * Eyebrow information, including whether the eyebrows are thick, curved, or long. 
If `FaceAttributesType` does not include `Eyebrow` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    Eyebrow m_eyebrow;
                    bool m_eyebrowHasBeenSet;

                    /**
                     * Gender information. 
The `Type` values of the `AttributeItem` include: 0: male; 1: female.	
If `FaceAttributesType` does not include `Gender` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    AttributeItem m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * Hair information, including length, bang, and color. 
If `FaceAttributesType` does not include `Hair` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    Hair m_hair;
                    bool m_hairHasBeenSet;

                    /**
                     * Hat information, including whether a hat is worn, hat style, and hat color. 
If `FaceAttributesType` does not include `Hat` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    Hat m_hat;
                    bool m_hatHasBeenSet;

                    /**
                     * Pose information, including the face pitch, yaw, and roll. 
If `FaceAttributesType` does not include `Headpose` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    HeadPose m_headPose;
                    bool m_headPoseHasBeenSet;

                    /**
                     * Mask information. 
The `Type` values of the `AttributeItem` include: 0: no mask; 1: the mask is worn and does not cover the face; 2: the mask is worn and covers the chin; 3: the mask is worn and covers the mouth; 4: the mask is worn properly.
If `FaceAttributesType` does not include `Mask` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    AttributeItem m_mask;
                    bool m_maskHasBeenSet;

                    /**
                     * Mouth information, including whether the mouth is open and the lip thickness. 
If `FaceAttributesType` does not include `Mouth` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    Mouth m_mouth;
                    bool m_mouthHasBeenSet;

                    /**
                     * Beard information.
The `Type` values of the `AttributeItem` include: 0: no beard; 1: beard detected. 
If `FaceAttributesType` does not include `Moustache` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    AttributeItem m_moustache;
                    bool m_moustacheHasBeenSet;

                    /**
                     * Nose information. 
The `Type` values of the `AttributeItem` include: 0: upturned nose; 1: aquiline nose; 2: general nose; 3: bulbous nose.
If `FaceAttributesType` does not include `Nose` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    AttributeItem m_nose;
                    bool m_noseHasBeenSet;

                    /**
                     * Face shape information. 
The `Type` values of the `AttributeItem` include: 0: square; 1: triangular; 2: oval; 3: heart-shaped; 4: round.
If `FaceAttributesType` does not include `Shape` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    AttributeItem m_shape;
                    bool m_shapeHasBeenSet;

                    /**
                     * Skin color information. 
The `Type` values of the `AttributeItem` include: 0: yellow; 1: brown; 2: black; 3: white.
If `FaceAttributesType` does not include `Skin` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    AttributeItem m_skin;
                    bool m_skinHasBeenSet;

                    /**
                     * Smile level. Value range: [0,100]. 
If `FaceAttributesType` does not include `Smile` or more than 5 faces are detected, this parameter will still be returned but meaningless.
                     */
                    int64_t m_smile;
                    bool m_smileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_FACEDETAILATTRIBUTESINFO_H_
