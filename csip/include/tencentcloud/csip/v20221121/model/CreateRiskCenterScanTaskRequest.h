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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATERISKCENTERSCANTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATERISKCENTERSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TaskAssetObject.h>
#include <tencentcloud/csip/v20221121/model/TaskAdvanceCFG.h>
#include <tencentcloud/csip/v20221121/model/AssetTag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateRiskCenterScanTask request structure.
                */
                class CreateRiskCenterScanTaskRequest : public AbstractModel
                {
                public:
                    CreateRiskCenterScanTaskRequest();
                    ~CreateRiskCenterScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task name
                     * @return TaskName Task name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name
                     * @param _taskName Task name
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Values: `0` (Scan all); `1` (Scan specific assets); `2` (Scan all expect the specified assets); `3` (Custom assets). When `ScanAssetType=1/2`, `Assets` is required. When `ScanAssetType=3`, `SelfDefiningAssets` is required. 
                     * @return ScanAssetType Values: `0` (Scan all); `1` (Scan specific assets); `2` (Scan all expect the specified assets); `3` (Custom assets). When `ScanAssetType=1/2`, `Assets` is required. When `ScanAssetType=3`, `SelfDefiningAssets` is required. 
                     * 
                     */
                    int64_t GetScanAssetType() const;

                    /**
                     * 设置Values: `0` (Scan all); `1` (Scan specific assets); `2` (Scan all expect the specified assets); `3` (Custom assets). When `ScanAssetType=1/2`, `Assets` is required. When `ScanAssetType=3`, `SelfDefiningAssets` is required. 
                     * @param _scanAssetType Values: `0` (Scan all); `1` (Scan specific assets); `2` (Scan all expect the specified assets); `3` (Custom assets). When `ScanAssetType=1/2`, `Assets` is required. When `ScanAssetType=3`, `SelfDefiningAssets` is required. 
                     * 
                     */
                    void SetScanAssetType(const int64_t& _scanAssetType);

                    /**
                     * 判断参数 ScanAssetType 是否已赋值
                     * @return ScanAssetType 是否已赋值
                     * 
                     */
                    bool ScanAssetTypeHasBeenSet() const;

                    /**
                     * 获取Project to scan: port/poc/weakpass/webcontent/configrisk/exposedserver
                     * @return ScanItem Project to scan: port/poc/weakpass/webcontent/configrisk/exposedserver
                     * 
                     */
                    std::vector<std::string> GetScanItem() const;

                    /**
                     * 设置Project to scan: port/poc/weakpass/webcontent/configrisk/exposedserver
                     * @param _scanItem Project to scan: port/poc/weakpass/webcontent/configrisk/exposedserver
                     * 
                     */
                    void SetScanItem(const std::vector<std::string>& _scanItem);

                    /**
                     * 判断参数 ScanItem 是否已赋值
                     * @return ScanItem 是否已赋值
                     * 
                     */
                    bool ScanItemHasBeenSet() const;

                    /**
                     * 获取Task type. `0`: Scheduled task, `1`: Scan immediately; `2`: Scanned at the specified time; `3`: Custom. When ScanPlanType=0,2,3, `ScanPlanContent` is required.
                     * @return ScanPlanType Task type. `0`: Scheduled task, `1`: Scan immediately; `2`: Scanned at the specified time; `3`: Custom. When ScanPlanType=0,2,3, `ScanPlanContent` is required.
                     * 
                     */
                    int64_t GetScanPlanType() const;

                    /**
                     * 设置Task type. `0`: Scheduled task, `1`: Scan immediately; `2`: Scanned at the specified time; `3`: Custom. When ScanPlanType=0,2,3, `ScanPlanContent` is required.
                     * @param _scanPlanType Task type. `0`: Scheduled task, `1`: Scan immediately; `2`: Scanned at the specified time; `3`: Custom. When ScanPlanType=0,2,3, `ScanPlanContent` is required.
                     * 
                     */
                    void SetScanPlanType(const int64_t& _scanPlanType);

                    /**
                     * 判断参数 ScanPlanType 是否已赋值
                     * @return ScanPlanType 是否已赋值
                     * 
                     */
                    bool ScanPlanTypeHasBeenSet() const;

                    /**
                     * 获取List of assets to scan
                     * @return Assets List of assets to scan
                     * 
                     */
                    std::vector<TaskAssetObject> GetAssets() const;

                    /**
                     * 设置List of assets to scan
                     * @param _assets List of assets to scan
                     * 
                     */
                    void SetAssets(const std::vector<TaskAssetObject>& _assets);

                    /**
                     * 判断参数 Assets 是否已赋值
                     * @return Assets 是否已赋值
                     * 
                     */
                    bool AssetsHasBeenSet() const;

                    /**
                     * 获取Details of a scheduled scan task
                     * @return ScanPlanContent Details of a scheduled scan task
                     * 
                     */
                    std::string GetScanPlanContent() const;

                    /**
                     * 设置Details of a scheduled scan task
                     * @param _scanPlanContent Details of a scheduled scan task
                     * 
                     */
                    void SetScanPlanContent(const std::string& _scanPlanContent);

                    /**
                     * 判断参数 ScanPlanContent 是否已赋值
                     * @return ScanPlanContent 是否已赋值
                     * 
                     */
                    bool ScanPlanContentHasBeenSet() const;

                    /**
                     * 获取IP/Domain name/URL
                     * @return SelfDefiningAssets IP/Domain name/URL
                     * 
                     */
                    std::vector<std::string> GetSelfDefiningAssets() const;

                    /**
                     * 设置IP/Domain name/URL
                     * @param _selfDefiningAssets IP/Domain name/URL
                     * 
                     */
                    void SetSelfDefiningAssets(const std::vector<std::string>& _selfDefiningAssets);

                    /**
                     * 判断参数 SelfDefiningAssets 是否已赋值
                     * @return SelfDefiningAssets 是否已赋值
                     * 
                     */
                    bool SelfDefiningAssetsHasBeenSet() const;

                    /**
                     * 获取Request source. Values: `vss` (Vulnerability Scan Service), `csip` (Cloud Security Center). It defaults to `vss`.
                     * @return ScanFrom Request source. Values: `vss` (Vulnerability Scan Service), `csip` (Cloud Security Center). It defaults to `vss`.
                     * 
                     */
                    std::string GetScanFrom() const;

                    /**
                     * 设置Request source. Values: `vss` (Vulnerability Scan Service), `csip` (Cloud Security Center). It defaults to `vss`.
                     * @param _scanFrom Request source. Values: `vss` (Vulnerability Scan Service), `csip` (Cloud Security Center). It defaults to `vss`.
                     * 
                     */
                    void SetScanFrom(const std::string& _scanFrom);

                    /**
                     * 判断参数 ScanFrom 是否已赋值
                     * @return ScanFrom 是否已赋值
                     * 
                     */
                    bool ScanFromHasBeenSet() const;

                    /**
                     * 获取Advanced settings
                     * @return TaskAdvanceCFG Advanced settings
                     * 
                     */
                    TaskAdvanceCFG GetTaskAdvanceCFG() const;

                    /**
                     * 设置Advanced settings
                     * @param _taskAdvanceCFG Advanced settings
                     * 
                     */
                    void SetTaskAdvanceCFG(const TaskAdvanceCFG& _taskAdvanceCFG);

                    /**
                     * 判断参数 TaskAdvanceCFG 是否已赋值
                     * @return TaskAdvanceCFG 是否已赋值
                     * 
                     */
                    bool TaskAdvanceCFGHasBeenSet() const;

                    /**
                     * 获取Scan task mode: `0` (Standard), `1` (Quick), `2` (Advanced). Default: `0`
                     * @return TaskMode Scan task mode: `0` (Standard), `1` (Quick), `2` (Advanced). Default: `0`
                     * 
                     */
                    int64_t GetTaskMode() const;

                    /**
                     * 设置Scan task mode: `0` (Standard), `1` (Quick), `2` (Advanced). Default: `0`
                     * @param _taskMode Scan task mode: `0` (Standard), `1` (Quick), `2` (Advanced). Default: `0`
                     * 
                     */
                    void SetTaskMode(const int64_t& _taskMode);

                    /**
                     * 判断参数 TaskMode 是否已赋值
                     * @return TaskMode 是否已赋值
                     * 
                     */
                    bool TaskModeHasBeenSet() const;

                    /**
                     * 获取Asset tags
                     * @return Tags Asset tags
                     * 
                     */
                    AssetTag GetTags() const;

                    /**
                     * 设置Asset tags
                     * @param _tags Asset tags
                     * 
                     */
                    void SetTags(const AssetTag& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Task name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Values: `0` (Scan all); `1` (Scan specific assets); `2` (Scan all expect the specified assets); `3` (Custom assets). When `ScanAssetType=1/2`, `Assets` is required. When `ScanAssetType=3`, `SelfDefiningAssets` is required. 
                     */
                    int64_t m_scanAssetType;
                    bool m_scanAssetTypeHasBeenSet;

                    /**
                     * Project to scan: port/poc/weakpass/webcontent/configrisk/exposedserver
                     */
                    std::vector<std::string> m_scanItem;
                    bool m_scanItemHasBeenSet;

                    /**
                     * Task type. `0`: Scheduled task, `1`: Scan immediately; `2`: Scanned at the specified time; `3`: Custom. When ScanPlanType=0,2,3, `ScanPlanContent` is required.
                     */
                    int64_t m_scanPlanType;
                    bool m_scanPlanTypeHasBeenSet;

                    /**
                     * List of assets to scan
                     */
                    std::vector<TaskAssetObject> m_assets;
                    bool m_assetsHasBeenSet;

                    /**
                     * Details of a scheduled scan task
                     */
                    std::string m_scanPlanContent;
                    bool m_scanPlanContentHasBeenSet;

                    /**
                     * IP/Domain name/URL
                     */
                    std::vector<std::string> m_selfDefiningAssets;
                    bool m_selfDefiningAssetsHasBeenSet;

                    /**
                     * Request source. Values: `vss` (Vulnerability Scan Service), `csip` (Cloud Security Center). It defaults to `vss`.
                     */
                    std::string m_scanFrom;
                    bool m_scanFromHasBeenSet;

                    /**
                     * Advanced settings
                     */
                    TaskAdvanceCFG m_taskAdvanceCFG;
                    bool m_taskAdvanceCFGHasBeenSet;

                    /**
                     * Scan task mode: `0` (Standard), `1` (Quick), `2` (Advanced). Default: `0`
                     */
                    int64_t m_taskMode;
                    bool m_taskModeHasBeenSet;

                    /**
                     * Asset tags
                     */
                    AssetTag m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATERISKCENTERSCANTASKREQUEST_H_
