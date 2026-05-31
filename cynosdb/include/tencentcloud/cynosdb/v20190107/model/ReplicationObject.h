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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REPLICATIONOBJECT_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REPLICATIONOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/MigrateOpt.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Analysis engine sync object
                */
                class ReplicationObject : public AbstractModel
                {
                public:
                    ReplicationObject();
                    ~ReplicationObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source instance type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcInstanceType Source instance type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSrcInstanceType() const;

                    /**
                     * 设置Source instance type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _srcInstanceType Source instance type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSrcInstanceType(const std::string& _srcInstanceType);

                    /**
                     * 判断参数 SrcInstanceType 是否已赋值
                     * @return SrcInstanceType 是否已赋值
                     * 
                     */
                    bool SrcInstanceTypeHasBeenSet() const;

                    /**
                     * 获取Source Cluster Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcClusterId Source Cluster Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSrcClusterId() const;

                    /**
                     * 设置Source Cluster Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _srcClusterId Source Cluster Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSrcClusterId(const std::string& _srcClusterId);

                    /**
                     * 判断参数 SrcClusterId 是否已赋值
                     * @return SrcClusterId 是否已赋值
                     * 
                     */
                    bool SrcClusterIdHasBeenSet() const;

                    /**
                     * 获取Source instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcInstanceId Source instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置Source instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _srcInstanceId Source instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取Copy task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReplicationJobId Copy task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReplicationJobId() const;

                    /**
                     * 设置Copy task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _replicationJobId Copy task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReplicationJobId(const std::string& _replicationJobId);

                    /**
                     * 判断参数 ReplicationJobId 是否已赋值
                     * @return ReplicationJobId 是否已赋值
                     * 
                     */
                    bool ReplicationJobIdHasBeenSet() const;

                    /**
                     * 获取sync object details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MigrateObjects sync object details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MigrateOpt GetMigrateObjects() const;

                    /**
                     * 设置sync object details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _migrateObjects sync object details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMigrateObjects(const MigrateOpt& _migrateObjects);

                    /**
                     * 判断参数 MigrateObjects 是否已赋值
                     * @return MigrateObjects 是否已赋值
                     * 
                     */
                    bool MigrateObjectsHasBeenSet() const;

                private:

                    /**
                     * Source instance type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_srcInstanceType;
                    bool m_srcInstanceTypeHasBeenSet;

                    /**
                     * Source Cluster Id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_srcClusterId;
                    bool m_srcClusterIdHasBeenSet;

                    /**
                     * Source instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * Copy task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_replicationJobId;
                    bool m_replicationJobIdHasBeenSet;

                    /**
                     * sync object details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MigrateOpt m_migrateObjects;
                    bool m_migrateObjectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REPLICATIONOBJECT_H_
