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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNETATTACKSETTINGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNETATTACKSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/InstanceIDWithAppIdItem.h>
#include <tencentcloud/csip/v20221121/model/ClusterIDWithAppIdItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyNetAttackSetting request structure.
                */
                class ModifyNetAttackSettingRequest : public AbstractModel
                {
                public:
                    ModifyNetAttackSettingRequest();
                    ~ModifyNetAttackSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>0: disable network attack detection; 1: enable network attack detection</p>
                     * @return NetAttackEnable <p>0: disable network attack detection; 1: enable network attack detection</p>
                     * 
                     */
                    uint64_t GetNetAttackEnable() const;

                    /**
                     * 设置<p>0: disable network attack detection; 1: enable network attack detection</p>
                     * @param _netAttackEnable <p>0: disable network attack detection; 1: enable network attack detection</p>
                     * 
                     */
                    void SetNetAttackEnable(const uint64_t& _netAttackEnable);

                    /**
                     * 判断参数 NetAttackEnable 是否已赋值
                     * @return NetAttackEnable 是否已赋值
                     * 
                     */
                    bool NetAttackEnableHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
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
                     * 获取<p>0: new warning events pending processing by default; 1: new warning events processed by default; 3: new warning events ignored by default</p>
                     * @return NetAttackAlarmStatus <p>0: new warning events pending processing by default; 1: new warning events processed by default; 3: new warning events ignored by default</p>
                     * 
                     */
                    uint64_t GetNetAttackAlarmStatus() const;

                    /**
                     * 设置<p>0: new warning events pending processing by default; 1: new warning events processed by default; 3: new warning events ignored by default</p>
                     * @param _netAttackAlarmStatus <p>0: new warning events pending processing by default; 1: new warning events processed by default; 3: new warning events ignored by default</p>
                     * 
                     */
                    void SetNetAttackAlarmStatus(const uint64_t& _netAttackAlarmStatus);

                    /**
                     * 判断参数 NetAttackAlarmStatus 是否已赋值
                     * @return NetAttackAlarmStatus 是否已赋值
                     * 
                     */
                    bool NetAttackAlarmStatusHasBeenSet() const;

                    /**
                     * 获取<p>Automatic inclusion of new assets: 0 means not included, and 1 means included</p>
                     * @return AutoInclude <p>Automatic inclusion of new assets: 0 means not included, and 1 means included</p>
                     * 
                     */
                    uint64_t GetAutoInclude() const;

                    /**
                     * 设置<p>Automatic inclusion of new assets: 0 means not included, and 1 means included</p>
                     * @param _autoInclude <p>Automatic inclusion of new assets: 0 means not included, and 1 means included</p>
                     * 
                     */
                    void SetAutoInclude(const uint64_t& _autoInclude);

                    /**
                     * 判断参数 AutoInclude 是否已赋值
                     * @return AutoInclude 是否已赋值
                     * 
                     */
                    bool AutoIncludeHasBeenSet() const;

                    /**
                     * 获取<p>Host range: 0 - specify 1 - all 2 - Pro Edition 3 - Flagship Edition 4 - Pro + Flagship</p>
                     * @return CWPScope <p>Host range: 0 - specify 1 - all 2 - Pro Edition 3 - Flagship Edition 4 - Pro + Flagship</p>
                     * 
                     */
                    int64_t GetCWPScope() const;

                    /**
                     * 设置<p>Host range: 0 - specify 1 - all 2 - Pro Edition 3 - Flagship Edition 4 - Pro + Flagship</p>
                     * @param _cWPScope <p>Host range: 0 - specify 1 - all 2 - Pro Edition 3 - Flagship Edition 4 - Pro + Flagship</p>
                     * 
                     */
                    void SetCWPScope(const int64_t& _cWPScope);

                    /**
                     * 判断参数 CWPScope 是否已赋值
                     * @return CWPScope 是否已赋值
                     * 
                     */
                    bool CWPScopeHasBeenSet() const;

                    /**
                     * 获取<p>Specify the host list (used when CWPScope=0)</p>
                     * @return InstanceIDsWithAppId <p>Specify the host list (used when CWPScope=0)</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>Specify the host list (used when CWPScope=0)</p>
                     * @param _instanceIDsWithAppId <p>Specify the host list (used when CWPScope=0)</p>
                     * 
                     */
                    void SetInstanceIDsWithAppId(const std::vector<InstanceIDWithAppIdItem>& _instanceIDsWithAppId);

                    /**
                     * 判断参数 InstanceIDsWithAppId 是否已赋值
                     * @return InstanceIDsWithAppId 是否已赋值
                     * 
                     */
                    bool InstanceIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Host exclusion list</p>
                     * @return ExcludeInstanceIDsWithAppId <p>Host exclusion list</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetExcludeInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>Host exclusion list</p>
                     * @param _excludeInstanceIDsWithAppId <p>Host exclusion list</p>
                     * 
                     */
                    void SetExcludeInstanceIDsWithAppId(const std::vector<InstanceIDWithAppIdItem>& _excludeInstanceIDsWithAppId);

                    /**
                     * 判断参数 ExcludeInstanceIDsWithAppId 是否已赋值
                     * @return ExcludeInstanceIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Tag ID list</p>
                     * @return TagIDs <p>Tag ID list</p>
                     * 
                     */
                    std::vector<std::string> GetTagIDs() const;

                    /**
                     * 设置<p>Tag ID list</p>
                     * @param _tagIDs <p>Tag ID list</p>
                     * 
                     */
                    void SetTagIDs(const std::vector<std::string>& _tagIDs);

                    /**
                     * 判断参数 TagIDs 是否已赋值
                     * @return TagIDs 是否已赋值
                     * 
                     */
                    bool TagIDsHasBeenSet() const;

                    /**
                     * 获取<p>Container scope: 0-within specified clusters 1-all clusters</p>
                     * @return TCSSScope <p>Container scope: 0-within specified clusters 1-all clusters</p>
                     * 
                     */
                    int64_t GetTCSSScope() const;

                    /**
                     * 设置<p>Container scope: 0-within specified clusters 1-all clusters</p>
                     * @param _tCSSScope <p>Container scope: 0-within specified clusters 1-all clusters</p>
                     * 
                     */
                    void SetTCSSScope(const int64_t& _tCSSScope);

                    /**
                     * 判断参数 TCSSScope 是否已赋值
                     * @return TCSSScope 是否已赋值
                     * 
                     */
                    bool TCSSScopeHasBeenSet() const;

                    /**
                     * 获取<p>Specify the cluster list (used when TCSSScope=0)</p>
                     * @return ClusterIDsWithAppId <p>Specify the cluster list (used when TCSSScope=0)</p>
                     * 
                     */
                    std::vector<ClusterIDWithAppIdItem> GetClusterIDsWithAppId() const;

                    /**
                     * 设置<p>Specify the cluster list (used when TCSSScope=0)</p>
                     * @param _clusterIDsWithAppId <p>Specify the cluster list (used when TCSSScope=0)</p>
                     * 
                     */
                    void SetClusterIDsWithAppId(const std::vector<ClusterIDWithAppIdItem>& _clusterIDsWithAppId);

                    /**
                     * 判断参数 ClusterIDsWithAppId 是否已赋值
                     * @return ClusterIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ClusterIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Cluster exclusion list</p>
                     * @return ExcludeClusterIDsWithAppId <p>Cluster exclusion list</p>
                     * 
                     */
                    std::vector<ClusterIDWithAppIdItem> GetExcludeClusterIDsWithAppId() const;

                    /**
                     * 设置<p>Cluster exclusion list</p>
                     * @param _excludeClusterIDsWithAppId <p>Cluster exclusion list</p>
                     * 
                     */
                    void SetExcludeClusterIDsWithAppId(const std::vector<ClusterIDWithAppIdItem>& _excludeClusterIDsWithAppId);

                    /**
                     * 判断参数 ExcludeClusterIDsWithAppId 是否已赋值
                     * @return ExcludeClusterIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ExcludeClusterIDsWithAppIdHasBeenSet() const;

                private:

                    /**
                     * <p>0: disable network attack detection; 1: enable network attack detection</p>
                     */
                    uint64_t m_netAttackEnable;
                    bool m_netAttackEnableHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>0: new warning events pending processing by default; 1: new warning events processed by default; 3: new warning events ignored by default</p>
                     */
                    uint64_t m_netAttackAlarmStatus;
                    bool m_netAttackAlarmStatusHasBeenSet;

                    /**
                     * <p>Automatic inclusion of new assets: 0 means not included, and 1 means included</p>
                     */
                    uint64_t m_autoInclude;
                    bool m_autoIncludeHasBeenSet;

                    /**
                     * <p>Host range: 0 - specify 1 - all 2 - Pro Edition 3 - Flagship Edition 4 - Pro + Flagship</p>
                     */
                    int64_t m_cWPScope;
                    bool m_cWPScopeHasBeenSet;

                    /**
                     * <p>Specify the host list (used when CWPScope=0)</p>
                     */
                    std::vector<InstanceIDWithAppIdItem> m_instanceIDsWithAppId;
                    bool m_instanceIDsWithAppIdHasBeenSet;

                    /**
                     * <p>Host exclusion list</p>
                     */
                    std::vector<InstanceIDWithAppIdItem> m_excludeInstanceIDsWithAppId;
                    bool m_excludeInstanceIDsWithAppIdHasBeenSet;

                    /**
                     * <p>Tag ID list</p>
                     */
                    std::vector<std::string> m_tagIDs;
                    bool m_tagIDsHasBeenSet;

                    /**
                     * <p>Container scope: 0-within specified clusters 1-all clusters</p>
                     */
                    int64_t m_tCSSScope;
                    bool m_tCSSScopeHasBeenSet;

                    /**
                     * <p>Specify the cluster list (used when TCSSScope=0)</p>
                     */
                    std::vector<ClusterIDWithAppIdItem> m_clusterIDsWithAppId;
                    bool m_clusterIDsWithAppIdHasBeenSet;

                    /**
                     * <p>Cluster exclusion list</p>
                     */
                    std::vector<ClusterIDWithAppIdItem> m_excludeClusterIDsWithAppId;
                    bool m_excludeClusterIDsWithAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNETATTACKSETTINGREQUEST_H_
