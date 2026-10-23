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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEZONE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEZONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Information on AZs for sale.
                */
                class SaleZone : public AbstractModel
                {
                public:
                    SaleZone();
                    ~SaleZone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Availability zone name
                     * @return Zone Availability zone name
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone name
                     * @param _zone Availability zone name
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
                     * 获取Availability zone numeric ID
                     * @return ZoneId Availability zone numeric ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Availability zone numeric ID
                     * @param _zoneId Availability zone numeric ID
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
                     * 获取AZ Chinese name
                     * @return ZoneZh AZ Chinese name
                     * 
                     */
                    std::string GetZoneZh() const;

                    /**
                     * 设置AZ Chinese name
                     * @param _zoneZh AZ Chinese name
                     * 
                     */
                    void SetZoneZh(const std::string& _zoneZh);

                    /**
                     * 判断参数 ZoneZh 是否已赋值
                     * @return ZoneZh 是否已赋值
                     * 
                     */
                    bool ZoneZhHasBeenSet() const;

                    /**
                     * 获取Whether serverless cluster is supported<br>
0: not supported
1: Support
                     * @return IsSupportServerless Whether serverless cluster is supported<br>
0: not supported
1: Support
                     * 
                     */
                    int64_t GetIsSupportServerless() const;

                    /**
                     * 设置Whether serverless cluster is supported<br>
0: not supported
1: Support
                     * @param _isSupportServerless Whether serverless cluster is supported<br>
0: not supported
1: Support
                     * 
                     */
                    void SetIsSupportServerless(const int64_t& _isSupportServerless);

                    /**
                     * 判断参数 IsSupportServerless 是否已赋值
                     * @return IsSupportServerless 是否已赋值
                     * 
                     */
                    bool IsSupportServerlessHasBeenSet() const;

                    /**
                     * 获取Whether a general cluster is supported
0: not supported
1: Support
                     * @return IsSupportNormal Whether a general cluster is supported
0: not supported
1: Support
                     * 
                     */
                    int64_t GetIsSupportNormal() const;

                    /**
                     * 设置Whether a general cluster is supported
0: not supported
1: Support
                     * @param _isSupportNormal Whether a general cluster is supported
0: not supported
1: Support
                     * 
                     */
                    void SetIsSupportNormal(const int64_t& _isSupportNormal);

                    /**
                     * 判断参数 IsSupportNormal 是否已赋值
                     * @return IsSupportNormal 是否已赋值
                     * 
                     */
                    bool IsSupportNormalHasBeenSet() const;

                    /**
                     * 获取Physical zone
                     * @return PhysicalZone Physical zone
                     * 
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置Physical zone
                     * @param _physicalZone Physical zone
                     * 
                     */
                    void SetPhysicalZone(const std::string& _physicalZone);

                    /**
                     * 判断参数 PhysicalZone 是否已赋值
                     * @return PhysicalZone 是否已赋值
                     * 
                     */
                    bool PhysicalZoneHasBeenSet() const;

                    /**
                     * 获取Whether the user has AZ permissions
                     * @return HasPermission Whether the user has AZ permissions
                     * 
                     */
                    bool GetHasPermission() const;

                    /**
                     * 设置Whether the user has AZ permissions
                     * @param _hasPermission Whether the user has AZ permissions
                     * 
                     */
                    void SetHasPermission(const bool& _hasPermission);

                    /**
                     * 判断参数 HasPermission 是否已赋值
                     * @return HasPermission 是否已赋值
                     * 
                     */
                    bool HasPermissionHasBeenSet() const;

                    /**
                     * 获取Whether it is an all-link RDMA availability zone
                     * @return IsWholeRdmaZone Whether it is an all-link RDMA availability zone
                     * 
                     */
                    std::string GetIsWholeRdmaZone() const;

                    /**
                     * 设置Whether it is an all-link RDMA availability zone
                     * @param _isWholeRdmaZone Whether it is an all-link RDMA availability zone
                     * 
                     */
                    void SetIsWholeRdmaZone(const std::string& _isWholeRdmaZone);

                    /**
                     * 判断参数 IsWholeRdmaZone 是否已赋值
                     * @return IsWholeRdmaZone 是否已赋值
                     * 
                     */
                    bool IsWholeRdmaZoneHasBeenSet() const;

                    /**
                     * 获取Whether new cluster purchase is allowed in the current AZ. 1: allowed, 0: not allowed
                     * @return IsSupportCreateCluster Whether new cluster purchase is allowed in the current AZ. 1: allowed, 0: not allowed
                     * 
                     */
                    int64_t GetIsSupportCreateCluster() const;

                    /**
                     * 设置Whether new cluster purchase is allowed in the current AZ. 1: allowed, 0: not allowed
                     * @param _isSupportCreateCluster Whether new cluster purchase is allowed in the current AZ. 1: allowed, 0: not allowed
                     * 
                     */
                    void SetIsSupportCreateCluster(const int64_t& _isSupportCreateCluster);

                    /**
                     * 判断参数 IsSupportCreateCluster 是否已赋值
                     * @return IsSupportCreateCluster 是否已赋值
                     * 
                     */
                    bool IsSupportCreateClusterHasBeenSet() const;

                private:

                    /**
                     * Availability zone name
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Availability zone numeric ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * AZ Chinese name
                     */
                    std::string m_zoneZh;
                    bool m_zoneZhHasBeenSet;

                    /**
                     * Whether serverless cluster is supported<br>
0: not supported
1: Support
                     */
                    int64_t m_isSupportServerless;
                    bool m_isSupportServerlessHasBeenSet;

                    /**
                     * Whether a general cluster is supported
0: not supported
1: Support
                     */
                    int64_t m_isSupportNormal;
                    bool m_isSupportNormalHasBeenSet;

                    /**
                     * Physical zone
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * Whether the user has AZ permissions
                     */
                    bool m_hasPermission;
                    bool m_hasPermissionHasBeenSet;

                    /**
                     * Whether it is an all-link RDMA availability zone
                     */
                    std::string m_isWholeRdmaZone;
                    bool m_isWholeRdmaZoneHasBeenSet;

                    /**
                     * Whether new cluster purchase is allowed in the current AZ. 1: allowed, 0: not allowed
                     */
                    int64_t m_isSupportCreateCluster;
                    bool m_isSupportCreateClusterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEZONE_H_
