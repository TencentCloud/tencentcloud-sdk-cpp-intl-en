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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PODCHARGEINFO_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PODCHARGEINFO_H_

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
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Pod billing information.
                */
                class PodChargeInfo : public AbstractModel
                {
                public:
                    PodChargeInfo();
                    ~PodChargeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pod billing start time
                     * @return StartTime Pod billing start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Pod billing start time
                     * @param _startTime Pod billing start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取UID of the pod.
                     * @return Uid UID of the pod.
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置UID of the pod.
                     * @param _uid UID of the pod.
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取Pod CPU
                     * @return Cpu Pod CPU
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置Pod CPU
                     * @param _cpu Pod CPU
                     * 
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Pod Memory
                     * @return Memory Pod Memory
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置Pod Memory
                     * @param _memory Pod Memory
                     * 
                     */
                    void SetMemory(const double& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Pod Type: intel, amd, v100, t4, a10\*gnv4, a10\*gnv4v, and so on.
                     * @return Type Pod Type: intel, amd, v100, t4, a10\*gnv4, a10\*gnv4v, and so on.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Pod Type: intel, amd, v100, t4, a10\*gnv4, a10\*gnv4v, and so on.
                     * @param _type Pod Type: intel, amd, v100, t4, a10\*gnv4, a10\*gnv4v, and so on.
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
                     * 获取If the Pod is a GPU, then it indicates the number of GPU cards
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Gpu If the Pod is a GPU, then it indicates the number of GPU cards
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetGpu() const;

                    /**
                     * 设置If the Pod is a GPU, then it indicates the number of GPU cards
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _gpu If the Pod is a GPU, then it indicates the number of GPU cards
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetGpu(const std::string& _gpu);

                    /**
                     * 判断参数 Gpu 是否已赋值
                     * @return Gpu 是否已赋值
                     * 
                     */
                    bool GpuHasBeenSet() const;

                    /**
                     * 获取Billing type

PREPAID: Pod scheduled to monthly subscription super node
POSTPAID_BY_HOUR: Pay-as-you-go
RESERVED_INSTANCE: Deducted by reserved coupon in the previous period
SPOT: Bidding instance
TPOD: Preference instance
                     * @return ChargeType Billing type

PREPAID: Pod scheduled to monthly subscription super node
POSTPAID_BY_HOUR: Pay-as-you-go
RESERVED_INSTANCE: Deducted by reserved coupon in the previous period
SPOT: Bidding instance
TPOD: Preference instance
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Billing type

PREPAID: Pod scheduled to monthly subscription super node
POSTPAID_BY_HOUR: Pay-as-you-go
RESERVED_INSTANCE: Deducted by reserved coupon in the previous period
SPOT: Bidding instance
TPOD: Preference instance
                     * @param _chargeType Billing type

PREPAID: Pod scheduled to monthly subscription super node
POSTPAID_BY_HOUR: Pay-as-you-go
RESERVED_INSTANCE: Deducted by reserved coupon in the previous period
SPOT: Bidding instance
TPOD: Preference instance
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Namespace
                     * @return Namespace Namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace
                     * @param _namespace Namespace
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Pod name
                     * @return Name Pod name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Pod name
                     * @param _name Pod name
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
                     * Pod billing start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * UID of the pod.
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * Pod CPU
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Pod Memory
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Pod Type: intel, amd, v100, t4, a10\*gnv4, a10\*gnv4v, and so on.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * If the Pod is a GPU, then it indicates the number of GPU cards
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * Billing type

PREPAID: Pod scheduled to monthly subscription super node
POSTPAID_BY_HOUR: Pay-as-you-go
RESERVED_INSTANCE: Deducted by reserved coupon in the previous period
SPOT: Bidding instance
TPOD: Preference instance
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Pod name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PODCHARGEINFO_H_
