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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMESETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 
                */
                class InstanceNameSettings : public AbstractModel
                {
                public:
                    InstanceNameSettings();
                    ~InstanceNameSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return InstanceName 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置
                     * @param InstanceName 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return InstanceNameStyle 
                     */
                    std::string GetInstanceNameStyle() const;

                    /**
                     * 设置
                     * @param InstanceNameStyle 
                     */
                    void SetInstanceNameStyle(const std::string& _instanceNameStyle);

                    /**
                     * 判断参数 InstanceNameStyle 是否已赋值
                     * @return InstanceNameStyle 是否已赋值
                     */
                    bool InstanceNameStyleHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_instanceNameStyle;
                    bool m_instanceNameStyleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMESETTINGS_H_
