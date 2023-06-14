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
                * Information of a purchasable AZ
                */
                class SaleZone : public AbstractModel
                {
                public:
                    SaleZone();
                    ~SaleZone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AZ name
                     * @return Zone AZ name
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ name
                     * @param _zone AZ name
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
                     * 获取Numeric ID of an AZ
                     * @return ZoneId Numeric ID of an AZ
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Numeric ID of an AZ
                     * @param _zoneId Numeric ID of an AZ
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
                     * 获取AZ name
                     * @return ZoneZh AZ name
                     * 
                     */
                    std::string GetZoneZh() const;

                    /**
                     * 设置AZ name
                     * @param _zoneZh AZ name
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
                     * 获取Whether serverless cluster is supported. Valid values: <br>
`0`: No<br>
`1`: Yes
                     * @return IsSupportServerless Whether serverless cluster is supported. Valid values: <br>
`0`: No<br>
`1`: Yes
                     * 
                     */
                    int64_t GetIsSupportServerless() const;

                    /**
                     * 设置Whether serverless cluster is supported. Valid values: <br>
`0`: No<br>
`1`: Yes
                     * @param _isSupportServerless Whether serverless cluster is supported. Valid values: <br>
`0`: No<br>
`1`: Yes
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
                     * 获取Whether standard cluster is supported. Valid values: <br>
`0`: No<br>
`1`: Yes
                     * @return IsSupportNormal Whether standard cluster is supported. Valid values: <br>
`0`: No<br>
`1`: Yes
                     * 
                     */
                    int64_t GetIsSupportNormal() const;

                    /**
                     * 设置Whether standard cluster is supported. Valid values: <br>
`0`: No<br>
`1`: Yes
                     * @param _isSupportNormal Whether standard cluster is supported. Valid values: <br>
`0`: No<br>
`1`: Yes
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
                     * 获取Whether the user has AZ permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HasPermission Whether the user has AZ permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetHasPermission() const;

                    /**
                     * 设置Whether the user has AZ permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hasPermission Whether the user has AZ permission
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether it is a full-linkage RDMA AZ.
                     * @return IsWholeRdmaZone Whether it is a full-linkage RDMA AZ.
                     * 
                     */
                    std::string GetIsWholeRdmaZone() const;

                    /**
                     * 设置Whether it is a full-linkage RDMA AZ.
                     * @param _isWholeRdmaZone Whether it is a full-linkage RDMA AZ.
                     * 
                     */
                    void SetIsWholeRdmaZone(const std::string& _isWholeRdmaZone);

                    /**
                     * 判断参数 IsWholeRdmaZone 是否已赋值
                     * @return IsWholeRdmaZone 是否已赋值
                     * 
                     */
                    bool IsWholeRdmaZoneHasBeenSet() const;

                private:

                    /**
                     * AZ name
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Numeric ID of an AZ
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * AZ name
                     */
                    std::string m_zoneZh;
                    bool m_zoneZhHasBeenSet;

                    /**
                     * Whether serverless cluster is supported. Valid values: <br>
`0`: No<br>
`1`: Yes
                     */
                    int64_t m_isSupportServerless;
                    bool m_isSupportServerlessHasBeenSet;

                    /**
                     * Whether standard cluster is supported. Valid values: <br>
`0`: No<br>
`1`: Yes
                     */
                    int64_t m_isSupportNormal;
                    bool m_isSupportNormalHasBeenSet;

                    /**
                     * Physical zone
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * Whether the user has AZ permission
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_hasPermission;
                    bool m_hasPermissionHasBeenSet;

                    /**
                     * Whether it is a full-linkage RDMA AZ.
                     */
                    std::string m_isWholeRdmaZone;
                    bool m_isWholeRdmaZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEZONE_H_
