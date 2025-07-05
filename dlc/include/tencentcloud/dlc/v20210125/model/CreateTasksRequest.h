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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATETASKSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TasksInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateTasks request structure.
                */
                class CreateTasksRequest : public AbstractModel
                {
                public:
                    CreateTasksRequest();
                    ~CreateTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database name. If there is a database name in the SQL statement, the database in the SQL statement will be used first; otherwise, the database specified by this parameter will be used (note: when submitting the database creation SQL statement, passed in an empty string for this field).
                     * @return DatabaseName Database name. If there is a database name in the SQL statement, the database in the SQL statement will be used first; otherwise, the database specified by this parameter will be used (note: when submitting the database creation SQL statement, passed in an empty string for this field).
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database name. If there is a database name in the SQL statement, the database in the SQL statement will be used first; otherwise, the database specified by this parameter will be used (note: when submitting the database creation SQL statement, passed in an empty string for this field).
                     * @param _databaseName Database name. If there is a database name in the SQL statement, the database in the SQL statement will be used first; otherwise, the database specified by this parameter will be used (note: when submitting the database creation SQL statement, passed in an empty string for this field).
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取SQL task information
                     * @return Tasks SQL task information
                     * 
                     */
                    TasksInfo GetTasks() const;

                    /**
                     * 设置SQL task information
                     * @param _tasks SQL task information
                     * 
                     */
                    void SetTasks(const TasksInfo& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取Data source name. Default value: DataLakeCatalog.
                     * @return DatasourceConnectionName Data source name. Default value: DataLakeCatalog.
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置Data source name. Default value: DataLakeCatalog.
                     * @param _datasourceConnectionName Data source name. Default value: DataLakeCatalog.
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取Compute engine name. If this parameter is not specified, the task will be submitted to the default engine.
                     * @return DataEngineName Compute engine name. If this parameter is not specified, the task will be submitted to the default engine.
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置Compute engine name. If this parameter is not specified, the task will be submitted to the default engine.
                     * @param _dataEngineName Compute engine name. If this parameter is not specified, the task will be submitted to the default engine.
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取Resource group name of the spark cluster
                     * @return ResourceGroupName Resource group name of the spark cluster
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置Resource group name of the spark cluster
                     * @param _resourceGroupName Resource group name of the spark cluster
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                private:

                    /**
                     * Database name. If there is a database name in the SQL statement, the database in the SQL statement will be used first; otherwise, the database specified by this parameter will be used (note: when submitting the database creation SQL statement, passed in an empty string for this field).
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * SQL task information
                     */
                    TasksInfo m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Data source name. Default value: DataLakeCatalog.
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * Compute engine name. If this parameter is not specified, the task will be submitted to the default engine.
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * Resource group name of the spark cluster
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATETASKSREQUEST_H_
