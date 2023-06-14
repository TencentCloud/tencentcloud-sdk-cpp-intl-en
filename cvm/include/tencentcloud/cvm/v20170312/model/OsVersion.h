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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_OSVERSION_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_OSVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Supported operating system types.
                */
                class OsVersion : public AbstractModel
                {
                public:
                    OsVersion();
                    ~OsVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operating system type
                     * @return OsName Operating system type
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置Operating system type
                     * @param _osName Operating system type
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
                     * 获取Supported operating system versions
                     * @return OsVersions Supported operating system versions
                     * 
                     */
                    std::vector<std::string> GetOsVersions() const;

                    /**
                     * 设置Supported operating system versions
                     * @param _osVersions Supported operating system versions
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
                     * 获取Supported operating system architecture
                     * @return Architecture Supported operating system architecture
                     * 
                     */
                    std::vector<std::string> GetArchitecture() const;

                    /**
                     * 设置Supported operating system architecture
                     * @param _architecture Supported operating system architecture
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
                     * Operating system type
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * Supported operating system versions
                     */
                    std::vector<std::string> m_osVersions;
                    bool m_osVersionsHasBeenSet;

                    /**
                     * Supported operating system architecture
                     */
                    std::vector<std::string> m_architecture;
                    bool m_architectureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_OSVERSION_H_
