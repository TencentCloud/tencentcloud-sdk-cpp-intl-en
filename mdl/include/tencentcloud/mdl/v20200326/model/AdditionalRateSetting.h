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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_ADDITIONALRATESETTING_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_ADDITIONALRATESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Additional bitrate configuration for video template.
                */
                class AdditionalRateSetting : public AbstractModel
                {
                public:
                    AdditionalRateSetting();
                    ~AdditionalRateSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The maximum bitrate in the VBR scenario must be a multiple of 1000 and between 50000 and 40000000.
                     * @return VideoMaxBitrate The maximum bitrate in the VBR scenario must be a multiple of 1000 and between 50000 and 40000000.
                     * 
                     */
                    uint64_t GetVideoMaxBitrate() const;

                    /**
                     * 设置The maximum bitrate in the VBR scenario must be a multiple of 1000 and between 50000 and 40000000.
                     * @param _videoMaxBitrate The maximum bitrate in the VBR scenario must be a multiple of 1000 and between 50000 and 40000000.
                     * 
                     */
                    void SetVideoMaxBitrate(const uint64_t& _videoMaxBitrate);

                    /**
                     * 判断参数 VideoMaxBitrate 是否已赋值
                     * @return VideoMaxBitrate 是否已赋值
                     * 
                     */
                    bool VideoMaxBitrateHasBeenSet() const;

                    /**
                     * 获取Cache configuration supports configuration as 1-4x the Max Bitrate value.
                     * @return BufferSize Cache configuration supports configuration as 1-4x the Max Bitrate value.
                     * 
                     */
                    uint64_t GetBufferSize() const;

                    /**
                     * 设置Cache configuration supports configuration as 1-4x the Max Bitrate value.
                     * @param _bufferSize Cache configuration supports configuration as 1-4x the Max Bitrate value.
                     * 
                     */
                    void SetBufferSize(const uint64_t& _bufferSize);

                    /**
                     * 判断参数 BufferSize 是否已赋值
                     * @return BufferSize 是否已赋值
                     * 
                     */
                    bool BufferSizeHasBeenSet() const;

                    /**
                     * 获取Valid in VBR scenarios. Video quality level. Only supports user input of numbers between 1 and 51.
                     * @return QualityLevel Valid in VBR scenarios. Video quality level. Only supports user input of numbers between 1 and 51.
                     * 
                     */
                    uint64_t GetQualityLevel() const;

                    /**
                     * 设置Valid in VBR scenarios. Video quality level. Only supports user input of numbers between 1 and 51.
                     * @param _qualityLevel Valid in VBR scenarios. Video quality level. Only supports user input of numbers between 1 and 51.
                     * 
                     */
                    void SetQualityLevel(const uint64_t& _qualityLevel);

                    /**
                     * 判断参数 QualityLevel 是否已赋值
                     * @return QualityLevel 是否已赋值
                     * 
                     */
                    bool QualityLevelHasBeenSet() const;

                private:

                    /**
                     * The maximum bitrate in the VBR scenario must be a multiple of 1000 and between 50000 and 40000000.
                     */
                    uint64_t m_videoMaxBitrate;
                    bool m_videoMaxBitrateHasBeenSet;

                    /**
                     * Cache configuration supports configuration as 1-4x the Max Bitrate value.
                     */
                    uint64_t m_bufferSize;
                    bool m_bufferSizeHasBeenSet;

                    /**
                     * Valid in VBR scenarios. Video quality level. Only supports user input of numbers between 1 and 51.
                     */
                    uint64_t m_qualityLevel;
                    bool m_qualityLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_ADDITIONALRATESETTING_H_
