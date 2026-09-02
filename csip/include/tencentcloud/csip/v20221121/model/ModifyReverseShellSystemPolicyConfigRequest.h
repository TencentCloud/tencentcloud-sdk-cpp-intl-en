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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYREVERSESHELLSYSTEMPOLICYCONFIGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYREVERSESHELLSYSTEMPOLICYCONFIGREQUEST_H_

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
                * ModifyReverseShellSystemPolicyConfig request structure.
                */
                class ModifyReverseShellSystemPolicyConfigRequest : public AbstractModel
                {
                public:
                    ModifyReverseShellSystemPolicyConfigRequest();
                    ~ModifyReverseShellSystemPolicyConfigRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>Intranet alert display</p>
                     * @return InnerNetAlarmShow <p>Intranet alert display</p>
                     * 
                     */
                    bool GetInnerNetAlarmShow() const;

                    /**
                     * 设置<p>Intranet alert display</p>
                     * @param _innerNetAlarmShow <p>Intranet alert display</p>
                     * 
                     */
                    void SetInnerNetAlarmShow(const bool& _innerNetAlarmShow);

                    /**
                     * 判断参数 InnerNetAlarmShow 是否已赋值
                     * @return InnerNetAlarmShow 是否已赋值
                     * 
                     */
                    bool InnerNetAlarmShowHasBeenSet() const;

                    /**
                     * 获取<p>Display internal ip</p>
                     * @return InnerIPShow <p>Display internal ip</p>
                     * 
                     */
                    bool GetInnerIPShow() const;

                    /**
                     * 设置<p>Display internal ip</p>
                     * @param _innerIPShow <p>Display internal ip</p>
                     * 
                     */
                    void SetInnerIPShow(const bool& _innerIPShow);

                    /**
                     * 判断参数 InnerIPShow 是否已赋值
                     * @return InnerIPShow 是否已赋值
                     * 
                     */
                    bool InnerIPShowHasBeenSet() const;

                    /**
                     * 获取<p>Host range: 0-Specified 1-All 2-Professional Edition 3-Flagship Edition 4-Professional + Flagship</p>
                     * @return CWPScope <p>Host range: 0-Specified 1-All 2-Professional Edition 3-Flagship Edition 4-Professional + Flagship</p>
                     * 
                     */
                    int64_t GetCWPScope() const;

                    /**
                     * 设置<p>Host range: 0-Specified 1-All 2-Professional Edition 3-Flagship Edition 4-Professional + Flagship</p>
                     * @param _cWPScope <p>Host range: 0-Specified 1-All 2-Professional Edition 3-Flagship Edition 4-Professional + Flagship</p>
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
                     * 获取<p>Specified host list (used when CWPScope=0)</p>
                     * @return InstanceIDsWithAppId <p>Specified host list (used when CWPScope=0)</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>Specified host list (used when CWPScope=0)</p>
                     * @param _instanceIDsWithAppId <p>Specified host list (used when CWPScope=0)</p>
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
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Intranet alert display</p>
                     */
                    bool m_innerNetAlarmShow;
                    bool m_innerNetAlarmShowHasBeenSet;

                    /**
                     * <p>Display internal ip</p>
                     */
                    bool m_innerIPShow;
                    bool m_innerIPShowHasBeenSet;

                    /**
                     * <p>Host range: 0-Specified 1-All 2-Professional Edition 3-Flagship Edition 4-Professional + Flagship</p>
                     */
                    int64_t m_cWPScope;
                    bool m_cWPScopeHasBeenSet;

                    /**
                     * <p>Specified host list (used when CWPScope=0)</p>
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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYREVERSESHELLSYSTEMPOLICYCONFIGREQUEST_H_
