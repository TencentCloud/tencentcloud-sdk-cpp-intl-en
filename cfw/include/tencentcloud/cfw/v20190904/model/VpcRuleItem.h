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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_VPCRULEITEM_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_VPCRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/BetaInfoByACL.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 
                */
                class VpcRuleItem : public AbstractModel
                {
                public:
                    VpcRuleItem();
                    ~VpcRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return SourceContent 
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置
                     * @param _sourceContent 
                     * 
                     */
                    void SetSourceContent(const std::string& _sourceContent);

                    /**
                     * 判断参数 SourceContent 是否已赋值
                     * @return SourceContent 是否已赋值
                     * 
                     */
                    bool SourceContentHasBeenSet() const;

                    /**
                     * 获取
                     * @return SourceType 
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置
                     * @param _sourceType 
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return DestContent 
                     * 
                     */
                    std::string GetDestContent() const;

                    /**
                     * 设置
                     * @param _destContent 
                     * 
                     */
                    void SetDestContent(const std::string& _destContent);

                    /**
                     * 判断参数 DestContent 是否已赋值
                     * @return DestContent 是否已赋值
                     * 
                     */
                    bool DestContentHasBeenSet() const;

                    /**
                     * 获取
                     * @return DestType 
                     * 
                     */
                    std::string GetDestType() const;

                    /**
                     * 设置
                     * @param _destType 
                     * 
                     */
                    void SetDestType(const std::string& _destType);

                    /**
                     * 判断参数 DestType 是否已赋值
                     * @return DestType 是否已赋值
                     * 
                     */
                    bool DestTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Protocol 
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置
                     * @param _protocol 
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取
                     * @return RuleAction 
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置
                     * @param _ruleAction 
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取
                     * @return Port 
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置
                     * @param _port 
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取
                     * @return Description 
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置
                     * @param _description 
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
                     * 获取
                     * @return OrderIndex 
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置
                     * @param _orderIndex 
                     * 
                     */
                    void SetOrderIndex(const int64_t& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     * 
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取
                     * @return Enable 
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置
                     * @param _enable 
                     * 
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取
                     * @return EdgeId 
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置
                     * @param _edgeId 
                     * 
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     * 
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return Uuid 
                     * 
                     */
                    int64_t GetUuid() const;

                    /**
                     * 设置
                     * @param _uuid 
                     * 
                     */
                    void SetUuid(const int64_t& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取
                     * @return DetectedTimes 
                     * 
                     */
                    int64_t GetDetectedTimes() const;

                    /**
                     * 设置
                     * @param _detectedTimes 
                     * 
                     */
                    void SetDetectedTimes(const int64_t& _detectedTimes);

                    /**
                     * 判断参数 DetectedTimes 是否已赋值
                     * @return DetectedTimes 是否已赋值
                     * 
                     */
                    bool DetectedTimesHasBeenSet() const;

                    /**
                     * 获取
                     * @return EdgeName 
                     * 
                     */
                    std::string GetEdgeName() const;

                    /**
                     * 设置
                     * @param _edgeName 
                     * 
                     */
                    void SetEdgeName(const std::string& _edgeName);

                    /**
                     * 判断参数 EdgeName 是否已赋值
                     * @return EdgeName 是否已赋值
                     * 
                     */
                    bool EdgeNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return InternalUuid 
                     * 
                     */
                    int64_t GetInternalUuid() const;

                    /**
                     * 设置
                     * @param _internalUuid 
                     * 
                     */
                    void SetInternalUuid(const int64_t& _internalUuid);

                    /**
                     * 判断参数 InternalUuid 是否已赋值
                     * @return InternalUuid 是否已赋值
                     * 
                     */
                    bool InternalUuidHasBeenSet() const;

                    /**
                     * 获取
                     * @return Deleted 
                     * 
                     */
                    int64_t GetDeleted() const;

                    /**
                     * 设置
                     * @param _deleted 
                     * 
                     */
                    void SetDeleted(const int64_t& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                    /**
                     * 获取
                     * @return FwGroupId 
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置
                     * @param _fwGroupId 
                     * 
                     */
                    void SetFwGroupId(const std::string& _fwGroupId);

                    /**
                     * 判断参数 FwGroupId 是否已赋值
                     * @return FwGroupId 是否已赋值
                     * 
                     */
                    bool FwGroupIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return FwGroupName 
                     * 
                     */
                    std::string GetFwGroupName() const;

                    /**
                     * 设置
                     * @param _fwGroupName 
                     * 
                     */
                    void SetFwGroupName(const std::string& _fwGroupName);

                    /**
                     * 判断参数 FwGroupName 是否已赋值
                     * @return FwGroupName 是否已赋值
                     * 
                     */
                    bool FwGroupNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return BetaList 
                     * 
                     */
                    std::vector<BetaInfoByACL> GetBetaList() const;

                    /**
                     * 设置
                     * @param _betaList 
                     * 
                     */
                    void SetBetaList(const std::vector<BetaInfoByACL>& _betaList);

                    /**
                     * 判断参数 BetaList 是否已赋值
                     * @return BetaList 是否已赋值
                     * 
                     */
                    bool BetaListHasBeenSet() const;

                    /**
                     * 获取
                     * @return ParamTemplateId 
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置
                     * @param _paramTemplateId 
                     * 
                     */
                    void SetParamTemplateId(const std::string& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ParamTemplateName 
                     * 
                     */
                    std::string GetParamTemplateName() const;

                    /**
                     * 设置
                     * @param _paramTemplateName 
                     * 
                     */
                    void SetParamTemplateName(const std::string& _paramTemplateName);

                    /**
                     * 判断参数 ParamTemplateName 是否已赋值
                     * @return ParamTemplateName 是否已赋值
                     * 
                     */
                    bool ParamTemplateNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return TargetName 
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置
                     * @param _targetName 
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return SourceName 
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置
                     * @param _sourceName 
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return IpVersion 
                     * 
                     */
                    int64_t GetIpVersion() const;

                    /**
                     * 设置
                     * @param _ipVersion 
                     * 
                     */
                    void SetIpVersion(const int64_t& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取
                     * @return Invalid 
                     * 
                     */
                    int64_t GetInvalid() const;

                    /**
                     * 设置
                     * @param _invalid 
                     * 
                     */
                    void SetInvalid(const int64_t& _invalid);

                    /**
                     * 判断参数 Invalid 是否已赋值
                     * @return Invalid 是否已赋值
                     * 
                     */
                    bool InvalidHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_destContent;
                    bool m_destContentHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_destType;
                    bool m_destTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_detectedTimes;
                    bool m_detectedTimesHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_edgeName;
                    bool m_edgeNameHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_internalUuid;
                    bool m_internalUuidHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fwGroupName;
                    bool m_fwGroupNameHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<BetaInfoByACL> m_betaList;
                    bool m_betaListHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_paramTemplateName;
                    bool m_paramTemplateNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_invalid;
                    bool m_invalidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_VPCRULEITEM_H_
