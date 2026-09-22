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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASEWATERMARKCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASEWATERMARKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSEraseArea.h>
#include <tencentcloud/vod/v20180717/model/MPSEraseTimeArea.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Watermark removal configuration for the smart erasing template.
                */
                class MPSSmartEraseWatermarkConfig : public AbstractModel
                {
                public:
                    MPSSmartEraseWatermarkConfig();
                    ~MPSSmartEraseWatermarkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Watermark removal method. <strong>Auto removal:</strong> Model A automatically recognizes watermarks in the video and generates a new video after removal. Suitable for dynamic watermarks. When using auto removal, if you do not specify AutoAreas, auto removal will be performed on the full screen of the video; if AutoAreas is specified, auto removal will be performed on your specified areas instead. <strong>Specified area removal:</strong> For static watermarks with relatively fixed positions, it is recommended to directly specify the removal area. When you choose specified area removal, at least one specified area must be provided. - auto: auto removal - custom: specified area removal</p>
                     * @return WatermarkEraseMethod <p>Watermark removal method. <strong>Auto removal:</strong> Model A automatically recognizes watermarks in the video and generates a new video after removal. Suitable for dynamic watermarks. When using auto removal, if you do not specify AutoAreas, auto removal will be performed on the full screen of the video; if AutoAreas is specified, auto removal will be performed on your specified areas instead. <strong>Specified area removal:</strong> For static watermarks with relatively fixed positions, it is recommended to directly specify the removal area. When you choose specified area removal, at least one specified area must be provided. - auto: auto removal - custom: specified area removal</p>
                     * 
                     */
                    std::string GetWatermarkEraseMethod() const;

                    /**
                     * 设置<p>Watermark removal method. <strong>Auto removal:</strong> Model A automatically recognizes watermarks in the video and generates a new video after removal. Suitable for dynamic watermarks. When using auto removal, if you do not specify AutoAreas, auto removal will be performed on the full screen of the video; if AutoAreas is specified, auto removal will be performed on your specified areas instead. <strong>Specified area removal:</strong> For static watermarks with relatively fixed positions, it is recommended to directly specify the removal area. When you choose specified area removal, at least one specified area must be provided. - auto: auto removal - custom: specified area removal</p>
                     * @param _watermarkEraseMethod <p>Watermark removal method. <strong>Auto removal:</strong> Model A automatically recognizes watermarks in the video and generates a new video after removal. Suitable for dynamic watermarks. When using auto removal, if you do not specify AutoAreas, auto removal will be performed on the full screen of the video; if AutoAreas is specified, auto removal will be performed on your specified areas instead. <strong>Specified area removal:</strong> For static watermarks with relatively fixed positions, it is recommended to directly specify the removal area. When you choose specified area removal, at least one specified area must be provided. - auto: auto removal - custom: specified area removal</p>
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
                     * 获取<p>Watermark removal model. Basic Edition: provides average effects and high cost performance. It applies to animations or videos with clean backgrounds. Advanced Edition: provides better effectiveness and is suitable for realistic-style videos such as mini-dramas. - basic edition - advanced edition</p>
                     * @return WatermarkModel <p>Watermark removal model. Basic Edition: provides average effects and high cost performance. It applies to animations or videos with clean backgrounds. Advanced Edition: provides better effectiveness and is suitable for realistic-style videos such as mini-dramas. - basic edition - advanced edition</p>
                     * 
                     */
                    std::string GetWatermarkModel() const;

                    /**
                     * 设置<p>Watermark removal model. Basic Edition: provides average effects and high cost performance. It applies to animations or videos with clean backgrounds. Advanced Edition: provides better effectiveness and is suitable for realistic-style videos such as mini-dramas. - basic edition - advanced edition</p>
                     * @param _watermarkModel <p>Watermark removal model. Basic Edition: provides average effects and high cost performance. It applies to animations or videos with clean backgrounds. Advanced Edition: provides better effectiveness and is suitable for realistic-style videos such as mini-dramas. - basic edition - advanced edition</p>
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
                     * 获取<p>Automatically erase custom regions. For selected regions, use the AI model to automatically detect and erase existing targets. Note: When the erase method is set to custom, this parameter will not take effect. Input [] for region cleanup. If not provided, the template region information remains unchanged.</p>
                     * @return AutoAreas <p>Automatically erase custom regions. For selected regions, use the AI model to automatically detect and erase existing targets. Note: When the erase method is set to custom, this parameter will not take effect. Input [] for region cleanup. If not provided, the template region information remains unchanged.</p>
                     * 
                     */
                    std::vector<MPSEraseArea> GetAutoAreas() const;

                    /**
                     * 设置<p>Automatically erase custom regions. For selected regions, use the AI model to automatically detect and erase existing targets. Note: When the erase method is set to custom, this parameter will not take effect. Input [] for region cleanup. If not provided, the template region information remains unchanged.</p>
                     * @param _autoAreas <p>Automatically erase custom regions. For selected regions, use the AI model to automatically detect and erase existing targets. Note: When the erase method is set to custom, this parameter will not take effect. Input [] for region cleanup. If not provided, the template region information remains unchanged.</p>
                     * 
                     */
                    void SetAutoAreas(const std::vector<MPSEraseArea>& _autoAreas);

                    /**
                     * 判断参数 AutoAreas 是否已赋值
                     * @return AutoAreas 是否已赋值
                     * 
                     */
                    bool AutoAreasHasBeenSet() const;

                    /**
                     * 获取<p>Designate the removal of custom regions. For specified regions, directly perform erasure without detection and recognition within a selected time range. Note: Import [] to clear regions. The template region information remains unchanged if not imported.</p>
                     * @return CustomAreas <p>Designate the removal of custom regions. For specified regions, directly perform erasure without detection and recognition within a selected time range. Note: Import [] to clear regions. The template region information remains unchanged if not imported.</p>
                     * 
                     */
                    std::vector<MPSEraseTimeArea> GetCustomAreas() const;

                    /**
                     * 设置<p>Designate the removal of custom regions. For specified regions, directly perform erasure without detection and recognition within a selected time range. Note: Import [] to clear regions. The template region information remains unchanged if not imported.</p>
                     * @param _customAreas <p>Designate the removal of custom regions. For specified regions, directly perform erasure without detection and recognition within a selected time range. Note: Import [] to clear regions. The template region information remains unchanged if not imported.</p>
                     * 
                     */
                    void SetCustomAreas(const std::vector<MPSEraseTimeArea>& _customAreas);

                    /**
                     * 判断参数 CustomAreas 是否已赋值
                     * @return CustomAreas 是否已赋值
                     * 
                     */
                    bool CustomAreasHasBeenSet() const;

                private:

                    /**
                     * <p>Watermark removal method. <strong>Auto removal:</strong> Model A automatically recognizes watermarks in the video and generates a new video after removal. Suitable for dynamic watermarks. When using auto removal, if you do not specify AutoAreas, auto removal will be performed on the full screen of the video; if AutoAreas is specified, auto removal will be performed on your specified areas instead. <strong>Specified area removal:</strong> For static watermarks with relatively fixed positions, it is recommended to directly specify the removal area. When you choose specified area removal, at least one specified area must be provided. - auto: auto removal - custom: specified area removal</p>
                     */
                    std::string m_watermarkEraseMethod;
                    bool m_watermarkEraseMethodHasBeenSet;

                    /**
                     * <p>Watermark removal model. Basic Edition: provides average effects and high cost performance. It applies to animations or videos with clean backgrounds. Advanced Edition: provides better effectiveness and is suitable for realistic-style videos such as mini-dramas. - basic edition - advanced edition</p>
                     */
                    std::string m_watermarkModel;
                    bool m_watermarkModelHasBeenSet;

                    /**
                     * <p>Automatically erase custom regions. For selected regions, use the AI model to automatically detect and erase existing targets. Note: When the erase method is set to custom, this parameter will not take effect. Input [] for region cleanup. If not provided, the template region information remains unchanged.</p>
                     */
                    std::vector<MPSEraseArea> m_autoAreas;
                    bool m_autoAreasHasBeenSet;

                    /**
                     * <p>Designate the removal of custom regions. For specified regions, directly perform erasure without detection and recognition within a selected time range. Note: Import [] to clear regions. The template region information remains unchanged if not imported.</p>
                     */
                    std::vector<MPSEraseTimeArea> m_customAreas;
                    bool m_customAreasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASEWATERMARKCONFIG_H_
