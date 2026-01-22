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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITHUNYUANTO3DRAPIDJOBREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITHUNYUANTO3DRAPIDJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * SubmitHunyuanTo3DRapidJob request structure.
                */
                class SubmitHunyuanTo3DRapidJobRequest : public AbstractModel
                {
                public:
                    SubmitHunyuanTo3DRapidJobRequest();
                    ~SubmitHunyuanTo3DRapidJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Text-To-3D, description of 3D content, forward Prompt content
Supports up to 200 utf-8 characters
Either ImageBase64, ImageUrl, or Prompt is required, and Prompt cannot coexist with ImageBase64/ImageUrl
                     * @return Prompt Text-To-3D, description of 3D content, forward Prompt content
Supports up to 200 utf-8 characters
Either ImageBase64, ImageUrl, or Prompt is required, and Prompt cannot coexist with ImageBase64/ImageUrl
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置Text-To-3D, description of 3D content, forward Prompt content
Supports up to 200 utf-8 characters
Either ImageBase64, ImageUrl, or Prompt is required, and Prompt cannot coexist with ImageBase64/ImageUrl
                     * @param _prompt Text-To-3D, description of 3D content, forward Prompt content
Supports up to 200 utf-8 characters
Either ImageBase64, ImageUrl, or Prompt is required, and Prompt cannot coexist with ImageBase64/ImageUrl
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取Input image Base64 data
Size: unilateral resolution requirement not less than 128, not greater than 5000, size not greater than 6mb (after encoding, size increases by approximately 30%). format:
jpg, png, jpeg, webp
Imagebase64, imageurl, and Prompt are required, but Prompt and imagebase64/imageurl cannot coexist
                     * @return ImageBase64 Input image Base64 data
Size: unilateral resolution requirement not less than 128, not greater than 5000, size not greater than 6mb (after encoding, size increases by approximately 30%). format:
jpg, png, jpeg, webp
Imagebase64, imageurl, and Prompt are required, but Prompt and imagebase64/imageurl cannot coexist
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置Input image Base64 data
Size: unilateral resolution requirement not less than 128, not greater than 5000, size not greater than 6mb (after encoding, size increases by approximately 30%). format:
jpg, png, jpeg, webp
Imagebase64, imageurl, and Prompt are required, but Prompt and imagebase64/imageurl cannot coexist
                     * @param _imageBase64 Input image Base64 data
Size: unilateral resolution requirement not less than 128, not greater than 5000, size not greater than 6mb (after encoding, size increases by approximately 30%). format:
jpg, png, jpeg, webp
Imagebase64, imageurl, and Prompt are required, but Prompt and imagebase64/imageurl cannot coexist
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取Input image Url size: 
Unilateral resolution requirement not less than 128, not greater than 5000. size not greater than 8mb
Format: jpg, png, jpeg, webp
Imagebase64, imageurl, and Prompt are required, and Prompt cannot coexist with imagebase64/imageurl	
                     * @return ImageUrl Input image Url size: 
Unilateral resolution requirement not less than 128, not greater than 5000. size not greater than 8mb
Format: jpg, png, jpeg, webp
Imagebase64, imageurl, and Prompt are required, and Prompt cannot coexist with imagebase64/imageurl	
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置Input image Url size: 
Unilateral resolution requirement not less than 128, not greater than 5000. size not greater than 8mb
Format: jpg, png, jpeg, webp
Imagebase64, imageurl, and Prompt are required, and Prompt cannot coexist with imagebase64/imageurl	
                     * @param _imageUrl Input image Url size: 
Unilateral resolution requirement not less than 128, not greater than 5000. size not greater than 8mb
Format: jpg, png, jpeg, webp
Imagebase64, imageurl, and Prompt are required, and Prompt cannot coexist with imagebase64/imageurl	
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取Specifies whether PBR material generation is enabled, false by default.	
                     * @return EnablePBR Specifies whether PBR material generation is enabled, false by default.	
                     * 
                     */
                    bool GetEnablePBR() const;

                    /**
                     * 设置Specifies whether PBR material generation is enabled, false by default.	
                     * @param _enablePBR Specifies whether PBR material generation is enabled, false by default.	
                     * 
                     */
                    void SetEnablePBR(const bool& _enablePBR);

                    /**
                     * 判断参数 EnablePBR 是否已赋值
                     * @return EnablePBR 是否已赋值
                     * 
                     */
                    bool EnablePBRHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable the single geometry generation option
When enabled, it generates a 3D model without textures (white model)
When enabled, the generative model does not support OBJ format
Default model file format is GLB
                     * @return EnableGeometry Specifies whether to enable the single geometry generation option
When enabled, it generates a 3D model without textures (white model)
When enabled, the generative model does not support OBJ format
Default model file format is GLB
                     * 
                     */
                    bool GetEnableGeometry() const;

                    /**
                     * 设置Specifies whether to enable the single geometry generation option
When enabled, it generates a 3D model without textures (white model)
When enabled, the generative model does not support OBJ format
Default model file format is GLB
                     * @param _enableGeometry Specifies whether to enable the single geometry generation option
When enabled, it generates a 3D model without textures (white model)
When enabled, the generative model does not support OBJ format
Default model file format is GLB
                     * 
                     */
                    void SetEnableGeometry(const bool& _enableGeometry);

                    /**
                     * 判断参数 EnableGeometry 是否已赋值
                     * @return EnableGeometry 是否已赋值
                     * 
                     */
                    bool EnableGeometryHasBeenSet() const;

                private:

                    /**
                     * Text-To-3D, description of 3D content, forward Prompt content
Supports up to 200 utf-8 characters
Either ImageBase64, ImageUrl, or Prompt is required, and Prompt cannot coexist with ImageBase64/ImageUrl
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * Input image Base64 data
Size: unilateral resolution requirement not less than 128, not greater than 5000, size not greater than 6mb (after encoding, size increases by approximately 30%). format:
jpg, png, jpeg, webp
Imagebase64, imageurl, and Prompt are required, but Prompt and imagebase64/imageurl cannot coexist
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * Input image Url size: 
Unilateral resolution requirement not less than 128, not greater than 5000. size not greater than 8mb
Format: jpg, png, jpeg, webp
Imagebase64, imageurl, and Prompt are required, and Prompt cannot coexist with imagebase64/imageurl	
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Specifies whether PBR material generation is enabled, false by default.	
                     */
                    bool m_enablePBR;
                    bool m_enablePBRHasBeenSet;

                    /**
                     * Specifies whether to enable the single geometry generation option
When enabled, it generates a 3D model without textures (white model)
When enabled, the generative model does not support OBJ format
Default model file format is GLB
                     */
                    bool m_enableGeometry;
                    bool m_enableGeometryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITHUNYUANTO3DRAPIDJOBREQUEST_H_
