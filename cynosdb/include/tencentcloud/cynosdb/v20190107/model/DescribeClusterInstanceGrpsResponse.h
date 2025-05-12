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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERINSTANCEGRPSRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERINSTANCEGRPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/CynosdbInstanceGrp.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeClusterInstanceGrps response structure.
                */
                class DescribeClusterInstanceGrpsResponse : public AbstractModel
                {
                public:
                    DescribeClusterInstanceGrpsResponse();
                    ~DescribeClusterInstanceGrpsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of instance groups
                     * @return TotalCount Number of instance groups
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
                     * 获取Instance group list
                     * @return InstanceGrpInfoList Instance group list
                     * @deprecated
                     */
                    std::vector<CynosdbInstanceGrp> GetInstanceGrpInfoList() const;

                    /**
                     * 判断参数 InstanceGrpInfoList 是否已赋值
                     * @return InstanceGrpInfoList 是否已赋值
                     * @deprecated
                     */
                    bool InstanceGrpInfoListHasBeenSet() const;

                private:

                    /**
                     * Number of instance groups
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Instance group list
                     */
                    std::vector<CynosdbInstanceGrp> m_instanceGrpInfoList;
                    bool m_instanceGrpInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERINSTANCEGRPSRESPONSE_H_
