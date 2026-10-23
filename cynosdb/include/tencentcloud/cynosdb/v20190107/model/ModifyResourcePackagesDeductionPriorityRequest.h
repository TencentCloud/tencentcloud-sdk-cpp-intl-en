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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYRESOURCEPACKAGESDEDUCTIONPRIORITYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYRESOURCEPACKAGESDEDUCTIONPRIORITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/PackagePriority.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyResourcePackagesDeductionPriority request structure.
                */
                class ModifyResourcePackagesDeductionPriorityRequest : public AbstractModel
                {
                public:
                    ModifyResourcePackagesDeductionPriorityRequest();
                    ~ModifyResourcePackagesDeductionPriorityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource package type whose priority needs to be modified. CCU: compute resource package. DISK: storage resource package.
                     * @return PackageType Resource package type whose priority needs to be modified. CCU: compute resource package. DISK: storage resource package.
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Resource package type whose priority needs to be modified. CCU: compute resource package. DISK: storage resource package.
                     * @param _packageType Resource package type whose priority needs to be modified. CCU: compute resource package. DISK: storage resource package.
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
                     * 获取Which cynos resource does the modified deduction priority take effect for?
                     * @return ClusterId Which cynos resource does the modified deduction priority take effect for?
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Which cynos resource does the modified deduction priority take effect for?
                     * @param _clusterId Which cynos resource does the modified deduction priority take effect for?
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Resource package deduction priority
                     * @return DeductionPriorities Resource package deduction priority
                     * 
                     */
                    std::vector<PackagePriority> GetDeductionPriorities() const;

                    /**
                     * 设置Resource package deduction priority
                     * @param _deductionPriorities Resource package deduction priority
                     * 
                     */
                    void SetDeductionPriorities(const std::vector<PackagePriority>& _deductionPriorities);

                    /**
                     * 判断参数 DeductionPriorities 是否已赋值
                     * @return DeductionPriorities 是否已赋值
                     * 
                     */
                    bool DeductionPrioritiesHasBeenSet() const;

                private:

                    /**
                     * Resource package type whose priority needs to be modified. CCU: compute resource package. DISK: storage resource package.
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Which cynos resource does the modified deduction priority take effect for?
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Resource package deduction priority
                     */
                    std::vector<PackagePriority> m_deductionPriorities;
                    bool m_deductionPrioritiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYRESOURCEPACKAGESDEDUCTIONPRIORITYREQUEST_H_
