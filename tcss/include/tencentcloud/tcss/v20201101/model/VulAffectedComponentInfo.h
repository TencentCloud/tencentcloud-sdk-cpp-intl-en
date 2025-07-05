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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULAFFECTEDCOMPONENTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULAFFECTEDCOMPONENTINFO_H_

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
                * Information of the component affected by the vulnerability
                */
                class VulAffectedComponentInfo : public AbstractModel
                {
                public:
                    VulAffectedComponentInfo();
                    ~VulAffectedComponentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Component name
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

                    /**
                     * 获取Component version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Version Component version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetVersion() const;

                    /**
                     * 设置Component version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _version Component version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersion(const std::vector<std::string>& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Fixed component version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FixedVersion Fixed component version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFixedVersion() const;

                    /**
                     * 设置Fixed component version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fixedVersion Fixed component version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFixedVersion(const std::vector<std::string>& _fixedVersion);

                    /**
                     * 判断参数 FixedVersion 是否已赋值
                     * @return FixedVersion 是否已赋值
                     * 
                     */
                    bool FixedVersionHasBeenSet() const;

                private:

                    /**
                     * Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Component version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Fixed component version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_fixedVersion;
                    bool m_fixedVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULAFFECTEDCOMPONENTINFO_H_
