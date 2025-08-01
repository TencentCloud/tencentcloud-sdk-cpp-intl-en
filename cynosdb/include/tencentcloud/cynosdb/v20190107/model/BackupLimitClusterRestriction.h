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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPLIMITCLUSTERRESTRICTION_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPLIMITCLUSTERRESTRICTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BackupLimitRestriction.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Specifies the backup download cluster restrictions parameter.
                */
                class BackupLimitClusterRestriction : public AbstractModel
                {
                public:
                    BackupLimitClusterRestriction();
                    ~BackupLimitClusterRestriction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Download limit configuration.
                     * @return BackupLimitRestriction Download limit configuration.
                     * 
                     */
                    BackupLimitRestriction GetBackupLimitRestriction() const;

                    /**
                     * 设置Download limit configuration.
                     * @param _backupLimitRestriction Download limit configuration.
                     * 
                     */
                    void SetBackupLimitRestriction(const BackupLimitRestriction& _backupLimitRestriction);

                    /**
                     * 判断参数 BackupLimitRestriction 是否已赋值
                     * @return BackupLimitRestriction 是否已赋值
                     * 
                     */
                    bool BackupLimitRestrictionHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Download limit configuration.
                     */
                    BackupLimitRestriction m_backupLimitRestriction;
                    bool m_backupLimitRestrictionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPLIMITCLUSTERRESTRICTION_H_
