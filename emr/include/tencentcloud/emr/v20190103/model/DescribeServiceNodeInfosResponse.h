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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICENODEINFOSRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICENODEINFOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ServiceNodeDetailInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeServiceNodeInfos response structure.
                */
                class DescribeServiceNodeInfosResponse : public AbstractModel
                {
                public:
                    DescribeServiceNodeInfosResponse();
                    ~DescribeServiceNodeInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number.
                     * @return TotalCnt Total number.
                     * 
                     */
                    int64_t GetTotalCnt() const;

                    /**
                     * 判断参数 TotalCnt 是否已赋值
                     * @return TotalCnt 是否已赋值
                     * 
                     */
                    bool TotalCntHasBeenSet() const;

                    /**
                     * 获取Process information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceNodeList Process information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ServiceNodeDetailInfo> GetServiceNodeList() const;

                    /**
                     * 判断参数 ServiceNodeList 是否已赋值
                     * @return ServiceNodeList 是否已赋值
                     * 
                     */
                    bool ServiceNodeListHasBeenSet() const;

                    /**
                     * 获取Alias serialization of all nodes in the cluster.
                     * @return AliasInfo Alias serialization of all nodes in the cluster.
                     * 
                     */
                    std::string GetAliasInfo() const;

                    /**
                     * 判断参数 AliasInfo 是否已赋值
                     * @return AliasInfo 是否已赋值
                     * 
                     */
                    bool AliasInfoHasBeenSet() const;

                    /**
                     * 获取Supported FlagNode list

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SupportNodeFlagFilterList Supported FlagNode list

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSupportNodeFlagFilterList() const;

                    /**
                     * 判断参数 SupportNodeFlagFilterList 是否已赋值
                     * @return SupportNodeFlagFilterList 是否已赋值
                     * 
                     */
                    bool SupportNodeFlagFilterListHasBeenSet() const;

                private:

                    /**
                     * Total number.
                     */
                    int64_t m_totalCnt;
                    bool m_totalCntHasBeenSet;

                    /**
                     * Process information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ServiceNodeDetailInfo> m_serviceNodeList;
                    bool m_serviceNodeListHasBeenSet;

                    /**
                     * Alias serialization of all nodes in the cluster.
                     */
                    std::string m_aliasInfo;
                    bool m_aliasInfoHasBeenSet;

                    /**
                     * Supported FlagNode list

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_supportNodeFlagFilterList;
                    bool m_supportNodeFlagFilterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICENODEINFOSRESPONSE_H_
