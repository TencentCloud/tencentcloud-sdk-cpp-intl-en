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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEERASELOGOCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEERASELOGOCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageAreaBoxInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Icon erasing configuration.
                */
                class ImageEraseLogoConfig : public AbstractModel
                {
                public:
                    ImageEraseLogoConfig();
                    ~ImageEraseLogoConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Capability configuration switch. Available values: </p><li>ON: Enable;</li><li>OFF: Disable.</li>Default value: ON.
                     * @return Switch <p>Capability configuration switch. Available values: </p><li>ON: Enable;</li><li>OFF: Disable.</li>Default value: ON.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>Capability configuration switch. Available values: </p><li>ON: Enable;</li><li>OFF: Disable.</li>Default value: ON.
                     * @param _switch <p>Capability configuration switch. Available values: </p><li>ON: Enable;</li><li>OFF: Disable.</li>Default value: ON.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>Multiple box selection regions to erase, with up to 16 regions enabled.<br>Note: This field may return null, indicating that no valid value can be obtained.</p>
                     * @return ImageAreaBoxes <p>Multiple box selection regions to erase, with up to 16 regions enabled.<br>Note: This field may return null, indicating that no valid value can be obtained.</p>
                     * 
                     */
                    std::vector<ImageAreaBoxInfo> GetImageAreaBoxes() const;

                    /**
                     * 设置<p>Multiple box selection regions to erase, with up to 16 regions enabled.<br>Note: This field may return null, indicating that no valid value can be obtained.</p>
                     * @param _imageAreaBoxes <p>Multiple box selection regions to erase, with up to 16 regions enabled.<br>Note: This field may return null, indicating that no valid value can be obtained.</p>
                     * 
                     */
                    void SetImageAreaBoxes(const std::vector<ImageAreaBoxInfo>& _imageAreaBoxes);

                    /**
                     * 判断参数 ImageAreaBoxes 是否已赋值
                     * @return ImageAreaBoxes 是否已赋值
                     * 
                     */
                    bool ImageAreaBoxesHasBeenSet() const;

                    /**
                     * 获取<p>Watermark removal capacity gear selection. Available values:</p><p>Enumeration values:</p><ul><li>low: quick removal gear</li><li>mid: balanced removal effect and speed gear</li><li>high: advanced removal effect gear</li></ul><p>Note: Select the corresponding removal gear based on the complexity of the removal scenario.</p>
                     * @return EraseStrength <p>Watermark removal capacity gear selection. Available values:</p><p>Enumeration values:</p><ul><li>low: quick removal gear</li><li>mid: balanced removal effect and speed gear</li><li>high: advanced removal effect gear</li></ul><p>Note: Select the corresponding removal gear based on the complexity of the removal scenario.</p>
                     * 
                     */
                    std::string GetEraseStrength() const;

                    /**
                     * 设置<p>Watermark removal capacity gear selection. Available values:</p><p>Enumeration values:</p><ul><li>low: quick removal gear</li><li>mid: balanced removal effect and speed gear</li><li>high: advanced removal effect gear</li></ul><p>Note: Select the corresponding removal gear based on the complexity of the removal scenario.</p>
                     * @param _eraseStrength <p>Watermark removal capacity gear selection. Available values:</p><p>Enumeration values:</p><ul><li>low: quick removal gear</li><li>mid: balanced removal effect and speed gear</li><li>high: advanced removal effect gear</li></ul><p>Note: Select the corresponding removal gear based on the complexity of the removal scenario.</p>
                     * 
                     */
                    void SetEraseStrength(const std::string& _eraseStrength);

                    /**
                     * 判断参数 EraseStrength 是否已赋值
                     * @return EraseStrength 是否已赋值
                     * 
                     */
                    bool EraseStrengthHasBeenSet() const;

                    /**
                     * 获取<p>When erasing image watermarks, select a specific watermark type. Available values:</p><p>Enumeration values:</p><ul><li>corner_watermark: Erase a normal fixed-location watermark</li><li>tiled_watermark: Erase a tile watermark across the entire image</li><li>auto_detect_type: Automatically identify the watermark type and erase it</li><li>selected_watermark: Skip automatic removal and perform watermark removal at a specified position</li></ul>
                     * @return WatermarkType <p>When erasing image watermarks, select a specific watermark type. Available values:</p><p>Enumeration values:</p><ul><li>corner_watermark: Erase a normal fixed-location watermark</li><li>tiled_watermark: Erase a tile watermark across the entire image</li><li>auto_detect_type: Automatically identify the watermark type and erase it</li><li>selected_watermark: Skip automatic removal and perform watermark removal at a specified position</li></ul>
                     * 
                     */
                    std::string GetWatermarkType() const;

                    /**
                     * 设置<p>When erasing image watermarks, select a specific watermark type. Available values:</p><p>Enumeration values:</p><ul><li>corner_watermark: Erase a normal fixed-location watermark</li><li>tiled_watermark: Erase a tile watermark across the entire image</li><li>auto_detect_type: Automatically identify the watermark type and erase it</li><li>selected_watermark: Skip automatic removal and perform watermark removal at a specified position</li></ul>
                     * @param _watermarkType <p>When erasing image watermarks, select a specific watermark type. Available values:</p><p>Enumeration values:</p><ul><li>corner_watermark: Erase a normal fixed-location watermark</li><li>tiled_watermark: Erase a tile watermark across the entire image</li><li>auto_detect_type: Automatically identify the watermark type and erase it</li><li>selected_watermark: Skip automatic removal and perform watermark removal at a specified position</li></ul>
                     * 
                     */
                    void SetWatermarkType(const std::string& _watermarkType);

                    /**
                     * 判断参数 WatermarkType 是否已赋值
                     * @return WatermarkType 是否已赋值
                     * 
                     */
                    bool WatermarkTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Capability configuration switch. Available values: </p><li>ON: Enable;</li><li>OFF: Disable.</li>Default value: ON.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>Multiple box selection regions to erase, with up to 16 regions enabled.<br>Note: This field may return null, indicating that no valid value can be obtained.</p>
                     */
                    std::vector<ImageAreaBoxInfo> m_imageAreaBoxes;
                    bool m_imageAreaBoxesHasBeenSet;

                    /**
                     * <p>Watermark removal capacity gear selection. Available values:</p><p>Enumeration values:</p><ul><li>low: quick removal gear</li><li>mid: balanced removal effect and speed gear</li><li>high: advanced removal effect gear</li></ul><p>Note: Select the corresponding removal gear based on the complexity of the removal scenario.</p>
                     */
                    std::string m_eraseStrength;
                    bool m_eraseStrengthHasBeenSet;

                    /**
                     * <p>When erasing image watermarks, select a specific watermark type. Available values:</p><p>Enumeration values:</p><ul><li>corner_watermark: Erase a normal fixed-location watermark</li><li>tiled_watermark: Erase a tile watermark across the entire image</li><li>auto_detect_type: Automatically identify the watermark type and erase it</li><li>selected_watermark: Skip automatic removal and perform watermark removal at a specified position</li></ul>
                     */
                    std::string m_watermarkType;
                    bool m_watermarkTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEERASELOGOCONFIG_H_
