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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSDATABASELISTRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSDATABASELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DMSDatabaseInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDMSDatabaseList response structure.
                */
                class DescribeDMSDatabaseListResponse : public AbstractModel
                {
                public:
                    DescribeDMSDatabaseListResponse();
                    ~DescribeDMSDatabaseListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of database objects for the DMS
                     * @return DatabaseList List of database objects for the DMS
                     * 
                     */
                    std::vector<DMSDatabaseInfo> GetDatabaseList() const;

                    /**
                     * 判断参数 DatabaseList 是否已赋值
                     * @return DatabaseList 是否已赋值
                     * 
                     */
                    bool DatabaseListHasBeenSet() const;

                    /**
                     * 获取Total number of databases
                     * @return TotalCount Total number of databases
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
                     * List of database objects for the DMS
                     */
                    std::vector<DMSDatabaseInfo> m_databaseList;
                    bool m_databaseListHasBeenSet;

                    /**
                     * Total number of databases
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSDATABASELISTRESPONSE_H_
