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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONREGIONSELECTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONREGIONSELECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Region policy settings.
                */
                class ConfigGroupFunctionRegionSelection : public AbstractModel
                {
                public:
                    ConfigGroupFunctionRegionSelection();
                    ~ConfigGroupFunctionRegionSelection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Specify the function executed. The value is the unique identifier of the function in the site. This parameter is valid only when TriggerType is direct.</p>
                     * @return Function <p>Specify the function executed. The value is the unique identifier of the function in the site. This parameter is valid only when TriggerType is direct.</p>
                     * 
                     */
                    std::string GetFunction() const;

                    /**
                     * 设置<p>Specify the function executed. The value is the unique identifier of the function in the site. This parameter is valid only when TriggerType is direct.</p>
                     * @param _function <p>Specify the function executed. The value is the unique identifier of the function in the site. This parameter is valid only when TriggerType is direct.</p>
                     * 
                     */
                    void SetFunction(const std::string& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                    /**
                     * 获取<p>List of countries/regions. Example value: CN: China, CN.GD: Guangdong, China. For values, see <a href="https://www.tencentcloud.com/document/product/1552/112542?from_cn_redirect=1">Countries/Regions and Corresponding Codes</a>.</p>
                     * @return Regions <p>List of countries/regions. Example value: CN: China, CN.GD: Guangdong, China. For values, see <a href="https://www.tencentcloud.com/document/product/1552/112542?from_cn_redirect=1">Countries/Regions and Corresponding Codes</a>.</p>
                     * 
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置<p>List of countries/regions. Example value: CN: China, CN.GD: Guangdong, China. For values, see <a href="https://www.tencentcloud.com/document/product/1552/112542?from_cn_redirect=1">Countries/Regions and Corresponding Codes</a>.</p>
                     * @param _regions <p>List of countries/regions. Example value: CN: China, CN.GD: Guangdong, China. For values, see <a href="https://www.tencentcloud.com/document/product/1552/112542?from_cn_redirect=1">Countries/Regions and Corresponding Codes</a>.</p>
                     * 
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * <p>Specify the function executed. The value is the unique identifier of the function in the site. This parameter is valid only when TriggerType is direct.</p>
                     */
                    std::string m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * <p>List of countries/regions. Example value: CN: China, CN.GD: Guangdong, China. For values, see <a href="https://www.tencentcloud.com/document/product/1552/112542?from_cn_redirect=1">Countries/Regions and Corresponding Codes</a>.</p>
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONREGIONSELECTION_H_
