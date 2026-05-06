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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_NATIVEGATEWAYSERVERGROUP_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_NATIVEGATEWAYSERVERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayNodeConfig.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategy.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Cloud-Native Gateway Group Information
                */
                class NativeGatewayServerGroup : public AbstractModel
                {
                public:
                    NativeGatewayServerGroup();
                    ~NativeGatewayServerGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud-Native Gateway Group Unique id
                     * @return GroupId Cloud-Native Gateway Group Unique id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Cloud-Native Gateway Group Unique id
                     * @param _groupId Cloud-Native Gateway Group Unique id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Group name
                     * @return Name Group name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Group name
                     * @param _name Group name
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
                     * 获取Description information
                     * @return Description Description information
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description information
                     * @param _description Description information
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
                     * 获取Node specification, number of nodes info
                     * @return NodeConfig Node specification, number of nodes info
                     * 
                     */
                    CloudNativeAPIGatewayNodeConfig GetNodeConfig() const;

                    /**
                     * 设置Node specification, number of nodes info
                     * @param _nodeConfig Node specification, number of nodes info
                     * 
                     */
                    void SetNodeConfig(const CloudNativeAPIGatewayNodeConfig& _nodeConfig);

                    /**
                     * 判断参数 NodeConfig 是否已赋值
                     * @return NodeConfig 是否已赋值
                     * 
                     */
                    bool NodeConfigHasBeenSet() const;

                    /**
                     * 获取Gateway group status.
                     * @return Status Gateway group status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Gateway group status.
                     * @param _status Gateway group status.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Whether it is the default group.
0: No.
1: Yes.
                     * @return IsFirstGroup Whether it is the default group.
0: No.
1: Yes.
                     * 
                     */
                    int64_t GetIsFirstGroup() const;

                    /**
                     * 设置Whether it is the default group.
0: No.
1: Yes.
                     * @param _isFirstGroup Whether it is the default group.
0: No.
1: Yes.
                     * 
                     */
                    void SetIsFirstGroup(const int64_t& _isFirstGroup);

                    /**
                     * 判断参数 IsFirstGroup 是否已赋值
                     * @return IsFirstGroup 是否已赋值
                     * 
                     */
                    bool IsFirstGroupHasBeenSet() const;

                    /**
                     * 获取Associate policy information
                     * @return BindingStrategy Associate policy information
                     * 
                     */
                    CloudNativeAPIGatewayStrategy GetBindingStrategy() const;

                    /**
                     * 设置Associate policy information
                     * @param _bindingStrategy Associate policy information
                     * 
                     */
                    void SetBindingStrategy(const CloudNativeAPIGatewayStrategy& _bindingStrategy);

                    /**
                     * 判断参数 BindingStrategy 是否已赋值
                     * @return BindingStrategy 是否已赋值
                     * 
                     */
                    bool BindingStrategyHasBeenSet() const;

                    /**
                     * 获取Gateway instance ID.
                     * @return GatewayId Gateway instance ID.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway instance ID.
                     * @param _gatewayId Gateway instance ID.
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Bandwidth
                     * @return InternetMaxBandwidthOut Bandwidth
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Bandwidth
                     * @param _internetMaxBandwidthOut Bandwidth
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Modification time.
                     * @return ModifyTime Modification time.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time.
                     * @param _modifyTime Modification time.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Subnet ID
                     * @return SubnetIds Subnet ID
                     * 
                     */
                    std::string GetSubnetIds() const;

                    /**
                     * 设置Subnet ID
                     * @param _subnetIds Subnet ID
                     * 
                     */
                    void SetSubnetIds(const std::string& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Default weight of the group
                     * @return DefaultWeight Default weight of the group
                     * 
                     */
                    int64_t GetDefaultWeight() const;

                    /**
                     * 设置Default weight of the group
                     * @param _defaultWeight Default weight of the group
                     * 
                     */
                    void SetDefaultWeight(const int64_t& _defaultWeight);

                    /**
                     * 判断参数 DefaultWeight 是否已赋值
                     * @return DefaultWeight 是否已赋值
                     * 
                     */
                    bool DefaultWeightHasBeenSet() const;

                    /**
                     * 获取elastic node
                     * @return ElasticNumber elastic node
                     * 
                     */
                    uint64_t GetElasticNumber() const;

                    /**
                     * 设置elastic node
                     * @param _elasticNumber elastic node
                     * 
                     */
                    void SetElasticNumber(const uint64_t& _elasticNumber);

                    /**
                     * 判断参数 ElasticNumber 是否已赋值
                     * @return ElasticNumber 是否已赋值
                     * 
                     */
                    bool ElasticNumberHasBeenSet() const;

                    /**
                     * 获取Whether TOA is supported
                     * @return SupportTOA Whether TOA is supported
                     * 
                     */
                    bool GetSupportTOA() const;

                    /**
                     * 设置Whether TOA is supported
                     * @param _supportTOA Whether TOA is supported
                     * 
                     */
                    void SetSupportTOA(const bool& _supportTOA);

                    /**
                     * 判断参数 SupportTOA 是否已赋值
                     * @return SupportTOA 是否已赋值
                     * 
                     */
                    bool SupportTOAHasBeenSet() const;

                    /**
                     * 获取Whether IPV6 is supported
                     * @return SupportIPV6 Whether IPV6 is supported
                     * 
                     */
                    bool GetSupportIPV6() const;

                    /**
                     * 设置Whether IPV6 is supported
                     * @param _supportIPV6 Whether IPV6 is supported
                     * 
                     */
                    void SetSupportIPV6(const bool& _supportIPV6);

                    /**
                     * 判断参数 SupportIPV6 是否已赋值
                     * @return SupportIPV6 是否已赋值
                     * 
                     */
                    bool SupportIPV6HasBeenSet() const;

                private:

                    /**
                     * Cloud-Native Gateway Group Unique id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Group name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description information
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Node specification, number of nodes info
                     */
                    CloudNativeAPIGatewayNodeConfig m_nodeConfig;
                    bool m_nodeConfigHasBeenSet;

                    /**
                     * Gateway group status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether it is the default group.
0: No.
1: Yes.
                     */
                    int64_t m_isFirstGroup;
                    bool m_isFirstGroupHasBeenSet;

                    /**
                     * Associate policy information
                     */
                    CloudNativeAPIGatewayStrategy m_bindingStrategy;
                    bool m_bindingStrategyHasBeenSet;

                    /**
                     * Gateway instance ID.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Bandwidth
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Modification time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Subnet ID
                     */
                    std::string m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Default weight of the group
                     */
                    int64_t m_defaultWeight;
                    bool m_defaultWeightHasBeenSet;

                    /**
                     * elastic node
                     */
                    uint64_t m_elasticNumber;
                    bool m_elasticNumberHasBeenSet;

                    /**
                     * Whether TOA is supported
                     */
                    bool m_supportTOA;
                    bool m_supportTOAHasBeenSet;

                    /**
                     * Whether IPV6 is supported
                     */
                    bool m_supportIPV6;
                    bool m_supportIPV6HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_NATIVEGATEWAYSERVERGROUP_H_
