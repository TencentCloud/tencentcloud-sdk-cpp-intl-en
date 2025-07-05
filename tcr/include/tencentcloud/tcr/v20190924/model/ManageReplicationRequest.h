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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MANAGEREPLICATIONREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MANAGEREPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/ReplicationRule.h>
#include <tencentcloud/tcr/v20190924/model/PeerReplicationOption.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ManageReplication request structure.
                */
                class ManageReplicationRequest : public AbstractModel
                {
                public:
                    ManageReplicationRequest();
                    ~ManageReplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Source instance ID
                     * @return SourceRegistryId Source instance ID
                     * 
                     */
                    std::string GetSourceRegistryId() const;

                    /**
                     * 设置Source instance ID
                     * @param _sourceRegistryId Source instance ID
                     * 
                     */
                    void SetSourceRegistryId(const std::string& _sourceRegistryId);

                    /**
                     * 判断参数 SourceRegistryId 是否已赋值
                     * @return SourceRegistryId 是否已赋值
                     * 
                     */
                    bool SourceRegistryIdHasBeenSet() const;

                    /**
                     * 获取Destination instance ID
                     * @return DestinationRegistryId Destination instance ID
                     * 
                     */
                    std::string GetDestinationRegistryId() const;

                    /**
                     * 设置Destination instance ID
                     * @param _destinationRegistryId Destination instance ID
                     * 
                     */
                    void SetDestinationRegistryId(const std::string& _destinationRegistryId);

                    /**
                     * 判断参数 DestinationRegistryId 是否已赋值
                     * @return DestinationRegistryId 是否已赋值
                     * 
                     */
                    bool DestinationRegistryIdHasBeenSet() const;

                    /**
                     * 获取Synchronization rule
                     * @return Rule Synchronization rule
                     * 
                     */
                    ReplicationRule GetRule() const;

                    /**
                     * 设置Synchronization rule
                     * @param _rule Synchronization rule
                     * 
                     */
                    void SetRule(const ReplicationRule& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Rule description
                     * @return Description Rule description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule description
                     * @param _description Rule description
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
                     * 获取Region ID of the destination instance. For example, `1` represents Guangzhou
                     * @return DestinationRegionId Region ID of the destination instance. For example, `1` represents Guangzhou
                     * 
                     */
                    uint64_t GetDestinationRegionId() const;

                    /**
                     * 设置Region ID of the destination instance. For example, `1` represents Guangzhou
                     * @param _destinationRegionId Region ID of the destination instance. For example, `1` represents Guangzhou
                     * 
                     */
                    void SetDestinationRegionId(const uint64_t& _destinationRegionId);

                    /**
                     * 判断参数 DestinationRegionId 是否已赋值
                     * @return DestinationRegionId 是否已赋值
                     * 
                     */
                    bool DestinationRegionIdHasBeenSet() const;

                    /**
                     * 获取Configuration of the synchronization rule
                     * @return PeerReplicationOption Configuration of the synchronization rule
                     * 
                     */
                    PeerReplicationOption GetPeerReplicationOption() const;

                    /**
                     * 设置Configuration of the synchronization rule
                     * @param _peerReplicationOption Configuration of the synchronization rule
                     * 
                     */
                    void SetPeerReplicationOption(const PeerReplicationOption& _peerReplicationOption);

                    /**
                     * 判断参数 PeerReplicationOption 是否已赋值
                     * @return PeerReplicationOption 是否已赋值
                     * 
                     */
                    bool PeerReplicationOptionHasBeenSet() const;

                private:

                    /**
                     * Source instance ID
                     */
                    std::string m_sourceRegistryId;
                    bool m_sourceRegistryIdHasBeenSet;

                    /**
                     * Destination instance ID
                     */
                    std::string m_destinationRegistryId;
                    bool m_destinationRegistryIdHasBeenSet;

                    /**
                     * Synchronization rule
                     */
                    ReplicationRule m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Rule description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Region ID of the destination instance. For example, `1` represents Guangzhou
                     */
                    uint64_t m_destinationRegionId;
                    bool m_destinationRegionIdHasBeenSet;

                    /**
                     * Configuration of the synchronization rule
                     */
                    PeerReplicationOption m_peerReplicationOption;
                    bool m_peerReplicationOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MANAGEREPLICATIONREQUEST_H_
