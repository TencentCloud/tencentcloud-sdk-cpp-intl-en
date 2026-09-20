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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SNAPSHOTBYTIMEOFFSETTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SNAPSHOTBYTIMEOFFSETTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/WatermarkInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Screenshot taking at specified time points task input parameter type
                */
                class SnapshotByTimeOffsetTaskInput : public AbstractModel
                {
                public:
                    SnapshotByTimeOffsetTaskInput();
                    ~SnapshotByTimeOffsetTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Time point screenshot template ID.</p>
                     * @return Definition <p>Time point screenshot template ID.</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>Time point screenshot template ID.</p>
                     * @param _definition <p>Time point screenshot template ID.</p>
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>List of screenshot time points. Time points support two formats: s and %.</p><li>The unit for a string that ends with s is second. For example, 3.5s means the time point is at 3.5 seconds.</li><li>The unit for a string that ends with % is a percentage of the video duration. For example, 10% means the time point is at 10% of the video's total duration.</li>
                     * @return ExtTimeOffsetSet <p>List of screenshot time points. Time points support two formats: s and %.</p><li>The unit for a string that ends with s is second. For example, 3.5s means the time point is at 3.5 seconds.</li><li>The unit for a string that ends with % is a percentage of the video duration. For example, 10% means the time point is at 10% of the video's total duration.</li>
                     * 
                     */
                    std::vector<std::string> GetExtTimeOffsetSet() const;

                    /**
                     * 设置<p>List of screenshot time points. Time points support two formats: s and %.</p><li>The unit for a string that ends with s is second. For example, 3.5s means the time point is at 3.5 seconds.</li><li>The unit for a string that ends with % is a percentage of the video duration. For example, 10% means the time point is at 10% of the video's total duration.</li>
                     * @param _extTimeOffsetSet <p>List of screenshot time points. Time points support two formats: s and %.</p><li>The unit for a string that ends with s is second. For example, 3.5s means the time point is at 3.5 seconds.</li><li>The unit for a string that ends with % is a percentage of the video duration. For example, 10% means the time point is at 10% of the video's total duration.</li>
                     * 
                     */
                    void SetExtTimeOffsetSet(const std::vector<std::string>& _extTimeOffsetSet);

                    /**
                     * 判断参数 ExtTimeOffsetSet 是否已赋值
                     * @return ExtTimeOffsetSet 是否已赋值
                     * 
                     */
                    bool ExtTimeOffsetSetHasBeenSet() const;

                    /**
                     * 获取<p>List of screenshot time points, in <font color="red">milliseconds</font>. This parameter is not recommended. We recommend that you use the ExtTimeOffsetSet parameter.</p>
                     * @return TimeOffsetSet <p>List of screenshot time points, in <font color="red">milliseconds</font>. This parameter is not recommended. We recommend that you use the ExtTimeOffsetSet parameter.</p>
                     * 
                     */
                    std::vector<double> GetTimeOffsetSet() const;

                    /**
                     * 设置<p>List of screenshot time points, in <font color="red">milliseconds</font>. This parameter is not recommended. We recommend that you use the ExtTimeOffsetSet parameter.</p>
                     * @param _timeOffsetSet <p>List of screenshot time points, in <font color="red">milliseconds</font>. This parameter is not recommended. We recommend that you use the ExtTimeOffsetSet parameter.</p>
                     * 
                     */
                    void SetTimeOffsetSet(const std::vector<double>& _timeOffsetSet);

                    /**
                     * 判断参数 TimeOffsetSet 是否已赋值
                     * @return TimeOffsetSet 是否已赋值
                     * 
                     */
                    bool TimeOffsetSetHasBeenSet() const;

                    /**
                     * 获取<p>Watermark list. Up to 10 image or text watermarks are supported.</p>
                     * @return WatermarkSet <p>Watermark list. Up to 10 image or text watermarks are supported.</p>
                     * 
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置<p>Watermark list. Up to 10 image or text watermarks are supported.</p>
                     * @param _watermarkSet <p>Watermark list. Up to 10 image or text watermarks are supported.</p>
                     * 
                     */
                    void SetWatermarkSet(const std::vector<WatermarkInput>& _watermarkSet);

                    /**
                     * 判断参数 WatermarkSet 是否已赋值
                     * @return WatermarkSet 是否已赋值
                     * 
                     */
                    bool WatermarkSetHasBeenSet() const;

                private:

                    /**
                     * <p>Time point screenshot template ID.</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>List of screenshot time points. Time points support two formats: s and %.</p><li>The unit for a string that ends with s is second. For example, 3.5s means the time point is at 3.5 seconds.</li><li>The unit for a string that ends with % is a percentage of the video duration. For example, 10% means the time point is at 10% of the video's total duration.</li>
                     */
                    std::vector<std::string> m_extTimeOffsetSet;
                    bool m_extTimeOffsetSetHasBeenSet;

                    /**
                     * <p>List of screenshot time points, in <font color="red">milliseconds</font>. This parameter is not recommended. We recommend that you use the ExtTimeOffsetSet parameter.</p>
                     */
                    std::vector<double> m_timeOffsetSet;
                    bool m_timeOffsetSetHasBeenSet;

                    /**
                     * <p>Watermark list. Up to 10 image or text watermarks are supported.</p>
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SNAPSHOTBYTIMEOFFSETTASKINPUT_H_
