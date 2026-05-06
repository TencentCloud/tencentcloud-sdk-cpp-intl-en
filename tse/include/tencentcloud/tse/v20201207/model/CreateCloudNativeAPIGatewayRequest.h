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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayNodeConfig.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayVpcConfig.h>
#include <tencentcloud/tse/v20201207/model/InstanceTagInfo.h>
#include <tencentcloud/tse/v20201207/model/InternetConfig.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateCloudNativeAPIGateway request structure.
                */
                class CreateCloudNativeAPIGatewayRequest : public AbstractModel
                {
                public:
                    CreateCloudNativeAPIGatewayRequest();
                    ~CreateCloudNativeAPIGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud native API gateway name supports up to 60 characters.
                     * @return Name Cloud native API gateway name supports up to 60 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Cloud native API gateway name supports up to 60 characters.
                     * @param _name Cloud native API gateway name supports up to 60 characters.
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
                     * 获取Cloud native API gateway type, currently only support kong.
                     * @return Type Cloud native API gateway type, currently only support kong.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Cloud native API gateway type, currently only support kong.
                     * @param _type Cloud native API gateway type, currently only support kong.
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
                     * 获取Cloud Native API gateway version. Reference value:
- 2.4.1
- 2.5.1
                     * @return GatewayVersion Cloud Native API gateway version. Reference value:
- 2.4.1
- 2.5.1
                     * 
                     */
                    std::string GetGatewayVersion() const;

                    /**
                     * 设置Cloud Native API gateway version. Reference value:
- 2.4.1
- 2.5.1
                     * @param _gatewayVersion Cloud Native API gateway version. Reference value:
- 2.4.1
- 2.5.1
                     * 
                     */
                    void SetGatewayVersion(const std::string& _gatewayVersion);

                    /**
                     * 判断参数 GatewayVersion 是否已赋值
                     * @return GatewayVersion 是否已赋值
                     * 
                     */
                    bool GatewayVersionHasBeenSet() const;

                    /**
                     * 获取Cloud Native API gateway node configuration.
                     * @return NodeConfig Cloud Native API gateway node configuration.
                     * 
                     */
                    CloudNativeAPIGatewayNodeConfig GetNodeConfig() const;

                    /**
                     * 设置Cloud Native API gateway node configuration.
                     * @param _nodeConfig Cloud Native API gateway node configuration.
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
                     * 获取Cloud native API gateway vpc configuration.
                     * @return VpcConfig Cloud native API gateway vpc configuration.
                     * 
                     */
                    CloudNativeAPIGatewayVpcConfig GetVpcConfig() const;

                    /**
                     * 设置Cloud native API gateway vpc configuration.
                     * @param _vpcConfig Cloud native API gateway vpc configuration.
                     * 
                     */
                    void SetVpcConfig(const CloudNativeAPIGatewayVpcConfig& _vpcConfig);

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     * 
                     */
                    bool VpcConfigHasBeenSet() const;

                    /**
                     * 获取Cloud native API gateway description supports up to 120 characters.
                     * @return Description Cloud native API gateway description supports up to 120 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Cloud native API gateway description supports up to 120 characters.
                     * @param _description Cloud native API gateway description supports up to 120 characters.
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
                     * 获取Tag list
                     * @return Tags Tag list
                     * 
                     */
                    std::vector<InstanceTagInfo> GetTags() const;

                    /**
                     * 设置Tag list
                     * @param _tags Tag list
                     * 
                     */
                    void SetTags(const std::vector<InstanceTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether CLS log is enabled. Default value: false.
                     * @return EnableCls Whether CLS log is enabled. Default value: false.
                     * 
                     */
                    bool GetEnableCls() const;

                    /**
                     * 设置Whether CLS log is enabled. Default value: false.
                     * @param _enableCls Whether CLS log is enabled. Default value: false.
                     * 
                     */
                    void SetEnableCls(const bool& _enableCls);

                    /**
                     * 判断参数 EnableCls 是否已赋值
                     * @return EnableCls 是否已赋值
                     * 
                     */
                    bool EnableClsHasBeenSet() const;

                    /**
                     * 获取Product version. Reference value:
-TRIAL: Development edition
-STANDARD: Standard version (default value)
-PROFESSIONAL: Pro Edition
                     * @return FeatureVersion Product version. Reference value:
-TRIAL: Development edition
-STANDARD: Standard version (default value)
-PROFESSIONAL: Pro Edition
                     * 
                     */
                    std::string GetFeatureVersion() const;

                    /**
                     * 设置Product version. Reference value:
-TRIAL: Development edition
-STANDARD: Standard version (default value)
-PROFESSIONAL: Pro Edition
                     * @param _featureVersion Product version. Reference value:
-TRIAL: Development edition
-STANDARD: Standard version (default value)
-PROFESSIONAL: Pro Edition
                     * 
                     */
                    void SetFeatureVersion(const std::string& _featureVersion);

                    /**
                     * 判断参数 FeatureVersion 是否已赋值
                     * @return FeatureVersion 是否已赋值
                     * 
                     */
                    bool FeatureVersionHasBeenSet() const;

                    /**
                     * 获取Public network outbound traffic bandwidth, [1,2048]Mbps
                     * @return InternetMaxBandwidthOut Public network outbound traffic bandwidth, [1,2048]Mbps
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Public network outbound traffic bandwidth, [1,2048]Mbps
                     * @param _internetMaxBandwidthOut Public network outbound traffic bandwidth, [1,2048]Mbps
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Actual region information of the instance. Default value: ap-guangzhou.
                     * @return EngineRegion Actual region information of the instance. Default value: ap-guangzhou.
                     * 
                     */
                    std::string GetEngineRegion() const;

                    /**
                     * 设置Actual region information of the instance. Default value: ap-guangzhou.
                     * @param _engineRegion Actual region information of the instance. Default value: ap-guangzhou.
                     * 
                     */
                    void SetEngineRegion(const std::string& _engineRegion);

                    /**
                     * 判断参数 EngineRegion 是否已赋值
                     * @return EngineRegion 是否已赋值
                     * 
                     */
                    bool EngineRegionHasBeenSet() const;

                    /**
                     * 获取ingress Class name
                     * @return IngressClassName ingress Class name
                     * 
                     */
                    std::string GetIngressClassName() const;

                    /**
                     * 设置ingress Class name
                     * @param _ingressClassName ingress Class name
                     * 
                     */
                    void SetIngressClassName(const std::string& _ingressClassName);

                    /**
                     * 判断参数 IngressClassName 是否已赋值
                     * @return IngressClassName 是否已赋值
                     * 
                     */
                    bool IngressClassNameHasBeenSet() const;

                    /**
                     * 获取Payment type. Reference value:
0: Postpaid (default value)
1: Prepayment (The API does not currently support creating prepaid instances)
                     * @return TradeType Payment type. Reference value:
0: Postpaid (default value)
1: Prepayment (The API does not currently support creating prepaid instances)
                     * 
                     */
                    int64_t GetTradeType() const;

                    /**
                     * 设置Payment type. Reference value:
0: Postpaid (default value)
1: Prepayment (The API does not currently support creating prepaid instances)
                     * @param _tradeType Payment type. Reference value:
0: Postpaid (default value)
1: Prepayment (The API does not currently support creating prepaid instances)
                     * 
                     */
                    void SetTradeType(const int64_t& _tradeType);

                    /**
                     * 判断参数 TradeType 是否已赋值
                     * @return TradeType 是否已赋值
                     * 
                     */
                    bool TradeTypeHasBeenSet() const;

                    /**
                     * 获取Public network configuration
                     * @return InternetConfig Public network configuration
                     * 
                     */
                    InternetConfig GetInternetConfig() const;

                    /**
                     * 设置Public network configuration
                     * @param _internetConfig Public network configuration
                     * 
                     */
                    void SetInternetConfig(const InternetConfig& _internetConfig);

                    /**
                     * 判断参数 InternetConfig 是否已赋值
                     * @return InternetConfig 是否已赋值
                     * 
                     */
                    bool InternetConfigHasBeenSet() const;

                    /**
                     * 获取Associated prometheus ID
                     * @return PromId Associated prometheus ID
                     * 
                     */
                    std::string GetPromId() const;

                    /**
                     * 设置Associated prometheus ID
                     * @param _promId Associated prometheus ID
                     * 
                     */
                    void SetPromId(const std::string& _promId);

                    /**
                     * 判断参数 PromId 是否已赋值
                     * @return PromId 是否已赋值
                     * 
                     */
                    bool PromIdHasBeenSet() const;

                private:

                    /**
                     * Cloud native API gateway name supports up to 60 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Cloud native API gateway type, currently only support kong.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Cloud Native API gateway version. Reference value:
- 2.4.1
- 2.5.1
                     */
                    std::string m_gatewayVersion;
                    bool m_gatewayVersionHasBeenSet;

                    /**
                     * Cloud Native API gateway node configuration.
                     */
                    CloudNativeAPIGatewayNodeConfig m_nodeConfig;
                    bool m_nodeConfigHasBeenSet;

                    /**
                     * Cloud native API gateway vpc configuration.
                     */
                    CloudNativeAPIGatewayVpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * Cloud native API gateway description supports up to 120 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Tag list
                     */
                    std::vector<InstanceTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether CLS log is enabled. Default value: false.
                     */
                    bool m_enableCls;
                    bool m_enableClsHasBeenSet;

                    /**
                     * Product version. Reference value:
-TRIAL: Development edition
-STANDARD: Standard version (default value)
-PROFESSIONAL: Pro Edition
                     */
                    std::string m_featureVersion;
                    bool m_featureVersionHasBeenSet;

                    /**
                     * Public network outbound traffic bandwidth, [1,2048]Mbps
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Actual region information of the instance. Default value: ap-guangzhou.
                     */
                    std::string m_engineRegion;
                    bool m_engineRegionHasBeenSet;

                    /**
                     * ingress Class name
                     */
                    std::string m_ingressClassName;
                    bool m_ingressClassNameHasBeenSet;

                    /**
                     * Payment type. Reference value:
0: Postpaid (default value)
1: Prepayment (The API does not currently support creating prepaid instances)
                     */
                    int64_t m_tradeType;
                    bool m_tradeTypeHasBeenSet;

                    /**
                     * Public network configuration
                     */
                    InternetConfig m_internetConfig;
                    bool m_internetConfigHasBeenSet;

                    /**
                     * Associated prometheus ID
                     */
                    std::string m_promId;
                    bool m_promIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYREQUEST_H_
