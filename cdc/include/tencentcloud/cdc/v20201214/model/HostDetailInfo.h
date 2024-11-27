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
                * 
                */
                class HostDetailInfo : public AbstractModel
                {
                public:
                    HostDetailInfo();
                    ~HostDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return HostTypeFamily 
                     * 
                     */
                    std::string GetHostTypeFamily() const;

                    /**
                     * 设置
                     * @param _hostTypeFamily 
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
                     * 获取
                     * @return CpuTotal 
                     * 
                     */
                    double GetCpuTotal() const;

                    /**
                     * 设置
                     * @param _cpuTotal 
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
                     * 获取
                     * @return CpuAvailable 
                     * 
                     */
                    double GetCpuAvailable() const;

                    /**
                     * 设置
                     * @param _cpuAvailable 
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
                     * 获取
                     * @return MemTotal 
                     * 
                     */
                    double GetMemTotal() const;

                    /**
                     * 设置
                     * @param _memTotal 
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
                     * 获取
                     * @return MemAvailable 
                     * 
                     */
                    double GetMemAvailable() const;

                    /**
                     * 设置
                     * @param _memAvailable 
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
                     * 
                     */
                    std::string m_hostTypeFamily;
                    bool m_hostTypeFamilyHasBeenSet;

                    /**
                     * 
                     */
                    double m_cpuTotal;
                    bool m_cpuTotalHasBeenSet;

                    /**
                     * 
                     */
                    double m_cpuAvailable;
                    bool m_cpuAvailableHasBeenSet;

                    /**
                     * 
                     */
                    double m_memTotal;
                    bool m_memTotalHasBeenSet;

                    /**
                     * 
                     */
                    double m_memAvailable;
                    bool m_memAvailableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_HOSTDETAILINFO_H_
