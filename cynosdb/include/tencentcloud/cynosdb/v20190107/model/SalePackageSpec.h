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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEPACKAGESPEC_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEPACKAGESPEC_H_

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
                * Resource pack details
                */
                class SalePackageSpec : public AbstractModel
                {
                public:
                    SalePackageSpec();
                    ~SalePackageSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource package region of use.
                     * @return PackageRegion Resource package region of use.
                     * 
                     */
                    std::string GetPackageRegion() const;

                    /**
                     * 设置Resource package region of use.
                     * @param _packageRegion Resource package region of use.
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
                     * 获取Specifies the resource package type.
CCU - compute resource package.
Storage resource package.
                     * @return PackageType Specifies the resource package type.
CCU - compute resource package.
Storage resource package.
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Specifies the resource package type.
CCU - compute resource package.
Storage resource package.
                     * @param _packageType Specifies the resource package type.
CCU - compute resource package.
Storage resource package.
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
                     * 获取Resource pack version.
base - basic version; common - general version; enterprise - enterprise edition.
                     * @return PackageVersion Resource pack version.
base - basic version; common - general version; enterprise - enterprise edition.
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置Resource pack version.
base - basic version; common - general version; enterprise - enterprise edition.
                     * @param _packageVersion Resource pack version.
base - basic version; common - general version; enterprise - enterprise edition.
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
                     * 获取Minimum number of resources in the current version of the resource package. compute resource unit: pieces; storage resource: GB.
                     * @return MinPackageSpec Minimum number of resources in the current version of the resource package. compute resource unit: pieces; storage resource: GB.
                     * 
                     */
                    double GetMinPackageSpec() const;

                    /**
                     * 设置Minimum number of resources in the current version of the resource package. compute resource unit: pieces; storage resource: GB.
                     * @param _minPackageSpec Minimum number of resources in the current version of the resource package. compute resource unit: pieces; storage resource: GB.
                     * 
                     */
                    void SetMinPackageSpec(const double& _minPackageSpec);

                    /**
                     * 判断参数 MinPackageSpec 是否已赋值
                     * @return MinPackageSpec 是否已赋值
                     * 
                     */
                    bool MinPackageSpecHasBeenSet() const;

                    /**
                     * 获取Specifies the maximum number of resources in the current version of the resource package. valid values: compute resource unit: pieces; storage resource: GB.
                     * @return MaxPackageSpec Specifies the maximum number of resources in the current version of the resource package. valid values: compute resource unit: pieces; storage resource: GB.
                     * 
                     */
                    double GetMaxPackageSpec() const;

                    /**
                     * 设置Specifies the maximum number of resources in the current version of the resource package. valid values: compute resource unit: pieces; storage resource: GB.
                     * @param _maxPackageSpec Specifies the maximum number of resources in the current version of the resource package. valid values: compute resource unit: pieces; storage resource: GB.
                     * 
                     */
                    void SetMaxPackageSpec(const double& _maxPackageSpec);

                    /**
                     * 判断参数 MaxPackageSpec 是否已赋值
                     * @return MaxPackageSpec 是否已赋值
                     * 
                     */
                    bool MaxPackageSpecHasBeenSet() const;

                    /**
                     * 获取Specifies the resource pack validity period. the measurement unit is day.
                     * @return ExpireDay Specifies the resource pack validity period. the measurement unit is day.
                     * 
                     */
                    int64_t GetExpireDay() const;

                    /**
                     * 设置Specifies the resource pack validity period. the measurement unit is day.
                     * @param _expireDay Specifies the resource pack validity period. the measurement unit is day.
                     * 
                     */
                    void SetExpireDay(const int64_t& _expireDay);

                    /**
                     * 判断参数 ExpireDay 是否已赋值
                     * @return ExpireDay 是否已赋值
                     * 
                     */
                    bool ExpireDayHasBeenSet() const;

                private:

                    /**
                     * Resource package region of use.
                     */
                    std::string m_packageRegion;
                    bool m_packageRegionHasBeenSet;

                    /**
                     * Specifies the resource package type.
CCU - compute resource package.
Storage resource package.
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Resource pack version.
base - basic version; common - general version; enterprise - enterprise edition.
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * Minimum number of resources in the current version of the resource package. compute resource unit: pieces; storage resource: GB.
                     */
                    double m_minPackageSpec;
                    bool m_minPackageSpecHasBeenSet;

                    /**
                     * Specifies the maximum number of resources in the current version of the resource package. valid values: compute resource unit: pieces; storage resource: GB.
                     */
                    double m_maxPackageSpec;
                    bool m_maxPackageSpecHasBeenSet;

                    /**
                     * Specifies the resource pack validity period. the measurement unit is day.
                     */
                    int64_t m_expireDay;
                    bool m_expireDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEPACKAGESPEC_H_
