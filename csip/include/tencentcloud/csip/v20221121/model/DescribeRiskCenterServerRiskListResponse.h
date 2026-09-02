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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKCENTERSERVERRISKLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKCENTERSERVERRISKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ServerRisk.h>
#include <tencentcloud/csip/v20221121/model/FilterDataObject.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeRiskCenterServerRiskList response structure.
                */
                class DescribeRiskCenterServerRiskListResponse : public AbstractModel
                {
                public:
                    DescribeRiskCenterServerRiskListResponse();
                    ~DescribeRiskCenterServerRiskListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total quantity.
                     * @return TotalCount Total quantity.
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
                     * 获取Risk Service List
                     * @return Data Risk Service List
                     * 
                     */
                    std::vector<ServerRisk> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Asset Type Enumeration
                     * @return InstanceTypeLists Asset Type Enumeration
                     * 
                     */
                    std::vector<FilterDataObject> GetInstanceTypeLists() const;

                    /**
                     * 判断参数 InstanceTypeLists 是否已赋值
                     * @return InstanceTypeLists 是否已赋值
                     * 
                     */
                    bool InstanceTypeListsHasBeenSet() const;

                private:

                    /**
                     * Total quantity.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Risk Service List
                     */
                    std::vector<ServerRisk> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Asset Type Enumeration
                     */
                    std::vector<FilterDataObject> m_instanceTypeLists;
                    bool m_instanceTypeListsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKCENTERSERVERRISKLISTRESPONSE_H_
