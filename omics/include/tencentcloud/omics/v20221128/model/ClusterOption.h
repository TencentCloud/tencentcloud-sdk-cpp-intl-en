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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_CLUSTEROPTION_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_CLUSTEROPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/ResourceQuota.h>
#include <tencentcloud/omics/v20221128/model/LimitRange.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * Computing cluster configuration
                */
                class ClusterOption : public AbstractModel
                {
                public:
                    ClusterOption();
                    ~ClusterOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Computing cluster availability zone
                     * @return Zone Computing cluster availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Computing cluster availability zone
                     * @param _zone Computing cluster availability zone
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Computing cluster type. Valid values:
- KUBERNETES
                     * @return Type Computing cluster type. Valid values:
- KUBERNETES
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Computing cluster type. Valid values:
- KUBERNETES
                     * @param _type Computing cluster type. Valid values:
- KUBERNETES
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
                     * 获取Computing cluster Service CIDR. It must not overlap with the VPC IP range.
                     * @return ServiceCidr Computing cluster Service CIDR. It must not overlap with the VPC IP range.
                     * 
                     */
                    std::string GetServiceCidr() const;

                    /**
                     * 设置Computing cluster Service CIDR. It must not overlap with the VPC IP range.
                     * @param _serviceCidr Computing cluster Service CIDR. It must not overlap with the VPC IP range.
                     * 
                     */
                    void SetServiceCidr(const std::string& _serviceCidr);

                    /**
                     * 判断参数 ServiceCidr 是否已赋值
                     * @return ServiceCidr 是否已赋值
                     * 
                     */
                    bool ServiceCidrHasBeenSet() const;

                    /**
                     * 获取Resource quota
                     * @return ResourceQuota Resource quota
                     * 
                     */
                    ResourceQuota GetResourceQuota() const;

                    /**
                     * 设置Resource quota
                     * @param _resourceQuota Resource quota
                     * 
                     */
                    void SetResourceQuota(const ResourceQuota& _resourceQuota);

                    /**
                     * 判断参数 ResourceQuota 是否已赋值
                     * @return ResourceQuota 是否已赋值
                     * 
                     */
                    bool ResourceQuotaHasBeenSet() const;

                    /**
                     * 获取Limit scope
                     * @return LimitRange Limit scope
                     * 
                     */
                    LimitRange GetLimitRange() const;

                    /**
                     * 设置Limit scope
                     * @param _limitRange Limit scope
                     * 
                     */
                    void SetLimitRange(const LimitRange& _limitRange);

                    /**
                     * 判断参数 LimitRange 是否已赋值
                     * @return LimitRange 是否已赋值
                     * 
                     */
                    bool LimitRangeHasBeenSet() const;

                private:

                    /**
                     * Computing cluster availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Computing cluster type. Valid values:
- KUBERNETES
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Computing cluster Service CIDR. It must not overlap with the VPC IP range.
                     */
                    std::string m_serviceCidr;
                    bool m_serviceCidrHasBeenSet;

                    /**
                     * Resource quota
                     */
                    ResourceQuota m_resourceQuota;
                    bool m_resourceQuotaHasBeenSet;

                    /**
                     * Limit scope
                     */
                    LimitRange m_limitRange;
                    bool m_limitRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_CLUSTEROPTION_H_
