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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SAMPLESNAPSHOTTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SAMPLESNAPSHOTTASKINPUT_H_

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
                * Input parameter type of sampling screencapturing task
                */
                class SampleSnapshotTaskInput : public AbstractModel
                {
                public:
                    SampleSnapshotTaskInput();
                    ~SampleSnapshotTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sampled screencapturing template ID.
                     * @return Definition Sampled screencapturing template ID.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Sampled screencapturing template ID.
                     * @param _definition Sampled screencapturing template ID.
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
                     * 获取List of up to 10 image or text watermarks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return WatermarkSet List of up to 10 image or text watermarks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置List of up to 10 image or text watermarks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _watermarkSet List of up to 10 image or text watermarks.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Sampled screencapturing template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SAMPLESNAPSHOTTASKINPUT_H_
