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
                     * @return Component Component name
                     * @deprecated
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置Component name
                     * @param _component Component name
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
                     * @return Version Component version information
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Component version information
                     * @param _version Component version information
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
                     * 获取Repairable Version
                     * @return FixedVersion Repairable Version
                     * 
                     */
                    std::string GetFixedVersion() const;

                    /**
                     * 设置Repairable Version
                     * @param _fixedVersion Repairable Version
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
                     * 获取Path.
                     * @return Path Path.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path.
                     * @param _path Path.
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
                     * 获取Type.
                     * @return Type Type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type.
                     * @param _type Type.
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
                     * 获取Component name
                     * @return Name Component name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Component name
                     * @param _name Component name
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
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * Component version information
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Repairable Version
                     */
                    std::string m_fixedVersion;
                    bool m_fixedVersionHasBeenSet;

                    /**
                     * Path.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Component name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPONENTSINFO_H_
