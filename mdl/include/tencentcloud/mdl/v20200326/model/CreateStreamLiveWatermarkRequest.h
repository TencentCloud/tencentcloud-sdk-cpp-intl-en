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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_CREATESTREAMLIVEWATERMARKREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_CREATESTREAMLIVEWATERMARKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/CreateImageSettings.h>
#include <tencentcloud/mdl/v20200326/model/CreateTextSettings.h>
#include <tencentcloud/mdl/v20200326/model/AbWatermarkSettingsReq.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * CreateStreamLiveWatermark request structure.
                */
                class CreateStreamLiveWatermarkRequest : public AbstractModel
                {
                public:
                    CreateStreamLiveWatermarkRequest();
                    ~CreateStreamLiveWatermarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Watermark name
                     * @return Name Watermark name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Watermark name
                     * @param _name Watermark name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Watermark type. Valid values: STATIC_IMAGE, TEXT.
                     * @return Type Watermark type. Valid values: STATIC_IMAGE, TEXT.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Watermark type. Valid values: STATIC_IMAGE, TEXT.
                     * @param _type Watermark type. Valid values: STATIC_IMAGE, TEXT.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Watermark image settings. This parameter is valid if `Type` is `STATIC_IMAGE`.
                     * @return ImageSettings Watermark image settings. This parameter is valid if `Type` is `STATIC_IMAGE`.
                     * 
                     */
                    CreateImageSettings GetImageSettings() const;

                    /**
                     * 设置Watermark image settings. This parameter is valid if `Type` is `STATIC_IMAGE`.
                     * @param _imageSettings Watermark image settings. This parameter is valid if `Type` is `STATIC_IMAGE`.
                     * 
                     */
                    void SetImageSettings(const CreateImageSettings& _imageSettings);

                    /**
                     * 判断参数 ImageSettings 是否已赋值
                     * @return ImageSettings 是否已赋值
                     * 
                     */
                    bool ImageSettingsHasBeenSet() const;

                    /**
                     * 获取Watermark text settings. This parameter is valid if `Type` is `TEXT`.
                     * @return TextSettings Watermark text settings. This parameter is valid if `Type` is `TEXT`.
                     * 
                     */
                    CreateTextSettings GetTextSettings() const;

                    /**
                     * 设置Watermark text settings. This parameter is valid if `Type` is `TEXT`.
                     * @param _textSettings Watermark text settings. This parameter is valid if `Type` is `TEXT`.
                     * 
                     */
                    void SetTextSettings(const CreateTextSettings& _textSettings);

                    /**
                     * 判断参数 TextSettings 是否已赋值
                     * @return TextSettings 是否已赋值
                     * 
                     */
                    bool TextSettingsHasBeenSet() const;

                    /**
                     * 获取AB watermark configuration
                     * @return AbWatermarkSettings AB watermark configuration
                     * 
                     */
                    AbWatermarkSettingsReq GetAbWatermarkSettings() const;

                    /**
                     * 设置AB watermark configuration
                     * @param _abWatermarkSettings AB watermark configuration
                     * 
                     */
                    void SetAbWatermarkSettings(const AbWatermarkSettingsReq& _abWatermarkSettings);

                    /**
                     * 判断参数 AbWatermarkSettings 是否已赋值
                     * @return AbWatermarkSettings 是否已赋值
                     * 
                     */
                    bool AbWatermarkSettingsHasBeenSet() const;

                private:

                    /**
                     * Watermark name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Watermark type. Valid values: STATIC_IMAGE, TEXT.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Watermark image settings. This parameter is valid if `Type` is `STATIC_IMAGE`.
                     */
                    CreateImageSettings m_imageSettings;
                    bool m_imageSettingsHasBeenSet;

                    /**
                     * Watermark text settings. This parameter is valid if `Type` is `TEXT`.
                     */
                    CreateTextSettings m_textSettings;
                    bool m_textSettingsHasBeenSet;

                    /**
                     * AB watermark configuration
                     */
                    AbWatermarkSettingsReq m_abWatermarkSettings;
                    bool m_abWatermarkSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_CREATESTREAMLIVEWATERMARKREQUEST_H_
