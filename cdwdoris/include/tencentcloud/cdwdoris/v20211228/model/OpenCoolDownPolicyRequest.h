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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_OPENCOOLDOWNPOLICYREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_OPENCOOLDOWNPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * OpenCoolDownPolicy request structure.
                */
                class OpenCoolDownPolicyRequest : public AbstractModel
                {
                public:
                    OpenCoolDownPolicyRequest();
                    ~OpenCoolDownPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取DB name
                     * @return DatabaseName DB name
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置DB name
                     * @param _databaseName DB name
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
                     * 获取Table name
                     * @return TableName Table name
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
                     * @param _tableName Table name
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Operation type
                     * @return OperationType Operation type
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置Operation type
                     * @param _operationType Operation type
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取Separate with commas. The DB name is required, for example, db1.tb1,db1.tb2,db2.tb1.
                     * @return BatchOpenCoolDownTables Separate with commas. The DB name is required, for example, db1.tb1,db1.tb2,db2.tb1.
                     * 
                     */
                    std::string GetBatchOpenCoolDownTables() const;

                    /**
                     * 设置Separate with commas. The DB name is required, for example, db1.tb1,db1.tb2,db2.tb1.
                     * @param _batchOpenCoolDownTables Separate with commas. The DB name is required, for example, db1.tb1,db1.tb2,db2.tb1.
                     * 
                     */
                    void SetBatchOpenCoolDownTables(const std::string& _batchOpenCoolDownTables);

                    /**
                     * 判断参数 BatchOpenCoolDownTables 是否已赋值
                     * @return BatchOpenCoolDownTables 是否已赋值
                     * 
                     */
                    bool BatchOpenCoolDownTablesHasBeenSet() const;

                    /**
                     * 获取Policy name required for binding
                     * @return PolicyName Policy name required for binding
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name required for binding
                     * @param _policyName Policy name required for binding
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Separate with commas, for example, p1,p2,p3.
                     * @return BatchOpenCoolDownPartitions Separate with commas, for example, p1,p2,p3.
                     * 
                     */
                    std::string GetBatchOpenCoolDownPartitions() const;

                    /**
                     * 设置Separate with commas, for example, p1,p2,p3.
                     * @param _batchOpenCoolDownPartitions Separate with commas, for example, p1,p2,p3.
                     * 
                     */
                    void SetBatchOpenCoolDownPartitions(const std::string& _batchOpenCoolDownPartitions);

                    /**
                     * 判断参数 BatchOpenCoolDownPartitions 是否已赋值
                     * @return BatchOpenCoolDownPartitions 是否已赋值
                     * 
                     */
                    bool BatchOpenCoolDownPartitionsHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * DB name
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Table name
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Operation type
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * Separate with commas. The DB name is required, for example, db1.tb1,db1.tb2,db2.tb1.
                     */
                    std::string m_batchOpenCoolDownTables;
                    bool m_batchOpenCoolDownTablesHasBeenSet;

                    /**
                     * Policy name required for binding
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Separate with commas, for example, p1,p2,p3.
                     */
                    std::string m_batchOpenCoolDownPartitions;
                    bool m_batchOpenCoolDownPartitionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_OPENCOOLDOWNPOLICYREQUEST_H_
