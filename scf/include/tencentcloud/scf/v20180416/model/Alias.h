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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_ALIAS_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_ALIAS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/RoutingConfig.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Version alias of function
                */
                class Alias : public AbstractModel
                {
                public:
                    Alias();
                    ~Alias() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Master version pointed to by the alias
                     * @return FunctionVersion Master version pointed to by the alias
                     */
                    std::string GetFunctionVersion() const;

                    /**
                     * 设置Master version pointed to by the alias
                     * @param FunctionVersion Master version pointed to by the alias
                     */
                    void SetFunctionVersion(const std::string& _functionVersion);

                    /**
                     * 判断参数 FunctionVersion 是否已赋值
                     * @return FunctionVersion 是否已赋值
                     */
                    bool FunctionVersionHasBeenSet() const;

                    /**
                     * 获取Alias name
                     * @return Name Alias name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Alias name
                     * @param Name Alias name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Routing information of alias
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RoutingConfig Routing information of alias
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    RoutingConfig GetRoutingConfig() const;

                    /**
                     * 设置Routing information of alias
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RoutingConfig Routing information of alias
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRoutingConfig(const RoutingConfig& _routingConfig);

                    /**
                     * 判断参数 RoutingConfig 是否已赋值
                     * @return RoutingConfig 是否已赋值
                     */
                    bool RoutingConfigHasBeenSet() const;

                    /**
                     * 获取Description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Description Description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Description Description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AddTime Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AddTime Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Update time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ModTime Update time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置Update time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ModTime Update time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     */
                    bool ModTimeHasBeenSet() const;

                private:

                    /**
                     * Master version pointed to by the alias
                     */
                    std::string m_functionVersion;
                    bool m_functionVersionHasBeenSet;

                    /**
                     * Alias name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Routing information of alias
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    RoutingConfig m_routingConfig;
                    bool m_routingConfigHasBeenSet;

                    /**
                     * Description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Update time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_ALIAS_H_
