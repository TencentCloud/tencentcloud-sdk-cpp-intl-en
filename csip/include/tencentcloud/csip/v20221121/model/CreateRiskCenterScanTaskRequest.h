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
                     * 获取Task name.
                     * @return TaskName Task name.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.
                     * @param _taskName Task name.
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
                     * 获取0: Full Scan; 1: Specified Asset Scan; 2: Excluded Asset Scan; 3: Manual Entry Scan. 1 and 2 require the Assets field; 3 requires SelfDefiningAssets.
                     * @return ScanAssetType 0: Full Scan; 1: Specified Asset Scan; 2: Excluded Asset Scan; 3: Manual Entry Scan. 1 and 2 require the Assets field; 3 requires SelfDefiningAssets.
                     * 
                     */
                    int64_t GetScanAssetType() const;

                    /**
                     * 设置0: Full Scan; 1: Specified Asset Scan; 2: Excluded Asset Scan; 3: Manual Entry Scan. 1 and 2 require the Assets field; 3 requires SelfDefiningAssets.
                     * @param _scanAssetType 0: Full Scan; 1: Specified Asset Scan; 2: Excluded Asset Scan; 3: Manual Entry Scan. 1 and 2 require the Assets field; 3 requires SelfDefiningAssets.
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
                     * 获取Scan items. port/poc/weakpass/webcontent/configrisk/exposedserver.
                     * @return ScanItem Scan items. port/poc/weakpass/webcontent/configrisk/exposedserver.
                     * 
                     */
                    std::vector<std::string> GetScanItem() const;

                    /**
                     * 设置Scan items. port/poc/weakpass/webcontent/configrisk/exposedserver.
                     * @param _scanItem Scan items. port/poc/weakpass/webcontent/configrisk/exposedserver.
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
                     * 获取0: Periodic Task; 1: Scan Now; 2: Scheduled Scan; 3: Custom. If 0, 2, 3, ScanPlanContent is required.
                     * @return ScanPlanType 0: Periodic Task; 1: Scan Now; 2: Scheduled Scan; 3: Custom. If 0, 2, 3, ScanPlanContent is required.
                     * 
                     */
                    int64_t GetScanPlanType() const;

                    /**
                     * 设置0: Periodic Task; 1: Scan Now; 2: Scheduled Scan; 3: Custom. If 0, 2, 3, ScanPlanContent is required.
                     * @param _scanPlanType 0: Periodic Task; 1: Scan Now; 2: Scheduled Scan; 3: Custom. If 0, 2, 3, ScanPlanContent is required.
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
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Scanned Asset Information List
                     * @return Assets Scanned Asset Information List
                     * 
                     */
                    std::vector<TaskAssetObject> GetAssets() const;

                    /**
                     * 设置Scanned Asset Information List
                     * @param _assets Scanned Asset Information List
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
                     * 获取Scan Plan Details
                     * @return ScanPlanContent Scan Plan Details
                     * 
                     */
                    std::string GetScanPlanContent() const;

                    /**
                     * 设置Scan Plan Details
                     * @param _scanPlanContent Scan Plan Details
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
                     * 获取IP/Domain/URL Array
                     * @return SelfDefiningAssets IP/Domain/URL Array
                     * 
                     */
                    std::vector<std::string> GetSelfDefiningAssets() const;

                    /**
                     * 设置IP/Domain/URL Array
                     * @param _selfDefiningAssets IP/Domain/URL Array
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
                     * 获取Request initiation source. `vss` refers to Vulnerability Scan Service. Users of CSC should fill in `csip`. Default value: `csip`.
                     * @return ScanFrom Request initiation source. `vss` refers to Vulnerability Scan Service. Users of CSC should fill in `csip`. Default value: `csip`.
                     * 
                     */
                    std::string GetScanFrom() const;

                    /**
                     * 设置Request initiation source. `vss` refers to Vulnerability Scan Service. Users of CSC should fill in `csip`. Default value: `csip`.
                     * @param _scanFrom Request initiation source. `vss` refers to Vulnerability Scan Service. Users of CSC should fill in `csip`. Default value: `csip`.
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
                     * 获取Advanced configuration
                     * @return TaskAdvanceCFG Advanced configuration
                     * 
                     */
                    TaskAdvanceCFG GetTaskAdvanceCFG() const;

                    /**
                     * 设置Advanced configuration
                     * @param _taskAdvanceCFG Advanced configuration
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
                     * 获取Checkup Mode. 0: Standard Mode; 1: Quick Mode; 2: Advanced Mode. Standard Mode by default.
                     * @return TaskMode Checkup Mode. 0: Standard Mode; 1: Quick Mode; 2: Advanced Mode. Standard Mode by default.
                     * 
                     */
                    int64_t GetTaskMode() const;

                    /**
                     * 设置Checkup Mode. 0: Standard Mode; 1: Quick Mode; 2: Advanced Mode. Standard Mode by default.
                     * @param _taskMode Checkup Mode. 0: Standard Mode; 1: Quick Mode; 2: Advanced Mode. Standard Mode by default.
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
                     * 获取Asset tag
                     * @return Tags Asset tag
                     * 
                     */
                    AssetTag GetTags() const;

                    /**
                     * 设置Asset tag
                     * @param _tags Asset tag
                     * 
                     */
                    void SetTags(const AssetTag& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取webhook URL for task completion callback
                     * @return FinishWebHook webhook URL for task completion callback
                     * 
                     */
                    std::string GetFinishWebHook() const;

                    /**
                     * 设置webhook URL for task completion callback
                     * @param _finishWebHook webhook URL for task completion callback
                     * 
                     */
                    void SetFinishWebHook(const std::string& _finishWebHook);

                    /**
                     * 判断参数 FinishWebHook 是否已赋值
                     * @return FinishWebHook 是否已赋值
                     * 
                     */
                    bool FinishWebHookHasBeenSet() const;

                private:

                    /**
                     * Task name.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 0: Full Scan; 1: Specified Asset Scan; 2: Excluded Asset Scan; 3: Manual Entry Scan. 1 and 2 require the Assets field; 3 requires SelfDefiningAssets.
                     */
                    int64_t m_scanAssetType;
                    bool m_scanAssetTypeHasBeenSet;

                    /**
                     * Scan items. port/poc/weakpass/webcontent/configrisk/exposedserver.
                     */
                    std::vector<std::string> m_scanItem;
                    bool m_scanItemHasBeenSet;

                    /**
                     * 0: Periodic Task; 1: Scan Now; 2: Scheduled Scan; 3: Custom. If 0, 2, 3, ScanPlanContent is required.
                     */
                    int64_t m_scanPlanType;
                    bool m_scanPlanTypeHasBeenSet;

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Scanned Asset Information List
                     */
                    std::vector<TaskAssetObject> m_assets;
                    bool m_assetsHasBeenSet;

                    /**
                     * Scan Plan Details
                     */
                    std::string m_scanPlanContent;
                    bool m_scanPlanContentHasBeenSet;

                    /**
                     * IP/Domain/URL Array
                     */
                    std::vector<std::string> m_selfDefiningAssets;
                    bool m_selfDefiningAssetsHasBeenSet;

                    /**
                     * Request initiation source. `vss` refers to Vulnerability Scan Service. Users of CSC should fill in `csip`. Default value: `csip`.
                     */
                    std::string m_scanFrom;
                    bool m_scanFromHasBeenSet;

                    /**
                     * Advanced configuration
                     */
                    TaskAdvanceCFG m_taskAdvanceCFG;
                    bool m_taskAdvanceCFGHasBeenSet;

                    /**
                     * Checkup Mode. 0: Standard Mode; 1: Quick Mode; 2: Advanced Mode. Standard Mode by default.
                     */
                    int64_t m_taskMode;
                    bool m_taskModeHasBeenSet;

                    /**
                     * Asset tag
                     */
                    AssetTag m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * webhook URL for task completion callback
                     */
                    std::string m_finishWebHook;
                    bool m_finishWebHookHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATERISKCENTERSCANTASKREQUEST_H_
