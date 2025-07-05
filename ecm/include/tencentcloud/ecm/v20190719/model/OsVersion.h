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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_OSVERSION_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_OSVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Supported OS types.
                */
                class OsVersion : public AbstractModel
                {
                public:
                    OsVersion();
                    ~OsVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取OS type
                     * @return OsName OS type
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置OS type
                     * @param _osName OS type
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取Supported OS versions
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OsVersions Supported OS versions
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetOsVersions() const;

                    /**
                     * 设置Supported OS versions
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _osVersions Supported OS versions
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOsVersions(const std::vector<std::string>& _osVersions);

                    /**
                     * 判断参数 OsVersions 是否已赋值
                     * @return OsVersions 是否已赋值
                     * 
                     */
                    bool OsVersionsHasBeenSet() const;

                    /**
                     * 获取Supported OS architecture
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Architecture Supported OS architecture
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetArchitecture() const;

                    /**
                     * 设置Supported OS architecture
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _architecture Supported OS architecture
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetArchitecture(const std::vector<std::string>& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     * 
                     */
                    bool ArchitectureHasBeenSet() const;

                private:

                    /**
                     * OS type
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * Supported OS versions
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_osVersions;
                    bool m_osVersionsHasBeenSet;

                    /**
                     * Supported OS architecture
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_architecture;
                    bool m_architectureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_OSVERSION_H_
