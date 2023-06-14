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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_FACEDETAILINFO_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_FACEDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/FaceRect.h>
#include <tencentcloud/iai/v20200303/model/FaceDetailAttributesInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Face information list.
                */
                class FaceDetailInfo : public AbstractModel
                {
                public:
                    FaceDetailInfo();
                    ~FaceDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Position of the detected face frame.
                     * @return FaceRect Position of the detected face frame.
                     * 
                     */
                    FaceRect GetFaceRect() const;

                    /**
                     * 设置Position of the detected face frame.
                     * @param _faceRect Position of the detected face frame.
                     * 
                     */
                    void SetFaceRect(const FaceRect& _faceRect);

                    /**
                     * 判断参数 FaceRect 是否已赋值
                     * @return FaceRect 是否已赋值
                     * 
                     */
                    bool FaceRectHasBeenSet() const;

                    /**
                     * 获取Face attribute information. According to the types specified in `FaceAttributesType`, the following face attributes will be returned: age (Age), beauty score (Beauty), 
emotion (Emotion), eye information (Eye), eyebrow information (Eyebrow), gender (Gender), 
hair information (Hair), hat information (Hat), pose (Headpose), mask information (Mask), mouth information (Mouse), beard information (Moustache), 
nose information (Nose), face shape (Shape), skin color (Skin), and smile information (Smile), etc.  
If no types are specified in `FaceAttributesType`, the detailed items returned by `FaceDetaiAttributesInfo` will be meaningless.
                     * @return FaceDetailAttributesInfo Face attribute information. According to the types specified in `FaceAttributesType`, the following face attributes will be returned: age (Age), beauty score (Beauty), 
emotion (Emotion), eye information (Eye), eyebrow information (Eyebrow), gender (Gender), 
hair information (Hair), hat information (Hat), pose (Headpose), mask information (Mask), mouth information (Mouse), beard information (Moustache), 
nose information (Nose), face shape (Shape), skin color (Skin), and smile information (Smile), etc.  
If no types are specified in `FaceAttributesType`, the detailed items returned by `FaceDetaiAttributesInfo` will be meaningless.
                     * 
                     */
                    FaceDetailAttributesInfo GetFaceDetailAttributesInfo() const;

                    /**
                     * 设置Face attribute information. According to the types specified in `FaceAttributesType`, the following face attributes will be returned: age (Age), beauty score (Beauty), 
emotion (Emotion), eye information (Eye), eyebrow information (Eyebrow), gender (Gender), 
hair information (Hair), hat information (Hat), pose (Headpose), mask information (Mask), mouth information (Mouse), beard information (Moustache), 
nose information (Nose), face shape (Shape), skin color (Skin), and smile information (Smile), etc.  
If no types are specified in `FaceAttributesType`, the detailed items returned by `FaceDetaiAttributesInfo` will be meaningless.
                     * @param _faceDetailAttributesInfo Face attribute information. According to the types specified in `FaceAttributesType`, the following face attributes will be returned: age (Age), beauty score (Beauty), 
emotion (Emotion), eye information (Eye), eyebrow information (Eyebrow), gender (Gender), 
hair information (Hair), hat information (Hat), pose (Headpose), mask information (Mask), mouth information (Mouse), beard information (Moustache), 
nose information (Nose), face shape (Shape), skin color (Skin), and smile information (Smile), etc.  
If no types are specified in `FaceAttributesType`, the detailed items returned by `FaceDetaiAttributesInfo` will be meaningless.
                     * 
                     */
                    void SetFaceDetailAttributesInfo(const FaceDetailAttributesInfo& _faceDetailAttributesInfo);

                    /**
                     * 判断参数 FaceDetailAttributesInfo 是否已赋值
                     * @return FaceDetailAttributesInfo 是否已赋值
                     * 
                     */
                    bool FaceDetailAttributesInfoHasBeenSet() const;

                private:

                    /**
                     * Position of the detected face frame.
                     */
                    FaceRect m_faceRect;
                    bool m_faceRectHasBeenSet;

                    /**
                     * Face attribute information. According to the types specified in `FaceAttributesType`, the following face attributes will be returned: age (Age), beauty score (Beauty), 
emotion (Emotion), eye information (Eye), eyebrow information (Eyebrow), gender (Gender), 
hair information (Hair), hat information (Hat), pose (Headpose), mask information (Mask), mouth information (Mouse), beard information (Moustache), 
nose information (Nose), face shape (Shape), skin color (Skin), and smile information (Smile), etc.  
If no types are specified in `FaceAttributesType`, the detailed items returned by `FaceDetaiAttributesInfo` will be meaningless.
                     */
                    FaceDetailAttributesInfo m_faceDetailAttributesInfo;
                    bool m_faceDetailAttributesInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_FACEDETAILINFO_H_
