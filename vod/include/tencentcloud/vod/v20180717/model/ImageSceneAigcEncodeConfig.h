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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGESCENEAIGCENCODECONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGESCENEAIGCENCODECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Image encoding format parameters.
                */
                class ImageSceneAigcEncodeConfig : public AbstractModel
                {
                public:
                    ImageSceneAigcEncodeConfig();
                    ~ImageSceneAigcEncodeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image format. Valid values: JPEG and PNG. Defaults to the original image format. Animation is not supported.
                     * @return Format Image format. Valid values: JPEG and PNG. Defaults to the original image format. Animation is not supported.
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Image format. Valid values: JPEG and PNG. Defaults to the original image format. Animation is not supported.
                     * @param _format Image format. Valid values: JPEG and PNG. Defaults to the original image format. Animation is not supported.
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
                     * 获取Relative image quality. Value ranges from 1 to 100. The numeric value is based on the original image quality and defaults to the original image quality.
                     * @return Quality Relative image quality. Value ranges from 1 to 100. The numeric value is based on the original image quality and defaults to the original image quality.
                     * 
                     */
                    int64_t GetQuality() const;

                    /**
                     * 设置Relative image quality. Value ranges from 1 to 100. The numeric value is based on the original image quality and defaults to the original image quality.
                     * @param _quality Relative image quality. Value ranges from 1 to 100. The numeric value is based on the original image quality and defaults to the original image quality.
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
                     * Image format. Valid values: JPEG and PNG. Defaults to the original image format. Animation is not supported.
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Relative image quality. Value ranges from 1 to 100. The numeric value is based on the original image quality and defaults to the original image quality.
                     */
                    int64_t m_quality;
                    bool m_qualityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGESCENEAIGCENCODECONFIG_H_
