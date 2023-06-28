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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBUSINESSDBINSTANCESRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBUSINESSDBINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CreateBusinessDBInstances response structure.
                */
                class CreateBusinessDBInstancesResponse : public AbstractModel
                {
                public:
                    CreateBusinessDBInstancesResponse();
                    ~CreateBusinessDBInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Order name
                     * @return DealName Order name
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取Process ID Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowId Process ID Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取IDs of instances Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceIdSet IDs of instances Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                private:

                    /**
                     * Order name
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * Process ID Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * IDs of instances Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBUSINESSDBINSTANCESRESPONSE_H_
