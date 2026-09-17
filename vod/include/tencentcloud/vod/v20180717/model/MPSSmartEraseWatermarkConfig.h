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
                * 
                */
                class MPSSmartEraseWatermarkConfig : public AbstractModel
                {
                public:
                    MPSSmartEraseWatermarkConfig();
                    ~MPSSmartEraseWatermarkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return WatermarkEraseMethod 
                     * 
                     */
                    std::string GetWatermarkEraseMethod() const;

                    /**
                     * 设置
                     * @param _watermarkEraseMethod 
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
                     * 获取
                     * @return WatermarkModel 
                     * 
                     */
                    std::string GetWatermarkModel() const;

                    /**
                     * 设置
                     * @param _watermarkModel 
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
                     * 获取
                     * @return AutoAreas 
                     * 
                     */
                    std::vector<MPSEraseArea> GetAutoAreas() const;

                    /**
                     * 设置
                     * @param _autoAreas 
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
                     * 获取
                     * @return CustomAreas 
                     * 
                     */
                    std::vector<MPSEraseTimeArea> GetCustomAreas() const;

                    /**
                     * 设置
                     * @param _customAreas 
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
                     * 
                     */
                    std::string m_watermarkEraseMethod;
                    bool m_watermarkEraseMethodHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_watermarkModel;
                    bool m_watermarkModelHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<MPSEraseArea> m_autoAreas;
                    bool m_autoAreasHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<MPSEraseTimeArea> m_customAreas;
                    bool m_customAreasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASEWATERMARKCONFIG_H_
