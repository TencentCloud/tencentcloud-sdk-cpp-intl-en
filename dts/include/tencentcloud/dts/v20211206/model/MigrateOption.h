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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEOPTION_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DatabaseTableObject.h>
#include <tencentcloud/dts/v20211206/model/ConsistencyOption.h>
#include <tencentcloud/dts/v20211206/model/KeyValuePairOption.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Migration options, which describe how the task performs migration.
                */
                class MigrateOption : public AbstractModel
                {
                public:
                    MigrateOption();
                    ~MigrateOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Migration object options, which tell DTS which database/table objects should be migrated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatabaseTable Migration object options, which tell DTS which database/table objects should be migrated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DatabaseTableObject GetDatabaseTable() const;

                    /**
                     * 设置Migration object options, which tell DTS which database/table objects should be migrated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _databaseTable Migration object options, which tell DTS which database/table objects should be migrated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatabaseTable(const DatabaseTableObject& _databaseTable);

                    /**
                     * 判断参数 DatabaseTable 是否已赋值
                     * @return DatabaseTable 是否已赋值
                     * 
                     */
                    bool DatabaseTableHasBeenSet() const;

                    /**
                     * 获取Migration type. Valid values: `full`, `structure`, `fullAndIncrement`. Default value: `fullAndIncrement`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MigrateType Migration type. Valid values: `full`, `structure`, `fullAndIncrement`. Default value: `fullAndIncrement`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMigrateType() const;

                    /**
                     * 设置Migration type. Valid values: `full`, `structure`, `fullAndIncrement`. Default value: `fullAndIncrement`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _migrateType Migration type. Valid values: `full`, `structure`, `fullAndIncrement`. Default value: `fullAndIncrement`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMigrateType(const std::string& _migrateType);

                    /**
                     * 判断参数 MigrateType 是否已赋值
                     * @return MigrateType 是否已赋值
                     * 
                     */
                    bool MigrateTypeHasBeenSet() const;

                    /**
                     * 获取Data consistency check option. Data consistency check is disabled by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Consistency Data consistency check option. Data consistency check is disabled by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ConsistencyOption GetConsistency() const;

                    /**
                     * 设置Data consistency check option. Data consistency check is disabled by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consistency Data consistency check option. Data consistency check is disabled by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConsistency(const ConsistencyOption& _consistency);

                    /**
                     * 判断参数 Consistency 是否已赋值
                     * @return Consistency 是否已赋值
                     * 
                     */
                    bool ConsistencyHasBeenSet() const;

                    /**
                     * 获取Whether to migrate accounts. Valid values: `yes`, `no`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsMigrateAccount Whether to migrate accounts. Valid values: `yes`, `no`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsMigrateAccount() const;

                    /**
                     * 设置Whether to migrate accounts. Valid values: `yes`, `no`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isMigrateAccount Whether to migrate accounts. Valid values: `yes`, `no`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsMigrateAccount(const bool& _isMigrateAccount);

                    /**
                     * 判断参数 IsMigrateAccount 是否已赋值
                     * @return IsMigrateAccount 是否已赋值
                     * 
                     */
                    bool IsMigrateAccountHasBeenSet() const;

                    /**
                     * 获取Whether to use the `Root` account in the source database to overwrite that in the target database. Valid values: `false`, `true`. For database/table or structural migration, you should specify `false`. Note that this parameter takes effect only for OldDTS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsOverrideRoot Whether to use the `Root` account in the source database to overwrite that in the target database. Valid values: `false`, `true`. For database/table or structural migration, you should specify `false`. Note that this parameter takes effect only for OldDTS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsOverrideRoot() const;

                    /**
                     * 设置Whether to use the `Root` account in the source database to overwrite that in the target database. Valid values: `false`, `true`. For database/table or structural migration, you should specify `false`. Note that this parameter takes effect only for OldDTS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isOverrideRoot Whether to use the `Root` account in the source database to overwrite that in the target database. Valid values: `false`, `true`. For database/table or structural migration, you should specify `false`. Note that this parameter takes effect only for OldDTS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsOverrideRoot(const bool& _isOverrideRoot);

                    /**
                     * 判断参数 IsOverrideRoot 是否已赋值
                     * @return IsOverrideRoot 是否已赋值
                     * 
                     */
                    bool IsOverrideRootHasBeenSet() const;

                    /**
                     * 获取Whether to set the target database to read-only during migration, which takes effect only for MySQL databases. Valid values: `true`, `false`. Default value: `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsDstReadOnly Whether to set the target database to read-only during migration, which takes effect only for MySQL databases. Valid values: `true`, `false`. Default value: `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsDstReadOnly() const;

                    /**
                     * 设置Whether to set the target database to read-only during migration, which takes effect only for MySQL databases. Valid values: `true`, `false`. Default value: `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isDstReadOnly Whether to set the target database to read-only during migration, which takes effect only for MySQL databases. Valid values: `true`, `false`. Default value: `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsDstReadOnly(const bool& _isDstReadOnly);

                    /**
                     * 判断参数 IsDstReadOnly 是否已赋值
                     * @return IsDstReadOnly 是否已赋值
                     * 
                     */
                    bool IsDstReadOnlyHasBeenSet() const;

                    /**
                     * 获取Additional information. You can set additional parameters for certain database types. For Redis, you can define the following parameters: 
["DstWriteMode": `normal`. 	Target database write mode. Valid values: `clearData` (Clear the target instance data), overwrite` (Execute the task in overwriting mode), `normal` (Follow the normal steps) 	"IsDstReadOnly": `true`. 	Whether to set the target database to read-only for a migration task. Valid values: `true` (Yes), `false` (No) 	"ClientOutputBufferHardLimit": 512. 	Hard limit of the replica buffer zone capacity in MB. 	"ClientOutputBufferSoftLimit": 512. 	Soft limit of the replica buffer zone capacity in MB. 	"ClientOutputBufferPersistTime": 60. Soft limit duration of the replica buffer zone in seconds. 	"ReplBacklogSize": 512, 	Limit of the circular buffer zone capacity in MB. 	"ReplTimeout":120,		Replication timeout period in seconds]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtraAttr Additional information. You can set additional parameters for certain database types. For Redis, you can define the following parameters: 
["DstWriteMode": `normal`. 	Target database write mode. Valid values: `clearData` (Clear the target instance data), overwrite` (Execute the task in overwriting mode), `normal` (Follow the normal steps) 	"IsDstReadOnly": `true`. 	Whether to set the target database to read-only for a migration task. Valid values: `true` (Yes), `false` (No) 	"ClientOutputBufferHardLimit": 512. 	Hard limit of the replica buffer zone capacity in MB. 	"ClientOutputBufferSoftLimit": 512. 	Soft limit of the replica buffer zone capacity in MB. 	"ClientOutputBufferPersistTime": 60. Soft limit duration of the replica buffer zone in seconds. 	"ReplBacklogSize": 512, 	Limit of the circular buffer zone capacity in MB. 	"ReplTimeout":120,		Replication timeout period in seconds]
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KeyValuePairOption> GetExtraAttr() const;

                    /**
                     * 设置Additional information. You can set additional parameters for certain database types. For Redis, you can define the following parameters: 
["DstWriteMode": `normal`. 	Target database write mode. Valid values: `clearData` (Clear the target instance data), overwrite` (Execute the task in overwriting mode), `normal` (Follow the normal steps) 	"IsDstReadOnly": `true`. 	Whether to set the target database to read-only for a migration task. Valid values: `true` (Yes), `false` (No) 	"ClientOutputBufferHardLimit": 512. 	Hard limit of the replica buffer zone capacity in MB. 	"ClientOutputBufferSoftLimit": 512. 	Soft limit of the replica buffer zone capacity in MB. 	"ClientOutputBufferPersistTime": 60. Soft limit duration of the replica buffer zone in seconds. 	"ReplBacklogSize": 512, 	Limit of the circular buffer zone capacity in MB. 	"ReplTimeout":120,		Replication timeout period in seconds]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extraAttr Additional information. You can set additional parameters for certain database types. For Redis, you can define the following parameters: 
["DstWriteMode": `normal`. 	Target database write mode. Valid values: `clearData` (Clear the target instance data), overwrite` (Execute the task in overwriting mode), `normal` (Follow the normal steps) 	"IsDstReadOnly": `true`. 	Whether to set the target database to read-only for a migration task. Valid values: `true` (Yes), `false` (No) 	"ClientOutputBufferHardLimit": 512. 	Hard limit of the replica buffer zone capacity in MB. 	"ClientOutputBufferSoftLimit": 512. 	Soft limit of the replica buffer zone capacity in MB. 	"ClientOutputBufferPersistTime": 60. Soft limit duration of the replica buffer zone in seconds. 	"ReplBacklogSize": 512, 	Limit of the circular buffer zone capacity in MB. 	"ReplTimeout":120,		Replication timeout period in seconds]
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtraAttr(const std::vector<KeyValuePairOption>& _extraAttr);

                    /**
                     * 判断参数 ExtraAttr 是否已赋值
                     * @return ExtraAttr 是否已赋值
                     * 
                     */
                    bool ExtraAttrHasBeenSet() const;

                    /**
                     * 获取
                     * @return MigrateWay 
                     * 
                     */
                    std::string GetMigrateWay() const;

                    /**
                     * 设置
                     * @param _migrateWay 
                     * 
                     */
                    void SetMigrateWay(const std::string& _migrateWay);

                    /**
                     * 判断参数 MigrateWay 是否已赋值
                     * @return MigrateWay 是否已赋值
                     * 
                     */
                    bool MigrateWayHasBeenSet() const;

                private:

                    /**
                     * Migration object options, which tell DTS which database/table objects should be migrated.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DatabaseTableObject m_databaseTable;
                    bool m_databaseTableHasBeenSet;

                    /**
                     * Migration type. Valid values: `full`, `structure`, `fullAndIncrement`. Default value: `fullAndIncrement`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_migrateType;
                    bool m_migrateTypeHasBeenSet;

                    /**
                     * Data consistency check option. Data consistency check is disabled by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ConsistencyOption m_consistency;
                    bool m_consistencyHasBeenSet;

                    /**
                     * Whether to migrate accounts. Valid values: `yes`, `no`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isMigrateAccount;
                    bool m_isMigrateAccountHasBeenSet;

                    /**
                     * Whether to use the `Root` account in the source database to overwrite that in the target database. Valid values: `false`, `true`. For database/table or structural migration, you should specify `false`. Note that this parameter takes effect only for OldDTS.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isOverrideRoot;
                    bool m_isOverrideRootHasBeenSet;

                    /**
                     * Whether to set the target database to read-only during migration, which takes effect only for MySQL databases. Valid values: `true`, `false`. Default value: `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isDstReadOnly;
                    bool m_isDstReadOnlyHasBeenSet;

                    /**
                     * Additional information. You can set additional parameters for certain database types. For Redis, you can define the following parameters: 
["DstWriteMode": `normal`. 	Target database write mode. Valid values: `clearData` (Clear the target instance data), overwrite` (Execute the task in overwriting mode), `normal` (Follow the normal steps) 	"IsDstReadOnly": `true`. 	Whether to set the target database to read-only for a migration task. Valid values: `true` (Yes), `false` (No) 	"ClientOutputBufferHardLimit": 512. 	Hard limit of the replica buffer zone capacity in MB. 	"ClientOutputBufferSoftLimit": 512. 	Soft limit of the replica buffer zone capacity in MB. 	"ClientOutputBufferPersistTime": 60. Soft limit duration of the replica buffer zone in seconds. 	"ReplBacklogSize": 512, 	Limit of the circular buffer zone capacity in MB. 	"ReplTimeout":120,		Replication timeout period in seconds]
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<KeyValuePairOption> m_extraAttr;
                    bool m_extraAttrHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_migrateWay;
                    bool m_migrateWayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEOPTION_H_
