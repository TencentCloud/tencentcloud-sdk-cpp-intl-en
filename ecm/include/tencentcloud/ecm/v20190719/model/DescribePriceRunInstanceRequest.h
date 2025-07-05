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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPRICERUNINSTANCEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPRICERUNINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/SystemDisk.h>
#include <tencentcloud/ecm/v20190719/model/DataDisk.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribePriceRunInstance request structure.
                */
                class DescribePriceRunInstanceRequest : public AbstractModel
                {
                public:
                    DescribePriceRunInstanceRequest();
                    ~DescribePriceRunInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance model information
                     * @return InstanceType Instance model information
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance model information
                     * @param _instanceType Instance model information
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
                     * 获取System disk information
                     * @return SystemDisk System disk information
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置System disk information
                     * @param _systemDisk System disk information
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取Number of instances
                     * @return InstanceCount Number of instances
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置Number of instances
                     * @param _instanceCount Number of instances
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Data disk information
                     * @return DataDisk Data disk information
                     * 
                     */
                    std::vector<DataDisk> GetDataDisk() const;

                    /**
                     * 设置Data disk information
                     * @param _dataDisk Data disk information
                     * 
                     */
                    void SetDataDisk(const std::vector<DataDisk>& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     * 
                     */
                    bool DataDiskHasBeenSet() const;

                    /**
                     * 获取Instance billing type. Valid values:
`0`: Bill by daily resource usage peak (CPU, memory, and disk). It applies only to non-GNR models;
`1`: Bill by usage hours of an instance. It applies only to GNR models. It’s available to beta users now. To enable it, submit a ticket;
`2`: Bill by usage month of an instance. It applies only to GNR models.
If this field is left empty, `0` is selected by default for non-GNR models, and `2` is selected by default for GNR models.
                     * @return InstanceChargeType Instance billing type. Valid values:
`0`: Bill by daily resource usage peak (CPU, memory, and disk). It applies only to non-GNR models;
`1`: Bill by usage hours of an instance. It applies only to GNR models. It’s available to beta users now. To enable it, submit a ticket;
`2`: Bill by usage month of an instance. It applies only to GNR models.
If this field is left empty, `0` is selected by default for non-GNR models, and `2` is selected by default for GNR models.
                     * 
                     */
                    int64_t GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing type. Valid values:
`0`: Bill by daily resource usage peak (CPU, memory, and disk). It applies only to non-GNR models;
`1`: Bill by usage hours of an instance. It applies only to GNR models. It’s available to beta users now. To enable it, submit a ticket;
`2`: Bill by usage month of an instance. It applies only to GNR models.
If this field is left empty, `0` is selected by default for non-GNR models, and `2` is selected by default for GNR models.
                     * @param _instanceChargeType Instance billing type. Valid values:
`0`: Bill by daily resource usage peak (CPU, memory, and disk). It applies only to non-GNR models;
`1`: Bill by usage hours of an instance. It applies only to GNR models. It’s available to beta users now. To enable it, submit a ticket;
`2`: Bill by usage month of an instance. It applies only to GNR models.
If this field is left empty, `0` is selected by default for non-GNR models, and `2` is selected by default for GNR models.
                     * 
                     */
                    void SetInstanceChargeType(const int64_t& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                private:

                    /**
                     * Instance model information
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * System disk information
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Number of instances
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Data disk information
                     */
                    std::vector<DataDisk> m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * Instance billing type. Valid values:
`0`: Bill by daily resource usage peak (CPU, memory, and disk). It applies only to non-GNR models;
`1`: Bill by usage hours of an instance. It applies only to GNR models. It’s available to beta users now. To enable it, submit a ticket;
`2`: Bill by usage month of an instance. It applies only to GNR models.
If this field is left empty, `0` is selected by default for non-GNR models, and `2` is selected by default for GNR models.
                     */
                    int64_t m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPRICERUNINSTANCEREQUEST_H_
