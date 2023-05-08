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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SETBACKUPEXPIRERULEREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SETBACKUPEXPIRERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/BackupExpireRuleInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * SetBackupExpireRule request structure.
                */
                class SetBackupExpireRuleRequest : public AbstractModel
                {
                public:
                    SetBackupExpireRuleRequest();
                    ~SetBackupExpireRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the cluster where the tables reside
                     * @return ClusterId The ID of the cluster where the tables reside
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The ID of the cluster where the tables reside
                     * @param ClusterId The ID of the cluster where the tables reside
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Array of retention policies
                     * @return BackupExpireRules Array of retention policies
                     */
                    std::vector<BackupExpireRuleInfo> GetBackupExpireRules() const;

                    /**
                     * 设置Array of retention policies
                     * @param BackupExpireRules Array of retention policies
                     */
                    void SetBackupExpireRules(const std::vector<BackupExpireRuleInfo>& _backupExpireRules);

                    /**
                     * 判断参数 BackupExpireRules 是否已赋值
                     * @return BackupExpireRules 是否已赋值
                     */
                    bool BackupExpireRulesHasBeenSet() const;

                private:

                    /**
                     * The ID of the cluster where the tables reside
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Array of retention policies
                     */
                    std::vector<BackupExpireRuleInfo> m_backupExpireRules;
                    bool m_backupExpireRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SETBACKUPEXPIRERULEREQUEST_H_
