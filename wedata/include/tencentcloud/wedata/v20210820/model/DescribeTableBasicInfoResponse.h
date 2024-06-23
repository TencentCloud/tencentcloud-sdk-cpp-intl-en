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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEBASICINFORESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEBASICINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TableBasicInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTableBasicInfo response structure.
                */
                class DescribeTableBasicInfoResponse : public AbstractModel
                {
                public:
                    DescribeTableBasicInfoResponse();
                    ~DescribeTableBasicInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Table Metadata
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableBasicInfoList Table Metadata
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<TableBasicInfo> GetTableBasicInfoList() const;

                    /**
                     * 判断参数 TableBasicInfoList 是否已赋值
                     * @return TableBasicInfoList 是否已赋值
                     * 
                     */
                    bool TableBasicInfoListHasBeenSet() const;

                    /**
                     * 获取Total number of items
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalCount Total number of items
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Table Metadata
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<TableBasicInfo> m_tableBasicInfoList;
                    bool m_tableBasicInfoListHasBeenSet;

                    /**
                     * Total number of items
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEBASICINFORESPONSE_H_
