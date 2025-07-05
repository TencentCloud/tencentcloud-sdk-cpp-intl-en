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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPTABLESRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPTABLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/BackupTableContent.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeBackUpTables response structure.
                */
                class DescribeBackUpTablesResponse : public AbstractModel
                {
                public:
                    DescribeBackUpTablesResponse();
                    ~DescribeBackUpTablesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of tables available for backup
                     * @return AvailableTables List of tables available for backup
                     * 
                     */
                    std::vector<BackupTableContent> GetAvailableTables() const;

                    /**
                     * 判断参数 AvailableTables 是否已赋值
                     * @return AvailableTables 是否已赋值
                     * 
                     */
                    bool AvailableTablesHasBeenSet() const;

                private:

                    /**
                     * List of tables available for backup
                     */
                    std::vector<BackupTableContent> m_availableTables;
                    bool m_availableTablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPTABLESRESPONSE_H_
