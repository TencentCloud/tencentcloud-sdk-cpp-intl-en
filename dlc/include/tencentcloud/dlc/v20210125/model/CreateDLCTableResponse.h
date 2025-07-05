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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDLCTABLERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDLCTABLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DLCTable.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateDLCTable response structure.
                */
                class CreateDLCTableResponse : public AbstractModel
                {
                public:
                    CreateDLCTableResponse();
                    ~CreateDLCTableResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DLC table information object
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DLCTable DLC table information object
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DLCTable GetDLCTable() const;

                    /**
                     * 判断参数 DLCTable 是否已赋值
                     * @return DLCTable 是否已赋值
                     * 
                     */
                    bool DLCTableHasBeenSet() const;

                    /**
                     * 获取The SQL statement for creating a managed storage internal table
                     * @return Execution The SQL statement for creating a managed storage internal table
                     * 
                     */
                    std::string GetExecution() const;

                    /**
                     * 判断参数 Execution 是否已赋值
                     * @return Execution 是否已赋值
                     * 
                     */
                    bool ExecutionHasBeenSet() const;

                private:

                    /**
                     * DLC table information object
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DLCTable m_dLCTable;
                    bool m_dLCTableHasBeenSet;

                    /**
                     * The SQL statement for creating a managed storage internal table
                     */
                    std::string m_execution;
                    bool m_executionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDLCTABLERESPONSE_H_
