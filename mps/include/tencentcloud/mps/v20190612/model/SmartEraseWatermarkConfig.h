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
                * Watermark removal configuration for the smart erasing template.
                */
                class SmartEraseWatermarkConfig : public AbstractModel
                {
                public:
                    SmartEraseWatermarkConfig();
                    ~SmartEraseWatermarkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Watermark removal method.
**Automatic erasing:** Video watermarks are automatically recognized using an AI model and are erased to generate a new video. It applies to dynamic watermarks.
When using automatic erasing, if AutoAreas is not specified, the full-screen video image area will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
**Specified area erasure:** For static watermarks with a relatively fixed position, we recommend you directly specify the area to erase.
When you choose specified area erasure, import at least a specified region.

-. auto: automatic removal
- custom: specified area erasing.
                     * @return WatermarkEraseMethod Watermark removal method.
**Automatic erasing:** Video watermarks are automatically recognized using an AI model and are erased to generate a new video. It applies to dynamic watermarks.
When using automatic erasing, if AutoAreas is not specified, the full-screen video image area will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
**Specified area erasure:** For static watermarks with a relatively fixed position, we recommend you directly specify the area to erase.
When you choose specified area erasure, import at least a specified region.

-. auto: automatic removal
- custom: specified area erasing.
                     * 
                     */
                    std::string GetWatermarkEraseMethod() const;

                    /**
                     * 设置Watermark removal method.
**Automatic erasing:** Video watermarks are automatically recognized using an AI model and are erased to generate a new video. It applies to dynamic watermarks.
When using automatic erasing, if AutoAreas is not specified, the full-screen video image area will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
**Specified area erasure:** For static watermarks with a relatively fixed position, we recommend you directly specify the area to erase.
When you choose specified area erasure, import at least a specified region.

-. auto: automatic removal
- custom: specified area erasing.
                     * @param _watermarkEraseMethod Watermark removal method.
**Automatic erasing:** Video watermarks are automatically recognized using an AI model and are erased to generate a new video. It applies to dynamic watermarks.
When using automatic erasing, if AutoAreas is not specified, the full-screen video image area will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
**Specified area erasure:** For static watermarks with a relatively fixed position, we recommend you directly specify the area to erase.
When you choose specified area erasure, import at least a specified region.

-. auto: automatic removal
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
                     * 获取Watermark removal model.
Basic Edition: Provides average effects and high cost performance. Suitable for animations or videos with clean backgrounds.
Advanced edition: Better effectiveness, suitable for reality style videos such as short drama.
-.
- advanced: Advanced Edition.
                     * @return WatermarkModel Watermark removal model.
Basic Edition: Provides average effects and high cost performance. Suitable for animations or videos with clean backgrounds.
Advanced edition: Better effectiveness, suitable for reality style videos such as short drama.
-.
- advanced: Advanced Edition.
                     * 
                     */
                    std::string GetWatermarkModel() const;

                    /**
                     * 设置Watermark removal model.
Basic Edition: Provides average effects and high cost performance. Suitable for animations or videos with clean backgrounds.
Advanced edition: Better effectiveness, suitable for reality style videos such as short drama.
-.
- advanced: Advanced Edition.
                     * @param _watermarkModel Watermark removal model.
Basic Edition: Provides average effects and high cost performance. Suitable for animations or videos with clean backgrounds.
Advanced edition: Better effectiveness, suitable for reality style videos such as short drama.
-.
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
Note: When the erasing method is set to custom, this parameter is invalid. When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * @return AutoAreas Custom area for automatic erasing.
For the specified area, AI models are used to automatically detect and erase the target objects.
Note: When the erasing method is set to custom, this parameter is invalid. When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * 
                     */
                    std::vector<EraseArea> GetAutoAreas() const;

                    /**
                     * 设置Custom area for automatic erasing.
For the specified area, AI models are used to automatically detect and erase the target objects.
Note: When the erasing method is set to custom, this parameter is invalid. When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * @param _autoAreas Custom area for automatic erasing.
For the specified area, AI models are used to automatically detect and erase the target objects.
Note: When the erasing method is set to custom, this parameter is invalid. When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
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
                     * 获取Specify the custom region for erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * @return CustomAreas Specify the custom region for erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * 
                     */
                    std::vector<EraseTimeArea> GetCustomAreas() const;

                    /**
                     * 设置Specify the custom region for erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * @param _customAreas Specify the custom region for erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
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
                     * Watermark removal method.
**Automatic erasing:** Video watermarks are automatically recognized using an AI model and are erased to generate a new video. It applies to dynamic watermarks.
When using automatic erasing, if AutoAreas is not specified, the full-screen video image area will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
**Specified area erasure:** For static watermarks with a relatively fixed position, we recommend you directly specify the area to erase.
When you choose specified area erasure, import at least a specified region.

-. auto: automatic removal
- custom: specified area erasing.
                     */
                    std::string m_watermarkEraseMethod;
                    bool m_watermarkEraseMethodHasBeenSet;

                    /**
                     * Watermark removal model.
Basic Edition: Provides average effects and high cost performance. Suitable for animations or videos with clean backgrounds.
Advanced edition: Better effectiveness, suitable for reality style videos such as short drama.
-.
- advanced: Advanced Edition.
                     */
                    std::string m_watermarkModel;
                    bool m_watermarkModelHasBeenSet;

                    /**
                     * Custom area for automatic erasing.
For the specified area, AI models are used to automatically detect and erase the target objects.
Note: When the erasing method is set to custom, this parameter is invalid. When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     */
                    std::vector<EraseArea> m_autoAreas;
                    bool m_autoAreasHasBeenSet;

                    /**
                     * Specify the custom region for erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     */
                    std::vector<EraseTimeArea> m_customAreas;
                    bool m_customAreasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASEWATERMARKCONFIG_H_
