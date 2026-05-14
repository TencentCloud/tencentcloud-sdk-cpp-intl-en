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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_CHANGECLOTHESREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_CHANGECLOTHESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * ChangeClothes request structure.
                */
                class ChangeClothesRequest : public AbstractModel
                {
                public:
                    ChangeClothesRequest();
                    ~ChangeClothesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取URL of the model image.
Image restrictions: The single-edge resolution must be less than 3,000 and greater than 512, and the size after Base64 encoding must be less than 8 MB.
Input requirements:
1. It is recommended to input a frontal model image that at least fully shows the model's body (whole body, upper body or lower body) and avoids large-angle body deflections or complex poses.
2. It is recommended to input a 3:4 ratio image for better generation effect.
3. It is recommended to keep the category of the original clothes in the model image and the category of the replaced clothes the same, or to keep the original clothes' coverage on the model's body equal to or less than the replaced clothes'. (For example, if you need to change the model to wear shorts, the model in the original input image should also wear shorts instead of long pants.) Otherwise, the generation effect will be impaired.
                     * @return ModelUrl URL of the model image.
Image restrictions: The single-edge resolution must be less than 3,000 and greater than 512, and the size after Base64 encoding must be less than 8 MB.
Input requirements:
1. It is recommended to input a frontal model image that at least fully shows the model's body (whole body, upper body or lower body) and avoids large-angle body deflections or complex poses.
2. It is recommended to input a 3:4 ratio image for better generation effect.
3. It is recommended to keep the category of the original clothes in the model image and the category of the replaced clothes the same, or to keep the original clothes' coverage on the model's body equal to or less than the replaced clothes'. (For example, if you need to change the model to wear shorts, the model in the original input image should also wear shorts instead of long pants.) Otherwise, the generation effect will be impaired.
                     * 
                     */
                    std::string GetModelUrl() const;

                    /**
                     * 设置URL of the model image.
Image restrictions: The single-edge resolution must be less than 3,000 and greater than 512, and the size after Base64 encoding must be less than 8 MB.
Input requirements:
1. It is recommended to input a frontal model image that at least fully shows the model's body (whole body, upper body or lower body) and avoids large-angle body deflections or complex poses.
2. It is recommended to input a 3:4 ratio image for better generation effect.
3. It is recommended to keep the category of the original clothes in the model image and the category of the replaced clothes the same, or to keep the original clothes' coverage on the model's body equal to or less than the replaced clothes'. (For example, if you need to change the model to wear shorts, the model in the original input image should also wear shorts instead of long pants.) Otherwise, the generation effect will be impaired.
                     * @param _modelUrl URL of the model image.
Image restrictions: The single-edge resolution must be less than 3,000 and greater than 512, and the size after Base64 encoding must be less than 8 MB.
Input requirements:
1. It is recommended to input a frontal model image that at least fully shows the model's body (whole body, upper body or lower body) and avoids large-angle body deflections or complex poses.
2. It is recommended to input a 3:4 ratio image for better generation effect.
3. It is recommended to keep the category of the original clothes in the model image and the category of the replaced clothes the same, or to keep the original clothes' coverage on the model's body equal to or less than the replaced clothes'. (For example, if you need to change the model to wear shorts, the model in the original input image should also wear shorts instead of long pants.) Otherwise, the generation effect will be impaired.
                     * 
                     */
                    void SetModelUrl(const std::string& _modelUrl);

                    /**
                     * 判断参数 ModelUrl 是否已赋值
                     * @return ModelUrl 是否已赋值
                     * 
                     */
                    bool ModelUrlHasBeenSet() const;

                    /**
                     * 获取URL of the clothes image.
Image restrictions: single-side resolution less than 3000 and greater than 512, less than 8MB after conversion to Base64 string.
Input requirements:
It is recommended to input a complete front-facing flat image of the clothes, containing only one garment in the image. The type of the clothes supports Upper-body, Lower-body and Dress, and you can choose one from the three. The algorithm will change the model's clothes based on the input model image and the input clothes image.
                     * @return ClothesUrl URL of the clothes image.
Image restrictions: single-side resolution less than 3000 and greater than 512, less than 8MB after conversion to Base64 string.
Input requirements:
It is recommended to input a complete front-facing flat image of the clothes, containing only one garment in the image. The type of the clothes supports Upper-body, Lower-body and Dress, and you can choose one from the three. The algorithm will change the model's clothes based on the input model image and the input clothes image.
                     * 
                     */
                    std::string GetClothesUrl() const;

                    /**
                     * 设置URL of the clothes image.
Image restrictions: single-side resolution less than 3000 and greater than 512, less than 8MB after conversion to Base64 string.
Input requirements:
It is recommended to input a complete front-facing flat image of the clothes, containing only one garment in the image. The type of the clothes supports Upper-body, Lower-body and Dress, and you can choose one from the three. The algorithm will change the model's clothes based on the input model image and the input clothes image.
                     * @param _clothesUrl URL of the clothes image.
Image restrictions: single-side resolution less than 3000 and greater than 512, less than 8MB after conversion to Base64 string.
Input requirements:
It is recommended to input a complete front-facing flat image of the clothes, containing only one garment in the image. The type of the clothes supports Upper-body, Lower-body and Dress, and you can choose one from the three. The algorithm will change the model's clothes based on the input model image and the input clothes image.
                     * 
                     */
                    void SetClothesUrl(const std::string& _clothesUrl);

                    /**
                     * 判断参数 ClothesUrl 是否已赋值
                     * @return ClothesUrl 是否已赋值
                     * 
                     */
                    bool ClothesUrlHasBeenSet() const;

                    /**
                     * 获取Type of the clothes, which needs to be consistent with the input clothes image.
Supported value:
Upper-body
Lower-body
Dress
                     * @return ClothesType Type of the clothes, which needs to be consistent with the input clothes image.
Supported value:
Upper-body
Lower-body
Dress
                     * 
                     */
                    std::string GetClothesType() const;

                    /**
                     * 设置Type of the clothes, which needs to be consistent with the input clothes image.
Supported value:
Upper-body
Lower-body
Dress
                     * @param _clothesType Type of the clothes, which needs to be consistent with the input clothes image.
Supported value:
Upper-body
Lower-body
Dress
                     * 
                     */
                    void SetClothesType(const std::string& _clothesType);

                    /**
                     * 判断参数 ClothesType 是否已赋值
                     * @return ClothesType 是否已赋值
                     * 
                     */
                    bool ClothesTypeHasBeenSet() const;

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
                     * 获取Image return method (base64 or url).
You can specify only one method. Default value: base64.
The URL is valid for 1 hour.
It is recommended to choose url when the generated image resolution is large. Using base64 may cause return failure due to the image being too large.
                     * @return RspImgType Image return method (base64 or url).
You can specify only one method. Default value: base64.
The URL is valid for 1 hour.
It is recommended to choose url when the generated image resolution is large. Using base64 may cause return failure due to the image being too large.
                     * 
                     */
                    std::string GetRspImgType() const;

                    /**
                     * 设置Image return method (base64 or url).
You can specify only one method. Default value: base64.
The URL is valid for 1 hour.
It is recommended to choose url when the generated image resolution is large. Using base64 may cause return failure due to the image being too large.
                     * @param _rspImgType Image return method (base64 or url).
You can specify only one method. Default value: base64.
The URL is valid for 1 hour.
It is recommended to choose url when the generated image resolution is large. Using base64 may cause return failure due to the image being too large.
                     * 
                     */
                    void SetRspImgType(const std::string& _rspImgType);

                    /**
                     * 判断参数 RspImgType 是否已赋值
                     * @return RspImgType 是否已赋值
                     * 
                     */
                    bool RspImgTypeHasBeenSet() const;

                private:

                    /**
                     * URL of the model image.
Image restrictions: The single-edge resolution must be less than 3,000 and greater than 512, and the size after Base64 encoding must be less than 8 MB.
Input requirements:
1. It is recommended to input a frontal model image that at least fully shows the model's body (whole body, upper body or lower body) and avoids large-angle body deflections or complex poses.
2. It is recommended to input a 3:4 ratio image for better generation effect.
3. It is recommended to keep the category of the original clothes in the model image and the category of the replaced clothes the same, or to keep the original clothes' coverage on the model's body equal to or less than the replaced clothes'. (For example, if you need to change the model to wear shorts, the model in the original input image should also wear shorts instead of long pants.) Otherwise, the generation effect will be impaired.
                     */
                    std::string m_modelUrl;
                    bool m_modelUrlHasBeenSet;

                    /**
                     * URL of the clothes image.
Image restrictions: single-side resolution less than 3000 and greater than 512, less than 8MB after conversion to Base64 string.
Input requirements:
It is recommended to input a complete front-facing flat image of the clothes, containing only one garment in the image. The type of the clothes supports Upper-body, Lower-body and Dress, and you can choose one from the three. The algorithm will change the model's clothes based on the input model image and the input clothes image.
                     */
                    std::string m_clothesUrl;
                    bool m_clothesUrlHasBeenSet;

                    /**
                     * Type of the clothes, which needs to be consistent with the input clothes image.
Supported value:
Upper-body
Lower-body
Dress
                     */
                    std::string m_clothesType;
                    bool m_clothesTypeHasBeenSet;

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
                     * Image return method (base64 or url).
You can specify only one method. Default value: base64.
The URL is valid for 1 hour.
It is recommended to choose url when the generated image resolution is large. Using base64 may cause return failure due to the image being too large.
                     */
                    std::string m_rspImgType;
                    bool m_rspImgTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_CHANGECLOTHESREQUEST_H_
