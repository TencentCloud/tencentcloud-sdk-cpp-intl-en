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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDIAGDBINSTANCESRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDIAGDBINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/InstanceInfo.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDiagDBInstances response structure.
                */
                class DescribeDiagDBInstancesResponse : public AbstractModel
                {
                public:
                    DescribeDiagDBInstancesResponse();
                    ~DescribeDiagDBInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of instances.
                     * @return TotalCount Total number of instances.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Status of all instance inspection. 0: all instance inspection enabled, 1: all instance inspection disabled.
                     * @return DbScanStatus Status of all instance inspection. 0: all instance inspection enabled, 1: all instance inspection disabled.
                     * 
                     */
                    int64_t GetDbScanStatus() const;

                    /**
                     * 判断参数 DbScanStatus 是否已赋值
                     * @return DbScanStatus 是否已赋值
                     * 
                     */
                    bool DbScanStatusHasBeenSet() const;

                    /**
                     * 获取Instance information.
                     * @return Items Instance information.
                     * 
                     */
                    std::vector<InstanceInfo> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * Total number of instances.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Status of all instance inspection. 0: all instance inspection enabled, 1: all instance inspection disabled.
                     */
                    int64_t m_dbScanStatus;
                    bool m_dbScanStatusHasBeenSet;

                    /**
                     * Instance information.
                     */
                    std::vector<InstanceInfo> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDIAGDBINSTANCESRESPONSE_H_
