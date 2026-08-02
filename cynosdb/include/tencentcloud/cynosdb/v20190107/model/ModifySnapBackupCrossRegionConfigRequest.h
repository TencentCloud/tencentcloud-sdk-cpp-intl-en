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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYSNAPBACKUPCROSSREGIONCONFIGREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYSNAPBACKUPCROSSREGIONCONFIGREQUEST_H_

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
                * ModifySnapBackupCrossRegionConfig request structure.
                */
                class ModifySnapBackupCrossRegionConfigRequest : public AbstractModel
                {
                public:
                    ModifySnapBackupCrossRegionConfigRequest();
                    ~ModifySnapBackupCrossRegionConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
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
                     * 获取<p>Whether cross-region snapshot backup is enabled ON/OFF</p>
                     * @return CrossRegionsEnable <p>Whether cross-region snapshot backup is enabled ON/OFF</p>
                     * 
                     */
                    std::string GetCrossRegionsEnable() const;

                    /**
                     * 设置<p>Whether cross-region snapshot backup is enabled ON/OFF</p>
                     * @param _crossRegionsEnable <p>Whether cross-region snapshot backup is enabled ON/OFF</p>
                     * 
                     */
                    void SetCrossRegionsEnable(const std::string& _crossRegionsEnable);

                    /**
                     * 判断参数 CrossRegionsEnable 是否已赋值
                     * @return CrossRegionsEnable 是否已赋值
                     * 
                     */
                    bool CrossRegionsEnableHasBeenSet() const;

                    /**
                     * 获取<p>Cross-regional snapshot backup</p>
                     * @return CrossRegions <p>Cross-regional snapshot backup</p>
                     * 
                     */
                    std::vector<std::string> GetCrossRegions() const;

                    /**
                     * 设置<p>Cross-regional snapshot backup</p>
                     * @param _crossRegions <p>Cross-regional snapshot backup</p>
                     * 
                     */
                    void SetCrossRegions(const std::vector<std::string>& _crossRegions);

                    /**
                     * 判断参数 CrossRegions 是否已赋值
                     * @return CrossRegions 是否已赋值
                     * 
                     */
                    bool CrossRegionsHasBeenSet() const;

                    /**
                     * 获取<p>Cross-region backup retention period</p><p>Unit: day</p>
                     * @return CrossRegionSaveDays <p>Cross-region backup retention period</p><p>Unit: day</p>
                     * 
                     */
                    int64_t GetCrossRegionSaveDays() const;

                    /**
                     * 设置<p>Cross-region backup retention period</p><p>Unit: day</p>
                     * @param _crossRegionSaveDays <p>Cross-region backup retention period</p><p>Unit: day</p>
                     * 
                     */
                    void SetCrossRegionSaveDays(const int64_t& _crossRegionSaveDays);

                    /**
                     * 判断参数 CrossRegionSaveDays 是否已赋值
                     * @return CrossRegionSaveDays 是否已赋值
                     * 
                     */
                    bool CrossRegionSaveDaysHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Whether cross-region snapshot backup is enabled ON/OFF</p>
                     */
                    std::string m_crossRegionsEnable;
                    bool m_crossRegionsEnableHasBeenSet;

                    /**
                     * <p>Cross-regional snapshot backup</p>
                     */
                    std::vector<std::string> m_crossRegions;
                    bool m_crossRegionsHasBeenSet;

                    /**
                     * <p>Cross-region backup retention period</p><p>Unit: day</p>
                     */
                    int64_t m_crossRegionSaveDays;
                    bool m_crossRegionSaveDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYSNAPBACKUPCROSSREGIONCONFIGREQUEST_H_
