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
                     * 获取<p>Instance cpu</p>
                     * @return Cpu <p>Instance cpu</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Instance cpu</p>
                     * @param _cpu <p>Instance cpu</p>
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
                     * 获取<p>Instance memory</p>
                     * @return Memory <p>Instance memory</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>Instance memory</p>
                     * @param _memory <p>Instance memory</p>
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
                     * 获取<p>Instance type rw/ro</p>
                     * @return InstanceType <p>Instance type rw/ro</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Instance type rw/ro</p>
                     * @param _instanceType <p>Instance type rw/ro</p>
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
                     * 获取<p>Number of instances, range [1,15]</p>
                     * @return InstanceCount <p>Number of instances, range [1,15]</p>
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置<p>Number of instances, range [1,15]</p>
                     * @param _instanceCount <p>Number of instances, range [1,15]</p>
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
                     * 获取<p>Minimum count of Serverless instance, range [1,15]</p>
                     * @return MinRoCount <p>Minimum count of Serverless instance, range [1,15]</p>
                     * 
                     */
                    int64_t GetMinRoCount() const;

                    /**
                     * 设置<p>Minimum count of Serverless instance, range [1,15]</p>
                     * @param _minRoCount <p>Minimum count of Serverless instance, range [1,15]</p>
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
                     * 获取<p>Maximum count of Serverless instances, range [1,15]</p>
                     * @return MaxRoCount <p>Maximum count of Serverless instances, range [1,15]</p>
                     * 
                     */
                    int64_t GetMaxRoCount() const;

                    /**
                     * 设置<p>Maximum count of Serverless instances, range [1,15]</p>
                     * @param _maxRoCount <p>Maximum count of Serverless instances, range [1,15]</p>
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
                     * 获取<p>Minimum specification of Serverless instance</p>
                     * @return MinRoCpu <p>Minimum specification of Serverless instance</p>
                     * 
                     */
                    double GetMinRoCpu() const;

                    /**
                     * 设置<p>Minimum specification of Serverless instance</p>
                     * @param _minRoCpu <p>Minimum specification of Serverless instance</p>
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
                     * 获取<p>Maximum specification of Serverless instance</p>
                     * @return MaxRoCpu <p>Maximum specification of Serverless instance</p>
                     * 
                     */
                    double GetMaxRoCpu() const;

                    /**
                     * 设置<p>Maximum specification of Serverless instance</p>
                     * @param _maxRoCpu <p>Maximum specification of Serverless instance</p>
                     * 
                     */
                    void SetMaxRoCpu(const double& _maxRoCpu);

                    /**
                     * 判断参数 MaxRoCpu 是否已赋值
                     * @return MaxRoCpu 是否已赋值
                     * 
                     */
                    bool MaxRoCpuHasBeenSet() const;

                    /**
                     * 获取<p>Instance Machine Type</p><ol><li>common, universal type.</li><li>exclusive, dedicated.</li></ol>
                     * @return DeviceType <p>Instance Machine Type</p><ol><li>common, universal type.</li><li>exclusive, dedicated.</li></ol>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>Instance Machine Type</p><ol><li>common, universal type.</li><li>exclusive, dedicated.</li></ol>
                     * @param _deviceType <p>Instance Machine Type</p><ol><li>common, universal type.</li><li>exclusive, dedicated.</li></ol>
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Instance cpu</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Instance memory</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Instance type rw/ro</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Number of instances, range [1,15]</p>
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>Minimum count of Serverless instance, range [1,15]</p>
                     */
                    int64_t m_minRoCount;
                    bool m_minRoCountHasBeenSet;

                    /**
                     * <p>Maximum count of Serverless instances, range [1,15]</p>
                     */
                    int64_t m_maxRoCount;
                    bool m_maxRoCountHasBeenSet;

                    /**
                     * <p>Minimum specification of Serverless instance</p>
                     */
                    double m_minRoCpu;
                    bool m_minRoCpuHasBeenSet;

                    /**
                     * <p>Maximum specification of Serverless instance</p>
                     */
                    double m_maxRoCpu;
                    bool m_maxRoCpuHasBeenSet;

                    /**
                     * <p>Instance Machine Type</p><ol><li>common, universal type.</li><li>exclusive, dedicated.</li></ol>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEINITINFO_H_
