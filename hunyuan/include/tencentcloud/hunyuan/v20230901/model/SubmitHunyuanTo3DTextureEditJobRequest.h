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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITHUNYUANTO3DTEXTUREEDITJOBREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITHUNYUANTO3DTEXTUREEDITJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/InputFile3D.h>
#include <tencentcloud/hunyuan/v20230901/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * SubmitHunyuanTo3DTextureEditJob request structure.
                */
                class SubmitHunyuanTo3DTextureEditJobRequest : public AbstractModel
                {
                public:
                    SubmitHunyuanTo3DTextureEditJobRequest();
                    ~SubmitHunyuanTo3DTextureEditJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File URL of the 3D model file that requires texture edit
Supported formats: FBX, OBJ, GLB
3D model limit: less than 100000 faces
                     * @return File3D File URL of the 3D model file that requires texture edit
Supported formats: FBX, OBJ, GLB
3D model limit: less than 100000 faces
                     * 
                     */
                    InputFile3D GetFile3D() const;

                    /**
                     * 设置File URL of the 3D model file that requires texture edit
Supported formats: FBX, OBJ, GLB
3D model limit: less than 100000 faces
                     * @param _file3D File URL of the 3D model file that requires texture edit
Supported formats: FBX, OBJ, GLB
3D model limit: less than 100000 faces
                     * 
                     */
                    void SetFile3D(const InputFile3D& _file3D);

                    /**
                     * 判断参数 File3D 是否已赋值
                     * @return File3D 是否已赋值
                     * 
                     */
                    bool File3DHasBeenSet() const;

                    /**
                     * 获取Reference image for 3D model texture editing: Base64 data and image Url
Either Base64 or Url must be provided. if both are provided, Url prevails
Image restrictions: unilateral resolution less than 4096 and greater than 128, converted into Base64 string less than 10MB
Format support: jpg, jpeg, png
                     * @return Image Reference image for 3D model texture editing: Base64 data and image Url
Either Base64 or Url must be provided. if both are provided, Url prevails
Image restrictions: unilateral resolution less than 4096 and greater than 128, converted into Base64 string less than 10MB
Format support: jpg, jpeg, png
                     * 
                     */
                    ImageInfo GetImage() const;

                    /**
                     * 设置Reference image for 3D model texture editing: Base64 data and image Url
Either Base64 or Url must be provided. if both are provided, Url prevails
Image restrictions: unilateral resolution less than 4096 and greater than 128, converted into Base64 string less than 10MB
Format support: jpg, jpeg, png
                     * @param _image Reference image for 3D model texture editing: Base64 data and image Url
Either Base64 or Url must be provided. if both are provided, Url prevails
Image restrictions: unilateral resolution less than 4096 and greater than 128, converted into Base64 string less than 10MB
Format support: jpg, jpeg, png
                     * 
                     */
                    void SetImage(const ImageInfo& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取Describes texture editing, forward prompt content
Supports up to 1024 utf-8 characters
Either image or prompt is required, and prompt and image cannot coexist
Example value: a kitten
                     * @return Prompt Describes texture editing, forward prompt content
Supports up to 1024 utf-8 characters
Either image or prompt is required, and prompt and image cannot coexist
Example value: a kitten
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置Describes texture editing, forward prompt content
Supports up to 1024 utf-8 characters
Either image or prompt is required, and prompt and image cannot coexist
Example value: a kitten
                     * @param _prompt Describes texture editing, forward prompt content
Supports up to 1024 utf-8 characters
Either image or prompt is required, and prompt and image cannot coexist
Example value: a kitten
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
                     * 获取Whether to enable the PBR texture parameter, only supports enabling when entering the Prompt
Example value: true
                     * @return EnablePBR Whether to enable the PBR texture parameter, only supports enabling when entering the Prompt
Example value: true
                     * 
                     */
                    bool GetEnablePBR() const;

                    /**
                     * 设置Whether to enable the PBR texture parameter, only supports enabling when entering the Prompt
Example value: true
                     * @param _enablePBR Whether to enable the PBR texture parameter, only supports enabling when entering the Prompt
Example value: true
                     * 
                     */
                    void SetEnablePBR(const bool& _enablePBR);

                    /**
                     * 判断参数 EnablePBR 是否已赋值
                     * @return EnablePBR 是否已赋值
                     * 
                     */
                    bool EnablePBRHasBeenSet() const;

                private:

                    /**
                     * File URL of the 3D model file that requires texture edit
Supported formats: FBX, OBJ, GLB
3D model limit: less than 100000 faces
                     */
                    InputFile3D m_file3D;
                    bool m_file3DHasBeenSet;

                    /**
                     * Reference image for 3D model texture editing: Base64 data and image Url
Either Base64 or Url must be provided. if both are provided, Url prevails
Image restrictions: unilateral resolution less than 4096 and greater than 128, converted into Base64 string less than 10MB
Format support: jpg, jpeg, png
                     */
                    ImageInfo m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * Describes texture editing, forward prompt content
Supports up to 1024 utf-8 characters
Either image or prompt is required, and prompt and image cannot coexist
Example value: a kitten
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * Whether to enable the PBR texture parameter, only supports enabling when entering the Prompt
Example value: true
                     */
                    bool m_enablePBR;
                    bool m_enablePBRHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITHUNYUANTO3DTEXTUREEDITJOBREQUEST_H_
