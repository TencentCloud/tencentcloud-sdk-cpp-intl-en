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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COVERBYSNAPSHOTTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COVERBYSNAPSHOTTASKINPUT_H_

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
                * Task input parameter type for using a video screencapture as the cover image
                */
                class CoverBySnapshotTaskInput : public AbstractModel
                {
                public:
                    CoverBySnapshotTaskInput();
                    ~CoverBySnapshotTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time point screenshot template ID.
                     * @return Definition Time point screenshot template ID.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Time point screenshot template ID.
                     * @param _definition Time point screenshot template ID.
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
                     * 获取Screenshot type. Valid values:
<li>Time: time point screencapturing</li>
<li>Percent: screenshot by percentage</li>
                     * @return PositionType Screenshot type. Valid values:
<li>Time: time point screencapturing</li>
<li>Percent: screenshot by percentage</li>
                     * 
                     */
                    std::string GetPositionType() const;

                    /**
                     * 设置Screenshot type. Valid values:
<li>Time: time point screencapturing</li>
<li>Percent: screenshot by percentage</li>
                     * @param _positionType Screenshot type. Valid values:
<li>Time: time point screencapturing</li>
<li>Percent: screenshot by percentage</li>
                     * 
                     */
                    void SetPositionType(const std::string& _positionType);

                    /**
                     * 判断参数 PositionType 是否已赋值
                     * @return PositionType 是否已赋值
                     * 
                     */
                    bool PositionTypeHasBeenSet() const;

                    /**
                     * 获取Screenshot position:
<li>For time point screenshot, this value indicates the second of the specified video to use as the cover</li>
<li>For percentage-based screenshots, this value indicates the percentage of the video used as the cover.</li>
                     * @return PositionValue Screenshot position:
<li>For time point screenshot, this value indicates the second of the specified video to use as the cover</li>
<li>For percentage-based screenshots, this value indicates the percentage of the video used as the cover.</li>
                     * 
                     */
                    double GetPositionValue() const;

                    /**
                     * 设置Screenshot position:
<li>For time point screenshot, this value indicates the second of the specified video to use as the cover</li>
<li>For percentage-based screenshots, this value indicates the percentage of the video used as the cover.</li>
                     * @param _positionValue Screenshot position:
<li>For time point screenshot, this value indicates the second of the specified video to use as the cover</li>
<li>For percentage-based screenshots, this value indicates the percentage of the video used as the cover.</li>
                     * 
                     */
                    void SetPositionValue(const double& _positionValue);

                    /**
                     * 判断参数 PositionValue 是否已赋值
                     * @return PositionValue 是否已赋值
                     * 
                     */
                    bool PositionValueHasBeenSet() const;

                    /**
                     * 获取Watermark list. Multiple image or text watermarks up to a maximum of 10 are supported.
                     * @return WatermarkSet Watermark list. Multiple image or text watermarks up to a maximum of 10 are supported.
                     * 
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置Watermark list. Multiple image or text watermarks up to a maximum of 10 are supported.
                     * @param _watermarkSet Watermark list. Multiple image or text watermarks up to a maximum of 10 are supported.
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
                     * Time point screenshot template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Screenshot type. Valid values:
<li>Time: time point screencapturing</li>
<li>Percent: screenshot by percentage</li>
                     */
                    std::string m_positionType;
                    bool m_positionTypeHasBeenSet;

                    /**
                     * Screenshot position:
<li>For time point screenshot, this value indicates the second of the specified video to use as the cover</li>
<li>For percentage-based screenshots, this value indicates the percentage of the video used as the cover.</li>
                     */
                    double m_positionValue;
                    bool m_positionValueHasBeenSet;

                    /**
                     * Watermark list. Multiple image or text watermarks up to a maximum of 10 are supported.
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COVERBYSNAPSHOTTASKINPUT_H_
