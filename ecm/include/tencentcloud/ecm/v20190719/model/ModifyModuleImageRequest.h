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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULEIMAGEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyModuleImage request structure.
                */
                class ModifyModuleImageRequest : public AbstractModel
                {
                public:
                    ModifyModuleImageRequest();
                    ~ModifyModuleImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Default image ID
                     * @return DefaultImageId Default image ID
                     * 
                     */
                    std::string GetDefaultImageId() const;

                    /**
                     * 设置Default image ID
                     * @param _defaultImageId Default image ID
                     * 
                     */
                    void SetDefaultImageId(const std::string& _defaultImageId);

                    /**
                     * 判断参数 DefaultImageId 是否已赋值
                     * @return DefaultImageId 是否已赋值
                     * 
                     */
                    bool DefaultImageIdHasBeenSet() const;

                    /**
                     * 获取Module ID
                     * @return ModuleId Module ID
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置Module ID
                     * @param _moduleId Module ID
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                private:

                    /**
                     * Default image ID
                     */
                    std::string m_defaultImageId;
                    bool m_defaultImageIdHasBeenSet;

                    /**
                     * Module ID
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULEIMAGEREQUEST_H_
