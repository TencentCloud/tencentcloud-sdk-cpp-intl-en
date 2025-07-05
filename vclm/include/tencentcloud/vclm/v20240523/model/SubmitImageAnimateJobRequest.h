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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITIMAGEANIMATEJOBREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITIMAGEANIMATEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vclm/v20240523/model/LogoParam.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * SubmitImageAnimateJob request structure.
                */
                class SubmitImageAnimateJobRequest : public AbstractModel
                {
                public:
                    SubmitImageAnimateJobRequest();
                    ~SubmitImageAnimateJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Image format: PNG, JPG, and JPEG formats are supported.
Image resolution: The long edge resolution should not exceed 2056.
Image size: The size should not exceed 10 MB.
Image aspect ratio: The ratio of width to height should be in the range of 1:2 to 1:1.2.
                     * @return ImageUrl Image format: PNG, JPG, and JPEG formats are supported.
Image resolution: The long edge resolution should not exceed 2056.
Image size: The size should not exceed 10 MB.
Image aspect ratio: The ratio of width to height should be in the range of 1:2 to 1:1.2.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置Image format: PNG, JPG, and JPEG formats are supported.
Image resolution: The long edge resolution should not exceed 2056.
Image size: The size should not exceed 10 MB.
Image aspect ratio: The ratio of width to height should be in the range of 1:2 to 1:1.2.
                     * @param _imageUrl Image format: PNG, JPG, and JPEG formats are supported.
Image resolution: The long edge resolution should not exceed 2056.
Image size: The size should not exceed 10 MB.
Image aspect ratio: The ratio of width to height should be in the range of 1:2 to 1:1.2.
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
                     * 获取Image information after Base64 encoding. Image format: PNG, JPG, and JPEG formats are supported. Image resolution: The long side resolution should not exceed 2056. Image size: The size should not exceed 10 MB. Image aspect ratio: The ratio of width to height should be in the range of 1:2 to 1:1.2.
                     * @return ImageBase64 Image information after Base64 encoding. Image format: PNG, JPG, and JPEG formats are supported. Image resolution: The long side resolution should not exceed 2056. Image size: The size should not exceed 10 MB. Image aspect ratio: The ratio of width to height should be in the range of 1:2 to 1:1.2.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置Image information after Base64 encoding. Image format: PNG, JPG, and JPEG formats are supported. Image resolution: The long side resolution should not exceed 2056. Image size: The size should not exceed 10 MB. Image aspect ratio: The ratio of width to height should be in the range of 1:2 to 1:1.2.
                     * @param _imageBase64 Image information after Base64 encoding. Image format: PNG, JPG, and JPEG formats are supported. Image resolution: The long side resolution should not exceed 2056. Image size: The size should not exceed 10 MB. Image aspect ratio: The ratio of width to height should be in the range of 1:2 to 1:1.2.
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
                     * 获取Action template ID. ke3: kemusan; tuziwu: rabbit dance; huajiangwu: paddling dance.

                     * @return TemplateId Action template ID. ke3: kemusan; tuziwu: rabbit dance; huajiangwu: paddling dance.

                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Action template ID. ke3: kemusan; tuziwu: rabbit dance; huajiangwu: paddling dance.

                     * @param _templateId Action template ID. ke3: kemusan; tuziwu: rabbit dance; huajiangwu: paddling dance.

                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Whether the generated video retains the audio in the template. The default value is true.
                     * @return EnableAudio Whether the generated video retains the audio in the template. The default value is true.
                     * 
                     */
                    bool GetEnableAudio() const;

                    /**
                     * 设置Whether the generated video retains the audio in the template. The default value is true.
                     * @param _enableAudio Whether the generated video retains the audio in the template. The default value is true.
                     * 
                     */
                    void SetEnableAudio(const bool& _enableAudio);

                    /**
                     * 判断参数 EnableAudio 是否已赋值
                     * @return EnableAudio 是否已赋值
                     * 
                     */
                    bool EnableAudioHasBeenSet() const;

                    /**
                     * 获取Whether to detect 12 body parts in the input image (head, neck, right shoulder, right elbow, right wrist, left shoulder, left elbow, left wrist, right hip, left hip, left knee, and right knee). They are not detected by default.
                     * @return EnableBodyJoins Whether to detect 12 body parts in the input image (head, neck, right shoulder, right elbow, right wrist, left shoulder, left elbow, left wrist, right hip, left hip, left knee, and right knee). They are not detected by default.
                     * 
                     */
                    bool GetEnableBodyJoins() const;

                    /**
                     * 设置Whether to detect 12 body parts in the input image (head, neck, right shoulder, right elbow, right wrist, left shoulder, left elbow, left wrist, right hip, left hip, left knee, and right knee). They are not detected by default.
                     * @param _enableBodyJoins Whether to detect 12 body parts in the input image (head, neck, right shoulder, right elbow, right wrist, left shoulder, left elbow, left wrist, right hip, left hip, left knee, and right knee). They are not detected by default.
                     * 
                     */
                    void SetEnableBodyJoins(const bool& _enableBodyJoins);

                    /**
                     * 判断参数 EnableBodyJoins 是否已赋值
                     * @return EnableBodyJoins 是否已赋值
                     * 
                     */
                    bool EnableBodyJoinsHasBeenSet() const;

                    /**
                     * 获取Whether the final video retains the background of the original image. (This parameter does not take effect when TemplateId is set to tuziwu or huajiangwu.)

                     * @return EnableSegment Whether the final video retains the background of the original image. (This parameter does not take effect when TemplateId is set to tuziwu or huajiangwu.)

                     * 
                     */
                    bool GetEnableSegment() const;

                    /**
                     * 设置Whether the final video retains the background of the original image. (This parameter does not take effect when TemplateId is set to tuziwu or huajiangwu.)

                     * @param _enableSegment Whether the final video retains the background of the original image. (This parameter does not take effect when TemplateId is set to tuziwu or huajiangwu.)

                     * 
                     */
                    void SetEnableSegment(const bool& _enableSegment);

                    /**
                     * 判断参数 EnableSegment 是否已赋值
                     * @return EnableSegment 是否已赋值
                     * 
                     */
                    bool EnableSegmentHasBeenSet() const;

                    /**
                     * 获取Whether to add a mark to the generated video. The default value is 0.
1: A mark is added.
0: No mark is added.
Other values: A mark is added by default.
It is recommended to use an obvious mark to indicate that the video is synthesized by AI.
                     * @return LogoAdd Whether to add a mark to the generated video. The default value is 0.
1: A mark is added.
0: No mark is added.
Other values: A mark is added by default.
It is recommended to use an obvious mark to indicate that the video is synthesized by AI.
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置Whether to add a mark to the generated video. The default value is 0.
1: A mark is added.
0: No mark is added.
Other values: A mark is added by default.
It is recommended to use an obvious mark to indicate that the video is synthesized by AI.
                     * @param _logoAdd Whether to add a mark to the generated video. The default value is 0.
1: A mark is added.
0: No mark is added.
Other values: A mark is added by default.
It is recommended to use an obvious mark to indicate that the video is synthesized by AI.
                     * 
                     */
                    void SetLogoAdd(const int64_t& _logoAdd);

                    /**
                     * 判断参数 LogoAdd 是否已赋值
                     * @return LogoAdd 是否已赋值
                     * 
                     */
                    bool LogoAddHasBeenSet() const;

                    /**
                     * 获取Mark text settings.
By default, the text "Synthesized by AI" is added to the bottom right corner of the generated video. You can also use other text images.
                     * @return LogoParam Mark text settings.
By default, the text "Synthesized by AI" is added to the bottom right corner of the generated video. You can also use other text images.
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置Mark text settings.
By default, the text "Synthesized by AI" is added to the bottom right corner of the generated video. You can also use other text images.
                     * @param _logoParam Mark text settings.
By default, the text "Synthesized by AI" is added to the bottom right corner of the generated video. You can also use other text images.
                     * 
                     */
                    void SetLogoParam(const LogoParam& _logoParam);

                    /**
                     * 判断参数 LogoParam 是否已赋值
                     * @return LogoParam 是否已赋值
                     * 
                     */
                    bool LogoParamHasBeenSet() const;

                private:

                    /**
                     * Image format: PNG, JPG, and JPEG formats are supported.
Image resolution: The long edge resolution should not exceed 2056.
Image size: The size should not exceed 10 MB.
Image aspect ratio: The ratio of width to height should be in the range of 1:2 to 1:1.2.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Image information after Base64 encoding. Image format: PNG, JPG, and JPEG formats are supported. Image resolution: The long side resolution should not exceed 2056. Image size: The size should not exceed 10 MB. Image aspect ratio: The ratio of width to height should be in the range of 1:2 to 1:1.2.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * Action template ID. ke3: kemusan; tuziwu: rabbit dance; huajiangwu: paddling dance.

                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Whether the generated video retains the audio in the template. The default value is true.
                     */
                    bool m_enableAudio;
                    bool m_enableAudioHasBeenSet;

                    /**
                     * Whether to detect 12 body parts in the input image (head, neck, right shoulder, right elbow, right wrist, left shoulder, left elbow, left wrist, right hip, left hip, left knee, and right knee). They are not detected by default.
                     */
                    bool m_enableBodyJoins;
                    bool m_enableBodyJoinsHasBeenSet;

                    /**
                     * Whether the final video retains the background of the original image. (This parameter does not take effect when TemplateId is set to tuziwu or huajiangwu.)

                     */
                    bool m_enableSegment;
                    bool m_enableSegmentHasBeenSet;

                    /**
                     * Whether to add a mark to the generated video. The default value is 0.
1: A mark is added.
0: No mark is added.
Other values: A mark is added by default.
It is recommended to use an obvious mark to indicate that the video is synthesized by AI.
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * Mark text settings.
By default, the text "Synthesized by AI" is added to the bottom right corner of the generated video. You can also use other text images.
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITIMAGEANIMATEJOBREQUEST_H_
