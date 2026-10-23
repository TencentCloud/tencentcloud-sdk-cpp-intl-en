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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBERESOURCEPACKAGESALESPECREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBERESOURCEPACKAGESALESPECREQUEST_H_

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
                * DescribeResourcePackageSaleSpec request structure.
                */
                class DescribeResourcePackageSaleSpecRequest : public AbstractModel
                {
                public:
                    DescribeResourcePackageSaleSpecRequest();
                    ~DescribeResourcePackageSaleSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance type
                     * @return InstanceType Instance type
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type
                     * @param _instanceType Instance type
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Region of resource pack usage
china: universally applicable in the Chinese mainland; overseas: universally applicable in Hong Kong (China), Macao (China), Taiwan (China), and overseas regions.
                     * @return PackageRegion Region of resource pack usage
china: universally applicable in the Chinese mainland; overseas: universally applicable in Hong Kong (China), Macao (China), Taiwan (China), and overseas regions.
                     * 
                     */
                    std::string GetPackageRegion() const;

                    /**
                     * 设置Region of resource pack usage
china: universally applicable in the Chinese mainland; overseas: universally applicable in Hong Kong (China), Macao (China), Taiwan (China), and overseas regions.
                     * @param _packageRegion Region of resource pack usage
china: universally applicable in the Chinese mainland; overseas: universally applicable in Hong Kong (China), Macao (China), Taiwan (China), and overseas regions.
                     * 
                     */
                    void SetPackageRegion(const std::string& _packageRegion);

                    /**
                     * 判断参数 PackageRegion 是否已赋值
                     * @return PackageRegion 是否已赋值
                     * 
                     */
                    bool PackageRegionHasBeenSet() const;

                    /**
                     * 获取Resource package type
CCU - compute resource package
DISK - storage resource package
                     * @return PackageType Resource package type
CCU - compute resource package
DISK - storage resource package
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Resource package type
CCU - compute resource package
DISK - storage resource package
                     * @param _packageType Resource package type
CCU - compute resource package
DISK - storage resource package
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
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
                     * Instance type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Region of resource pack usage
china: universally applicable in the Chinese mainland; overseas: universally applicable in Hong Kong (China), Macao (China), Taiwan (China), and overseas regions.
                     */
                    std::string m_packageRegion;
                    bool m_packageRegionHasBeenSet;

                    /**
                     * Resource package type
CCU - compute resource package
DISK - storage resource package
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Offset.
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

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBERESOURCEPACKAGESALESPECREQUEST_H_
