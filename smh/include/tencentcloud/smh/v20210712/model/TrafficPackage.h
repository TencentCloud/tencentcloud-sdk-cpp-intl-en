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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_TRAFFICPACKAGE_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_TRAFFICPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * Traffic package information.
                */
                class TrafficPackage : public AbstractModel
                {
                public:
                    TrafficPackage();
                    ~TrafficPackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the instance ID offset by the traffic package.
                     * @return InstanceId Specifies the instance ID offset by the traffic package.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specifies the instance ID offset by the traffic package.
                     * @param _instanceId Specifies the instance ID offset by the traffic package.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Dedicated domain name. if the instance has no dedicated domain name, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain Dedicated domain name. if the instance has no dedicated domain name, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Dedicated domain name. if the instance has no dedicated domain name, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domain Dedicated domain name. if the instance has no dedicated domain name, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Source type of the traffic package. valid values: 0 (purchase), 1 (complimentary).
                     * @return Type Source type of the traffic package. valid values: 0 (purchase), 1 (complimentary).
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Source type of the traffic package. valid values: 0 (purchase), 1 (complimentary).
                     * @param _type Source type of the traffic package. valid values: 0 (purchase), 1 (complimentary).
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Total traffic in Bytes. since the number type has precision limitations, this field is a String type.
                     * @return Size Total traffic in Bytes. since the number type has precision limitations, this field is a String type.
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置Total traffic in Bytes. since the number type has precision limitations, this field is a String type.
                     * @param _size Total traffic in Bytes. since the number type has precision limitations, this field is a String type.
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Total traffic in GB.
                     * @return SizeGB Total traffic in GB.
                     * 
                     */
                    uint64_t GetSizeGB() const;

                    /**
                     * 设置Total traffic in GB.
                     * @param _sizeGB Total traffic in GB.
                     * 
                     */
                    void SetSizeGB(const uint64_t& _sizeGB);

                    /**
                     * 判断参数 SizeGB 是否已赋值
                     * @return SizeGB 是否已赋值
                     * 
                     */
                    bool SizeGBHasBeenSet() const;

                    /**
                     * 获取Remaining traffic in Bytes. this field is of String type due to precision limitations of numeric data types.
                     * @return Remain Remaining traffic in Bytes. this field is of String type due to precision limitations of numeric data types.
                     * 
                     */
                    std::string GetRemain() const;

                    /**
                     * 设置Remaining traffic in Bytes. this field is of String type due to precision limitations of numeric data types.
                     * @param _remain Remaining traffic in Bytes. this field is of String type due to precision limitations of numeric data types.
                     * 
                     */
                    void SetRemain(const std::string& _remain);

                    /**
                     * 判断参数 Remain 是否已赋值
                     * @return Remain 是否已赋值
                     * 
                     */
                    bool RemainHasBeenSet() const;

                    /**
                     * 获取Used traffic in Bytes. since the number type has precision limitations, this field is a String type.
                     * @return Used Used traffic in Bytes. since the number type has precision limitations, this field is a String type.
                     * 
                     */
                    std::string GetUsed() const;

                    /**
                     * 设置Used traffic in Bytes. since the number type has precision limitations, this field is a String type.
                     * @param _used Used traffic in Bytes. since the number type has precision limitations, this field is a String type.
                     * 
                     */
                    void SetUsed(const std::string& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                    /**
                     * 获取Usage percentage. since the String type is used due to precision limitations of the number type, this field is of String type.
                     * @return UsedPercentage Usage percentage. since the String type is used due to precision limitations of the number type, this field is of String type.
                     * 
                     */
                    std::string GetUsedPercentage() const;

                    /**
                     * 设置Usage percentage. since the String type is used due to precision limitations of the number type, this field is of String type.
                     * @param _usedPercentage Usage percentage. since the String type is used due to precision limitations of the number type, this field is of String type.
                     * 
                     */
                    void SetUsedPercentage(const std::string& _usedPercentage);

                    /**
                     * 判断参数 UsedPercentage 是否已赋值
                     * @return UsedPercentage 是否已赋值
                     * 
                     */
                    bool UsedPercentageHasBeenSet() const;

                    /**
                     * 获取Effective time, the order time of the traffic package.
                     * @return EffectiveTime Effective time, the order time of the traffic package.
                     * 
                     */
                    std::string GetEffectiveTime() const;

                    /**
                     * 设置Effective time, the order time of the traffic package.
                     * @param _effectiveTime Effective time, the order time of the traffic package.
                     * 
                     */
                    void SetEffectiveTime(const std::string& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     * 
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time, which is the expiration time of the offset instance. if the traffic package offsets a pay-as-you-go or permanently valid instance, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time, which is the expiration time of the offset instance. if the traffic package offsets a pay-as-you-go or permanently valid instance, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time, which is the expiration time of the offset instance. if the traffic package offsets a pay-as-you-go or permanently valid instance, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Expiration time, which is the expiration time of the offset instance. if the traffic package offsets a pay-as-you-go or permanently valid instance, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Specifies the instance ID offset by the traffic package.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Dedicated domain name. if the instance has no dedicated domain name, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Source type of the traffic package. valid values: 0 (purchase), 1 (complimentary).
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Total traffic in Bytes. since the number type has precision limitations, this field is a String type.
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Total traffic in GB.
                     */
                    uint64_t m_sizeGB;
                    bool m_sizeGBHasBeenSet;

                    /**
                     * Remaining traffic in Bytes. this field is of String type due to precision limitations of numeric data types.
                     */
                    std::string m_remain;
                    bool m_remainHasBeenSet;

                    /**
                     * Used traffic in Bytes. since the number type has precision limitations, this field is a String type.
                     */
                    std::string m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * Usage percentage. since the String type is used due to precision limitations of the number type, this field is of String type.
                     */
                    std::string m_usedPercentage;
                    bool m_usedPercentageHasBeenSet;

                    /**
                     * Effective time, the order time of the traffic package.
                     */
                    std::string m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * Expiration time, which is the expiration time of the offset instance. if the traffic package offsets a pay-as-you-go or permanently valid instance, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_TRAFFICPACKAGE_H_
