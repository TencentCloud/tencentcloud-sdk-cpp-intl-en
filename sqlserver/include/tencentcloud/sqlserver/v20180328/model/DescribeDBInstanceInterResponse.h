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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCEINTERRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCEINTERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/InterInstance.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceInter response structure.
                */
                class DescribeDBInstanceInterResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceInterResponse();
                    ~DescribeDBInstanceInterResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of records returned.
                     * @return TotalCount Number of records returned.
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
                     * 获取Details of instance in the interworking group.
                     * @return InterInstanceSet Details of instance in the interworking group.
                     * 
                     */
                    std::vector<InterInstance> GetInterInstanceSet() const;

                    /**
                     * 判断参数 InterInstanceSet 是否已赋值
                     * @return InterInstanceSet 是否已赋值
                     * 
                     */
                    bool InterInstanceSetHasBeenSet() const;

                private:

                    /**
                     * Number of records returned.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Details of instance in the interworking group.
                     */
                    std::vector<InterInstance> m_interInstanceSet;
                    bool m_interInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCEINTERRESPONSE_H_
