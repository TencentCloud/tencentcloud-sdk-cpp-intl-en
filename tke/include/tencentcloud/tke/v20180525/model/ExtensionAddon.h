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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EXTENSIONADDON_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EXTENSIONADDON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Information of the add-on selected for installation during cluster creation
                */
                class ExtensionAddon : public AbstractModel
                {
                public:
                    ExtensionAddon();
                    ~ExtensionAddon() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Add-on name
                     * @return AddonName Add-on name
                     * 
                     */
                    std::string GetAddonName() const;

                    /**
                     * 设置Add-on name
                     * @param _addonName Add-on name
                     * 
                     */
                    void SetAddonName(const std::string& _addonName);

                    /**
                     * 判断参数 AddonName 是否已赋值
                     * @return AddonName 是否已赋值
                     * 
                     */
                    bool AddonNameHasBeenSet() const;

                    /**
                     * 获取Add-on information (description of the add-on resource object in JSON string format)
                     * @return AddonParam Add-on information (description of the add-on resource object in JSON string format)
                     * 
                     */
                    std::string GetAddonParam() const;

                    /**
                     * 设置Add-on information (description of the add-on resource object in JSON string format)
                     * @param _addonParam Add-on information (description of the add-on resource object in JSON string format)
                     * 
                     */
                    void SetAddonParam(const std::string& _addonParam);

                    /**
                     * 判断参数 AddonParam 是否已赋值
                     * @return AddonParam 是否已赋值
                     * 
                     */
                    bool AddonParamHasBeenSet() const;

                private:

                    /**
                     * Add-on name
                     */
                    std::string m_addonName;
                    bool m_addonNameHasBeenSet;

                    /**
                     * Add-on information (description of the add-on resource object in JSON string format)
                     */
                    std::string m_addonParam;
                    bool m_addonParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EXTENSIONADDON_H_
