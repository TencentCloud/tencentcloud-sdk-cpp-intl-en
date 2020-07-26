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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_INITDCDBINSTANCESRESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_INITDCDBINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * InitDCDBInstances response structure.
                */
                class InitDCDBInstancesResponse : public AbstractModel
                {
                public:
                    InitDCDBInstancesResponse();
                    ~InitDCDBInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Async task ID. The task status can be queried through the `DescribeFlow` API.
                     * @return FlowIds Async task ID. The task status can be queried through the `DescribeFlow` API.
                     */
                    std::vector<uint64_t> GetFlowIds() const;

                    /**
                     * 判断参数 FlowIds 是否已赋值
                     * @return FlowIds 是否已赋值
                     */
                    bool FlowIdsHasBeenSet() const;

                    /**
                     * 获取Passed through from the input parameters.
                     * @return InstanceIds Passed through from the input parameters.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * Async task ID. The task status can be queried through the `DescribeFlow` API.
                     */
                    std::vector<uint64_t> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * Passed through from the input parameters.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_INITDCDBINSTANCESRESPONSE_H_
