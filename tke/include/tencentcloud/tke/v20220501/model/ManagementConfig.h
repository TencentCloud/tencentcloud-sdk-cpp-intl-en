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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_MANAGEMENTCONFIG_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_MANAGEMENTCONFIG_H_

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
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Management configuration of managed node pools
                */
                class ManagementConfig : public AbstractModel
                {
                public:
                    ManagementConfig();
                    ~ManagementConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取dns configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Nameservers dns configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetNameservers() const;

                    /**
                     * 设置dns configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _nameservers dns configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNameservers(const std::vector<std::string>& _nameservers);

                    /**
                     * 判断参数 Nameservers 是否已赋值
                     * @return Nameservers 是否已赋值
                     * 
                     */
                    bool NameserversHasBeenSet() const;

                    /**
                     * 获取hosts configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Hosts hosts configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置hosts configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _hosts hosts configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取Kernel parameter configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return KernelArgs Kernel parameter configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKernelArgs() const;

                    /**
                     * 设置Kernel parameter configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _kernelArgs Kernel parameter configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetKernelArgs(const std::vector<std::string>& _kernelArgs);

                    /**
                     * 判断参数 KernelArgs 是否已赋值
                     * @return KernelArgs 是否已赋值
                     * 
                     */
                    bool KernelArgsHasBeenSet() const;

                private:

                    /**
                     * dns configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_nameservers;
                    bool m_nameserversHasBeenSet;

                    /**
                     * hosts configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * Kernel parameter configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_kernelArgs;
                    bool m_kernelArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_MANAGEMENTCONFIG_H_
