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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_EXTERNALNODEINFO_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_EXTERNALNODEINFO_H_

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
                * Third-party node
                */
                class ExternalNodeInfo : public AbstractModel
                {
                public:
                    ExternalNodeInfo();
                    ~ExternalNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Third-party node name
                     * @return Name Third-party node name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Third-party node name
                     * @param _name Third-party node name
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
                     * 获取Number of CPU cores (unit: cores)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return CPU Number of CPU cores (unit: cores)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置Number of CPU cores (unit: cores)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _cPU Number of CPU cores (unit: cores)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取Node memory capacity (unit: `GB`)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Memory Node memory capacity (unit: `GB`)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Node memory capacity (unit: `GB`)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _memory Node memory capacity (unit: `GB`)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取kubelet version information of third-party nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return K8SVersion kubelet version information of third-party nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetK8SVersion() const;

                    /**
                     * 设置kubelet version information of third-party nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _k8SVersion kubelet version information of third-party nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetK8SVersion(const std::string& _k8SVersion);

                    /**
                     * 判断参数 K8SVersion 是否已赋值
                     * @return K8SVersion 是否已赋值
                     * 
                     */
                    bool K8SVersionHasBeenSet() const;

                private:

                    /**
                     * Third-party node name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Number of CPU cores (unit: cores)
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * Node memory capacity (unit: `GB`)
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * kubelet version information of third-party nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_k8SVersion;
                    bool m_k8SVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_EXTERNALNODEINFO_H_
