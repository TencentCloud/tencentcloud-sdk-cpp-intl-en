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
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取This parameter has been deprecated.
                     * @return DbType This parameter has been deprecated.
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置This parameter has been deprecated.
                     * @param _dbType This parameter has been deprecated.
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
                     * 获取Reason type for instance return
                     * @return IsolateReasonTypes Reason type for instance return
                     * 
                     */
                    std::vector<int64_t> GetIsolateReasonTypes() const;

                    /**
                     * 设置Reason type for instance return
                     * @param _isolateReasonTypes Reason type for instance return
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
                     * 获取Supplementary reason for instance return
                     * @return IsolateReason Supplementary reason for instance return
                     * 
                     */
                    std::string GetIsolateReason() const;

                    /**
                     * 设置Supplementary reason for instance return
                     * @param _isolateReason Supplementary reason for instance return
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
                     * 获取Retain backup. true: retain (fees will be incurred)
                     * @return SaveBackup Retain backup. true: retain (fees will be incurred)
                     * 
                     */
                    bool GetSaveBackup() const;

                    /**
                     * 设置Retain backup. true: retain (fees will be incurred)
                     * @param _saveBackup Retain backup. true: retain (fees will be incurred)
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
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * This parameter has been deprecated.
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * Reason type for instance return
                     */
                    std::vector<int64_t> m_isolateReasonTypes;
                    bool m_isolateReasonTypesHasBeenSet;

                    /**
                     * Supplementary reason for instance return
                     */
                    std::string m_isolateReason;
                    bool m_isolateReasonHasBeenSet;

                    /**
                     * Retain backup. true: retain (fees will be incurred)
                     */
                    bool m_saveBackup;
                    bool m_saveBackupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATECLUSTERREQUEST_H_
