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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_MERGEINFO_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_MERGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20220927/model/FaceRect.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * Face position information on the face image and material template image for fusion
                */
                class MergeInfo : public AbstractModel
                {
                public:
                    MergeInfo();
                    ~MergeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enter the image Base64 code.
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Material image limitation: face size in the image greater than 34×34 pixels; image size greater than 64×64 pixels. (After encoding, the image size may increase by about 30%. It is recommended to control the image size reasonably.)
●Supported image format: JPG or PNG
                     * @return Image Enter the image Base64 code.
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Material image limitation: face size in the image greater than 34×34 pixels; image size greater than 64×64 pixels. (After encoding, the image size may increase by about 30%. It is recommended to control the image size reasonably.)
●Supported image format: JPG or PNG
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置Enter the image Base64 code.
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Material image limitation: face size in the image greater than 34×34 pixels; image size greater than 64×64 pixels. (After encoding, the image size may increase by about 30%. It is recommended to control the image size reasonably.)
●Supported image format: JPG or PNG
                     * @param _image Enter the image Base64 code.
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Material image limitation: face size in the image greater than 34×34 pixels; image size greater than 64×64 pixels. (After encoding, the image size may increase by about 30%. It is recommended to control the image size reasonably.)
●Supported image format: JPG or PNG
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取Enter the image URL.
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Material image limitation: face size in the image greater than 34×34 pixels; image size greater than 64×64 pixels. (After encoding, the image size may increase by about 30%. It is recommended to control the image size reasonably.)
●Supported image format: JPG or PNG
                     * @return Url Enter the image URL.
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Material image limitation: face size in the image greater than 34×34 pixels; image size greater than 64×64 pixels. (After encoding, the image size may increase by about 30%. It is recommended to control the image size reasonably.)
●Supported image format: JPG or PNG
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Enter the image URL.
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Material image limitation: face size in the image greater than 34×34 pixels; image size greater than 64×64 pixels. (After encoding, the image size may increase by about 30%. It is recommended to control the image size reasonably.)
●Supported image format: JPG or PNG
                     * @param _url Enter the image URL.
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Material image limitation: face size in the image greater than 34×34 pixels; image size greater than 64×64 pixels. (After encoding, the image size may increase by about 30%. It is recommended to control the image size reasonably.)
●Supported image format: JPG or PNG
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Face position information (face box) on the uploaded image
Width and height are no less than 30.
                     * @return InputImageFaceRect Face position information (face box) on the uploaded image
Width and height are no less than 30.
                     * 
                     */
                    FaceRect GetInputImageFaceRect() const;

                    /**
                     * 设置Face position information (face box) on the uploaded image
Width and height are no less than 30.
                     * @param _inputImageFaceRect Face position information (face box) on the uploaded image
Width and height are no less than 30.
                     * 
                     */
                    void SetInputImageFaceRect(const FaceRect& _inputImageFaceRect);

                    /**
                     * 判断参数 InputImageFaceRect 是否已赋值
                     * @return InputImageFaceRect 是否已赋值
                     * 
                     */
                    bool InputImageFaceRectHasBeenSet() const;

                    /**
                     * 获取Material face ID. If this parameter is left blank, the largest face is used by default.
                     * @return TemplateFaceID Material face ID. If this parameter is left blank, the largest face is used by default.
                     * 
                     */
                    std::string GetTemplateFaceID() const;

                    /**
                     * 设置Material face ID. If this parameter is left blank, the largest face is used by default.
                     * @param _templateFaceID Material face ID. If this parameter is left blank, the largest face is used by default.
                     * 
                     */
                    void SetTemplateFaceID(const std::string& _templateFaceID);

                    /**
                     * 判断参数 TemplateFaceID 是否已赋值
                     * @return TemplateFaceID 是否已赋值
                     * 
                     */
                    bool TemplateFaceIDHasBeenSet() const;

                    /**
                     * 获取Face position information (face box) on the template. If this parameter is left blank, the largest face is used by default. This parameter applies to scenes where custom material templates are used for fusion.
Width and height are no less than 30.
                     * @return TemplateFaceRect Face position information (face box) on the template. If this parameter is left blank, the largest face is used by default. This parameter applies to scenes where custom material templates are used for fusion.
Width and height are no less than 30.
                     * 
                     */
                    FaceRect GetTemplateFaceRect() const;

                    /**
                     * 设置Face position information (face box) on the template. If this parameter is left blank, the largest face is used by default. This parameter applies to scenes where custom material templates are used for fusion.
Width and height are no less than 30.
                     * @param _templateFaceRect Face position information (face box) on the template. If this parameter is left blank, the largest face is used by default. This parameter applies to scenes where custom material templates are used for fusion.
Width and height are no less than 30.
                     * 
                     */
                    void SetTemplateFaceRect(const FaceRect& _templateFaceRect);

                    /**
                     * 判断参数 TemplateFaceRect 是否已赋值
                     * @return TemplateFaceRect 是否已赋值
                     * 
                     */
                    bool TemplateFaceRectHasBeenSet() const;

                private:

                    /**
                     * Enter the image Base64 code.
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Material image limitation: face size in the image greater than 34×34 pixels; image size greater than 64×64 pixels. (After encoding, the image size may increase by about 30%. It is recommended to control the image size reasonably.)
●Supported image format: JPG or PNG
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * Enter the image URL.
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Material image limitation: face size in the image greater than 34×34 pixels; image size greater than 64×64 pixels. (After encoding, the image size may increase by about 30%. It is recommended to control the image size reasonably.)
●Supported image format: JPG or PNG
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Face position information (face box) on the uploaded image
Width and height are no less than 30.
                     */
                    FaceRect m_inputImageFaceRect;
                    bool m_inputImageFaceRectHasBeenSet;

                    /**
                     * Material face ID. If this parameter is left blank, the largest face is used by default.
                     */
                    std::string m_templateFaceID;
                    bool m_templateFaceIDHasBeenSet;

                    /**
                     * Face position information (face box) on the template. If this parameter is left blank, the largest face is used by default. This parameter applies to scenes where custom material templates are used for fusion.
Width and height are no less than 30.
                     */
                    FaceRect m_templateFaceRect;
                    bool m_templateFaceRectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_MERGEINFO_H_
