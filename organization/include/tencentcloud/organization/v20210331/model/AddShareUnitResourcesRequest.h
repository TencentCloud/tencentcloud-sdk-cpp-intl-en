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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDSHAREUNITRESOURCESREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDSHAREUNITRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/ProductResource.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * AddShareUnitResources request structure.
                */
                class AddShareUnitResourcesRequest : public AbstractModel
                {
                public:
                    AddShareUnitResourcesRequest();
                    ~AddShareUnitResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Shared unit ID.
                     * @return UnitId Shared unit ID.
                     * 
                     */
                    std::string GetUnitId() const;

                    /**
                     * 设置Shared unit ID.
                     * @param _unitId Shared unit ID.
                     * 
                     */
                    void SetUnitId(const std::string& _unitId);

                    /**
                     * 判断参数 UnitId 是否已赋值
                     * @return UnitId 是否已赋值
                     * 
                     */
                    bool UnitIdHasBeenSet() const;

                    /**
                     * 获取Shared unit region.
                     * @return Area Shared unit region.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Shared unit region.
                     * @param _area Shared unit region.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Shared resource type. For supported shared resource types, see [Overview of Resource Sharing](https://intl.cloud.tencent.com/document/product/850/59489?from_cn_redirect=1).
                     * @return Type Shared resource type. For supported shared resource types, see [Overview of Resource Sharing](https://intl.cloud.tencent.com/document/product/850/59489?from_cn_redirect=1).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Shared resource type. For supported shared resource types, see [Overview of Resource Sharing](https://intl.cloud.tencent.com/document/product/850/59489?from_cn_redirect=1).
                     * @param _type Shared resource type. For supported shared resource types, see [Overview of Resource Sharing](https://intl.cloud.tencent.com/document/product/850/59489?from_cn_redirect=1).
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Shared resource list. Maximum: 10.
                     * @return Resources Shared resource list. Maximum: 10.
                     * 
                     */
                    std::vector<ProductResource> GetResources() const;

                    /**
                     * 设置Shared resource list. Maximum: 10.
                     * @param _resources Shared resource list. Maximum: 10.
                     * 
                     */
                    void SetResources(const std::vector<ProductResource>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                private:

                    /**
                     * Shared unit ID.
                     */
                    std::string m_unitId;
                    bool m_unitIdHasBeenSet;

                    /**
                     * Shared unit region.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Shared resource type. For supported shared resource types, see [Overview of Resource Sharing](https://intl.cloud.tencent.com/document/product/850/59489?from_cn_redirect=1).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Shared resource list. Maximum: 10.
                     */
                    std::vector<ProductResource> m_resources;
                    bool m_resourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDSHAREUNITRESOURCESREQUEST_H_
