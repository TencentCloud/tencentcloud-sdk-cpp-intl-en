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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEINSTANCEDATARESERVEDSPACERESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEINSTANCEDATARESERVEDSPACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeInstanceDataReservedSpace response structure.
                */
                class DescribeInstanceDataReservedSpaceResponse : public AbstractModel
                {
                public:
                    DescribeInstanceDataReservedSpaceResponse();
                    ~DescribeInstanceDataReservedSpaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Actual reserved ratio (%, per node)</p>
                     * @return ReservedRate <p>Actual reserved ratio (%, per node)</p>
                     * 
                     */
                    double GetReservedRate() const;

                    /**
                     * 判断参数 ReservedRate 是否已赋值
                     * @return ReservedRate 是否已赋值
                     * 
                     */
                    bool ReservedRateHasBeenSet() const;

                    /**
                     * 获取<p>Actual reserved space in GB (single node)</p><p>Unit: GB</p>
                     * @return ReservedSpaceGB <p>Actual reserved space in GB (single node)</p><p>Unit: GB</p>
                     * 
                     */
                    double GetReservedSpaceGB() const;

                    /**
                     * 判断参数 ReservedSpaceGB 是否已赋值
                     * @return ReservedSpaceGB 是否已赋值
                     * 
                     */
                    bool ReservedSpaceGBHasBeenSet() const;

                    /**
                     * 获取<p>Available user space in GB (per node)</p><p>Unit: GB</p>
                     * @return UsableSpaceGB <p>Available user space in GB (per node)</p><p>Unit: GB</p>
                     * 
                     */
                    double GetUsableSpaceGB() const;

                    /**
                     * 判断参数 UsableSpaceGB 是否已赋值
                     * @return UsableSpaceGB 是否已赋值
                     * 
                     */
                    bool UsableSpaceGBHasBeenSet() const;

                    /**
                     * 获取<p>true=earlier version (&lt;21.6.4.0), value from the old parameter tdstore_enter_readonly_threshold; false=new version</p>
                     * @return IsLegacy <p>true=earlier version (&lt;21.6.4.0), value from the old parameter tdstore_enter_readonly_threshold; false=new version</p>
                     * 
                     */
                    bool GetIsLegacy() const;

                    /**
                     * 判断参数 IsLegacy 是否已赋值
                     * @return IsLegacy 是否已赋值
                     * 
                     */
                    bool IsLegacyHasBeenSet() const;

                    /**
                     * 获取<p>Kernel version number</p>
                     * @return KernelVersion <p>Kernel version number</p>
                     * 
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 判断参数 KernelVersion 是否已赋值
                     * @return KernelVersion 是否已赋值
                     * 
                     */
                    bool KernelVersionHasBeenSet() const;

                private:

                    /**
                     * <p>Actual reserved ratio (%, per node)</p>
                     */
                    double m_reservedRate;
                    bool m_reservedRateHasBeenSet;

                    /**
                     * <p>Actual reserved space in GB (single node)</p><p>Unit: GB</p>
                     */
                    double m_reservedSpaceGB;
                    bool m_reservedSpaceGBHasBeenSet;

                    /**
                     * <p>Available user space in GB (per node)</p><p>Unit: GB</p>
                     */
                    double m_usableSpaceGB;
                    bool m_usableSpaceGBHasBeenSet;

                    /**
                     * <p>true=earlier version (&lt;21.6.4.0), value from the old parameter tdstore_enter_readonly_threshold; false=new version</p>
                     */
                    bool m_isLegacy;
                    bool m_isLegacyHasBeenSet;

                    /**
                     * <p>Kernel version number</p>
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEINSTANCEDATARESERVEDSPACERESPONSE_H_
