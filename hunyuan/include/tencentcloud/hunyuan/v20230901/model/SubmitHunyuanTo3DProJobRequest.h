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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITHUNYUANTO3DPROJOBREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITHUNYUANTO3DPROJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/ViewImage.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * SubmitHunyuanTo3DProJob request structure.
                */
                class SubmitHunyuanTo3DProJobRequest : public AbstractModel
                {
                public:
                    SubmitHunyuanTo3DProJobRequest();
                    ~SubmitHunyuanTo3DProJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tencent HY 3D Global model version
Defaults to 3.0, with optional choices: 3.0, 3.1
When selecting version 3.1, the LowPoly parameter is unavailable
Example value:3.0
                     * @return Model Tencent HY 3D Global model version
Defaults to 3.0, with optional choices: 3.0, 3.1
When selecting version 3.1, the LowPoly parameter is unavailable
Example value:3.0
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置Tencent HY 3D Global model version
Defaults to 3.0, with optional choices: 3.0, 3.1
When selecting version 3.1, the LowPoly parameter is unavailable
Example value:3.0
                     * @param _model Tencent HY 3D Global model version
Defaults to 3.0, with optional choices: 3.0, 3.1
When selecting version 3.1, the LowPoly parameter is unavailable
Example value:3.0
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取Generates 3D content, describes 3D content.
Supports up to 1024 utf-8 characters.
Text-To-3D. Specifies either ImageBase64/ImageUrl or Prompt is required. Prompt and ImageBase64/ImageUrl cannot coexist.
                     * @return Prompt Generates 3D content, describes 3D content.
Supports up to 1024 utf-8 characters.
Text-To-3D. Specifies either ImageBase64/ImageUrl or Prompt is required. Prompt and ImageBase64/ImageUrl cannot coexist.
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置Generates 3D content, describes 3D content.
Supports up to 1024 utf-8 characters.
Text-To-3D. Specifies either ImageBase64/ImageUrl or Prompt is required. Prompt and ImageBase64/ImageUrl cannot coexist.
                     * @param _prompt Generates 3D content, describes 3D content.
Supports up to 1024 utf-8 characters.
Text-To-3D. Specifies either ImageBase64/ImageUrl or Prompt is required. Prompt and ImageBase64/ImageUrl cannot coexist.
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
                     * 获取Enter the Base64 code of the image.
Size: specifies the unilateral resolution requirement, not less than 128 and not greater than 5000. size should not exceed 8m (after encoding, it increases by about 30%, recommend actual input image size no more than 6m).
Input image suggestion:
1.Simple background (solid-color background) 
2.No text or blended colors
3.Single object
4.The object occupies over 50% of the frame
Valid values: jpg, png, jpeg, webp.
Specifies either ImageBase64/ImageUrl or Prompt is required. Prompt and ImageBase64/ImageUrl cannot coexist.
                     * @return ImageBase64 Enter the Base64 code of the image.
Size: specifies the unilateral resolution requirement, not less than 128 and not greater than 5000. size should not exceed 8m (after encoding, it increases by about 30%, recommend actual input image size no more than 6m).
Input image suggestion:
1.Simple background (solid-color background) 
2.No text or blended colors
3.Single object
4.The object occupies over 50% of the frame
Valid values: jpg, png, jpeg, webp.
Specifies either ImageBase64/ImageUrl or Prompt is required. Prompt and ImageBase64/ImageUrl cannot coexist.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置Enter the Base64 code of the image.
Size: specifies the unilateral resolution requirement, not less than 128 and not greater than 5000. size should not exceed 8m (after encoding, it increases by about 30%, recommend actual input image size no more than 6m).
Input image suggestion:
1.Simple background (solid-color background) 
2.No text or blended colors
3.Single object
4.The object occupies over 50% of the frame
Valid values: jpg, png, jpeg, webp.
Specifies either ImageBase64/ImageUrl or Prompt is required. Prompt and ImageBase64/ImageUrl cannot coexist.
                     * @param _imageBase64 Enter the Base64 code of the image.
Size: specifies the unilateral resolution requirement, not less than 128 and not greater than 5000. size should not exceed 8m (after encoding, it increases by about 30%, recommend actual input image size no more than 6m).
Input image suggestion:
1.Simple background (solid-color background) 
2.No text or blended colors
3.Single object
4.The object occupies over 50% of the frame
Valid values: jpg, png, jpeg, webp.
Specifies either ImageBase64/ImageUrl or Prompt is required. Prompt and ImageBase64/ImageUrl cannot coexist.
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
                     * 获取Input image Url.
Size: specifies the unilateral resolution requirement, not less than 128 and not greater than 5000. size should not exceed 8m (after encoding, it increases by about 30%, recommend actual input image size no more than 6m).
Input image suggestion:
1.Simple background (solid-color background) 
2.No text or blended colors
3.Single object
4.The object occupies over 50% of the frame
Valid values: jpg, png, jpeg, webp.
Specifies either ImageBase64/ImageUrl or Prompt is required. Prompt and ImageBase64/ImageUrl cannot coexist.
                     * @return ImageUrl Input image Url.
Size: specifies the unilateral resolution requirement, not less than 128 and not greater than 5000. size should not exceed 8m (after encoding, it increases by about 30%, recommend actual input image size no more than 6m).
Input image suggestion:
1.Simple background (solid-color background) 
2.No text or blended colors
3.Single object
4.The object occupies over 50% of the frame
Valid values: jpg, png, jpeg, webp.
Specifies either ImageBase64/ImageUrl or Prompt is required. Prompt and ImageBase64/ImageUrl cannot coexist.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置Input image Url.
Size: specifies the unilateral resolution requirement, not less than 128 and not greater than 5000. size should not exceed 8m (after encoding, it increases by about 30%, recommend actual input image size no more than 6m).
Input image suggestion:
1.Simple background (solid-color background) 
2.No text or blended colors
3.Single object
4.The object occupies over 50% of the frame
Valid values: jpg, png, jpeg, webp.
Specifies either ImageBase64/ImageUrl or Prompt is required. Prompt and ImageBase64/ImageUrl cannot coexist.
                     * @param _imageUrl Input image Url.
Size: specifies the unilateral resolution requirement, not less than 128 and not greater than 5000. size should not exceed 8m (after encoding, it increases by about 30%, recommend actual input image size no more than 6m).
Input image suggestion:
1.Simple background (solid-color background) 
2.No text or blended colors
3.Single object
4.The object occupies over 50% of the frame
Valid values: jpg, png, jpeg, webp.
Specifies either ImageBase64/ImageUrl or Prompt is required. Prompt and ImageBase64/ImageUrl cannot coexist.
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
                     * 获取Multi-Perspective model image. reference value for viewing angle:.
left: Left view;
right: Right view;
back: Rear view;
top: Top view (only supported in Model 3.1);
bottom: Bottom view (only supported in Model 3.1);
left_front: Left front 45 degree view (only supported in Model 3.1);
right_front: Right front 45 degree view (only supported in Model 3.1);

Each perspective is limited to one image.
Image size limit. the value must not exceed 8 mb after encoding.
Image resolution limitation: the unilateral resolution should be less than 5000 and greater than 128.
Supported image format: JPG or PNG
                     * @return MultiViewImages Multi-Perspective model image. reference value for viewing angle:.
left: Left view;
right: Right view;
back: Rear view;
top: Top view (only supported in Model 3.1);
bottom: Bottom view (only supported in Model 3.1);
left_front: Left front 45 degree view (only supported in Model 3.1);
right_front: Right front 45 degree view (only supported in Model 3.1);

Each perspective is limited to one image.
Image size limit. the value must not exceed 8 mb after encoding.
Image resolution limitation: the unilateral resolution should be less than 5000 and greater than 128.
Supported image format: JPG or PNG
                     * 
                     */
                    std::vector<ViewImage> GetMultiViewImages() const;

                    /**
                     * 设置Multi-Perspective model image. reference value for viewing angle:.
left: Left view;
right: Right view;
back: Rear view;
top: Top view (only supported in Model 3.1);
bottom: Bottom view (only supported in Model 3.1);
left_front: Left front 45 degree view (only supported in Model 3.1);
right_front: Right front 45 degree view (only supported in Model 3.1);

Each perspective is limited to one image.
Image size limit. the value must not exceed 8 mb after encoding.
Image resolution limitation: the unilateral resolution should be less than 5000 and greater than 128.
Supported image format: JPG or PNG
                     * @param _multiViewImages Multi-Perspective model image. reference value for viewing angle:.
left: Left view;
right: Right view;
back: Rear view;
top: Top view (only supported in Model 3.1);
bottom: Bottom view (only supported in Model 3.1);
left_front: Left front 45 degree view (only supported in Model 3.1);
right_front: Right front 45 degree view (only supported in Model 3.1);

Each perspective is limited to one image.
Image size limit. the value must not exceed 8 mb after encoding.
Image resolution limitation: the unilateral resolution should be less than 5000 and greater than 128.
Supported image format: JPG or PNG
                     * 
                     */
                    void SetMultiViewImages(const std::vector<ViewImage>& _multiViewImages);

                    /**
                     * 判断参数 MultiViewImages 是否已赋值
                     * @return MultiViewImages 是否已赋值
                     * 
                     */
                    bool MultiViewImagesHasBeenSet() const;

                    /**
                     * 获取Specifies whether PBR material generation is enabled. default false.
                     * @return EnablePBR Specifies whether PBR material generation is enabled. default false.
                     * 
                     */
                    bool GetEnablePBR() const;

                    /**
                     * 设置Specifies whether PBR material generation is enabled. default false.
                     * @param _enablePBR Specifies whether PBR material generation is enabled. default false.
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
                     * 获取Specifies the face count for 3D model generation. default value is 500000.
Specifies the supported face count generation range. value range: 40000-1500000.
                     * @return FaceCount Specifies the face count for 3D model generation. default value is 500000.
Specifies the supported face count generation range. value range: 40000-1500000.
                     * 
                     */
                    int64_t GetFaceCount() const;

                    /**
                     * 设置Specifies the face count for 3D model generation. default value is 500000.
Specifies the supported face count generation range. value range: 40000-1500000.
                     * @param _faceCount Specifies the face count for 3D model generation. default value is 500000.
Specifies the supported face count generation range. value range: 40000-1500000.
                     * 
                     */
                    void SetFaceCount(const int64_t& _faceCount);

                    /**
                     * 判断参数 FaceCount 是否已赋值
                     * @return FaceCount 是否已赋值
                     * 
                     */
                    bool FaceCountHasBeenSet() const;

                    /**
                     * 获取Generation task type. default: Normal. valid values:.
Normal: generates a geometric model with textures.
LowPoly: specifies the model generated after intelligent polygon reduction.
Geometry: specifies whether to generate a Geometry model without textures (white model). when this task is selected, the EnablePBR parameter does not take effect.
Specifies the Sketch for the generative model, allowing input of a Sketch or line drawing. in this mode, both prompt and ImageUrl/ImageBase64 can be entered together.
                     * @return GenerateType Generation task type. default: Normal. valid values:.
Normal: generates a geometric model with textures.
LowPoly: specifies the model generated after intelligent polygon reduction.
Geometry: specifies whether to generate a Geometry model without textures (white model). when this task is selected, the EnablePBR parameter does not take effect.
Specifies the Sketch for the generative model, allowing input of a Sketch or line drawing. in this mode, both prompt and ImageUrl/ImageBase64 can be entered together.
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 设置Generation task type. default: Normal. valid values:.
Normal: generates a geometric model with textures.
LowPoly: specifies the model generated after intelligent polygon reduction.
Geometry: specifies whether to generate a Geometry model without textures (white model). when this task is selected, the EnablePBR parameter does not take effect.
Specifies the Sketch for the generative model, allowing input of a Sketch or line drawing. in this mode, both prompt and ImageUrl/ImageBase64 can be entered together.
                     * @param _generateType Generation task type. default: Normal. valid values:.
Normal: generates a geometric model with textures.
LowPoly: specifies the model generated after intelligent polygon reduction.
Geometry: specifies whether to generate a Geometry model without textures (white model). when this task is selected, the EnablePBR parameter does not take effect.
Specifies the Sketch for the generative model, allowing input of a Sketch or line drawing. in this mode, both prompt and ImageUrl/ImageBase64 can be entered together.
                     * 
                     */
                    void SetGenerateType(const std::string& _generateType);

                    /**
                     * 判断参数 GenerateType 是否已赋值
                     * @return GenerateType 是否已赋值
                     * 
                     */
                    bool GenerateTypeHasBeenSet() const;

                    /**
                     * 获取This parameter only takes effect when LowPoly mode is selected from GenerateType.

Polygon type, indicates the number of sides in the model's surface grid, defaults to triangle. valid values:.
triangle. specifies the triangular face.
quadrilateral: mix quadrangle and triangle faces to generate.
                     * @return PolygonType This parameter only takes effect when LowPoly mode is selected from GenerateType.

Polygon type, indicates the number of sides in the model's surface grid, defaults to triangle. valid values:.
triangle. specifies the triangular face.
quadrilateral: mix quadrangle and triangle faces to generate.
                     * 
                     */
                    std::string GetPolygonType() const;

                    /**
                     * 设置This parameter only takes effect when LowPoly mode is selected from GenerateType.

Polygon type, indicates the number of sides in the model's surface grid, defaults to triangle. valid values:.
triangle. specifies the triangular face.
quadrilateral: mix quadrangle and triangle faces to generate.
                     * @param _polygonType This parameter only takes effect when LowPoly mode is selected from GenerateType.

Polygon type, indicates the number of sides in the model's surface grid, defaults to triangle. valid values:.
triangle. specifies the triangular face.
quadrilateral: mix quadrangle and triangle faces to generate.
                     * 
                     */
                    void SetPolygonType(const std::string& _polygonType);

                    /**
                     * 判断参数 PolygonType 是否已赋值
                     * @return PolygonType 是否已赋值
                     * 
                     */
                    bool PolygonTypeHasBeenSet() const;

                private:

                    /**
                     * Tencent HY 3D Global model version
Defaults to 3.0, with optional choices: 3.0, 3.1
When selecting version 3.1, the LowPoly parameter is unavailable
Example value:3.0
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * Generates 3D content, describes 3D content.
Supports up to 1024 utf-8 characters.
Text-To-3D. Specifies either ImageBase64/ImageUrl or Prompt is required. Prompt and ImageBase64/ImageUrl cannot coexist.
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * Enter the Base64 code of the image.
Size: specifies the unilateral resolution requirement, not less than 128 and not greater than 5000. size should not exceed 8m (after encoding, it increases by about 30%, recommend actual input image size no more than 6m).
Input image suggestion:
1.Simple background (solid-color background) 
2.No text or blended colors
3.Single object
4.The object occupies over 50% of the frame
Valid values: jpg, png, jpeg, webp.
Specifies either ImageBase64/ImageUrl or Prompt is required. Prompt and ImageBase64/ImageUrl cannot coexist.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * Input image Url.
Size: specifies the unilateral resolution requirement, not less than 128 and not greater than 5000. size should not exceed 8m (after encoding, it increases by about 30%, recommend actual input image size no more than 6m).
Input image suggestion:
1.Simple background (solid-color background) 
2.No text or blended colors
3.Single object
4.The object occupies over 50% of the frame
Valid values: jpg, png, jpeg, webp.
Specifies either ImageBase64/ImageUrl or Prompt is required. Prompt and ImageBase64/ImageUrl cannot coexist.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Multi-Perspective model image. reference value for viewing angle:.
left: Left view;
right: Right view;
back: Rear view;
top: Top view (only supported in Model 3.1);
bottom: Bottom view (only supported in Model 3.1);
left_front: Left front 45 degree view (only supported in Model 3.1);
right_front: Right front 45 degree view (only supported in Model 3.1);

Each perspective is limited to one image.
Image size limit. the value must not exceed 8 mb after encoding.
Image resolution limitation: the unilateral resolution should be less than 5000 and greater than 128.
Supported image format: JPG or PNG
                     */
                    std::vector<ViewImage> m_multiViewImages;
                    bool m_multiViewImagesHasBeenSet;

                    /**
                     * Specifies whether PBR material generation is enabled. default false.
                     */
                    bool m_enablePBR;
                    bool m_enablePBRHasBeenSet;

                    /**
                     * Specifies the face count for 3D model generation. default value is 500000.
Specifies the supported face count generation range. value range: 40000-1500000.
                     */
                    int64_t m_faceCount;
                    bool m_faceCountHasBeenSet;

                    /**
                     * Generation task type. default: Normal. valid values:.
Normal: generates a geometric model with textures.
LowPoly: specifies the model generated after intelligent polygon reduction.
Geometry: specifies whether to generate a Geometry model without textures (white model). when this task is selected, the EnablePBR parameter does not take effect.
Specifies the Sketch for the generative model, allowing input of a Sketch or line drawing. in this mode, both prompt and ImageUrl/ImageBase64 can be entered together.
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * This parameter only takes effect when LowPoly mode is selected from GenerateType.

Polygon type, indicates the number of sides in the model's surface grid, defaults to triangle. valid values:.
triangle. specifies the triangular face.
quadrilateral: mix quadrangle and triangle faces to generate.
                     */
                    std::string m_polygonType;
                    bool m_polygonTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITHUNYUANTO3DPROJOBREQUEST_H_
