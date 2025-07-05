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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBETOPSPACETABLESRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBETOPSPACETABLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20191016/model/TableSpaceData.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * DescribeTopSpaceTables response structure.
                */
                class DescribeTopSpaceTablesResponse : public AbstractModel
                {
                public:
                    DescribeTopSpaceTablesResponse();
                    ~DescribeTopSpaceTablesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of the returned space statistics of top tables.
                     * @return TopSpaceTables List of the returned space statistics of top tables.
                     * 
                     */
                    std::vector<TableSpaceData> GetTopSpaceTables() const;

                    /**
                     * 判断参数 TopSpaceTables 是否已赋值
                     * @return TopSpaceTables 是否已赋值
                     * 
                     */
                    bool TopSpaceTablesHasBeenSet() const;

                    /**
                     * 获取Timestamp (in seconds) of tablespace data collect points
                     * @return Timestamp Timestamp (in seconds) of tablespace data collect points
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * List of the returned space statistics of top tables.
                     */
                    std::vector<TableSpaceData> m_topSpaceTables;
                    bool m_topSpaceTablesHasBeenSet;

                    /**
                     * Timestamp (in seconds) of tablespace data collect points
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBETOPSPACETABLESRESPONSE_H_
