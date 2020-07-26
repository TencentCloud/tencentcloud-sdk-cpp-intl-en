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
                * Input parameter type of time point screencapturing task
                */
                class SnapshotByTimeOffsetTaskInput : public AbstractModel
                {
                public:
                    SnapshotByTimeOffsetTaskInput();
                    ~SnapshotByTimeOffsetTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time point screencapturing template ID.
                     * @return Definition Time point screencapturing template ID.
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Time point screencapturing template ID.
                     * @param Definition Time point screencapturing template ID.
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExtTimeOffsetSet 
                     */
                    std::vector<std::string> GetExtTimeOffsetSet() const;

                    /**
                     * 设置
                     * @param ExtTimeOffsetSet 
                     */
                    void SetExtTimeOffsetSet(const std::vector<std::string>& _extTimeOffsetSet);

                    /**
                     * 判断参数 ExtTimeOffsetSet 是否已赋值
                     * @return ExtTimeOffsetSet 是否已赋值
                     */
                    bool ExtTimeOffsetSetHasBeenSet() const;

                    /**
                     * 获取List of time points for screencapturing in <font color=red>milliseconds</font>.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TimeOffsetSet List of time points for screencapturing in <font color=red>milliseconds</font>.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<double> GetTimeOffsetSet() const;

                    /**
                     * 设置List of time points for screencapturing in <font color=red>milliseconds</font>.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TimeOffsetSet List of time points for screencapturing in <font color=red>milliseconds</font>.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTimeOffsetSet(const std::vector<double>& _timeOffsetSet);

                    /**
                     * 判断参数 TimeOffsetSet 是否已赋值
                     * @return TimeOffsetSet 是否已赋值
                     */
                    bool TimeOffsetSetHasBeenSet() const;

                    /**
                     * 获取List of up to 10 image or text watermarks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return WatermarkSet List of up to 10 image or text watermarks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置List of up to 10 image or text watermarks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param WatermarkSet List of up to 10 image or text watermarks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWatermarkSet(const std::vector<WatermarkInput>& _watermarkSet);

                    /**
                     * 判断参数 WatermarkSet 是否已赋值
                     * @return WatermarkSet 是否已赋值
                     */
                    bool WatermarkSetHasBeenSet() const;

                private:

                    /**
                     * Time point screencapturing template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_extTimeOffsetSet;
                    bool m_extTimeOffsetSetHasBeenSet;

                    /**
                     * List of time points for screencapturing in <font color=red>milliseconds</font>.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<double> m_timeOffsetSet;
                    bool m_timeOffsetSetHasBeenSet;

                    /**
                     * List of up to 10 image or text watermarks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SNAPSHOTBYTIMEOFFSETTASKINPUT_H_
