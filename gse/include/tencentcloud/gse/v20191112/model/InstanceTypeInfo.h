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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCETYPEINFO_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCETYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * The server instance type information
                */
                class InstanceTypeInfo : public AbstractModel
                {
                public:
                    InstanceTypeInfo();
                    ~InstanceTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the server type, such as `Standard SA1`
                     * @return TypeName Name of the server type, such as `Standard SA1`
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Name of the server type, such as `Standard SA1`
                     * @param _typeName Name of the server type, such as `Standard SA1`
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取Specification of the server type, such as `SA1.SMALL1`
                     * @return InstanceType Specification of the server type, such as `SA1.SMALL1`
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Specification of the server type, such as `SA1.SMALL1`
                     * @param _instanceType Specification of the server type, such as `SA1.SMALL1`
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
                     * 获取CPU, in core
                     * @return Cpu CPU, in core
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置CPU, in core
                     * @param _cpu CPU, in core
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Memory, in GB
                     * @return Memory Memory, in GB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Memory, in GB
                     * @param _memory Memory, in GB
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
                     * 获取The packet sending and receiving capability, in 10k PPS. 
                     * @return NetworkCard The packet sending and receiving capability, in 10k PPS. 
                     * 
                     */
                    uint64_t GetNetworkCard() const;

                    /**
                     * 设置The packet sending and receiving capability, in 10k PPS. 
                     * @param _networkCard The packet sending and receiving capability, in 10k PPS. 
                     * 
                     */
                    void SetNetworkCard(const uint64_t& _networkCard);

                    /**
                     * 判断参数 NetworkCard 是否已赋值
                     * @return NetworkCard 是否已赋值
                     * 
                     */
                    bool NetworkCardHasBeenSet() const;

                private:

                    /**
                     * Name of the server type, such as `Standard SA1`
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * Specification of the server type, such as `SA1.SMALL1`
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * CPU, in core
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory, in GB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * The packet sending and receiving capability, in 10k PPS. 
                     */
                    uint64_t m_networkCard;
                    bool m_networkCardHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCETYPEINFO_H_
