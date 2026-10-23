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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATERESOURCEPACKAGEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATERESOURCEPACKAGEREQUEST_H_

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
                * CreateResourcePackage request structure.
                */
                class CreateResourcePackageRequest : public AbstractModel
                {
                public:
                    CreateResourcePackageRequest();
                    ~CreateResourcePackageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance type. Currently fixed to cynosdb-serverless.
                     * @return InstanceType Instance type. Currently fixed to cynosdb-serverless.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type. Currently fixed to cynosdb-serverless.
                     * @param _instanceType Instance type. Currently fixed to cynosdb-serverless.
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
                     * 获取Region of resource package use. chineseMainland: common in the Chinese mainland; overseas: common in Hong Kong (China), Macao (China), Taiwan (China), and overseas regions.
                     * @return PackageRegion Region of resource package use. chineseMainland: common in the Chinese mainland; overseas: common in Hong Kong (China), Macao (China), Taiwan (China), and overseas regions.
                     * 
                     */
                    std::string GetPackageRegion() const;

                    /**
                     * 设置Region of resource package use. chineseMainland: common in the Chinese mainland; overseas: common in Hong Kong (China), Macao (China), Taiwan (China), and overseas regions.
                     * @param _packageRegion Region of resource package use. chineseMainland: common in the Chinese mainland; overseas: common in Hong Kong (China), Macao (China), Taiwan (China), and overseas regions.
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
                     * 获取Resource package type. CCU: compute resource package. DISK: storage resource package.
                     * @return PackageType Resource package type. CCU: compute resource package. DISK: storage resource package.
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Resource package type. CCU: compute resource package. DISK: storage resource package.
                     * @param _packageType Resource package type. CCU: compute resource package. DISK: storage resource package.
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
                     * 获取Resource pack version
base: basic version, common: general version, enterprise: Enterprise Edition
                     * @return PackageVersion Resource pack version
base: basic version, common: general version, enterprise: Enterprise Edition
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置Resource pack version
base: basic version, common: general version, enterprise: Enterprise Edition
                     * @param _packageVersion Resource pack version
base: basic version, common: general version, enterprise: Enterprise Edition
                     * 
                     */
                    void SetPackageVersion(const std::string& _packageVersion);

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     * 
                     */
                    bool PackageVersionHasBeenSet() const;

                    /**
                     * 获取Package size. Compute resource unit: count. Storage resource: GB.
                     * @return PackageSpec Package size. Compute resource unit: count. Storage resource: GB.
                     * 
                     */
                    double GetPackageSpec() const;

                    /**
                     * 设置Package size. Compute resource unit: count. Storage resource: GB.
                     * @param _packageSpec Package size. Compute resource unit: count. Storage resource: GB.
                     * 
                     */
                    void SetPackageSpec(const double& _packageSpec);

                    /**
                     * 判断参数 PackageSpec 是否已赋值
                     * @return PackageSpec 是否已赋值
                     * 
                     */
                    bool PackageSpecHasBeenSet() const;

                    /**
                     * 获取Resource pack validity period. Unit: day.
                     * @return ExpireDay Resource pack validity period. Unit: day.
                     * 
                     */
                    int64_t GetExpireDay() const;

                    /**
                     * 设置Resource pack validity period. Unit: day.
                     * @param _expireDay Resource pack validity period. Unit: day.
                     * 
                     */
                    void SetExpireDay(const int64_t& _expireDay);

                    /**
                     * 判断参数 ExpireDay 是否已赋值
                     * @return ExpireDay 是否已赋值
                     * 
                     */
                    bool ExpireDayHasBeenSet() const;

                    /**
                     * 获取Number of resource packages to purchase
                     * @return PackageCount Number of resource packages to purchase
                     * 
                     */
                    int64_t GetPackageCount() const;

                    /**
                     * 设置Number of resource packages to purchase
                     * @param _packageCount Number of resource packages to purchase
                     * 
                     */
                    void SetPackageCount(const int64_t& _packageCount);

                    /**
                     * 判断参数 PackageCount 是否已赋值
                     * @return PackageCount 是否已赋值
                     * 
                     */
                    bool PackageCountHasBeenSet() const;

                    /**
                     * 获取Resource package name.
                     * @return PackageName Resource package name.
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置Resource package name.
                     * @param _packageName Resource package name.
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                private:

                    /**
                     * Instance type. Currently fixed to cynosdb-serverless.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Region of resource package use. chineseMainland: common in the Chinese mainland; overseas: common in Hong Kong (China), Macao (China), Taiwan (China), and overseas regions.
                     */
                    std::string m_packageRegion;
                    bool m_packageRegionHasBeenSet;

                    /**
                     * Resource package type. CCU: compute resource package. DISK: storage resource package.
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Resource pack version
base: basic version, common: general version, enterprise: Enterprise Edition
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * Package size. Compute resource unit: count. Storage resource: GB.
                     */
                    double m_packageSpec;
                    bool m_packageSpecHasBeenSet;

                    /**
                     * Resource pack validity period. Unit: day.
                     */
                    int64_t m_expireDay;
                    bool m_expireDayHasBeenSet;

                    /**
                     * Number of resource packages to purchase
                     */
                    int64_t m_packageCount;
                    bool m_packageCountHasBeenSet;

                    /**
                     * Resource package name.
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATERESOURCEPACKAGEREQUEST_H_
