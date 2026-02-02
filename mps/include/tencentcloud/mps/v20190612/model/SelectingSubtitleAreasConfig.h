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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SELECTINGSUBTITLEAREASCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SELECTINGSUBTITLEAREASCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/EraseArea.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Area configurations for the subtitle OCR extraction box.
                */
                class SelectingSubtitleAreasConfig : public AbstractModel
                {
                public:
                    SelectingSubtitleAreasConfig();
                    ~SelectingSubtitleAreasConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Automatically selects custom areas.For the selected areas, the AI model is used to automatically detect and extract the target content.
                     * @return AutoAreas Automatically selects custom areas.For the selected areas, the AI model is used to automatically detect and extract the target content.
                     * 
                     */
                    std::vector<EraseArea> GetAutoAreas() const;

                    /**
                     * 设置Automatically selects custom areas.For the selected areas, the AI model is used to automatically detect and extract the target content.
                     * @param _autoAreas Automatically selects custom areas.For the selected areas, the AI model is used to automatically detect and extract the target content.
                     * 
                     */
                    void SetAutoAreas(const std::vector<EraseArea>& _autoAreas);

                    /**
                     * 判断参数 AutoAreas 是否已赋值
                     * @return AutoAreas 是否已赋值
                     * 
                     */
                    bool AutoAreasHasBeenSet() const;

                    /**
                     * 获取Width of the sample video or image, in pixels.
                     * @return SampleWidth Width of the sample video or image, in pixels.
                     * 
                     */
                    uint64_t GetSampleWidth() const;

                    /**
                     * 设置Width of the sample video or image, in pixels.
                     * @param _sampleWidth Width of the sample video or image, in pixels.
                     * 
                     */
                    void SetSampleWidth(const uint64_t& _sampleWidth);

                    /**
                     * 判断参数 SampleWidth 是否已赋值
                     * @return SampleWidth 是否已赋值
                     * 
                     */
                    bool SampleWidthHasBeenSet() const;

                    /**
                     * 获取Height of the sample video or image, in pixels.
                     * @return SampleHeight Height of the sample video or image, in pixels.
                     * 
                     */
                    uint64_t GetSampleHeight() const;

                    /**
                     * 设置Height of the sample video or image, in pixels.
                     * @param _sampleHeight Height of the sample video or image, in pixels.
                     * 
                     */
                    void SetSampleHeight(const uint64_t& _sampleHeight);

                    /**
                     * 判断参数 SampleHeight 是否已赋值
                     * @return SampleHeight 是否已赋值
                     * 
                     */
                    bool SampleHeightHasBeenSet() const;

                private:

                    /**
                     * Automatically selects custom areas.For the selected areas, the AI model is used to automatically detect and extract the target content.
                     */
                    std::vector<EraseArea> m_autoAreas;
                    bool m_autoAreasHasBeenSet;

                    /**
                     * Width of the sample video or image, in pixels.
                     */
                    uint64_t m_sampleWidth;
                    bool m_sampleWidthHasBeenSet;

                    /**
                     * Height of the sample video or image, in pixels.
                     */
                    uint64_t m_sampleHeight;
                    bool m_sampleHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SELECTINGSUBTITLEAREASCONFIG_H_
