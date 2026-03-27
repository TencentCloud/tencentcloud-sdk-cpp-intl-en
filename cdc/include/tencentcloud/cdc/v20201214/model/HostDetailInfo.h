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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_HOSTDETAILINFO_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_HOSTDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * Host Machine Resource Overview Details
                */
                class HostDetailInfo : public AbstractModel
                {
                public:
                    HostDetailInfo();
                    ~HostDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type Family
                     * @return HostTypeFamily Type Family
                     * 
                     */
                    std::string GetHostTypeFamily() const;

                    /**
                     * 设置Type Family
                     * @param _hostTypeFamily Type Family
                     * 
                     */
                    void SetHostTypeFamily(const std::string& _hostTypeFamily);

                    /**
                     * 判断参数 HostTypeFamily 是否已赋值
                     * @return HostTypeFamily 是否已赋值
                     * 
                     */
                    bool HostTypeFamilyHasBeenSet() const;

                    /**
                     * 获取Total CPU
                     * @return CpuTotal Total CPU
                     * 
                     */
                    double GetCpuTotal() const;

                    /**
                     * 设置Total CPU
                     * @param _cpuTotal Total CPU
                     * 
                     */
                    void SetCpuTotal(const double& _cpuTotal);

                    /**
                     * 判断参数 CpuTotal 是否已赋值
                     * @return CpuTotal 是否已赋值
                     * 
                     */
                    bool CpuTotalHasBeenSet() const;

                    /**
                     * 获取Available CPU
                     * @return CpuAvailable Available CPU
                     * 
                     */
                    double GetCpuAvailable() const;

                    /**
                     * 设置Available CPU
                     * @param _cpuAvailable Available CPU
                     * 
                     */
                    void SetCpuAvailable(const double& _cpuAvailable);

                    /**
                     * 判断参数 CpuAvailable 是否已赋值
                     * @return CpuAvailable 是否已赋值
                     * 
                     */
                    bool CpuAvailableHasBeenSet() const;

                    /**
                     * 获取Total Memory
                     * @return MemTotal Total Memory
                     * 
                     */
                    double GetMemTotal() const;

                    /**
                     * 设置Total Memory
                     * @param _memTotal Total Memory
                     * 
                     */
                    void SetMemTotal(const double& _memTotal);

                    /**
                     * 判断参数 MemTotal 是否已赋值
                     * @return MemTotal 是否已赋值
                     * 
                     */
                    bool MemTotalHasBeenSet() const;

                    /**
                     * 获取Available Memory
                     * @return MemAvailable Available Memory
                     * 
                     */
                    double GetMemAvailable() const;

                    /**
                     * 设置Available Memory
                     * @param _memAvailable Available Memory
                     * 
                     */
                    void SetMemAvailable(const double& _memAvailable);

                    /**
                     * 判断参数 MemAvailable 是否已赋值
                     * @return MemAvailable 是否已赋值
                     * 
                     */
                    bool MemAvailableHasBeenSet() const;

                private:

                    /**
                     * Type Family
                     */
                    std::string m_hostTypeFamily;
                    bool m_hostTypeFamilyHasBeenSet;

                    /**
                     * Total CPU
                     */
                    double m_cpuTotal;
                    bool m_cpuTotalHasBeenSet;

                    /**
                     * Available CPU
                     */
                    double m_cpuAvailable;
                    bool m_cpuAvailableHasBeenSet;

                    /**
                     * Total Memory
                     */
                    double m_memTotal;
                    bool m_memTotalHasBeenSet;

                    /**
                     * Available Memory
                     */
                    double m_memAvailable;
                    bool m_memAvailableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_HOSTDETAILINFO_H_
