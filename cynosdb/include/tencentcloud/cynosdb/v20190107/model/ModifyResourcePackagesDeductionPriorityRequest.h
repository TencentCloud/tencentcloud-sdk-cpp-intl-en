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
                     * 获取Specifies the resource package type whose priority needs to be modified. CCU: compute resource package. DISK: storage resource package.
                     * @return PackageType Specifies the resource package type whose priority needs to be modified. CCU: compute resource package. DISK: storage resource package.
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Specifies the resource package type whose priority needs to be modified. CCU: compute resource package. DISK: storage resource package.
                     * @param _packageType Specifies the resource package type whose priority needs to be modified. CCU: compute resource package. DISK: storage resource package.
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
                     * 获取The modified deduction priority takes effect for which cynos resource.
                     * @return ClusterId The modified deduction priority takes effect for which cynos resource.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The modified deduction priority takes effect for which cynos resource.
                     * @param _clusterId The modified deduction priority takes effect for which cynos resource.
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
                     * 获取Resource package deduction priority.
                     * @return DeductionPriorities Resource package deduction priority.
                     * 
                     */
                    std::vector<PackagePriority> GetDeductionPriorities() const;

                    /**
                     * 设置Resource package deduction priority.
                     * @param _deductionPriorities Resource package deduction priority.
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
                     * Specifies the resource package type whose priority needs to be modified. CCU: compute resource package. DISK: storage resource package.
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * The modified deduction priority takes effect for which cynos resource.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Resource package deduction priority.
                     */
                    std::vector<PackagePriority> m_deductionPriorities;
                    bool m_deductionPrioritiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYRESOURCEPACKAGESDEDUCTIONPRIORITYREQUEST_H_
