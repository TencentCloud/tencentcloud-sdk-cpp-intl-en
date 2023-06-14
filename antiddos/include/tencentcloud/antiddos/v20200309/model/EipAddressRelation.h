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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_EIPADDRESSRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_EIPADDRESSRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * EIP association details
                */
                class EipAddressRelation : public AbstractModel
                {
                public:
                    EipAddressRelation();
                    ~EipAddressRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region of the Anti-DDoS instance bound to the EIP. For example, hk indicates Hong Kong.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return EipAddressRegion Region of the Anti-DDoS instance bound to the EIP. For example, hk indicates Hong Kong.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEipAddressRegion() const;

                    /**
                     * 设置Region of the Anti-DDoS instance bound to the EIP. For example, hk indicates Hong Kong.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _eipAddressRegion Region of the Anti-DDoS instance bound to the EIP. For example, hk indicates Hong Kong.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEipAddressRegion(const std::string& _eipAddressRegion);

                    /**
                     * 判断参数 EipAddressRegion 是否已赋值
                     * @return EipAddressRegion 是否已赋值
                     * 
                     */
                    bool EipAddressRegionHasBeenSet() const;

                    /**
                     * 获取ID of the bound resource. For example, an ID may be bound to an CVM instance.
Note: This is field may return `null`, indicating that no valid value can be obtained.
                     * @return EipBoundRscIns ID of the bound resource. For example, an ID may be bound to an CVM instance.
Note: This is field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEipBoundRscIns() const;

                    /**
                     * 设置ID of the bound resource. For example, an ID may be bound to an CVM instance.
Note: This is field may return `null`, indicating that no valid value can be obtained.
                     * @param _eipBoundRscIns ID of the bound resource. For example, an ID may be bound to an CVM instance.
Note: This is field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEipBoundRscIns(const std::string& _eipBoundRscIns);

                    /**
                     * 判断参数 EipBoundRscIns 是否已赋值
                     * @return EipBoundRscIns 是否已赋值
                     * 
                     */
                    bool EipBoundRscInsHasBeenSet() const;

                    /**
                     * 获取ID of the bound ENI
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return EipBoundRscEni ID of the bound ENI
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEipBoundRscEni() const;

                    /**
                     * 设置ID of the bound ENI
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _eipBoundRscEni ID of the bound ENI
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEipBoundRscEni(const std::string& _eipBoundRscEni);

                    /**
                     * 判断参数 EipBoundRscEni 是否已赋值
                     * @return EipBoundRscEni 是否已赋值
                     * 
                     */
                    bool EipBoundRscEniHasBeenSet() const;

                    /**
                     * 获取Private IP of the bound resource
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return EipBoundRscVip Private IP of the bound resource
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEipBoundRscVip() const;

                    /**
                     * 设置Private IP of the bound resource
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _eipBoundRscVip Private IP of the bound resource
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEipBoundRscVip(const std::string& _eipBoundRscVip);

                    /**
                     * 判断参数 EipBoundRscVip 是否已赋值
                     * @return EipBoundRscVip 是否已赋值
                     * 
                     */
                    bool EipBoundRscVipHasBeenSet() const;

                    /**
                     * 获取Modification time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ModifyTime Modification time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _modifyTime Modification time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Region of the Anti-DDoS instance bound to the EIP. For example, hk indicates Hong Kong.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_eipAddressRegion;
                    bool m_eipAddressRegionHasBeenSet;

                    /**
                     * ID of the bound resource. For example, an ID may be bound to an CVM instance.
Note: This is field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_eipBoundRscIns;
                    bool m_eipBoundRscInsHasBeenSet;

                    /**
                     * ID of the bound ENI
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_eipBoundRscEni;
                    bool m_eipBoundRscEniHasBeenSet;

                    /**
                     * Private IP of the bound resource
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_eipBoundRscVip;
                    bool m_eipBoundRscVipHasBeenSet;

                    /**
                     * Modification time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_EIPADDRESSRELATION_H_
