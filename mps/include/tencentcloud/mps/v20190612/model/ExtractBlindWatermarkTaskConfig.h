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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EXTRACTBLINDWATERMARKTASKCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EXTRACTBLINDWATERMARKTASKCONFIG_H_

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
                * Extracts the digital watermark task configuration for video transcoding.
                */
                class ExtractBlindWatermarkTaskConfig : public AbstractModel
                {
                public:
                    ExtractBlindWatermarkTaskConfig();
                    ~ExtractBlindWatermarkTaskConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Valid when the watermark type is blind-abseq. specifies the segment duration of the input video. unit: ms.
Segment duration is 5 seconds by default if left empty.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SegmentDuration Valid when the watermark type is blind-abseq. specifies the segment duration of the input video. unit: ms.
Segment duration is 5 seconds by default if left empty.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetSegmentDuration() const;

                    /**
                     * 设置Valid when the watermark type is blind-abseq. specifies the segment duration of the input video. unit: ms.
Segment duration is 5 seconds by default if left empty.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _segmentDuration Valid when the watermark type is blind-abseq. specifies the segment duration of the input video. unit: ms.
Segment duration is 5 seconds by default if left empty.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSegmentDuration(const int64_t& _segmentDuration);

                    /**
                     * 判断参数 SegmentDuration 是否已赋值
                     * @return SegmentDuration 是否已赋值
                     * 
                     */
                    bool SegmentDurationHasBeenSet() const;

                private:

                    /**
                     * Valid when the watermark type is blind-abseq. specifies the segment duration of the input video. unit: ms.
Segment duration is 5 seconds by default if left empty.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_segmentDuration;
                    bool m_segmentDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EXTRACTBLINDWATERMARKTASKCONFIG_H_
