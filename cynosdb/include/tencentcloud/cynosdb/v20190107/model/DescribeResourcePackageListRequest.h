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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBERESOURCEPACKAGELISTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBERESOURCEPACKAGELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeResourcePackageList request structure.
                */
                class DescribeResourcePackageListRequest : public AbstractModel
                {
                public:
                    DescribeResourcePackageListRequest();
                    ~DescribeResourcePackageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of a resource pack
                     * @return PackageId The unique ID of a resource pack
                     * 
                     */
                    std::vector<std::string> GetPackageId() const;

                    /**
                     * 设置The unique ID of a resource pack
                     * @param _packageId The unique ID of a resource pack
                     * 
                     */
                    void SetPackageId(const std::vector<std::string>& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取Resource pack name
                     * @return PackageName Resource pack name
                     * 
                     */
                    std::vector<std::string> GetPackageName() const;

                    /**
                     * 设置Resource pack name
                     * @param _packageName Resource pack name
                     * 
                     */
                    void SetPackageName(const std::vector<std::string>& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack).
                     * @return PackageType Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack).
                     * 
                     */
                    std::vector<std::string> GetPackageType() const;

                    /**
                     * 设置Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack).
                     * @param _packageType Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack).
                     * 
                     */
                    void SetPackageType(const std::vector<std::string>& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取Region of the resource pack. Valid values: `China` (Chinese mainland), `overseas` (outside Chinese mainland).
                     * @return PackageRegion Region of the resource pack. Valid values: `China` (Chinese mainland), `overseas` (outside Chinese mainland).
                     * 
                     */
                    std::vector<std::string> GetPackageRegion() const;

                    /**
                     * 设置Region of the resource pack. Valid values: `China` (Chinese mainland), `overseas` (outside Chinese mainland).
                     * @param _packageRegion Region of the resource pack. Valid values: `China` (Chinese mainland), `overseas` (outside Chinese mainland).
                     * 
                     */
                    void SetPackageRegion(const std::vector<std::string>& _packageRegion);

                    /**
                     * 判断参数 PackageRegion 是否已赋值
                     * @return PackageRegion 是否已赋值
                     * 
                     */
                    bool PackageRegionHasBeenSet() const;

                    /**
                     * 获取Resource pack status. Valid values: `using`, `expired`, `normal_finish` (used up), `apply_refund` (requesting a refund), `refund` (refunded).
                     * @return Status Resource pack status. Valid values: `using`, `expired`, `normal_finish` (used up), `apply_refund` (requesting a refund), `refund` (refunded).
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置Resource pack status. Valid values: `using`, `expired`, `normal_finish` (used up), `apply_refund` (requesting a refund), `refund` (refunded).
                     * @param _status Resource pack status. Valid values: `using`, `expired`, `normal_finish` (used up), `apply_refund` (requesting a refund), `refund` (refunded).
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Sorting conditions. Valid values: `startTime` (effective time), `expireTime` (expiration date), `packageUsedSpec` (used capacity), `packageTotalSpec` (total storage capacity). 
Sorting by array order
                     * @return OrderBy Sorting conditions. Valid values: `startTime` (effective time), `expireTime` (expiration date), `packageUsedSpec` (used capacity), `packageTotalSpec` (total storage capacity). 
Sorting by array order
                     * 
                     */
                    std::vector<std::string> GetOrderBy() const;

                    /**
                     * 设置Sorting conditions. Valid values: `startTime` (effective time), `expireTime` (expiration date), `packageUsedSpec` (used capacity), `packageTotalSpec` (total storage capacity). 
Sorting by array order
                     * @param _orderBy Sorting conditions. Valid values: `startTime` (effective time), `expireTime` (expiration date), `packageUsedSpec` (used capacity), `packageTotalSpec` (total storage capacity). 
Sorting by array order
                     * 
                     */
                    void SetOrderBy(const std::vector<std::string>& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `ASC` (ascending), `DESC` (descending).
                     * @return OrderDirection Sorting order. Valid values: `ASC` (ascending), `DESC` (descending).
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置Sorting order. Valid values: `ASC` (ascending), `DESC` (descending).
                     * @param _orderDirection Sorting order. Valid values: `ASC` (ascending), `DESC` (descending).
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Limit
                     * @return Limit Limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit
                     * @param _limit Limit
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The unique ID of a resource pack
                     */
                    std::vector<std::string> m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * Resource pack name
                     */
                    std::vector<std::string> m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack).
                     */
                    std::vector<std::string> m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Region of the resource pack. Valid values: `China` (Chinese mainland), `overseas` (outside Chinese mainland).
                     */
                    std::vector<std::string> m_packageRegion;
                    bool m_packageRegionHasBeenSet;

                    /**
                     * Resource pack status. Valid values: `using`, `expired`, `normal_finish` (used up), `apply_refund` (requesting a refund), `refund` (refunded).
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Sorting conditions. Valid values: `startTime` (effective time), `expireTime` (expiration date), `packageUsedSpec` (used capacity), `packageTotalSpec` (total storage capacity). 
Sorting by array order
                     */
                    std::vector<std::string> m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting order. Valid values: `ASC` (ascending), `DESC` (descending).
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBERESOURCEPACKAGELISTREQUEST_H_
