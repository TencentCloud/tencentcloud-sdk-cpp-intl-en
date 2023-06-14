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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PACKINGQUOTAGROUP_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PACKINGQUOTAGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PackingQuotaInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * A set of correlated packing quotas sorted by instance type priority
                */
                class PackingQuotaGroup : public AbstractModel
                {
                public:
                    PackingQuotaGroup();
                    ~PackingQuotaGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AZ
                     * @return Zone AZ
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ
                     * @param _zone AZ
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
                     * 获取AZ ID
                     * @return ZoneId AZ ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置AZ ID
                     * @param _zoneId AZ ID
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取ISP id
                     * @return ISPId ISP id
                     * 
                     */
                    std::string GetISPId() const;

                    /**
                     * 设置ISP id
                     * @param _iSPId ISP id
                     * 
                     */
                    void SetISPId(const std::string& _iSPId);

                    /**
                     * 判断参数 ISPId 是否已赋值
                     * @return ISPId 是否已赋值
                     * 
                     */
                    bool ISPIdHasBeenSet() const;

                    /**
                     * 获取A set of correlated packing quotas
                     * @return PackingQuotaInfos A set of correlated packing quotas
                     * 
                     */
                    std::vector<PackingQuotaInfo> GetPackingQuotaInfos() const;

                    /**
                     * 设置A set of correlated packing quotas
                     * @param _packingQuotaInfos A set of correlated packing quotas
                     * 
                     */
                    void SetPackingQuotaInfos(const std::vector<PackingQuotaInfo>& _packingQuotaInfos);

                    /**
                     * 判断参数 PackingQuotaInfos 是否已赋值
                     * @return PackingQuotaInfos 是否已赋值
                     * 
                     */
                    bool PackingQuotaInfosHasBeenSet() const;

                private:

                    /**
                     * AZ
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * AZ ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * ISP id
                     */
                    std::string m_iSPId;
                    bool m_iSPIdHasBeenSet;

                    /**
                     * A set of correlated packing quotas
                     */
                    std::vector<PackingQuotaInfo> m_packingQuotaInfos;
                    bool m_packingQuotaInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PACKINGQUOTAGROUP_H_
