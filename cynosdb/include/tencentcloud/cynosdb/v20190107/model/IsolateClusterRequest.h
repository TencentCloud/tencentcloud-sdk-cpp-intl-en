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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATECLUSTERREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * IsolateCluster request structure.
                */
                class IsolateClusterRequest : public AbstractModel
                {
                public:
                    IsolateClusterRequest();
                    ~IsolateClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return ClusterId Cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _clusterId Cluster ID.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused.
                     * @return DbType This parameter has been disused.
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置This parameter has been disused.
                     * @param _dbType This parameter has been disused.
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取Instance return reason type.
                     * @return IsolateReasonTypes Instance return reason type.
                     * 
                     */
                    std::vector<int64_t> GetIsolateReasonTypes() const;

                    /**
                     * 设置Instance return reason type.
                     * @param _isolateReasonTypes Instance return reason type.
                     * 
                     */
                    void SetIsolateReasonTypes(const std::vector<int64_t>& _isolateReasonTypes);

                    /**
                     * 判断参数 IsolateReasonTypes 是否已赋值
                     * @return IsolateReasonTypes 是否已赋值
                     * 
                     */
                    bool IsolateReasonTypesHasBeenSet() const;

                    /**
                     * 获取Instance return reason supplement.
                     * @return IsolateReason Instance return reason supplement.
                     * 
                     */
                    std::string GetIsolateReason() const;

                    /**
                     * 设置Instance return reason supplement.
                     * @param _isolateReason Instance return reason supplement.
                     * 
                     */
                    void SetIsolateReason(const std::string& _isolateReason);

                    /**
                     * 判断参数 IsolateReason 是否已赋值
                     * @return IsolateReason 是否已赋值
                     * 
                     */
                    bool IsolateReasonHasBeenSet() const;

                    /**
                     * 获取Retain backup, true - Retained (incur fees).
                     * @return SaveBackup Retain backup, true - Retained (incur fees).
                     * 
                     */
                    bool GetSaveBackup() const;

                    /**
                     * 设置Retain backup, true - Retained (incur fees).
                     * @param _saveBackup Retain backup, true - Retained (incur fees).
                     * 
                     */
                    void SetSaveBackup(const bool& _saveBackup);

                    /**
                     * 判断参数 SaveBackup 是否已赋值
                     * @return SaveBackup 是否已赋值
                     * 
                     */
                    bool SaveBackupHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * This parameter has been disused.
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * Instance return reason type.
                     */
                    std::vector<int64_t> m_isolateReasonTypes;
                    bool m_isolateReasonTypesHasBeenSet;

                    /**
                     * Instance return reason supplement.
                     */
                    std::string m_isolateReason;
                    bool m_isolateReasonHasBeenSet;

                    /**
                     * Retain backup, true - Retained (incur fees).
                     */
                    bool m_saveBackup;
                    bool m_saveBackupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATECLUSTERREQUEST_H_
