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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBEWATERMARKINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBEWATERMARKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/DescribeImageSettings.h>
#include <tencentcloud/mdl/v20200326/model/DescribeTextSettings.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Watermark information
                */
                class DescribeWatermarkInfo : public AbstractModel
                {
                public:
                    DescribeWatermarkInfo();
                    ~DescribeWatermarkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ImageSettings Watermark image settings. This parameter is valid if `Type` is `STATIC_IMAGE`.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    DescribeImageSettings GetImageSettings() const;

                    /**
                     * 设置Watermark image settings. This parameter is valid if `Type` is `STATIC_IMAGE`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _imageSettings Watermark image settings. This parameter is valid if `Type` is `STATIC_IMAGE`.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetImageSettings(const DescribeImageSettings& _imageSettings);

                    /**
                     * 判断参数 ImageSettings 是否已赋值
                     * @return ImageSettings 是否已赋值
                     * 
                     */
                    bool ImageSettingsHasBeenSet() const;

                    /**
                     * 获取Watermark text settings. This parameter is valid if `Type` is `TEXT`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return TextSettings Watermark text settings. This parameter is valid if `Type` is `TEXT`.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    DescribeTextSettings GetTextSettings() const;

                    /**
                     * 设置Watermark text settings. This parameter is valid if `Type` is `TEXT`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _textSettings Watermark text settings. This parameter is valid if `Type` is `TEXT`.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetTextSettings(const DescribeTextSettings& _textSettings);

                    /**
                     * 判断参数 TextSettings 是否已赋值
                     * @return TextSettings 是否已赋值
                     * 
                     */
                    bool TextSettingsHasBeenSet() const;

                    /**
                     * 获取Last modified time (UTC+0) of the watermark, in the format of `2020-01-01T12:00:00Z`
Note: This field may return `null`, indicating that no valid value was found.
                     * @return UpdateTime Last modified time (UTC+0) of the watermark, in the format of `2020-01-01T12:00:00Z`
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time (UTC+0) of the watermark, in the format of `2020-01-01T12:00:00Z`
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _updateTime Last modified time (UTC+0) of the watermark, in the format of `2020-01-01T12:00:00Z`
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取List of channel IDs the watermark is bound to
Note: This field may return `null`, indicating that no valid value was found.
                     * @return AttachedChannels List of channel IDs the watermark is bound to
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<std::string> GetAttachedChannels() const;

                    /**
                     * 设置List of channel IDs the watermark is bound to
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _attachedChannels List of channel IDs the watermark is bound to
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetAttachedChannels(const std::vector<std::string>& _attachedChannels);

                    /**
                     * 判断参数 AttachedChannels 是否已赋值
                     * @return AttachedChannels 是否已赋值
                     * 
                     */
                    bool AttachedChannelsHasBeenSet() const;

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
                     * Watermark type. Valid values: STATIC_IMAGE, TEXT.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Watermark image settings. This parameter is valid if `Type` is `STATIC_IMAGE`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    DescribeImageSettings m_imageSettings;
                    bool m_imageSettingsHasBeenSet;

                    /**
                     * Watermark text settings. This parameter is valid if `Type` is `TEXT`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    DescribeTextSettings m_textSettings;
                    bool m_textSettingsHasBeenSet;

                    /**
                     * Last modified time (UTC+0) of the watermark, in the format of `2020-01-01T12:00:00Z`
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * List of channel IDs the watermark is bound to
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_attachedChannels;
                    bool m_attachedChannelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBEWATERMARKINFO_H_
