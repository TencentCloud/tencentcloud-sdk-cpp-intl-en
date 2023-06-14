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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_MODIFYSTREAMLIVEWATERMARKREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_MODIFYSTREAMLIVEWATERMARKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/CreateImageSettings.h>
#include <tencentcloud/mdl/v20200326/model/CreateTextSettings.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * ModifyStreamLiveWatermark request structure.
                */
                class ModifyStreamLiveWatermarkRequest : public AbstractModel
                {
                public:
                    ModifyStreamLiveWatermarkRequest();
                    ~ModifyStreamLiveWatermarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Watermark ID
                     * @return Id Watermark ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Watermark ID
                     * @param _id Watermark ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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

                private:

                    /**
                     * Watermark ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Watermark name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_MODIFYSTREAMLIVEWATERMARKREQUEST_H_
