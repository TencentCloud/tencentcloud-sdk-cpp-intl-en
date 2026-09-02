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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CycleScanConf.h>
#include <tencentcloud/csip/v20221121/model/BaselinePolicySystemCategoryConf.h>
#include <tencentcloud/csip/v20221121/model/BaselineCustomItemConf.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Baseline policy
                */
                class BaselinePolicy : public AbstractModel
                {
                public:
                    BaselinePolicy();
                    ~BaselinePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Periodic scan configuration (switch, interval type, scanning period, etc.).</p>
                     * @return CycleScanConf <p>Periodic scan configuration (switch, interval type, scanning period, etc.).</p>
                     * 
                     */
                    CycleScanConf GetCycleScanConf() const;

                    /**
                     * 设置<p>Periodic scan configuration (switch, interval type, scanning period, etc.).</p>
                     * @param _cycleScanConf <p>Periodic scan configuration (switch, interval type, scanning period, etc.).</p>
                     * 
                     */
                    void SetCycleScanConf(const CycleScanConf& _cycleScanConf);

                    /**
                     * 判断参数 CycleScanConf 是否已赋值
                     * @return CycleScanConf 是否已赋值
                     * 
                     */
                    bool CycleScanConfHasBeenSet() const;

                    /**
                     * 获取<p>Detect asset major category, case-sensitive host baseline and container cluster baseline. Parameter values:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     * @return CheckAssetType <p>Detect asset major category, case-sensitive host baseline and container cluster baseline. Parameter values:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     * 
                     */
                    std::string GetCheckAssetType() const;

                    /**
                     * 设置<p>Detect asset major category, case-sensitive host baseline and container cluster baseline. Parameter values:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     * @param _checkAssetType <p>Detect asset major category, case-sensitive host baseline and container cluster baseline. Parameter values:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     * 
                     */
                    void SetCheckAssetType(const std::string& _checkAssetType);

                    /**
                     * 判断参数 CheckAssetType 是否已赋值
                     * @return CheckAssetType 是否已赋值
                     * 
                     */
                    bool CheckAssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to automatically join this policy when new built-in detection items are added to the system. true: automatically join, false: do not join.</p>
                     * @return AutoSyncItem <p>Whether to automatically join this policy when new built-in detection items are added to the system. true: automatically join, false: do not join.</p>
                     * 
                     */
                    bool GetAutoSyncItem() const;

                    /**
                     * 设置<p>Whether to automatically join this policy when new built-in detection items are added to the system. true: automatically join, false: do not join.</p>
                     * @param _autoSyncItem <p>Whether to automatically join this policy when new built-in detection items are added to the system. true: automatically join, false: do not join.</p>
                     * 
                     */
                    void SetAutoSyncItem(const bool& _autoSyncItem);

                    /**
                     * 判断参数 AutoSyncItem 是否已赋值
                     * @return AutoSyncItem 是否已赋值
                     * 
                     */
                    bool AutoSyncItemHasBeenSet() const;

                    /**
                     * 获取<p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     * @return Type <p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     * @param _type <p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Policy Name (custom policy is user input, and system policy is a built-in classification name).</p>
                     * @return Name <p>Policy Name (custom policy is user input, and system policy is a built-in classification name).</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Policy Name (custom policy is user input, and system policy is a built-in classification name).</p>
                     * @param _name <p>Policy Name (custom policy is user input, and system policy is a built-in classification name).</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Policy description.</p>
                     * @return Description <p>Policy description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Policy description.</p>
                     * @param _description <p>Policy description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Host effective scope. Value:</p><ul><li>ALL: all hosts (can be used in conjunction with ConfHostExcludeList for removal)</li><li>TAG_MATCH: tag matching, in conjunction with ConfHostTagValue</li><li>PICK: takes effect only on hosts specified in ConfHostIncludeList</li><li>NONE: no configuration</li></ul>
                     * @return ConfHostType <p>Host effective scope. Value:</p><ul><li>ALL: all hosts (can be used in conjunction with ConfHostExcludeList for removal)</li><li>TAG_MATCH: tag matching, in conjunction with ConfHostTagValue</li><li>PICK: takes effect only on hosts specified in ConfHostIncludeList</li><li>NONE: no configuration</li></ul>
                     * 
                     */
                    std::string GetConfHostType() const;

                    /**
                     * 设置<p>Host effective scope. Value:</p><ul><li>ALL: all hosts (can be used in conjunction with ConfHostExcludeList for removal)</li><li>TAG_MATCH: tag matching, in conjunction with ConfHostTagValue</li><li>PICK: takes effect only on hosts specified in ConfHostIncludeList</li><li>NONE: no configuration</li></ul>
                     * @param _confHostType <p>Host effective scope. Value:</p><ul><li>ALL: all hosts (can be used in conjunction with ConfHostExcludeList for removal)</li><li>TAG_MATCH: tag matching, in conjunction with ConfHostTagValue</li><li>PICK: takes effect only on hosts specified in ConfHostIncludeList</li><li>NONE: no configuration</li></ul>
                     * 
                     */
                    void SetConfHostType(const std::string& _confHostType);

                    /**
                     * 判断参数 ConfHostType 是否已赋值
                     * @return ConfHostType 是否已赋值
                     * 
                     */
                    bool ConfHostTypeHasBeenSet() const;

                    /**
                     * 获取<p>Host InstanceID allowlist, used when ConfHostType=PICK / TAG_MATCH.</p>
                     * @return ConfHostIncludeList <p>Host InstanceID allowlist, used when ConfHostType=PICK / TAG_MATCH.</p>
                     * 
                     */
                    std::vector<std::string> GetConfHostIncludeList() const;

                    /**
                     * 设置<p>Host InstanceID allowlist, used when ConfHostType=PICK / TAG_MATCH.</p>
                     * @param _confHostIncludeList <p>Host InstanceID allowlist, used when ConfHostType=PICK / TAG_MATCH.</p>
                     * 
                     */
                    void SetConfHostIncludeList(const std::vector<std::string>& _confHostIncludeList);

                    /**
                     * 判断参数 ConfHostIncludeList 是否已赋值
                     * @return ConfHostIncludeList 是否已赋值
                     * 
                     */
                    bool ConfHostIncludeListHasBeenSet() const;

                    /**
                     * 获取<p>Host InstanceID removal list, used when ConfHostType=ALL.</p>
                     * @return ConfHostExcludeList <p>Host InstanceID removal list, used when ConfHostType=ALL.</p>
                     * 
                     */
                    std::vector<std::string> GetConfHostExcludeList() const;

                    /**
                     * 设置<p>Host InstanceID removal list, used when ConfHostType=ALL.</p>
                     * @param _confHostExcludeList <p>Host InstanceID removal list, used when ConfHostType=ALL.</p>
                     * 
                     */
                    void SetConfHostExcludeList(const std::vector<std::string>& _confHostExcludeList);

                    /**
                     * 判断参数 ConfHostExcludeList 是否已赋值
                     * @return ConfHostExcludeList 是否已赋值
                     * 
                     */
                    bool ConfHostExcludeListHasBeenSet() const;

                    /**
                     * 获取<p>Policy activation status. 0 disabled, 1 enabled; once disabled, the policy will not participate in scans and statistics.</p>
                     * @return Enable <p>Policy activation status. 0 disabled, 1 enabled; once disabled, the policy will not participate in scans and statistics.</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>Policy activation status. 0 disabled, 1 enabled; once disabled, the policy will not participate in scans and statistics.</p>
                     * @param _enable <p>Policy activation status. 0 disabled, 1 enabled; once disabled, the policy will not participate in scans and statistics.</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>Cluster effective scope. Value:</p><ul><li>ALL: all clusters (can be used in conjunction with ConfClusterExcludeList for removal)</li><li>PICK: takes effect only on the clusters specified by ConfClusterIncludeList</li><li>NONE: no configuration</li></ul>
                     * @return ConfClusterType <p>Cluster effective scope. Value:</p><ul><li>ALL: all clusters (can be used in conjunction with ConfClusterExcludeList for removal)</li><li>PICK: takes effect only on the clusters specified by ConfClusterIncludeList</li><li>NONE: no configuration</li></ul>
                     * 
                     */
                    std::string GetConfClusterType() const;

                    /**
                     * 设置<p>Cluster effective scope. Value:</p><ul><li>ALL: all clusters (can be used in conjunction with ConfClusterExcludeList for removal)</li><li>PICK: takes effect only on the clusters specified by ConfClusterIncludeList</li><li>NONE: no configuration</li></ul>
                     * @param _confClusterType <p>Cluster effective scope. Value:</p><ul><li>ALL: all clusters (can be used in conjunction with ConfClusterExcludeList for removal)</li><li>PICK: takes effect only on the clusters specified by ConfClusterIncludeList</li><li>NONE: no configuration</li></ul>
                     * 
                     */
                    void SetConfClusterType(const std::string& _confClusterType);

                    /**
                     * 判断参数 ConfClusterType 是否已赋值
                     * @return ConfClusterType 是否已赋值
                     * 
                     */
                    bool ConfClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID allowlist, used when ConfClusterType=PICK.</p>
                     * @return ConfClusterIncludeList <p>Cluster ID allowlist, used when ConfClusterType=PICK.</p>
                     * 
                     */
                    std::vector<std::string> GetConfClusterIncludeList() const;

                    /**
                     * 设置<p>Cluster ID allowlist, used when ConfClusterType=PICK.</p>
                     * @param _confClusterIncludeList <p>Cluster ID allowlist, used when ConfClusterType=PICK.</p>
                     * 
                     */
                    void SetConfClusterIncludeList(const std::vector<std::string>& _confClusterIncludeList);

                    /**
                     * 判断参数 ConfClusterIncludeList 是否已赋值
                     * @return ConfClusterIncludeList 是否已赋值
                     * 
                     */
                    bool ConfClusterIncludeListHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID removal list, used when ConfClusterType=ALL.</p>
                     * @return ConfClusterExcludeList <p>Cluster ID removal list, used when ConfClusterType=ALL.</p>
                     * 
                     */
                    std::vector<std::string> GetConfClusterExcludeList() const;

                    /**
                     * 设置<p>Cluster ID removal list, used when ConfClusterType=ALL.</p>
                     * @param _confClusterExcludeList <p>Cluster ID removal list, used when ConfClusterType=ALL.</p>
                     * 
                     */
                    void SetConfClusterExcludeList(const std::vector<std::string>& _confClusterExcludeList);

                    /**
                     * 判断参数 ConfClusterExcludeList 是否已赋值
                     * @return ConfClusterExcludeList 是否已赋值
                     * 
                     */
                    bool ConfClusterExcludeListHasBeenSet() const;

                    /**
                     * 获取<p>Hit configuration of system classification / subcategory / detection item (only system policies take effect).</p>
                     * @return CategoryConf <p>Hit configuration of system classification / subcategory / detection item (only system policies take effect).</p>
                     * 
                     */
                    std::vector<BaselinePolicySystemCategoryConf> GetCategoryConf() const;

                    /**
                     * 设置<p>Hit configuration of system classification / subcategory / detection item (only system policies take effect).</p>
                     * @param _categoryConf <p>Hit configuration of system classification / subcategory / detection item (only system policies take effect).</p>
                     * 
                     */
                    void SetCategoryConf(const std::vector<BaselinePolicySystemCategoryConf>& _categoryConf);

                    /**
                     * 判断参数 CategoryConf 是否已赋值
                     * @return CategoryConf 是否已赋值
                     * 
                     */
                    bool CategoryConfHasBeenSet() const;

                    /**
                     * 获取<p>Custom detection item parameter value configuration list (overwrites the judgment value based on the system check item).</p>
                     * @return CustomItemConf <p>Custom detection item parameter value configuration list (overwrites the judgment value based on the system check item).</p>
                     * 
                     */
                    std::vector<BaselineCustomItemConf> GetCustomItemConf() const;

                    /**
                     * 设置<p>Custom detection item parameter value configuration list (overwrites the judgment value based on the system check item).</p>
                     * @param _customItemConf <p>Custom detection item parameter value configuration list (overwrites the judgment value based on the system check item).</p>
                     * 
                     */
                    void SetCustomItemConf(const std::vector<BaselineCustomItemConf>& _customItemConf);

                    /**
                     * 判断参数 CustomItemConf 是否已赋值
                     * @return CustomItemConf 是否已赋值
                     * 
                     */
                    bool CustomItemConfHasBeenSet() const;

                    /**
                     * 获取<p>Appid of the associated tenant of the policy.</p>
                     * @return Appid <p>Appid of the associated tenant of the policy.</p>
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置<p>Appid of the associated tenant of the policy.</p>
                     * @param _appid <p>Appid of the associated tenant of the policy.</p>
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取<p>Baseline policy ID.</p>
                     * @return ID <p>Baseline policy ID.</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>Baseline policy ID.</p>
                     * @param _iD <p>Baseline policy ID.</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Number of detection items configured in the current policy.</p>
                     * @return ConfItemCount <p>Number of detection items configured in the current policy.</p>
                     * 
                     */
                    uint64_t GetConfItemCount() const;

                    /**
                     * 设置<p>Number of detection items configured in the current policy.</p>
                     * @param _confItemCount <p>Number of detection items configured in the current policy.</p>
                     * 
                     */
                    void SetConfItemCount(const uint64_t& _confItemCount);

                    /**
                     * 判断参数 ConfItemCount 是否已赋值
                     * @return ConfItemCount 是否已赋值
                     * 
                     */
                    bool ConfItemCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of hosts hit by the current policy.</p>
                     * @return ConfHostCount <p>Number of hosts hit by the current policy.</p>
                     * 
                     */
                    uint64_t GetConfHostCount() const;

                    /**
                     * 设置<p>Number of hosts hit by the current policy.</p>
                     * @param _confHostCount <p>Number of hosts hit by the current policy.</p>
                     * 
                     */
                    void SetConfHostCount(const uint64_t& _confHostCount);

                    /**
                     * 判断参数 ConfHostCount 是否已赋值
                     * @return ConfHostCount 是否已赋值
                     * 
                     */
                    bool ConfHostCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of clusters hit by the current policy.</p>
                     * @return ConfClusterCount <p>Number of clusters hit by the current policy.</p>
                     * 
                     */
                    uint64_t GetConfClusterCount() const;

                    /**
                     * 设置<p>Number of clusters hit by the current policy.</p>
                     * @param _confClusterCount <p>Number of clusters hit by the current policy.</p>
                     * 
                     */
                    void SetConfClusterCount(const uint64_t& _confClusterCount);

                    /**
                     * 判断参数 ConfClusterCount 是否已赋值
                     * @return ConfClusterCount 是否已赋值
                     * 
                     */
                    bool ConfClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>ID of the scan main task currently in progress for the policy; 0 if not in a scan.</p>
                     * @return ScanningTaskID <p>ID of the scan main task currently in progress for the policy; 0 if not in a scan.</p>
                     * 
                     */
                    uint64_t GetScanningTaskID() const;

                    /**
                     * 设置<p>ID of the scan main task currently in progress for the policy; 0 if not in a scan.</p>
                     * @param _scanningTaskID <p>ID of the scan main task currently in progress for the policy; 0 if not in a scan.</p>
                     * 
                     */
                    void SetScanningTaskID(const uint64_t& _scanningTaskID);

                    /**
                     * 判断参数 ScanningTaskID 是否已赋值
                     * @return ScanningTaskID 是否已赋值
                     * 
                     */
                    bool ScanningTaskIDHasBeenSet() const;

                    /**
                     * 获取<p>Last scan completion time (including manual/periodic).</p>
                     * @return LatestScanTime <p>Last scan completion time (including manual/periodic).</p>
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置<p>Last scan completion time (including manual/periodic).</p>
                     * @param _latestScanTime <p>Last scan completion time (including manual/periodic).</p>
                     * 
                     */
                    void SetLatestScanTime(const std::string& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>Last periodic scan completion time.</p>
                     * @return LatestCycleScanTime <p>Last periodic scan completion time.</p>
                     * 
                     */
                    std::string GetLatestCycleScanTime() const;

                    /**
                     * 设置<p>Last periodic scan completion time.</p>
                     * @param _latestCycleScanTime <p>Last periodic scan completion time.</p>
                     * 
                     */
                    void SetLatestCycleScanTime(const std::string& _latestCycleScanTime);

                    /**
                     * 判断参数 LatestCycleScanTime 是否已赋值
                     * @return LatestCycleScanTime 是否已赋值
                     * 
                     */
                    bool LatestCycleScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>Security Center tag ID list</p>
                     * @return TagIDList <p>Security Center tag ID list</p>
                     * 
                     */
                    std::vector<uint64_t> GetTagIDList() const;

                    /**
                     * 设置<p>Security Center tag ID list</p>
                     * @param _tagIDList <p>Security Center tag ID list</p>
                     * 
                     */
                    void SetTagIDList(const std::vector<uint64_t>& _tagIDList);

                    /**
                     * 判断参数 TagIDList 是否已赋值
                     * @return TagIDList 是否已赋值
                     * 
                     */
                    bool TagIDListHasBeenSet() const;

                    /**
                     * 获取<p>Cloud tag list</p>
                     * @return CloudTagList <p>Cloud tag list</p>
                     * 
                     */
                    std::vector<std::string> GetCloudTagList() const;

                    /**
                     * 设置<p>Cloud tag list</p>
                     * @param _cloudTagList <p>Cloud tag list</p>
                     * 
                     */
                    void SetCloudTagList(const std::vector<std::string>& _cloudTagList);

                    /**
                     * 判断参数 CloudTagList 是否已赋值
                     * @return CloudTagList 是否已赋值
                     * 
                     */
                    bool CloudTagListHasBeenSet() const;

                private:

                    /**
                     * <p>Periodic scan configuration (switch, interval type, scanning period, etc.).</p>
                     */
                    CycleScanConf m_cycleScanConf;
                    bool m_cycleScanConfHasBeenSet;

                    /**
                     * <p>Detect asset major category, case-sensitive host baseline and container cluster baseline. Parameter values:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     */
                    std::string m_checkAssetType;
                    bool m_checkAssetTypeHasBeenSet;

                    /**
                     * <p>Whether to automatically join this policy when new built-in detection items are added to the system. true: automatically join, false: do not join.</p>
                     */
                    bool m_autoSyncItem;
                    bool m_autoSyncItemHasBeenSet;

                    /**
                     * <p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Policy Name (custom policy is user input, and system policy is a built-in classification name).</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Policy description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Host effective scope. Value:</p><ul><li>ALL: all hosts (can be used in conjunction with ConfHostExcludeList for removal)</li><li>TAG_MATCH: tag matching, in conjunction with ConfHostTagValue</li><li>PICK: takes effect only on hosts specified in ConfHostIncludeList</li><li>NONE: no configuration</li></ul>
                     */
                    std::string m_confHostType;
                    bool m_confHostTypeHasBeenSet;

                    /**
                     * <p>Host InstanceID allowlist, used when ConfHostType=PICK / TAG_MATCH.</p>
                     */
                    std::vector<std::string> m_confHostIncludeList;
                    bool m_confHostIncludeListHasBeenSet;

                    /**
                     * <p>Host InstanceID removal list, used when ConfHostType=ALL.</p>
                     */
                    std::vector<std::string> m_confHostExcludeList;
                    bool m_confHostExcludeListHasBeenSet;

                    /**
                     * <p>Policy activation status. 0 disabled, 1 enabled; once disabled, the policy will not participate in scans and statistics.</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Cluster effective scope. Value:</p><ul><li>ALL: all clusters (can be used in conjunction with ConfClusterExcludeList for removal)</li><li>PICK: takes effect only on the clusters specified by ConfClusterIncludeList</li><li>NONE: no configuration</li></ul>
                     */
                    std::string m_confClusterType;
                    bool m_confClusterTypeHasBeenSet;

                    /**
                     * <p>Cluster ID allowlist, used when ConfClusterType=PICK.</p>
                     */
                    std::vector<std::string> m_confClusterIncludeList;
                    bool m_confClusterIncludeListHasBeenSet;

                    /**
                     * <p>Cluster ID removal list, used when ConfClusterType=ALL.</p>
                     */
                    std::vector<std::string> m_confClusterExcludeList;
                    bool m_confClusterExcludeListHasBeenSet;

                    /**
                     * <p>Hit configuration of system classification / subcategory / detection item (only system policies take effect).</p>
                     */
                    std::vector<BaselinePolicySystemCategoryConf> m_categoryConf;
                    bool m_categoryConfHasBeenSet;

                    /**
                     * <p>Custom detection item parameter value configuration list (overwrites the judgment value based on the system check item).</p>
                     */
                    std::vector<BaselineCustomItemConf> m_customItemConf;
                    bool m_customItemConfHasBeenSet;

                    /**
                     * <p>Appid of the associated tenant of the policy.</p>
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * <p>Baseline policy ID.</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Number of detection items configured in the current policy.</p>
                     */
                    uint64_t m_confItemCount;
                    bool m_confItemCountHasBeenSet;

                    /**
                     * <p>Number of hosts hit by the current policy.</p>
                     */
                    uint64_t m_confHostCount;
                    bool m_confHostCountHasBeenSet;

                    /**
                     * <p>Number of clusters hit by the current policy.</p>
                     */
                    uint64_t m_confClusterCount;
                    bool m_confClusterCountHasBeenSet;

                    /**
                     * <p>ID of the scan main task currently in progress for the policy; 0 if not in a scan.</p>
                     */
                    uint64_t m_scanningTaskID;
                    bool m_scanningTaskIDHasBeenSet;

                    /**
                     * <p>Last scan completion time (including manual/periodic).</p>
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * <p>Last periodic scan completion time.</p>
                     */
                    std::string m_latestCycleScanTime;
                    bool m_latestCycleScanTimeHasBeenSet;

                    /**
                     * <p>Security Center tag ID list</p>
                     */
                    std::vector<uint64_t> m_tagIDList;
                    bool m_tagIDListHasBeenSet;

                    /**
                     * <p>Cloud tag list</p>
                     */
                    std::vector<std::string> m_cloudTagList;
                    bool m_cloudTagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICY_H_
