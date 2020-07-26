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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBECOMPONENTINFORESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBECOMPONENTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeComponentInfo response structure.
                */
                class DescribeComponentInfoResponse : public AbstractModel
                {
                public:
                    DescribeComponentInfoResponse();
                    ~DescribeComponentInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Component ID.
                     * @return Id Component ID.
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Component name.
                     * @return ComponentName Component name.
                     */
                    std::string GetComponentName() const;

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取Component type.
<li>WEB: web component</li>
<li>SYSTEM: system component</li>
                     * @return ComponentType Component type.
<li>WEB: web component</li>
<li>SYSTEM: system component</li>
                     */
                    std::string GetComponentType() const;

                    /**
                     * 判断参数 ComponentType 是否已赋值
                     * @return ComponentType 是否已赋值
                     */
                    bool ComponentTypeHasBeenSet() const;

                    /**
                     * 获取Component's official website.
                     * @return Homepage Component's official website.
                     */
                    std::string GetHomepage() const;

                    /**
                     * 判断参数 Homepage 是否已赋值
                     * @return Homepage 是否已赋值
                     */
                    bool HomepageHasBeenSet() const;

                    /**
                     * 获取Component description.
                     * @return Description Component description.
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Component ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Component name.
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * Component type.
<li>WEB: web component</li>
<li>SYSTEM: system component</li>
                     */
                    std::string m_componentType;
                    bool m_componentTypeHasBeenSet;

                    /**
                     * Component's official website.
                     */
                    std::string m_homepage;
                    bool m_homepageHasBeenSet;

                    /**
                     * Component description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBECOMPONENTINFORESPONSE_H_
