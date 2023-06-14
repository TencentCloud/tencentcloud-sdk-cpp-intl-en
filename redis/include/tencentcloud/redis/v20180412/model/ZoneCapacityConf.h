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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_ZONECAPACITYCONF_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_ZONECAPACITYCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/ProductConf.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Product information in the availability zone
                */
                class ZoneCapacityConf : public AbstractModel
                {
                public:
                    ZoneCapacityConf();
                    ~ZoneCapacityConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AZ ID, such as ap-guangzhou-3
                     * @return ZoneId AZ ID, such as ap-guangzhou-3
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置AZ ID, such as ap-guangzhou-3
                     * @param _zoneId AZ ID, such as ap-guangzhou-3
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取AZ name
                     * @return ZoneName AZ name
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置AZ name
                     * @param _zoneName AZ name
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Whether a product is sold out in an AZ
                     * @return IsSaleout Whether a product is sold out in an AZ
                     * 
                     */
                    bool GetIsSaleout() const;

                    /**
                     * 设置Whether a product is sold out in an AZ
                     * @param _isSaleout Whether a product is sold out in an AZ
                     * 
                     */
                    void SetIsSaleout(const bool& _isSaleout);

                    /**
                     * 判断参数 IsSaleout 是否已赋值
                     * @return IsSaleout 是否已赋值
                     * 
                     */
                    bool IsSaleoutHasBeenSet() const;

                    /**
                     * 获取Whether it is a default AZ
                     * @return IsDefault Whether it is a default AZ
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Whether it is a default AZ
                     * @param _isDefault Whether it is a default AZ
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Network type. basenet: basic network; vpcnet: VPC
                     * @return NetWorkType Network type. basenet: basic network; vpcnet: VPC
                     * 
                     */
                    std::vector<std::string> GetNetWorkType() const;

                    /**
                     * 设置Network type. basenet: basic network; vpcnet: VPC
                     * @param _netWorkType Network type. basenet: basic network; vpcnet: VPC
                     * 
                     */
                    void SetNetWorkType(const std::vector<std::string>& _netWorkType);

                    /**
                     * 判断参数 NetWorkType 是否已赋值
                     * @return NetWorkType 是否已赋值
                     * 
                     */
                    bool NetWorkTypeHasBeenSet() const;

                    /**
                     * 获取Information of an AZ, such as product specifications in it
                     * @return ProductSet Information of an AZ, such as product specifications in it
                     * 
                     */
                    std::vector<ProductConf> GetProductSet() const;

                    /**
                     * 设置Information of an AZ, such as product specifications in it
                     * @param _productSet Information of an AZ, such as product specifications in it
                     * 
                     */
                    void SetProductSet(const std::vector<ProductConf>& _productSet);

                    /**
                     * 判断参数 ProductSet 是否已赋值
                     * @return ProductSet 是否已赋值
                     * 
                     */
                    bool ProductSetHasBeenSet() const;

                    /**
                     * 获取AZ ID, such as 100003
                     * @return OldZoneId AZ ID, such as 100003
                     * 
                     */
                    int64_t GetOldZoneId() const;

                    /**
                     * 设置AZ ID, such as 100003
                     * @param _oldZoneId AZ ID, such as 100003
                     * 
                     */
                    void SetOldZoneId(const int64_t& _oldZoneId);

                    /**
                     * 判断参数 OldZoneId 是否已赋值
                     * @return OldZoneId 是否已赋值
                     * 
                     */
                    bool OldZoneIdHasBeenSet() const;

                private:

                    /**
                     * AZ ID, such as ap-guangzhou-3
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * AZ name
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Whether a product is sold out in an AZ
                     */
                    bool m_isSaleout;
                    bool m_isSaleoutHasBeenSet;

                    /**
                     * Whether it is a default AZ
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Network type. basenet: basic network; vpcnet: VPC
                     */
                    std::vector<std::string> m_netWorkType;
                    bool m_netWorkTypeHasBeenSet;

                    /**
                     * Information of an AZ, such as product specifications in it
                     */
                    std::vector<ProductConf> m_productSet;
                    bool m_productSetHasBeenSet;

                    /**
                     * AZ ID, such as 100003
                     */
                    int64_t m_oldZoneId;
                    bool m_oldZoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_ZONECAPACITYCONF_H_
