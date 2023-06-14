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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBESUPPORTEDPRIVILEGESRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBESUPPORTEDPRIVILEGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeSupportedPrivileges response structure.
                */
                class DescribeSupportedPrivilegesResponse : public AbstractModel
                {
                public:
                    DescribeSupportedPrivilegesResponse();
                    ~DescribeSupportedPrivilegesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Global permissions supported by the instance
                     * @return GlobalSupportedPrivileges Global permissions supported by the instance
                     * 
                     */
                    std::vector<std::string> GetGlobalSupportedPrivileges() const;

                    /**
                     * 判断参数 GlobalSupportedPrivileges 是否已赋值
                     * @return GlobalSupportedPrivileges 是否已赋值
                     * 
                     */
                    bool GlobalSupportedPrivilegesHasBeenSet() const;

                    /**
                     * 获取Database permissions supported by the instance.
                     * @return DatabaseSupportedPrivileges Database permissions supported by the instance.
                     * 
                     */
                    std::vector<std::string> GetDatabaseSupportedPrivileges() const;

                    /**
                     * 判断参数 DatabaseSupportedPrivileges 是否已赋值
                     * @return DatabaseSupportedPrivileges 是否已赋值
                     * 
                     */
                    bool DatabaseSupportedPrivilegesHasBeenSet() const;

                    /**
                     * 获取Table permissions supported by the instance.
                     * @return TableSupportedPrivileges Table permissions supported by the instance.
                     * 
                     */
                    std::vector<std::string> GetTableSupportedPrivileges() const;

                    /**
                     * 判断参数 TableSupportedPrivileges 是否已赋值
                     * @return TableSupportedPrivileges 是否已赋值
                     * 
                     */
                    bool TableSupportedPrivilegesHasBeenSet() const;

                    /**
                     * 获取Column permissions supported by the instance.
                     * @return ColumnSupportedPrivileges Column permissions supported by the instance.
                     * 
                     */
                    std::vector<std::string> GetColumnSupportedPrivileges() const;

                    /**
                     * 判断参数 ColumnSupportedPrivileges 是否已赋值
                     * @return ColumnSupportedPrivileges 是否已赋值
                     * 
                     */
                    bool ColumnSupportedPrivilegesHasBeenSet() const;

                private:

                    /**
                     * Global permissions supported by the instance
                     */
                    std::vector<std::string> m_globalSupportedPrivileges;
                    bool m_globalSupportedPrivilegesHasBeenSet;

                    /**
                     * Database permissions supported by the instance.
                     */
                    std::vector<std::string> m_databaseSupportedPrivileges;
                    bool m_databaseSupportedPrivilegesHasBeenSet;

                    /**
                     * Table permissions supported by the instance.
                     */
                    std::vector<std::string> m_tableSupportedPrivileges;
                    bool m_tableSupportedPrivilegesHasBeenSet;

                    /**
                     * Column permissions supported by the instance.
                     */
                    std::vector<std::string> m_columnSupportedPrivileges;
                    bool m_columnSupportedPrivilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBESUPPORTEDPRIVILEGESRESPONSE_H_
