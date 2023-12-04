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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPONENTSINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPONENTSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Component information
                */
                class ComponentsInfo : public AbstractModel
                {
                public:
                    ComponentsInfo();
                    ~ComponentsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Component Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _component Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * @deprecated
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取Component version information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Version Component version information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Component version information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _version Component version information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Fixed version
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @return FixedVersion Fixed version
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFixedVersion() const;

                    /**
                     * 设置Fixed version
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @param _fixedVersion Fixed version
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFixedVersion(const std::string& _fixedVersion);

                    /**
                     * 判断参数 FixedVersion 是否已赋值
                     * @return FixedVersion 是否已赋值
                     * 
                     */
                    bool FixedVersionHasBeenSet() const;

                    /**
                     * 获取Path
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @return Path Path
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @param _path Path
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Type
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @return Type Type
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @param _type Type
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Add-on name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Add-on name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Add-on name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Add-on name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * Component version information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Fixed version
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     */
                    std::string m_fixedVersion;
                    bool m_fixedVersionHasBeenSet;

                    /**
                     * Path
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Type
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Add-on name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPONENTSINFO_H_
