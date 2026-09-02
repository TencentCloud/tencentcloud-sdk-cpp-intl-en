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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTCONFIGSETTINGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTCONFIGSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyAgentConfigSetting request structure.
                */
                class ModifyAgentConfigSettingRequest : public AbstractModel
                {
                public:
                    ModifyAgentConfigSettingRequest();
                    ~ModifyAgentConfigSettingRequest() = default;
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
                     * 获取<p>List of log collection types. Available values: tcp_src_port/tcp_ingress/http_egress/http_ingress/app_access</p>
                     * @return LogCollectSettings <p>List of log collection types. Available values: tcp_src_port/tcp_ingress/http_egress/http_ingress/app_access</p>
                     * 
                     */
                    std::vector<std::string> GetLogCollectSettings() const;

                    /**
                     * 设置<p>List of log collection types. Available values: tcp_src_port/tcp_ingress/http_egress/http_ingress/app_access</p>
                     * @param _logCollectSettings <p>List of log collection types. Available values: tcp_src_port/tcp_ingress/http_egress/http_ingress/app_access</p>
                     * 
                     */
                    void SetLogCollectSettings(const std::vector<std::string>& _logCollectSettings);

                    /**
                     * 判断参数 LogCollectSettings 是否已赋值
                     * @return LogCollectSettings 是否已赋值
                     * 
                     */
                    bool LogCollectSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Asset selection method: all - all paid assets, tag - select by tag, direct - direct selection</p>
                     * @return AssetSelectionType <p>Asset selection method: all - all paid assets, tag - select by tag, direct - direct selection</p>
                     * 
                     */
                    std::string GetAssetSelectionType() const;

                    /**
                     * 设置<p>Asset selection method: all - all paid assets, tag - select by tag, direct - direct selection</p>
                     * @param _assetSelectionType <p>Asset selection method: all - all paid assets, tag - select by tag, direct - direct selection</p>
                     * 
                     */
                    void SetAssetSelectionType(const std::string& _assetSelectionType);

                    /**
                     * 判断参数 AssetSelectionType 是否已赋值
                     * @return AssetSelectionType 是否已赋值
                     * 
                     */
                    bool AssetSelectionTypeHasBeenSet() const;

                    /**
                     * 获取<p>Tag ID array used when selecting by tag (used when AssetSelectionType=tag)</p>
                     * @return TagIds <p>Tag ID array used when selecting by tag (used when AssetSelectionType=tag)</p>
                     * 
                     */
                    std::vector<std::string> GetTagIds() const;

                    /**
                     * 设置<p>Tag ID array used when selecting by tag (used when AssetSelectionType=tag)</p>
                     * @param _tagIds <p>Tag ID array used when selecting by tag (used when AssetSelectionType=tag)</p>
                     * 
                     */
                    void SetTagIds(const std::vector<std::string>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                    /**
                     * 获取<p>direct selection of the host instance_id list (used when AssetSelectionType=direct)</p>
                     * @return InstanceIDs <p>direct selection of the host instance_id list (used when AssetSelectionType=direct)</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIDs() const;

                    /**
                     * 设置<p>direct selection of the host instance_id list (used when AssetSelectionType=direct)</p>
                     * @param _instanceIDs <p>direct selection of the host instance_id list (used when AssetSelectionType=direct)</p>
                     * 
                     */
                    void SetInstanceIDs(const std::vector<std::string>& _instanceIDs);

                    /**
                     * 判断参数 InstanceIDs 是否已赋值
                     * @return InstanceIDs 是否已赋值
                     * 
                     */
                    bool InstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>Exclusion instance_id list of the host (used when AssetSelectionType=all)</p>
                     * @return ExcludeInstanceIDs <p>Exclusion instance_id list of the host (used when AssetSelectionType=all)</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIDs() const;

                    /**
                     * 设置<p>Exclusion instance_id list of the host (used when AssetSelectionType=all)</p>
                     * @param _excludeInstanceIDs <p>Exclusion instance_id list of the host (used when AssetSelectionType=all)</p>
                     * 
                     */
                    void SetExcludeInstanceIDs(const std::vector<std::string>& _excludeInstanceIDs);

                    /**
                     * 判断参数 ExcludeInstanceIDs 是否已赋值
                     * @return ExcludeInstanceIDs 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>List of log collection types. Available values: tcp_src_port/tcp_ingress/http_egress/http_ingress/app_access</p>
                     */
                    std::vector<std::string> m_logCollectSettings;
                    bool m_logCollectSettingsHasBeenSet;

                    /**
                     * <p>Asset selection method: all - all paid assets, tag - select by tag, direct - direct selection</p>
                     */
                    std::string m_assetSelectionType;
                    bool m_assetSelectionTypeHasBeenSet;

                    /**
                     * <p>Tag ID array used when selecting by tag (used when AssetSelectionType=tag)</p>
                     */
                    std::vector<std::string> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * <p>direct selection of the host instance_id list (used when AssetSelectionType=direct)</p>
                     */
                    std::vector<std::string> m_instanceIDs;
                    bool m_instanceIDsHasBeenSet;

                    /**
                     * <p>Exclusion instance_id list of the host (used when AssetSelectionType=all)</p>
                     */
                    std::vector<std::string> m_excludeInstanceIDs;
                    bool m_excludeInstanceIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTCONFIGSETTINGREQUEST_H_
