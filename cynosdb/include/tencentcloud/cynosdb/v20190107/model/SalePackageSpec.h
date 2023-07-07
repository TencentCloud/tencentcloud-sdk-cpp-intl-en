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
                     * 获取Region of the resource pack Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PackageRegion Region of the resource pack Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPackageRegion() const;

                    /**
                     * 设置Region of the resource pack Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _packageRegion Region of the resource pack Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack). Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PackageType Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack). Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack). Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _packageType Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack). Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Resource pack edition. Valid values: `base` (basic edition), `common` (general edition), `enterprise` (enterprise edition). Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PackageVersion Resource pack edition. Valid values: `base` (basic edition), `common` (general edition), `enterprise` (enterprise edition). Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置Resource pack edition. Valid values: `base` (basic edition), `common` (general edition), `enterprise` (enterprise edition). Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _packageVersion Resource pack edition. Valid values: `base` (basic edition), `common` (general edition), `enterprise` (enterprise edition). Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Minimum number of resources for the current edition of the resource pack.  Unit of the compute resources: pcs.  Unit of the storage resources: GB. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MinPackageSpec Minimum number of resources for the current edition of the resource pack.  Unit of the compute resources: pcs.  Unit of the storage resources: GB. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetMinPackageSpec() const;

                    /**
                     * 设置Minimum number of resources for the current edition of the resource pack.  Unit of the compute resources: pcs.  Unit of the storage resources: GB. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _minPackageSpec Minimum number of resources for the current edition of the resource pack.  Unit of the compute resources: pcs.  Unit of the storage resources: GB. Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Maximum number of resources for the current edition of the resource pack.  Unit of the compute resources: pcs.  Unit of the storage resources: GB. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxPackageSpec Maximum number of resources for the current edition of the resource pack.  Unit of the compute resources: pcs.  Unit of the storage resources: GB. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetMaxPackageSpec() const;

                    /**
                     * 设置Maximum number of resources for the current edition of the resource pack.  Unit of the compute resources: pcs.  Unit of the storage resources: GB. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxPackageSpec Maximum number of resources for the current edition of the resource pack.  Unit of the compute resources: pcs.  Unit of the storage resources: GB. Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Validity period of a resource pack in days Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireDay Validity period of a resource pack in days Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetExpireDay() const;

                    /**
                     * 设置Validity period of a resource pack in days Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireDay Validity period of a resource pack in days Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Region of the resource pack Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_packageRegion;
                    bool m_packageRegionHasBeenSet;

                    /**
                     * Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack). Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Resource pack edition. Valid values: `base` (basic edition), `common` (general edition), `enterprise` (enterprise edition). Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * Minimum number of resources for the current edition of the resource pack.  Unit of the compute resources: pcs.  Unit of the storage resources: GB. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_minPackageSpec;
                    bool m_minPackageSpecHasBeenSet;

                    /**
                     * Maximum number of resources for the current edition of the resource pack.  Unit of the compute resources: pcs.  Unit of the storage resources: GB. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_maxPackageSpec;
                    bool m_maxPackageSpecHasBeenSet;

                    /**
                     * Validity period of a resource pack in days Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_expireDay;
                    bool m_expireDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEPACKAGESPEC_H_
