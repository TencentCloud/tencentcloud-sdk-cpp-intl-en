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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAGENTCONFIGSETTINGRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAGENTCONFIGSETTINGRESPONSE_H_

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
                * DescribeAgentConfigSetting response structure.
                */
                class DescribeAgentConfigSettingResponse : public AbstractModel
                {
                public:
                    DescribeAgentConfigSettingResponse();
                    ~DescribeAgentConfigSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Enhancement log mode switch. 0: turn off; 1: turn on (empty if not configured)</p>
                     * @return EnhanceLogMode <p>Enhancement log mode switch. 0: turn off; 1: turn on (empty if not configured)</p>
                     * 
                     */
                    uint64_t GetEnhanceLogMode() const;

                    /**
                     * 判断参数 EnhanceLogMode 是否已赋值
                     * @return EnhanceLogMode 是否已赋值
                     * 
                     */
                    bool EnhanceLogModeHasBeenSet() const;

                    /**
                     * 获取<p>Malware POC mode switch. 0: Turn off. 1: Turn on. (Empty if not configured)</p>
                     * @return MalwarePocMode <p>Malware POC mode switch. 0: Turn off. 1: Turn on. (Empty if not configured)</p>
                     * 
                     */
                    uint64_t GetMalwarePocMode() const;

                    /**
                     * 判断参数 MalwarePocMode 是否已赋值
                     * @return MalwarePocMode 是否已赋值
                     * 
                     */
                    bool MalwarePocModeHasBeenSet() const;

                    /**
                     * 获取<p>Report source port switch (compatible with old versions). 0: off, 1: on</p>
                     * @return ReportSourcePort <p>Report source port switch (compatible with old versions). 0: off, 1: on</p>
                     * 
                     */
                    uint64_t GetReportSourcePort() const;

                    /**
                     * 判断参数 ReportSourcePort 是否已赋值
                     * @return ReportSourcePort 是否已赋值
                     * 
                     */
                    bool ReportSourcePortHasBeenSet() const;

                    /**
                     * 获取<p>List of enabled log collection types, for example, tcp_ingress, tcp_src_port, http_egress, http_ingress, app_access</p>
                     * @return LogCollectSettings <p>List of enabled log collection types, for example, tcp_ingress, tcp_src_port, http_egress, http_ingress, app_access</p>
                     * 
                     */
                    std::vector<std::string> GetLogCollectSettings() const;

                    /**
                     * 判断参数 LogCollectSettings 是否已赋值
                     * @return LogCollectSettings 是否已赋值
                     * 
                     */
                    bool LogCollectSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Asset selection method: all/tag/direct</p>
                     * @return AssetSelectionType <p>Asset selection method: all/tag/direct</p>
                     * 
                     */
                    std::string GetAssetSelectionType() const;

                    /**
                     * 判断参数 AssetSelectionType 是否已赋值
                     * @return AssetSelectionType 是否已赋值
                     * 
                     */
                    bool AssetSelectionTypeHasBeenSet() const;

                    /**
                     * 获取<p>Tag ID array used when selecting by tag</p>
                     * @return TagIds <p>Tag ID array used when selecting by tag</p>
                     * 
                     */
                    std::vector<std::string> GetTagIds() const;

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                    /**
                     * 获取<p>direct selection of the host instance_id list</p>
                     * @return InstanceIDs <p>direct selection of the host instance_id list</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIDs() const;

                    /**
                     * 判断参数 InstanceIDs 是否已赋值
                     * @return InstanceIDs 是否已赋值
                     * 
                     */
                    bool InstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>Exclusion instance_id list of the host</p>
                     * @return ExcludeInstanceIDs <p>Exclusion instance_id list of the host</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIDs() const;

                    /**
                     * 判断参数 ExcludeInstanceIDs 是否已赋值
                     * @return ExcludeInstanceIDs 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsHasBeenSet() const;

                private:

                    /**
                     * <p>Enhancement log mode switch. 0: turn off; 1: turn on (empty if not configured)</p>
                     */
                    uint64_t m_enhanceLogMode;
                    bool m_enhanceLogModeHasBeenSet;

                    /**
                     * <p>Malware POC mode switch. 0: Turn off. 1: Turn on. (Empty if not configured)</p>
                     */
                    uint64_t m_malwarePocMode;
                    bool m_malwarePocModeHasBeenSet;

                    /**
                     * <p>Report source port switch (compatible with old versions). 0: off, 1: on</p>
                     */
                    uint64_t m_reportSourcePort;
                    bool m_reportSourcePortHasBeenSet;

                    /**
                     * <p>List of enabled log collection types, for example, tcp_ingress, tcp_src_port, http_egress, http_ingress, app_access</p>
                     */
                    std::vector<std::string> m_logCollectSettings;
                    bool m_logCollectSettingsHasBeenSet;

                    /**
                     * <p>Asset selection method: all/tag/direct</p>
                     */
                    std::string m_assetSelectionType;
                    bool m_assetSelectionTypeHasBeenSet;

                    /**
                     * <p>Tag ID array used when selecting by tag</p>
                     */
                    std::vector<std::string> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * <p>direct selection of the host instance_id list</p>
                     */
                    std::vector<std::string> m_instanceIDs;
                    bool m_instanceIDsHasBeenSet;

                    /**
                     * <p>Exclusion instance_id list of the host</p>
                     */
                    std::vector<std::string> m_excludeInstanceIDs;
                    bool m_excludeInstanceIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAGENTCONFIGSETTINGRESPONSE_H_
