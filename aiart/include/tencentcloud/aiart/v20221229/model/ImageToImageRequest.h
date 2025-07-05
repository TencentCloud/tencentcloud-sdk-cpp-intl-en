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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_IMAGETOIMAGEREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_IMAGETOIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aiart/v20221229/model/ResultConfig.h>
#include <tencentcloud/aiart/v20221229/model/LogoParam.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * ImageToImage request structure.
                */
                class ImageToImageRequest : public AbstractModel
                {
                public:
                    ImageToImageRequest();
                    ~ImageToImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64 code of the input mage.
Either the Base64 code or URL must be provided. If both are provided, URL prevails.
Image restrictions: The single-edge resolution must be less than 5,000 and greater than 50, and the size after Base64 encoding must be less than 8 MB. Supported formats include JPG, JPEG, PNG, BMP, TIFF and WEBP.
                     * @return InputImage Base64 code of the input mage.
Either the Base64 code or URL must be provided. If both are provided, URL prevails.
Image restrictions: The single-edge resolution must be less than 5,000 and greater than 50, and the size after Base64 encoding must be less than 8 MB. Supported formats include JPG, JPEG, PNG, BMP, TIFF and WEBP.
                     * 
                     */
                    std::string GetInputImage() const;

                    /**
                     * 设置Base64 code of the input mage.
Either the Base64 code or URL must be provided. If both are provided, URL prevails.
Image restrictions: The single-edge resolution must be less than 5,000 and greater than 50, and the size after Base64 encoding must be less than 8 MB. Supported formats include JPG, JPEG, PNG, BMP, TIFF and WEBP.
                     * @param _inputImage Base64 code of the input mage.
Either the Base64 code or URL must be provided. If both are provided, URL prevails.
Image restrictions: The single-edge resolution must be less than 5,000 and greater than 50, and the size after Base64 encoding must be less than 8 MB. Supported formats include JPG, JPEG, PNG, BMP, TIFF and WEBP.
                     * 
                     */
                    void SetInputImage(const std::string& _inputImage);

                    /**
                     * 判断参数 InputImage 是否已赋值
                     * @return InputImage 是否已赋值
                     * 
                     */
                    bool InputImageHasBeenSet() const;

                    /**
                     * 获取URL of the input mage.
Either the Base64 code or URL must be provided. If both are provided, URL prevails.
Image restrictions: The single-edge resolution must be less than 5,000 and greater than 50, and the size after Base64 encoding must be less than 8 MB. Supported formats include JPG, JPEG, PNG, BMP, TIFF and WEBP.
                     * @return InputUrl URL of the input mage.
Either the Base64 code or URL must be provided. If both are provided, URL prevails.
Image restrictions: The single-edge resolution must be less than 5,000 and greater than 50, and the size after Base64 encoding must be less than 8 MB. Supported formats include JPG, JPEG, PNG, BMP, TIFF and WEBP.
                     * 
                     */
                    std::string GetInputUrl() const;

                    /**
                     * 设置URL of the input mage.
Either the Base64 code or URL must be provided. If both are provided, URL prevails.
Image restrictions: The single-edge resolution must be less than 5,000 and greater than 50, and the size after Base64 encoding must be less than 8 MB. Supported formats include JPG, JPEG, PNG, BMP, TIFF and WEBP.
                     * @param _inputUrl URL of the input mage.
Either the Base64 code or URL must be provided. If both are provided, URL prevails.
Image restrictions: The single-edge resolution must be less than 5,000 and greater than 50, and the size after Base64 encoding must be less than 8 MB. Supported formats include JPG, JPEG, PNG, BMP, TIFF and WEBP.
                     * 
                     */
                    void SetInputUrl(const std::string& _inputUrl);

                    /**
                     * 判断参数 InputUrl 是否已赋值
                     * @return InputUrl 是否已赋值
                     * 
                     */
                    bool InputUrlHasBeenSet() const;

                    /**
                     * 获取Text description.
It is used to increase the possibility that the generation result contains the described content.
A maximum of 256 UTF-8 characters are supported.
                     * @return Prompt Text description.
It is used to increase the possibility that the generation result contains the described content.
A maximum of 256 UTF-8 characters are supported.
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置Text description.
It is used to increase the possibility that the generation result contains the described content.
A maximum of 256 UTF-8 characters are supported.
                     * @param _prompt Text description.
It is used to increase the possibility that the generation result contains the described content.
A maximum of 256 UTF-8 characters are supported.
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
                     * 获取Negative text description.
It is used to reduce the possibility that the generation result contains the described content, but such content cannot be completely avoided.
English is recommended. A maximum of 256 UTF-8 characters are supported.
                     * @return NegativePrompt Negative text description.
It is used to reduce the possibility that the generation result contains the described content, but such content cannot be completely avoided.
English is recommended. A maximum of 256 UTF-8 characters are supported.
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置Negative text description.
It is used to reduce the possibility that the generation result contains the described content, but such content cannot be completely avoided.
English is recommended. A maximum of 256 UTF-8 characters are supported.
                     * @param _negativePrompt Negative text description.
It is used to reduce the possibility that the generation result contains the described content, but such content cannot be completely avoided.
English is recommended. A maximum of 256 UTF-8 characters are supported.
                     * 
                     */
                    void SetNegativePrompt(const std::string& _negativePrompt);

                    /**
                     * 判断参数 NegativePrompt 是否已赋值
                     * @return NegativePrompt 是否已赋值
                     * 
                     */
                    bool NegativePromptHasBeenSet() const;

                    /**
                     * 获取Image style.
Select the desired style from the [Image Style List](https://intl.cloud.tencent.com/document/product/1668/86250?from_cn_redirect=1) and enter the style number.
It is recommended to use only one style. If no style is specified, 201 (anime style) is used by default.
                     * @return Styles Image style.
Select the desired style from the [Image Style List](https://intl.cloud.tencent.com/document/product/1668/86250?from_cn_redirect=1) and enter the style number.
It is recommended to use only one style. If no style is specified, 201 (anime style) is used by default.
                     * 
                     */
                    std::vector<std::string> GetStyles() const;

                    /**
                     * 设置Image style.
Select the desired style from the [Image Style List](https://intl.cloud.tencent.com/document/product/1668/86250?from_cn_redirect=1) and enter the style number.
It is recommended to use only one style. If no style is specified, 201 (anime style) is used by default.
                     * @param _styles Image style.
Select the desired style from the [Image Style List](https://intl.cloud.tencent.com/document/product/1668/86250?from_cn_redirect=1) and enter the style number.
It is recommended to use only one style. If no style is specified, 201 (anime style) is used by default.
                     * 
                     */
                    void SetStyles(const std::vector<std::string>& _styles);

                    /**
                     * 判断参数 Styles 是否已赋值
                     * @return Styles 是否已赋值
                     * 
                     */
                    bool StylesHasBeenSet() const;

                    /**
                     * 获取Configurations of the generated image, including the resolution.
Images with the following resolutions can be generated: origin (The resolution is the same as the input image resolution, with the edge resolution of up to 2000. The image will be zoomed out proportionally if the resolution is exceeded.), 768:768 (1:1), 768:1024 (3:4), and 1024:768 (4:3).
If the resolution is not specified, origin is used by default.
                     * @return ResultConfig Configurations of the generated image, including the resolution.
Images with the following resolutions can be generated: origin (The resolution is the same as the input image resolution, with the edge resolution of up to 2000. The image will be zoomed out proportionally if the resolution is exceeded.), 768:768 (1:1), 768:1024 (3:4), and 1024:768 (4:3).
If the resolution is not specified, origin is used by default.
                     * 
                     */
                    ResultConfig GetResultConfig() const;

                    /**
                     * 设置Configurations of the generated image, including the resolution.
Images with the following resolutions can be generated: origin (The resolution is the same as the input image resolution, with the edge resolution of up to 2000. The image will be zoomed out proportionally if the resolution is exceeded.), 768:768 (1:1), 768:1024 (3:4), and 1024:768 (4:3).
If the resolution is not specified, origin is used by default.
                     * @param _resultConfig Configurations of the generated image, including the resolution.
Images with the following resolutions can be generated: origin (The resolution is the same as the input image resolution, with the edge resolution of up to 2000. The image will be zoomed out proportionally if the resolution is exceeded.), 768:768 (1:1), 768:1024 (3:4), and 1024:768 (4:3).
If the resolution is not specified, origin is used by default.
                     * 
                     */
                    void SetResultConfig(const ResultConfig& _resultConfig);

                    /**
                     * 判断参数 ResultConfig 是否已赋值
                     * @return ResultConfig 是否已赋值
                     * 
                     */
                    bool ResultConfigHasBeenSet() const;

                    /**
                     * 获取Switch indicating whether to add a logo to the generated image. Default value: 1.
1: add logo
0: do not add logo
Other values: add logo
It is recommended to use an obvious logo to indicate that the image result is generated by AI.
                     * @return LogoAdd Switch indicating whether to add a logo to the generated image. Default value: 1.
1: add logo
0: do not add logo
Other values: add logo
It is recommended to use an obvious logo to indicate that the image result is generated by AI.
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置Switch indicating whether to add a logo to the generated image. Default value: 1.
1: add logo
0: do not add logo
Other values: add logo
It is recommended to use an obvious logo to indicate that the image result is generated by AI.
                     * @param _logoAdd Switch indicating whether to add a logo to the generated image. Default value: 1.
1: add logo
0: do not add logo
Other values: add logo
It is recommended to use an obvious logo to indicate that the image result is generated by AI.
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
                     * 获取Logo content settings.
By default, the text "Generated by AI" is added to the bottom right corner of the generated image. You can also use other logo.
                     * @return LogoParam Logo content settings.
By default, the text "Generated by AI" is added to the bottom right corner of the generated image. You can also use other logo.
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置Logo content settings.
By default, the text "Generated by AI" is added to the bottom right corner of the generated image. You can also use other logo.
                     * @param _logoParam Logo content settings.
By default, the text "Generated by AI" is added to the bottom right corner of the generated image. You can also use other logo.
                     * 
                     */
                    void SetLogoParam(const LogoParam& _logoParam);

                    /**
                     * 判断参数 LogoParam 是否已赋值
                     * @return LogoParam 是否已赋值
                     * 
                     */
                    bool LogoParamHasBeenSet() const;

                    /**
                     * 获取Generation strength.
The smaller the strength value, the more the generated image resembles the original image. Value range: (0, 1]. If the strength is not specified, the default value of the model is used.
The recommended value range is 0.6 to 0.8.
                     * @return Strength Generation strength.
The smaller the strength value, the more the generated image resembles the original image. Value range: (0, 1]. If the strength is not specified, the default value of the model is used.
The recommended value range is 0.6 to 0.8.
                     * 
                     */
                    double GetStrength() const;

                    /**
                     * 设置Generation strength.
The smaller the strength value, the more the generated image resembles the original image. Value range: (0, 1]. If the strength is not specified, the default value of the model is used.
The recommended value range is 0.6 to 0.8.
                     * @param _strength Generation strength.
The smaller the strength value, the more the generated image resembles the original image. Value range: (0, 1]. If the strength is not specified, the default value of the model is used.
The recommended value range is 0.6 to 0.8.
                     * 
                     */
                    void SetStrength(const double& _strength);

                    /**
                     * 判断参数 Strength 是否已赋值
                     * @return Strength 是否已赋值
                     * 
                     */
                    bool StrengthHasBeenSet() const;

                    /**
                     * 获取Image return method (base64 or url).
You can specify only one method. Default value: base64.
The URL is valid for 1 hour.
                     * @return RspImgType Image return method (base64 or url).
You can specify only one method. Default value: base64.
The URL is valid for 1 hour.
                     * 
                     */
                    std::string GetRspImgType() const;

                    /**
                     * 设置Image return method (base64 or url).
You can specify only one method. Default value: base64.
The URL is valid for 1 hour.
                     * @param _rspImgType Image return method (base64 or url).
You can specify only one method. Default value: base64.
The URL is valid for 1 hour.
                     * 
                     */
                    void SetRspImgType(const std::string& _rspImgType);

                    /**
                     * 判断参数 RspImgType 是否已赋值
                     * @return RspImgType 是否已赋值
                     * 
                     */
                    bool RspImgTypeHasBeenSet() const;

                    /**
                     * 获取Switch indicating whether to  enhance image clarity. Default value: 0.
1: on
0: off
If the switch is turned on, the image clarity will be enhanced and the generation time will increase.
                     * @return EnhanceImage Switch indicating whether to  enhance image clarity. Default value: 0.
1: on
0: off
If the switch is turned on, the image clarity will be enhanced and the generation time will increase.
                     * 
                     */
                    int64_t GetEnhanceImage() const;

                    /**
                     * 设置Switch indicating whether to  enhance image clarity. Default value: 0.
1: on
0: off
If the switch is turned on, the image clarity will be enhanced and the generation time will increase.
                     * @param _enhanceImage Switch indicating whether to  enhance image clarity. Default value: 0.
1: on
0: off
If the switch is turned on, the image clarity will be enhanced and the generation time will increase.
                     * 
                     */
                    void SetEnhanceImage(const int64_t& _enhanceImage);

                    /**
                     * 判断参数 EnhanceImage 是否已赋值
                     * @return EnhanceImage 是否已赋值
                     * 
                     */
                    bool EnhanceImageHasBeenSet() const;

                    /**
                     * 获取Maximum number of faces for detail restoration. Value range: 0 - 6. Default value: 0.
If the input value is greater than 0, the value will be used as the maximum number of faces with a small area can be restored in each image. The generation time will increase according to the actual number of faces restored.
                     * @return RestoreFace Maximum number of faces for detail restoration. Value range: 0 - 6. Default value: 0.
If the input value is greater than 0, the value will be used as the maximum number of faces with a small area can be restored in each image. The generation time will increase according to the actual number of faces restored.
                     * 
                     */
                    int64_t GetRestoreFace() const;

                    /**
                     * 设置Maximum number of faces for detail restoration. Value range: 0 - 6. Default value: 0.
If the input value is greater than 0, the value will be used as the maximum number of faces with a small area can be restored in each image. The generation time will increase according to the actual number of faces restored.
                     * @param _restoreFace Maximum number of faces for detail restoration. Value range: 0 - 6. Default value: 0.
If the input value is greater than 0, the value will be used as the maximum number of faces with a small area can be restored in each image. The generation time will increase according to the actual number of faces restored.
                     * 
                     */
                    void SetRestoreFace(const int64_t& _restoreFace);

                    /**
                     * 判断参数 RestoreFace 是否已赋值
                     * @return RestoreFace 是否已赋值
                     * 
                     */
                    bool RestoreFaceHasBeenSet() const;

                private:

                    /**
                     * Base64 code of the input mage.
Either the Base64 code or URL must be provided. If both are provided, URL prevails.
Image restrictions: The single-edge resolution must be less than 5,000 and greater than 50, and the size after Base64 encoding must be less than 8 MB. Supported formats include JPG, JPEG, PNG, BMP, TIFF and WEBP.
                     */
                    std::string m_inputImage;
                    bool m_inputImageHasBeenSet;

                    /**
                     * URL of the input mage.
Either the Base64 code or URL must be provided. If both are provided, URL prevails.
Image restrictions: The single-edge resolution must be less than 5,000 and greater than 50, and the size after Base64 encoding must be less than 8 MB. Supported formats include JPG, JPEG, PNG, BMP, TIFF and WEBP.
                     */
                    std::string m_inputUrl;
                    bool m_inputUrlHasBeenSet;

                    /**
                     * Text description.
It is used to increase the possibility that the generation result contains the described content.
A maximum of 256 UTF-8 characters are supported.
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * Negative text description.
It is used to reduce the possibility that the generation result contains the described content, but such content cannot be completely avoided.
English is recommended. A maximum of 256 UTF-8 characters are supported.
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * Image style.
Select the desired style from the [Image Style List](https://intl.cloud.tencent.com/document/product/1668/86250?from_cn_redirect=1) and enter the style number.
It is recommended to use only one style. If no style is specified, 201 (anime style) is used by default.
                     */
                    std::vector<std::string> m_styles;
                    bool m_stylesHasBeenSet;

                    /**
                     * Configurations of the generated image, including the resolution.
Images with the following resolutions can be generated: origin (The resolution is the same as the input image resolution, with the edge resolution of up to 2000. The image will be zoomed out proportionally if the resolution is exceeded.), 768:768 (1:1), 768:1024 (3:4), and 1024:768 (4:3).
If the resolution is not specified, origin is used by default.
                     */
                    ResultConfig m_resultConfig;
                    bool m_resultConfigHasBeenSet;

                    /**
                     * Switch indicating whether to add a logo to the generated image. Default value: 1.
1: add logo
0: do not add logo
Other values: add logo
It is recommended to use an obvious logo to indicate that the image result is generated by AI.
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * Logo content settings.
By default, the text "Generated by AI" is added to the bottom right corner of the generated image. You can also use other logo.
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                    /**
                     * Generation strength.
The smaller the strength value, the more the generated image resembles the original image. Value range: (0, 1]. If the strength is not specified, the default value of the model is used.
The recommended value range is 0.6 to 0.8.
                     */
                    double m_strength;
                    bool m_strengthHasBeenSet;

                    /**
                     * Image return method (base64 or url).
You can specify only one method. Default value: base64.
The URL is valid for 1 hour.
                     */
                    std::string m_rspImgType;
                    bool m_rspImgTypeHasBeenSet;

                    /**
                     * Switch indicating whether to  enhance image clarity. Default value: 0.
1: on
0: off
If the switch is turned on, the image clarity will be enhanced and the generation time will increase.
                     */
                    int64_t m_enhanceImage;
                    bool m_enhanceImageHasBeenSet;

                    /**
                     * Maximum number of faces for detail restoration. Value range: 0 - 6. Default value: 0.
If the input value is greater than 0, the value will be used as the maximum number of faces with a small area can be restored in each image. The generation time will increase according to the actual number of faces restored.
                     */
                    int64_t m_restoreFace;
                    bool m_restoreFaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_IMAGETOIMAGEREQUEST_H_
