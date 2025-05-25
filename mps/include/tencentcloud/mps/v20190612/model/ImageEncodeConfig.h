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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEENCODECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEENCODECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Image encoding format parameters
                */
                class ImageEncodeConfig : public AbstractModel
                {
                public:
                    ImageEncodeConfig();
                    ~ImageEncodeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image format. Valid values: JPEG, PNG, BMP, and WebP. If it is not specified, the original image format is used. Animations are not supported.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Format Image format. Valid values: JPEG, PNG, BMP, and WebP. If it is not specified, the original image format is used. Animations are not supported.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Image format. Valid values: JPEG, PNG, BMP, and WebP. If it is not specified, the original image format is used. Animations are not supported.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _format Image format. Valid values: JPEG, PNG, BMP, and WebP. If it is not specified, the original image format is used. Animations are not supported.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Relative image quality. Valid range: 1 - 100. The value is based on the original image quality, and the default is the original image quality.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Quality Relative image quality. Valid range: 1 - 100. The value is based on the original image quality, and the default is the original image quality.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetQuality() const;

                    /**
                     * 设置Relative image quality. Valid range: 1 - 100. The value is based on the original image quality, and the default is the original image quality.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _quality Relative image quality. Valid range: 1 - 100. The value is based on the original image quality, and the default is the original image quality.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetQuality(const int64_t& _quality);

                    /**
                     * 判断参数 Quality 是否已赋值
                     * @return Quality 是否已赋值
                     * 
                     */
                    bool QualityHasBeenSet() const;

                private:

                    /**
                     * Image format. Valid values: JPEG, PNG, BMP, and WebP. If it is not specified, the original image format is used. Animations are not supported.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Relative image quality. Valid range: 1 - 100. The value is based on the original image quality, and the default is the original image quality.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_quality;
                    bool m_qualityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEENCODECONFIG_H_
