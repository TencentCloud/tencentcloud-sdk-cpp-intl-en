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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRODUCTCONFIGOUTTER_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRODUCTCONFIGOUTTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/OutterResource.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * EMR product configuration
                */
                class EmrProductConfigOutter : public AbstractModel
                {
                public:
                    EmrProductConfigOutter();
                    ~EmrProductConfigOutter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Software information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SoftInfo Software information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetSoftInfo() const;

                    /**
                     * 设置Software information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SoftInfo Software information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSoftInfo(const std::vector<std::string>& _softInfo);

                    /**
                     * 判断参数 SoftInfo 是否已赋值
                     * @return SoftInfo 是否已赋值
                     */
                    bool SoftInfoHasBeenSet() const;

                    /**
                     * 获取Number of master nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MasterNodeSize Number of master nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetMasterNodeSize() const;

                    /**
                     * 设置Number of master nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MasterNodeSize Number of master nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMasterNodeSize(const int64_t& _masterNodeSize);

                    /**
                     * 判断参数 MasterNodeSize 是否已赋值
                     * @return MasterNodeSize 是否已赋值
                     */
                    bool MasterNodeSizeHasBeenSet() const;

                    /**
                     * 获取Number of core nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CoreNodeSize Number of core nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetCoreNodeSize() const;

                    /**
                     * 设置Number of core nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CoreNodeSize Number of core nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCoreNodeSize(const int64_t& _coreNodeSize);

                    /**
                     * 判断参数 CoreNodeSize 是否已赋值
                     * @return CoreNodeSize 是否已赋值
                     */
                    bool CoreNodeSizeHasBeenSet() const;

                    /**
                     * 获取Number of task nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TaskNodeSize Number of task nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetTaskNodeSize() const;

                    /**
                     * 设置Number of task nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TaskNodeSize Number of task nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTaskNodeSize(const int64_t& _taskNodeSize);

                    /**
                     * 判断参数 TaskNodeSize 是否已赋值
                     * @return TaskNodeSize 是否已赋值
                     */
                    bool TaskNodeSizeHasBeenSet() const;

                    /**
                     * 获取Number of common nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ComNodeSize Number of common nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetComNodeSize() const;

                    /**
                     * 设置Number of common nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ComNodeSize Number of common nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetComNodeSize(const int64_t& _comNodeSize);

                    /**
                     * 判断参数 ComNodeSize 是否已赋值
                     * @return ComNodeSize 是否已赋值
                     */
                    bool ComNodeSizeHasBeenSet() const;

                    /**
                     * 获取Master node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MasterResource Master node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OutterResource GetMasterResource() const;

                    /**
                     * 设置Master node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MasterResource Master node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMasterResource(const OutterResource& _masterResource);

                    /**
                     * 判断参数 MasterResource 是否已赋值
                     * @return MasterResource 是否已赋值
                     */
                    bool MasterResourceHasBeenSet() const;

                    /**
                     * 获取Core node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CoreResource Core node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OutterResource GetCoreResource() const;

                    /**
                     * 设置Core node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CoreResource Core node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCoreResource(const OutterResource& _coreResource);

                    /**
                     * 判断参数 CoreResource 是否已赋值
                     * @return CoreResource 是否已赋值
                     */
                    bool CoreResourceHasBeenSet() const;

                    /**
                     * 获取Task node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TaskResource Task node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OutterResource GetTaskResource() const;

                    /**
                     * 设置Task node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TaskResource Task node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTaskResource(const OutterResource& _taskResource);

                    /**
                     * 判断参数 TaskResource 是否已赋值
                     * @return TaskResource 是否已赋值
                     */
                    bool TaskResourceHasBeenSet() const;

                    /**
                     * 获取Common node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ComResource Common node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OutterResource GetComResource() const;

                    /**
                     * 设置Common node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ComResource Common node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetComResource(const OutterResource& _comResource);

                    /**
                     * 判断参数 ComResource 是否已赋值
                     * @return ComResource 是否已赋值
                     */
                    bool ComResourceHasBeenSet() const;

                    /**
                     * 获取Whether COS is used
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OnCos Whether COS is used
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetOnCos() const;

                    /**
                     * 设置Whether COS is used
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OnCos Whether COS is used
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOnCos(const bool& _onCos);

                    /**
                     * 判断参数 OnCos 是否已赋值
                     * @return OnCos 是否已赋值
                     */
                    bool OnCosHasBeenSet() const;

                    /**
                     * 获取Billing mode
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ChargeType Billing mode
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置Billing mode
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ChargeType Billing mode
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Number of router nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RouterNodeSize Number of router nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetRouterNodeSize() const;

                    /**
                     * 设置Number of router nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RouterNodeSize Number of router nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRouterNodeSize(const int64_t& _routerNodeSize);

                    /**
                     * 判断参数 RouterNodeSize 是否已赋值
                     * @return RouterNodeSize 是否已赋值
                     */
                    bool RouterNodeSizeHasBeenSet() const;

                    /**
                     * 获取Whether HA is supported
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SupportHA Whether HA is supported
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetSupportHA() const;

                    /**
                     * 设置Whether HA is supported
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SupportHA Whether HA is supported
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSupportHA(const bool& _supportHA);

                    /**
                     * 判断参数 SupportHA 是否已赋值
                     * @return SupportHA 是否已赋值
                     */
                    bool SupportHAHasBeenSet() const;

                    /**
                     * 获取Whether secure mode is supported
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SecurityOn Whether secure mode is supported
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetSecurityOn() const;

                    /**
                     * 设置Whether secure mode is supported
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SecurityOn Whether secure mode is supported
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSecurityOn(const bool& _securityOn);

                    /**
                     * 判断参数 SecurityOn 是否已赋值
                     * @return SecurityOn 是否已赋值
                     */
                    bool SecurityOnHasBeenSet() const;

                    /**
                     * 获取Security group name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SecurityGroup Security group name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置Security group name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SecurityGroup Security group name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSecurityGroup(const std::string& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取Whether to enable CBS encryption
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CbsEncrypt Whether to enable CBS encryption
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetCbsEncrypt() const;

                    /**
                     * 设置Whether to enable CBS encryption
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CbsEncrypt Whether to enable CBS encryption
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCbsEncrypt(const int64_t& _cbsEncrypt);

                    /**
                     * 判断参数 CbsEncrypt 是否已赋值
                     * @return CbsEncrypt 是否已赋值
                     */
                    bool CbsEncryptHasBeenSet() const;

                private:

                    /**
                     * Software information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_softInfo;
                    bool m_softInfoHasBeenSet;

                    /**
                     * Number of master nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_masterNodeSize;
                    bool m_masterNodeSizeHasBeenSet;

                    /**
                     * Number of core nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_coreNodeSize;
                    bool m_coreNodeSizeHasBeenSet;

                    /**
                     * Number of task nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskNodeSize;
                    bool m_taskNodeSizeHasBeenSet;

                    /**
                     * Number of common nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_comNodeSize;
                    bool m_comNodeSizeHasBeenSet;

                    /**
                     * Master node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OutterResource m_masterResource;
                    bool m_masterResourceHasBeenSet;

                    /**
                     * Core node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OutterResource m_coreResource;
                    bool m_coreResourceHasBeenSet;

                    /**
                     * Task node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OutterResource m_taskResource;
                    bool m_taskResourceHasBeenSet;

                    /**
                     * Common node resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OutterResource m_comResource;
                    bool m_comResourceHasBeenSet;

                    /**
                     * Whether COS is used
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_onCos;
                    bool m_onCosHasBeenSet;

                    /**
                     * Billing mode
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Number of router nodes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_routerNodeSize;
                    bool m_routerNodeSizeHasBeenSet;

                    /**
                     * Whether HA is supported
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_supportHA;
                    bool m_supportHAHasBeenSet;

                    /**
                     * Whether secure mode is supported
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_securityOn;
                    bool m_securityOnHasBeenSet;

                    /**
                     * Security group name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * Whether to enable CBS encryption
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cbsEncrypt;
                    bool m_cbsEncryptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRODUCTCONFIGOUTTER_H_
