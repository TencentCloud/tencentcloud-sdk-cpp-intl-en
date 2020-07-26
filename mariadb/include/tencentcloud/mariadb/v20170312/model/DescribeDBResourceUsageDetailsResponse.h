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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBRESOURCEUSAGEDETAILSRESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBRESOURCEUSAGEDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/ResourceUsageMonitorSet.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBResourceUsageDetails response structure.
                */
                class DescribeDBResourceUsageDetailsResponse : public AbstractModel
                {
                public:
                    DescribeDBResourceUsageDetailsResponse();
                    ~DescribeDBResourceUsageDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Master node resource usage monitoring node
                     * @return Master Master node resource usage monitoring node
                     */
                    ResourceUsageMonitorSet GetMaster() const;

                    /**
                     * 判断参数 Master 是否已赋值
                     * @return Master 是否已赋值
                     */
                    bool MasterHasBeenSet() const;

                    /**
                     * 获取Slave 1 resource usage monitoring node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Slave1 Slave 1 resource usage monitoring node
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ResourceUsageMonitorSet GetSlave1() const;

                    /**
                     * 判断参数 Slave1 是否已赋值
                     * @return Slave1 是否已赋值
                     */
                    bool Slave1HasBeenSet() const;

                    /**
                     * 获取Slave 2 resource usage monitoring node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Slave2 Slave 2 resource usage monitoring node
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ResourceUsageMonitorSet GetSlave2() const;

                    /**
                     * 判断参数 Slave2 是否已赋值
                     * @return Slave2 是否已赋值
                     */
                    bool Slave2HasBeenSet() const;

                private:

                    /**
                     * Master node resource usage monitoring node
                     */
                    ResourceUsageMonitorSet m_master;
                    bool m_masterHasBeenSet;

                    /**
                     * Slave 1 resource usage monitoring node
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ResourceUsageMonitorSet m_slave1;
                    bool m_slave1HasBeenSet;

                    /**
                     * Slave 2 resource usage monitoring node
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ResourceUsageMonitorSet m_slave2;
                    bool m_slave2HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBRESOURCEUSAGEDETAILSRESPONSE_H_
