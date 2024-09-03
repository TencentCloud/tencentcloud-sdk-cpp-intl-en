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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECREATETABLESDDLRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECREATETABLESDDLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateTablesDDL.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeCreateTablesDDL response structure.
                */
                class DescribeCreateTablesDDLResponse : public AbstractModel
                {
                public:
                    DescribeCreateTablesDDLResponse();
                    ~DescribeCreateTablesDDLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DDL information for creating a table
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTablesDDLs DDL information for creating a table
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CreateTablesDDL> GetCreateTablesDDLs() const;

                    /**
                     * 判断参数 CreateTablesDDLs 是否已赋值
                     * @return CreateTablesDDLs 是否已赋值
                     * 
                     */
                    bool CreateTablesDDLsHasBeenSet() const;

                    /**
                     * 获取Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * DDL information for creating a table
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CreateTablesDDL> m_createTablesDDLs;
                    bool m_createTablesDDLsHasBeenSet;

                    /**
                     * Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECREATETABLESDDLRESPONSE_H_
