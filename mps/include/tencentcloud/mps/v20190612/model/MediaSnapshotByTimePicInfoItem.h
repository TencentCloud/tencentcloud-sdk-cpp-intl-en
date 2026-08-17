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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASNAPSHOTBYTIMEPICINFOITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASNAPSHOTBYTIMEPICINFOITEM_H_

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
                * Screenshot information at the specified time point
                */
                class MediaSnapshotByTimePicInfoItem : public AbstractModel
                {
                public:
                    MediaSnapshotByTimePicInfoItem();
                    ~MediaSnapshotByTimePicInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The screenshot corresponds to the time offset in the video file, expressed in seconds.
                     * @return TimeOffset The screenshot corresponds to the time offset in the video file, expressed in seconds.
                     * 
                     */
                    double GetTimeOffset() const;

                    /**
                     * 设置The screenshot corresponds to the time offset in the video file, expressed in seconds.
                     * @param _timeOffset The screenshot corresponds to the time offset in the video file, expressed in seconds.
                     * 
                     */
                    void SetTimeOffset(const double& _timeOffset);

                    /**
                     * 判断参数 TimeOffset 是否已赋值
                     * @return TimeOffset 是否已赋值
                     * 
                     */
                    bool TimeOffsetHasBeenSet() const;

                    /**
                     * 获取Path of the screenshot.
                     * @return Path Path of the screenshot.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path of the screenshot.
                     * @param _path Path of the screenshot.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取If a screenshot is watermarked, list of template IDs used for watermarking.
                     * @return WaterMarkDefinition If a screenshot is watermarked, list of template IDs used for watermarking.
                     * 
                     */
                    std::vector<int64_t> GetWaterMarkDefinition() const;

                    /**
                     * 设置If a screenshot is watermarked, list of template IDs used for watermarking.
                     * @param _waterMarkDefinition If a screenshot is watermarked, list of template IDs used for watermarking.
                     * 
                     */
                    void SetWaterMarkDefinition(const std::vector<int64_t>& _waterMarkDefinition);

                    /**
                     * 判断参数 WaterMarkDefinition 是否已赋值
                     * @return WaterMarkDefinition 是否已赋值
                     * 
                     */
                    bool WaterMarkDefinitionHasBeenSet() const;

                private:

                    /**
                     * The screenshot corresponds to the time offset in the video file, expressed in seconds.
                     */
                    double m_timeOffset;
                    bool m_timeOffsetHasBeenSet;

                    /**
                     * Path of the screenshot.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * If a screenshot is watermarked, list of template IDs used for watermarking.
                     */
                    std::vector<int64_t> m_waterMarkDefinition;
                    bool m_waterMarkDefinitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASNAPSHOTBYTIMEPICINFOITEM_H_
