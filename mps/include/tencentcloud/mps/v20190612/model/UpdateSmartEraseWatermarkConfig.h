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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_UPDATESMARTERASEWATERMARKCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_UPDATESMARTERASEWATERMARKCONFIG_H_

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
                * Watermark removal configuration for the smart erasing template.
                */
                class UpdateSmartEraseWatermarkConfig : public AbstractModel
                {
                public:
                    UpdateSmartEraseWatermarkConfig();
                    ~UpdateSmartEraseWatermarkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Watermark erasing method.
**Automatic erasing: ** Video watermarks are automatically recognized using an AI model and are erased to generate a new video. It applies to dynamic watermarks.
When automatic erasing is used, if AutoAreas is not specified, the full-screen video image area will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
 **Specified area erasing: ** For static watermarks in fixed positions, you are recommended to specify the erasing area directly.When you choose specified area erasing, specify at least one area.
- auto: automatic erasing.
- custom: specified area erasing.
                     * @return WatermarkEraseMethod Watermark erasing method.
**Automatic erasing: ** Video watermarks are automatically recognized using an AI model and are erased to generate a new video. It applies to dynamic watermarks.
When automatic erasing is used, if AutoAreas is not specified, the full-screen video image area will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
 **Specified area erasing: ** For static watermarks in fixed positions, you are recommended to specify the erasing area directly.When you choose specified area erasing, specify at least one area.
- auto: automatic erasing.
- custom: specified area erasing.
                     * 
                     */
                    std::string GetWatermarkEraseMethod() const;

                    /**
                     * 设置Watermark erasing method.
**Automatic erasing: ** Video watermarks are automatically recognized using an AI model and are erased to generate a new video. It applies to dynamic watermarks.
When automatic erasing is used, if AutoAreas is not specified, the full-screen video image area will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
 **Specified area erasing: ** For static watermarks in fixed positions, you are recommended to specify the erasing area directly.When you choose specified area erasing, specify at least one area.
- auto: automatic erasing.
- custom: specified area erasing.
                     * @param _watermarkEraseMethod Watermark erasing method.
**Automatic erasing: ** Video watermarks are automatically recognized using an AI model and are erased to generate a new video. It applies to dynamic watermarks.
When automatic erasing is used, if AutoAreas is not specified, the full-screen video image area will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
 **Specified area erasing: ** For static watermarks in fixed positions, you are recommended to specify the erasing area directly.When you choose specified area erasing, specify at least one area.
- auto: automatic erasing.
- custom: specified area erasing.
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
                     * 获取Watermark erasing model.
Basic Edition: provide average effects and high cost performance. It applies to animations or videos with clean backgrounds.
Advanced Edition: provide better effects. It applies to reality-style videos, such as short dramas.
- basic: Basic Edition.
- advanced: Advanced Edition.
                     * @return WatermarkModel Watermark erasing model.
Basic Edition: provide average effects and high cost performance. It applies to animations or videos with clean backgrounds.
Advanced Edition: provide better effects. It applies to reality-style videos, such as short dramas.
- basic: Basic Edition.
- advanced: Advanced Edition.
                     * 
                     */
                    std::string GetWatermarkModel() const;

                    /**
                     * 设置Watermark erasing model.
Basic Edition: provide average effects and high cost performance. It applies to animations or videos with clean backgrounds.
Advanced Edition: provide better effects. It applies to reality-style videos, such as short dramas.
- basic: Basic Edition.
- advanced: Advanced Edition.
                     * @param _watermarkModel Watermark erasing model.
Basic Edition: provide average effects and high cost performance. It applies to animations or videos with clean backgrounds.
Advanced Edition: provide better effects. It applies to reality-style videos, such as short dramas.
- basic: Basic Edition.
- advanced: Advanced Edition.
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
                     * 获取Custom area for automatic erasing.
For the specified area, AI models are used to automatically detect and erase the target objects.
Note: When the erasing method is set to custom, this parameter is invalid. Input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * @return AutoAreas Custom area for automatic erasing.
For the specified area, AI models are used to automatically detect and erase the target objects.
Note: When the erasing method is set to custom, this parameter is invalid. Input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * 
                     */
                    std::vector<EraseArea> GetAutoAreas() const;

                    /**
                     * 设置Custom area for automatic erasing.
For the specified area, AI models are used to automatically detect and erase the target objects.
Note: When the erasing method is set to custom, this parameter is invalid. Input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * @param _autoAreas Custom area for automatic erasing.
For the specified area, AI models are used to automatically detect and erase the target objects.
Note: When the erasing method is set to custom, this parameter is invalid. Input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
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
                     * 获取Custom area for specified area erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: Input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * @return CustomAreas Custom area for specified area erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: Input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * 
                     */
                    std::vector<EraseTimeArea> GetCustomAreas() const;

                    /**
                     * 设置Custom area for specified area erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: Input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * @param _customAreas Custom area for specified area erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: Input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
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
                     * Watermark erasing method.
**Automatic erasing: ** Video watermarks are automatically recognized using an AI model and are erased to generate a new video. It applies to dynamic watermarks.
When automatic erasing is used, if AutoAreas is not specified, the full-screen video image area will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
 **Specified area erasing: ** For static watermarks in fixed positions, you are recommended to specify the erasing area directly.When you choose specified area erasing, specify at least one area.
- auto: automatic erasing.
- custom: specified area erasing.
                     */
                    std::string m_watermarkEraseMethod;
                    bool m_watermarkEraseMethodHasBeenSet;

                    /**
                     * Watermark erasing model.
Basic Edition: provide average effects and high cost performance. It applies to animations or videos with clean backgrounds.
Advanced Edition: provide better effects. It applies to reality-style videos, such as short dramas.
- basic: Basic Edition.
- advanced: Advanced Edition.
                     */
                    std::string m_watermarkModel;
                    bool m_watermarkModelHasBeenSet;

                    /**
                     * Custom area for automatic erasing.
For the specified area, AI models are used to automatically detect and erase the target objects.
Note: When the erasing method is set to custom, this parameter is invalid. Input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     */
                    std::vector<EraseArea> m_autoAreas;
                    bool m_autoAreasHasBeenSet;

                    /**
                     * Custom area for specified area erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: Input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     */
                    std::vector<EraseTimeArea> m_customAreas;
                    bool m_customAreasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_UPDATESMARTERASEWATERMARKCONFIG_H_
