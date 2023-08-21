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
                     * 获取Region of the resource pack. Valid values: `China` (Chinese mainland), `overseas` (outside Chinese mainland).
                     * @return PackageRegion Region of the resource pack. Valid values: `China` (Chinese mainland), `overseas` (outside Chinese mainland).
                     * 
                     */
                    std::string GetPackageRegion() const;

                    /**
                     * 设置Region of the resource pack. Valid values: `China` (Chinese mainland), `overseas` (outside Chinese mainland).
                     * @param _packageRegion Region of the resource pack. Valid values: `China` (Chinese mainland), `overseas` (outside Chinese mainland).
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
                     * 获取Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack).
                     * @return PackageType Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack).
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack).
                     * @param _packageType Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack).
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
                     * 获取Resource pack edition. Valid values: `base` (basic edition), `common` (general edition), `enterprise` (enterprise edition).
                     * @return PackageVersion Resource pack edition. Valid values: `base` (basic edition), `common` (general edition), `enterprise` (enterprise edition).
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置Resource pack edition. Valid values: `base` (basic edition), `common` (general edition), `enterprise` (enterprise edition).
                     * @param _packageVersion Resource pack edition. Valid values: `base` (basic edition), `common` (general edition), `enterprise` (enterprise edition).
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
                     * 获取Resource pack size. Unit of the compute resource pack: Ten thousand.  Unit of the storage resource pack:  GB
                     * @return PackageSpec Resource pack size. Unit of the compute resource pack: Ten thousand.  Unit of the storage resource pack:  GB
                     * 
                     */
                    double GetPackageSpec() const;

                    /**
                     * 设置Resource pack size. Unit of the compute resource pack: Ten thousand.  Unit of the storage resource pack:  GB
                     * @param _packageSpec Resource pack size. Unit of the compute resource pack: Ten thousand.  Unit of the storage resource pack:  GB
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
                     * 获取Validity period of a resource pack in days
                     * @return ExpireDay Validity period of a resource pack in days
                     * 
                     */
                    int64_t GetExpireDay() const;

                    /**
                     * 设置Validity period of a resource pack in days
                     * @param _expireDay Validity period of a resource pack in days
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
                     * 获取Number of the resource packs to be purchased
                     * @return PackageCount Number of the resource packs to be purchased
                     * 
                     */
                    int64_t GetPackageCount() const;

                    /**
                     * 设置Number of the resource packs to be purchased
                     * @param _packageCount Number of the resource packs to be purchased
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
                     * 获取Resource pack name
                     * @return PackageName Resource pack name
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置Resource pack name
                     * @param _packageName Resource pack name
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
                     * Instance type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Region of the resource pack. Valid values: `China` (Chinese mainland), `overseas` (outside Chinese mainland).
                     */
                    std::string m_packageRegion;
                    bool m_packageRegionHasBeenSet;

                    /**
                     * Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack).
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Resource pack edition. Valid values: `base` (basic edition), `common` (general edition), `enterprise` (enterprise edition).
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * Resource pack size. Unit of the compute resource pack: Ten thousand.  Unit of the storage resource pack:  GB
                     */
                    double m_packageSpec;
                    bool m_packageSpecHasBeenSet;

                    /**
                     * Validity period of a resource pack in days
                     */
                    int64_t m_expireDay;
                    bool m_expireDayHasBeenSet;

                    /**
                     * Number of the resource packs to be purchased
                     */
                    int64_t m_packageCount;
                    bool m_packageCountHasBeenSet;

                    /**
                     * Resource pack name
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATERESOURCEPACKAGEREQUEST_H_
