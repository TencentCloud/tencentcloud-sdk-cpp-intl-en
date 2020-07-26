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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATEOPTION_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATEOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/ConsistencyParams.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * Migration task configuration options
                */
                class MigrateOption : public AbstractModel
                {
                public:
                    MigrateOption();
                    ~MigrateOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task operation mode. Value range: 1 (immediate execution), 2 (scheduled execution)
                     * @return RunMode Task operation mode. Value range: 1 (immediate execution), 2 (scheduled execution)
                     */
                    int64_t GetRunMode() const;

                    /**
                     * 设置Task operation mode. Value range: 1 (immediate execution), 2 (scheduled execution)
                     * @param RunMode Task operation mode. Value range: 1 (immediate execution), 2 (scheduled execution)
                     */
                    void SetRunMode(const int64_t& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取Expected execution time in the format of yyyy-mm-dd hh:mm:ss. If runMode=2, this field is required
                     * @return ExpectTime Expected execution time in the format of yyyy-mm-dd hh:mm:ss. If runMode=2, this field is required
                     */
                    std::string GetExpectTime() const;

                    /**
                     * 设置Expected execution time in the format of yyyy-mm-dd hh:mm:ss. If runMode=2, this field is required
                     * @param ExpectTime Expected execution time in the format of yyyy-mm-dd hh:mm:ss. If runMode=2, this field is required
                     */
                    void SetExpectTime(const std::string& _expectTime);

                    /**
                     * 判断参数 ExpectTime 是否已赋值
                     * @return ExpectTime 是否已赋值
                     */
                    bool ExpectTimeHasBeenSet() const;

                    /**
                     * 获取Data migration type. Value range: 1 (structural migration), 2 (full migration), 3 (full + incremental migration)
                     * @return MigrateType Data migration type. Value range: 1 (structural migration), 2 (full migration), 3 (full + incremental migration)
                     */
                    int64_t GetMigrateType() const;

                    /**
                     * 设置Data migration type. Value range: 1 (structural migration), 2 (full migration), 3 (full + incremental migration)
                     * @param MigrateType Data migration type. Value range: 1 (structural migration), 2 (full migration), 3 (full + incremental migration)
                     */
                    void SetMigrateType(const int64_t& _migrateType);

                    /**
                     * 判断参数 MigrateType 是否已赋值
                     * @return MigrateType 是否已赋值
                     */
                    bool MigrateTypeHasBeenSet() const;

                    /**
                     * 获取Migration subject. 1: entire instance; 2: specified table
                     * @return MigrateObject Migration subject. 1: entire instance; 2: specified table
                     */
                    int64_t GetMigrateObject() const;

                    /**
                     * 设置Migration subject. 1: entire instance; 2: specified table
                     * @param MigrateObject Migration subject. 1: entire instance; 2: specified table
                     */
                    void SetMigrateObject(const int64_t& _migrateObject);

                    /**
                     * 判断参数 MigrateObject 是否已赋值
                     * @return MigrateObject 是否已赋值
                     */
                    bool MigrateObjectHasBeenSet() const;

                    /**
                     * 获取Parameter of spot data consistency check. 1: not configured; 2: full check; 3: spot check; 4: check inconsistent tables only; 5: no check
                     * @return ConsistencyType Parameter of spot data consistency check. 1: not configured; 2: full check; 3: spot check; 4: check inconsistent tables only; 5: no check
                     */
                    int64_t GetConsistencyType() const;

                    /**
                     * 设置Parameter of spot data consistency check. 1: not configured; 2: full check; 3: spot check; 4: check inconsistent tables only; 5: no check
                     * @param ConsistencyType Parameter of spot data consistency check. 1: not configured; 2: full check; 3: spot check; 4: check inconsistent tables only; 5: no check
                     */
                    void SetConsistencyType(const int64_t& _consistencyType);

                    /**
                     * 判断参数 ConsistencyType 是否已赋值
                     * @return ConsistencyType 是否已赋值
                     */
                    bool ConsistencyTypeHasBeenSet() const;

                    /**
                     * 获取Whether to overwrite the target database with the root account of the source database. Value range: 0 (no), 1 (yes). This value should be 0 for table or structural migration
                     * @return IsOverrideRoot Whether to overwrite the target database with the root account of the source database. Value range: 0 (no), 1 (yes). This value should be 0 for table or structural migration
                     */
                    int64_t GetIsOverrideRoot() const;

                    /**
                     * 设置Whether to overwrite the target database with the root account of the source database. Value range: 0 (no), 1 (yes). This value should be 0 for table or structural migration
                     * @param IsOverrideRoot Whether to overwrite the target database with the root account of the source database. Value range: 0 (no), 1 (yes). This value should be 0 for table or structural migration
                     */
                    void SetIsOverrideRoot(const int64_t& _isOverrideRoot);

                    /**
                     * 判断参数 IsOverrideRoot 是否已赋值
                     * @return IsOverrideRoot 是否已赋值
                     */
                    bool IsOverrideRootHasBeenSet() const;

                    /**
                     * 获取Additional parameters for different databases, which are described in JSON format. 
The following parameters can be defined for Redis: 
{ 
	"ClientOutputBufferHardLimit":512, 	Hard capacity limit of slave buffer (MB) 
	"ClientOutputBufferSoftLimit":512, 	Soft capacity limit of slave buffer (MB) 
	"ClientOutputBufferPersistTime":60, Soft limit duration of slave buffer (s) 
	"ReplBacklogSize":512, 	Circular buffer capacity limit (MB) 
	"ReplTimeout":120, 		Replication timeout period (s) 
}
The following parameters can be defined for MongoDB: 
{
	'SrcAuthDatabase':'admin', 
	'SrcAuthFlag': "1", 
	'SrcAuthMechanism':"SCRAM-SHA-1"
}
MySQL currently does not support configuring additional parameters.
                     * @return ExternParams Additional parameters for different databases, which are described in JSON format. 
The following parameters can be defined for Redis: 
{ 
	"ClientOutputBufferHardLimit":512, 	Hard capacity limit of slave buffer (MB) 
	"ClientOutputBufferSoftLimit":512, 	Soft capacity limit of slave buffer (MB) 
	"ClientOutputBufferPersistTime":60, Soft limit duration of slave buffer (s) 
	"ReplBacklogSize":512, 	Circular buffer capacity limit (MB) 
	"ReplTimeout":120, 		Replication timeout period (s) 
}
The following parameters can be defined for MongoDB: 
{
	'SrcAuthDatabase':'admin', 
	'SrcAuthFlag': "1", 
	'SrcAuthMechanism':"SCRAM-SHA-1"
}
MySQL currently does not support configuring additional parameters.
                     */
                    std::string GetExternParams() const;

                    /**
                     * 设置Additional parameters for different databases, which are described in JSON format. 
The following parameters can be defined for Redis: 
{ 
	"ClientOutputBufferHardLimit":512, 	Hard capacity limit of slave buffer (MB) 
	"ClientOutputBufferSoftLimit":512, 	Soft capacity limit of slave buffer (MB) 
	"ClientOutputBufferPersistTime":60, Soft limit duration of slave buffer (s) 
	"ReplBacklogSize":512, 	Circular buffer capacity limit (MB) 
	"ReplTimeout":120, 		Replication timeout period (s) 
}
The following parameters can be defined for MongoDB: 
{
	'SrcAuthDatabase':'admin', 
	'SrcAuthFlag': "1", 
	'SrcAuthMechanism':"SCRAM-SHA-1"
}
MySQL currently does not support configuring additional parameters.
                     * @param ExternParams Additional parameters for different databases, which are described in JSON format. 
The following parameters can be defined for Redis: 
{ 
	"ClientOutputBufferHardLimit":512, 	Hard capacity limit of slave buffer (MB) 
	"ClientOutputBufferSoftLimit":512, 	Soft capacity limit of slave buffer (MB) 
	"ClientOutputBufferPersistTime":60, Soft limit duration of slave buffer (s) 
	"ReplBacklogSize":512, 	Circular buffer capacity limit (MB) 
	"ReplTimeout":120, 		Replication timeout period (s) 
}
The following parameters can be defined for MongoDB: 
{
	'SrcAuthDatabase':'admin', 
	'SrcAuthFlag': "1", 
	'SrcAuthMechanism':"SCRAM-SHA-1"
}
MySQL currently does not support configuring additional parameters.
                     */
                    void SetExternParams(const std::string& _externParams);

                    /**
                     * 判断参数 ExternParams 是否已赋值
                     * @return ExternParams 是否已赋值
                     */
                    bool ExternParamsHasBeenSet() const;

                    /**
                     * 获取Only used for "spot data consistency check". It is required if ConsistencyType is spot check
                     * @return ConsistencyParams Only used for "spot data consistency check". It is required if ConsistencyType is spot check
                     */
                    ConsistencyParams GetConsistencyParams() const;

                    /**
                     * 设置Only used for "spot data consistency check". It is required if ConsistencyType is spot check
                     * @param ConsistencyParams Only used for "spot data consistency check". It is required if ConsistencyType is spot check
                     */
                    void SetConsistencyParams(const ConsistencyParams& _consistencyParams);

                    /**
                     * 判断参数 ConsistencyParams 是否已赋值
                     * @return ConsistencyParams 是否已赋值
                     */
                    bool ConsistencyParamsHasBeenSet() const;

                private:

                    /**
                     * Task operation mode. Value range: 1 (immediate execution), 2 (scheduled execution)
                     */
                    int64_t m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * Expected execution time in the format of yyyy-mm-dd hh:mm:ss. If runMode=2, this field is required
                     */
                    std::string m_expectTime;
                    bool m_expectTimeHasBeenSet;

                    /**
                     * Data migration type. Value range: 1 (structural migration), 2 (full migration), 3 (full + incremental migration)
                     */
                    int64_t m_migrateType;
                    bool m_migrateTypeHasBeenSet;

                    /**
                     * Migration subject. 1: entire instance; 2: specified table
                     */
                    int64_t m_migrateObject;
                    bool m_migrateObjectHasBeenSet;

                    /**
                     * Parameter of spot data consistency check. 1: not configured; 2: full check; 3: spot check; 4: check inconsistent tables only; 5: no check
                     */
                    int64_t m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * Whether to overwrite the target database with the root account of the source database. Value range: 0 (no), 1 (yes). This value should be 0 for table or structural migration
                     */
                    int64_t m_isOverrideRoot;
                    bool m_isOverrideRootHasBeenSet;

                    /**
                     * Additional parameters for different databases, which are described in JSON format. 
The following parameters can be defined for Redis: 
{ 
	"ClientOutputBufferHardLimit":512, 	Hard capacity limit of slave buffer (MB) 
	"ClientOutputBufferSoftLimit":512, 	Soft capacity limit of slave buffer (MB) 
	"ClientOutputBufferPersistTime":60, Soft limit duration of slave buffer (s) 
	"ReplBacklogSize":512, 	Circular buffer capacity limit (MB) 
	"ReplTimeout":120, 		Replication timeout period (s) 
}
The following parameters can be defined for MongoDB: 
{
	'SrcAuthDatabase':'admin', 
	'SrcAuthFlag': "1", 
	'SrcAuthMechanism':"SCRAM-SHA-1"
}
MySQL currently does not support configuring additional parameters.
                     */
                    std::string m_externParams;
                    bool m_externParamsHasBeenSet;

                    /**
                     * Only used for "spot data consistency check". It is required if ConsistencyType is spot check
                     */
                    ConsistencyParams m_consistencyParams;
                    bool m_consistencyParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATEOPTION_H_
