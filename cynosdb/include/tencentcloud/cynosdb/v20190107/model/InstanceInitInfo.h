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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEINITINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEINITINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Instance initialization configuration information
                */
                class InstanceInitInfo : public AbstractModel
                {
                public:
                    InstanceInitInfo();
                    ~InstanceInitInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance CPU
                     * @return Cpu Instance CPU
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Instance CPU
                     * @param _cpu Instance CPU
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Instance memory
                     * @return Memory Instance memory
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory
                     * @param _memory Instance memory
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance type. Valid values:`rw`, `ro`.
                     * @return InstanceType Instance type. Valid values:`rw`, `ro`.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type. Valid values:`rw`, `ro`.
                     * @param _instanceType Instance type. Valid values:`rw`, `ro`.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Number of the instances. Value range: 1-15.
                     * @return InstanceCount Number of the instances. Value range: 1-15.
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置Number of the instances. Value range: 1-15.
                     * @param _instanceCount Number of the instances. Value range: 1-15.
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Minimum number of serverless instances. Value range: 1-15.
                     * @return MinRoCount Minimum number of serverless instances. Value range: 1-15.
                     * 
                     */
                    int64_t GetMinRoCount() const;

                    /**
                     * 设置Minimum number of serverless instances. Value range: 1-15.
                     * @param _minRoCount Minimum number of serverless instances. Value range: 1-15.
                     * 
                     */
                    void SetMinRoCount(const int64_t& _minRoCount);

                    /**
                     * 判断参数 MinRoCount 是否已赋值
                     * @return MinRoCount 是否已赋值
                     * 
                     */
                    bool MinRoCountHasBeenSet() const;

                    /**
                     * 获取Maximum number of serverless instances. Value range: 1-15.
                     * @return MaxRoCount Maximum number of serverless instances. Value range: 1-15.
                     * 
                     */
                    int64_t GetMaxRoCount() const;

                    /**
                     * 设置Maximum number of serverless instances. Value range: 1-15.
                     * @param _maxRoCount Maximum number of serverless instances. Value range: 1-15.
                     * 
                     */
                    void SetMaxRoCount(const int64_t& _maxRoCount);

                    /**
                     * 判断参数 MaxRoCount 是否已赋值
                     * @return MaxRoCount 是否已赋值
                     * 
                     */
                    bool MaxRoCountHasBeenSet() const;

                    /**
                     * 获取Minimum specifications for serverless instance
                     * @return MinRoCpu Minimum specifications for serverless instance
                     * 
                     */
                    double GetMinRoCpu() const;

                    /**
                     * 设置Minimum specifications for serverless instance
                     * @param _minRoCpu Minimum specifications for serverless instance
                     * 
                     */
                    void SetMinRoCpu(const double& _minRoCpu);

                    /**
                     * 判断参数 MinRoCpu 是否已赋值
                     * @return MinRoCpu 是否已赋值
                     * 
                     */
                    bool MinRoCpuHasBeenSet() const;

                    /**
                     * 获取Maximum specifications for serverless instance
                     * @return MaxRoCpu Maximum specifications for serverless instance
                     * 
                     */
                    double GetMaxRoCpu() const;

                    /**
                     * 设置Maximum specifications for serverless instance
                     * @param _maxRoCpu Maximum specifications for serverless instance
                     * 
                     */
                    void SetMaxRoCpu(const double& _maxRoCpu);

                    /**
                     * 判断参数 MaxRoCpu 是否已赋值
                     * @return MaxRoCpu 是否已赋值
                     * 
                     */
                    bool MaxRoCpuHasBeenSet() const;

                private:

                    /**
                     * Instance CPU
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Instance memory
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance type. Valid values:`rw`, `ro`.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Number of the instances. Value range: 1-15.
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Minimum number of serverless instances. Value range: 1-15.
                     */
                    int64_t m_minRoCount;
                    bool m_minRoCountHasBeenSet;

                    /**
                     * Maximum number of serverless instances. Value range: 1-15.
                     */
                    int64_t m_maxRoCount;
                    bool m_maxRoCountHasBeenSet;

                    /**
                     * Minimum specifications for serverless instance
                     */
                    double m_minRoCpu;
                    bool m_minRoCpuHasBeenSet;

                    /**
                     * Maximum specifications for serverless instance
                     */
                    double m_maxRoCpu;
                    bool m_maxRoCpuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEINITINFO_H_
