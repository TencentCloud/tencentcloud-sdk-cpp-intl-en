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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACEATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACEATTRIBUTESREQUEST_H_

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
                * DetectFaceAttributes request structure.
                */
                class DetectFaceAttributesRequest : public AbstractModel
                {
                public:
                    DetectFaceAttributesRequest();
                    ~DetectFaceAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Maximum number of processable faces. 
Default value: 1 (i.e., detecting only the face with the largest size in the image). Maximum value: 120. 
This parameter is used to control the number of faces in the image to be detected. The smaller the value, the faster the processing.
                     * @return MaxFaceNum Maximum number of processable faces. 
Default value: 1 (i.e., detecting only the face with the largest size in the image). Maximum value: 120. 
This parameter is used to control the number of faces in the image to be detected. The smaller the value, the faster the processing.
                     */
                    uint64_t GetMaxFaceNum() const;

                    /**
                     * 设置Maximum number of processable faces. 
Default value: 1 (i.e., detecting only the face with the largest size in the image). Maximum value: 120. 
This parameter is used to control the number of faces in the image to be detected. The smaller the value, the faster the processing.
                     * @param MaxFaceNum Maximum number of processable faces. 
Default value: 1 (i.e., detecting only the face with the largest size in the image). Maximum value: 120. 
This parameter is used to control the number of faces in the image to be detected. The smaller the value, the faster the processing.
                     */
                    void SetMaxFaceNum(const uint64_t& _maxFaceNum);

                    /**
                     * 判断参数 MaxFaceNum 是否已赋值
                     * @return MaxFaceNum 是否已赋值
                     */
                    bool MaxFaceNumHasBeenSet() const;

                    /**
                     * 获取Base64-encoded image data, which cannot exceed 5 MB.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats. 
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     * @return Image Base64-encoded image data, which cannot exceed 5 MB.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats. 
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     */
                    std::string GetImage() const;

                    /**
                     * 设置Base64-encoded image data, which cannot exceed 5 MB.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats. 
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     * @param Image Base64-encoded image data, which cannot exceed 5 MB.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats. 
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取Image URL. 
The image cannot exceed 5 MB in size after being Base64-encoded. 
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used. 
We recommend storing the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low. 
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     * @return Url Image URL. 
The image cannot exceed 5 MB in size after being Base64-encoded. 
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used. 
We recommend storing the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low. 
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Image URL. 
The image cannot exceed 5 MB in size after being Base64-encoded. 
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used. 
We recommend storing the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low. 
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     * @param Url Image URL. 
The image cannot exceed 5 MB in size after being Base64-encoded. 
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used. 
We recommend storing the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low. 
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Whether to return attributes such as age, gender, and emotion. 
Valid values (case-insensitive): None, Age, Beauty, Emotion, Eye, Eyebrow, Gender, Hair, Hat, Headpose, Mask, Mouth, Moustache, Nose, Shape, Skin, Smile. 
  
`None` indicates that no attributes need to be returned, which is the default value; that is, if the `FaceAttributesType` attribute is empty, the values of all attributes will be `0`.
You need to combine the attributes into a string and separate them by comma. The sequence of the attributes is not limited. 
For more information on the attributes, see the output parameters as described below. 
The face attribute information of up to 5 largest faces in the image will be returned, and `AttributesInfo` of the 6th and rest faces is meaningless.
                     * @return FaceAttributesType Whether to return attributes such as age, gender, and emotion. 
Valid values (case-insensitive): None, Age, Beauty, Emotion, Eye, Eyebrow, Gender, Hair, Hat, Headpose, Mask, Mouth, Moustache, Nose, Shape, Skin, Smile. 
  
`None` indicates that no attributes need to be returned, which is the default value; that is, if the `FaceAttributesType` attribute is empty, the values of all attributes will be `0`.
You need to combine the attributes into a string and separate them by comma. The sequence of the attributes is not limited. 
For more information on the attributes, see the output parameters as described below. 
The face attribute information of up to 5 largest faces in the image will be returned, and `AttributesInfo` of the 6th and rest faces is meaningless.
                     */
                    std::string GetFaceAttributesType() const;

                    /**
                     * 设置Whether to return attributes such as age, gender, and emotion. 
Valid values (case-insensitive): None, Age, Beauty, Emotion, Eye, Eyebrow, Gender, Hair, Hat, Headpose, Mask, Mouth, Moustache, Nose, Shape, Skin, Smile. 
  
`None` indicates that no attributes need to be returned, which is the default value; that is, if the `FaceAttributesType` attribute is empty, the values of all attributes will be `0`.
You need to combine the attributes into a string and separate them by comma. The sequence of the attributes is not limited. 
For more information on the attributes, see the output parameters as described below. 
The face attribute information of up to 5 largest faces in the image will be returned, and `AttributesInfo` of the 6th and rest faces is meaningless.
                     * @param FaceAttributesType Whether to return attributes such as age, gender, and emotion. 
Valid values (case-insensitive): None, Age, Beauty, Emotion, Eye, Eyebrow, Gender, Hair, Hat, Headpose, Mask, Mouth, Moustache, Nose, Shape, Skin, Smile. 
  
`None` indicates that no attributes need to be returned, which is the default value; that is, if the `FaceAttributesType` attribute is empty, the values of all attributes will be `0`.
You need to combine the attributes into a string and separate them by comma. The sequence of the attributes is not limited. 
For more information on the attributes, see the output parameters as described below. 
The face attribute information of up to 5 largest faces in the image will be returned, and `AttributesInfo` of the 6th and rest faces is meaningless.
                     */
                    void SetFaceAttributesType(const std::string& _faceAttributesType);

                    /**
                     * 判断参数 FaceAttributesType 是否已赋值
                     * @return FaceAttributesType 是否已赋值
                     */
                    bool FaceAttributesTypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable the support for rotated image recognition. 0: no; 1: yes. Default value: 0. When the face in the image is rotated and the image has no EXIF information, if this parameter is not enabled, the face in the image cannot be correctly detected and recognized. If you are sure that the input image contains EXIF information or the face in the image is not rotated, do not enable this parameter, as the overall time consumption may increase by hundreds of milliseconds after it is enabled.
                     * @return NeedRotateDetection Whether to enable the support for rotated image recognition. 0: no; 1: yes. Default value: 0. When the face in the image is rotated and the image has no EXIF information, if this parameter is not enabled, the face in the image cannot be correctly detected and recognized. If you are sure that the input image contains EXIF information or the face in the image is not rotated, do not enable this parameter, as the overall time consumption may increase by hundreds of milliseconds after it is enabled.
                     */
                    uint64_t GetNeedRotateDetection() const;

                    /**
                     * 设置Whether to enable the support for rotated image recognition. 0: no; 1: yes. Default value: 0. When the face in the image is rotated and the image has no EXIF information, if this parameter is not enabled, the face in the image cannot be correctly detected and recognized. If you are sure that the input image contains EXIF information or the face in the image is not rotated, do not enable this parameter, as the overall time consumption may increase by hundreds of milliseconds after it is enabled.
                     * @param NeedRotateDetection Whether to enable the support for rotated image recognition. 0: no; 1: yes. Default value: 0. When the face in the image is rotated and the image has no EXIF information, if this parameter is not enabled, the face in the image cannot be correctly detected and recognized. If you are sure that the input image contains EXIF information or the face in the image is not rotated, do not enable this parameter, as the overall time consumption may increase by hundreds of milliseconds after it is enabled.
                     */
                    void SetNeedRotateDetection(const uint64_t& _needRotateDetection);

                    /**
                     * 判断参数 NeedRotateDetection 是否已赋值
                     * @return NeedRotateDetection 是否已赋值
                     */
                    bool NeedRotateDetectionHasBeenSet() const;

                    /**
                     * 获取Algorithm model version used by the Face Recognition service. You can enter only `3.0` for this API.
                     * @return FaceModelVersion Algorithm model version used by the Face Recognition service. You can enter only `3.0` for this API.
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 设置Algorithm model version used by the Face Recognition service. You can enter only `3.0` for this API.
                     * @param FaceModelVersion Algorithm model version used by the Face Recognition service. You can enter only `3.0` for this API.
                     */
                    void SetFaceModelVersion(const std::string& _faceModelVersion);

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * Maximum number of processable faces. 
Default value: 1 (i.e., detecting only the face with the largest size in the image). Maximum value: 120. 
This parameter is used to control the number of faces in the image to be detected. The smaller the value, the faster the processing.
                     */
                    uint64_t m_maxFaceNum;
                    bool m_maxFaceNumHasBeenSet;

                    /**
                     * Base64-encoded image data, which cannot exceed 5 MB.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats. 
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * Image URL. 
The image cannot exceed 5 MB in size after being Base64-encoded. 
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used. 
We recommend storing the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low. 
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Whether to return attributes such as age, gender, and emotion. 
Valid values (case-insensitive): None, Age, Beauty, Emotion, Eye, Eyebrow, Gender, Hair, Hat, Headpose, Mask, Mouth, Moustache, Nose, Shape, Skin, Smile. 
  
`None` indicates that no attributes need to be returned, which is the default value; that is, if the `FaceAttributesType` attribute is empty, the values of all attributes will be `0`.
You need to combine the attributes into a string and separate them by comma. The sequence of the attributes is not limited. 
For more information on the attributes, see the output parameters as described below. 
The face attribute information of up to 5 largest faces in the image will be returned, and `AttributesInfo` of the 6th and rest faces is meaningless.
                     */
                    std::string m_faceAttributesType;
                    bool m_faceAttributesTypeHasBeenSet;

                    /**
                     * Whether to enable the support for rotated image recognition. 0: no; 1: yes. Default value: 0. When the face in the image is rotated and the image has no EXIF information, if this parameter is not enabled, the face in the image cannot be correctly detected and recognized. If you are sure that the input image contains EXIF information or the face in the image is not rotated, do not enable this parameter, as the overall time consumption may increase by hundreds of milliseconds after it is enabled.
                     */
                    uint64_t m_needRotateDetection;
                    bool m_needRotateDetectionHasBeenSet;

                    /**
                     * Algorithm model version used by the Face Recognition service. You can enter only `3.0` for this API.
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACEATTRIBUTESREQUEST_H_
