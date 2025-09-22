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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASEWATERMARKCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASEWATERMARKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/EraseArea.h>
#include <tencentcloud/mps/v20190612/model/EraseTimeArea.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * smart erasure template watermark configuration.
                */
                class SmartEraseWatermarkConfig : public AbstractModel
                {
                public:
                    SmartEraseWatermarkConfig();
                    ~SmartEraseWatermarkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the watermark removal method.
**Auto-Removal:** automatically identifies watermarks in the video using model a and generates a new video after removal. suitable for dynamic watermarks.
When using automated removal, if you do not specify AutoAreas, the full-screen video will be erased automatically. if AutoAreas is specified, it will change to erase the designated areas.
**Specified area erasure:** for static watermarks with fixed locations, we recommend you directly specify the erasure area.
When you choose specified area erasure, import at least one specified region.

-Automated removal.
-Specifies the custom specified area erasure.
                     * @return WatermarkEraseMethod Specifies the watermark removal method.
**Auto-Removal:** automatically identifies watermarks in the video using model a and generates a new video after removal. suitable for dynamic watermarks.
When using automated removal, if you do not specify AutoAreas, the full-screen video will be erased automatically. if AutoAreas is specified, it will change to erase the designated areas.
**Specified area erasure:** for static watermarks with fixed locations, we recommend you directly specify the erasure area.
When you choose specified area erasure, import at least one specified region.

-Automated removal.
-Specifies the custom specified area erasure.
                     * 
                     */
                    std::string GetWatermarkEraseMethod() const;

                    /**
                     * 设置Specifies the watermark removal method.
**Auto-Removal:** automatically identifies watermarks in the video using model a and generates a new video after removal. suitable for dynamic watermarks.
When using automated removal, if you do not specify AutoAreas, the full-screen video will be erased automatically. if AutoAreas is specified, it will change to erase the designated areas.
**Specified area erasure:** for static watermarks with fixed locations, we recommend you directly specify the erasure area.
When you choose specified area erasure, import at least one specified region.

-Automated removal.
-Specifies the custom specified area erasure.
                     * @param _watermarkEraseMethod Specifies the watermark removal method.
**Auto-Removal:** automatically identifies watermarks in the video using model a and generates a new video after removal. suitable for dynamic watermarks.
When using automated removal, if you do not specify AutoAreas, the full-screen video will be erased automatically. if AutoAreas is specified, it will change to erase the designated areas.
**Specified area erasure:** for static watermarks with fixed locations, we recommend you directly specify the erasure area.
When you choose specified area erasure, import at least one specified region.

-Automated removal.
-Specifies the custom specified area erasure.
                     * 
                     */
                    void SetWatermarkEraseMethod(const std::string& _watermarkEraseMethod);

                    /**
                     * 判断参数 WatermarkEraseMethod 是否已赋值
                     * @return WatermarkEraseMethod 是否已赋值
                     * 
                     */
                    bool WatermarkEraseMethodHasBeenSet() const;

                    /**
                     * 获取Specifies the watermark removal model.
Basic version: average effect, cost-effective, suitable for videos with clean backgrounds or animations.
Advanced edition: better effectiveness, suitable for mini-drama and reality style video.
**Supported values**:
- basic
- advanced
                     * @return WatermarkModel Specifies the watermark removal model.
Basic version: average effect, cost-effective, suitable for videos with clean backgrounds or animations.
Advanced edition: better effectiveness, suitable for mini-drama and reality style video.
**Supported values**:
- basic
- advanced
                     * 
                     */
                    std::string GetWatermarkModel() const;

                    /**
                     * 设置Specifies the watermark removal model.
Basic version: average effect, cost-effective, suitable for videos with clean backgrounds or animations.
Advanced edition: better effectiveness, suitable for mini-drama and reality style video.
**Supported values**:
- basic
- advanced
                     * @param _watermarkModel Specifies the watermark removal model.
Basic version: average effect, cost-effective, suitable for videos with clean backgrounds or animations.
Advanced edition: better effectiveness, suitable for mini-drama and reality style video.
**Supported values**:
- basic
- advanced
                     * 
                     */
                    void SetWatermarkModel(const std::string& _watermarkModel);

                    /**
                     * 判断参数 WatermarkModel 是否已赋值
                     * @return WatermarkModel 是否已赋值
                     * 
                     */
                    bool WatermarkModelHasBeenSet() const;

                    /**
                     * 获取Specifies automatic removal of a custom region.
Specifies the use of an AI model to automatically detect and erase existing targets in the specified region.
Note that this parameter will not take effect when the removal method is custom.
                     * @return AutoAreas Specifies automatic removal of a custom region.
Specifies the use of an AI model to automatically detect and erase existing targets in the specified region.
Note that this parameter will not take effect when the removal method is custom.
                     * 
                     */
                    std::vector<EraseArea> GetAutoAreas() const;

                    /**
                     * 设置Specifies automatic removal of a custom region.
Specifies the use of an AI model to automatically detect and erase existing targets in the specified region.
Note that this parameter will not take effect when the removal method is custom.
                     * @param _autoAreas Specifies automatic removal of a custom region.
Specifies the use of an AI model to automatically detect and erase existing targets in the specified region.
Note that this parameter will not take effect when the removal method is custom.
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
                     * 获取Specifies erasure of a custom region.
Detects and directly performs removal within a specified time range for the selected region.
                     * @return CustomAreas Specifies erasure of a custom region.
Detects and directly performs removal within a specified time range for the selected region.
                     * 
                     */
                    std::vector<EraseTimeArea> GetCustomAreas() const;

                    /**
                     * 设置Specifies erasure of a custom region.
Detects and directly performs removal within a specified time range for the selected region.
                     * @param _customAreas Specifies erasure of a custom region.
Detects and directly performs removal within a specified time range for the selected region.
                     * 
                     */
                    void SetCustomAreas(const std::vector<EraseTimeArea>& _customAreas);

                    /**
                     * 判断参数 CustomAreas 是否已赋值
                     * @return CustomAreas 是否已赋值
                     * 
                     */
                    bool CustomAreasHasBeenSet() const;

                private:

                    /**
                     * Specifies the watermark removal method.
**Auto-Removal:** automatically identifies watermarks in the video using model a and generates a new video after removal. suitable for dynamic watermarks.
When using automated removal, if you do not specify AutoAreas, the full-screen video will be erased automatically. if AutoAreas is specified, it will change to erase the designated areas.
**Specified area erasure:** for static watermarks with fixed locations, we recommend you directly specify the erasure area.
When you choose specified area erasure, import at least one specified region.

-Automated removal.
-Specifies the custom specified area erasure.
                     */
                    std::string m_watermarkEraseMethod;
                    bool m_watermarkEraseMethodHasBeenSet;

                    /**
                     * Specifies the watermark removal model.
Basic version: average effect, cost-effective, suitable for videos with clean backgrounds or animations.
Advanced edition: better effectiveness, suitable for mini-drama and reality style video.
**Supported values**:
- basic
- advanced
                     */
                    std::string m_watermarkModel;
                    bool m_watermarkModelHasBeenSet;

                    /**
                     * Specifies automatic removal of a custom region.
Specifies the use of an AI model to automatically detect and erase existing targets in the specified region.
Note that this parameter will not take effect when the removal method is custom.
                     */
                    std::vector<EraseArea> m_autoAreas;
                    bool m_autoAreasHasBeenSet;

                    /**
                     * Specifies erasure of a custom region.
Detects and directly performs removal within a specified time range for the selected region.
                     */
                    std::vector<EraseTimeArea> m_customAreas;
                    bool m_customAreasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASEWATERMARKCONFIG_H_
