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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPERMISSIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPERMISSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/PrivilegeResource.h>
#include <tencentcloud/wedata/v20250806/model/SecurityFilter.h>
#include <tencentcloud/wedata/v20250806/model/OrderField.h>
#include <tencentcloud/wedata/v20250806/model/Page.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListPermissions request structure.
                */
                class ListPermissionsRequest : public AbstractModel
                {
                public:
                    ListPermissionsRequest();
                    ~ListPermissionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource.
ResourceType: originates from the ResourceType returned by the GetGrantPrivilegesSTD API in the TCCATALOG module, and change to capitalize the first letter, such as METALAKE corresponding to METALAKE.
ResourceUri depends on ResourceType. fixed as default for Metalake. use the three-segment format of catalog for other categories, such as.
-Metalake, fixed as default.
-Catalog. specifies the catalogName.
-Schema. valid values: catalogName.SchemaName.
-Table. specifies catalogName.SchemaName.TableName.
                     * @return Resource Resource.
ResourceType: originates from the ResourceType returned by the GetGrantPrivilegesSTD API in the TCCATALOG module, and change to capitalize the first letter, such as METALAKE corresponding to METALAKE.
ResourceUri depends on ResourceType. fixed as default for Metalake. use the three-segment format of catalog for other categories, such as.
-Metalake, fixed as default.
-Catalog. specifies the catalogName.
-Schema. valid values: catalogName.SchemaName.
-Table. specifies catalogName.SchemaName.TableName.
                     * 
                     */
                    PrivilegeResource GetResource() const;

                    /**
                     * 设置Resource.
ResourceType: originates from the ResourceType returned by the GetGrantPrivilegesSTD API in the TCCATALOG module, and change to capitalize the first letter, such as METALAKE corresponding to METALAKE.
ResourceUri depends on ResourceType. fixed as default for Metalake. use the three-segment format of catalog for other categories, such as.
-Metalake, fixed as default.
-Catalog. specifies the catalogName.
-Schema. valid values: catalogName.SchemaName.
-Table. specifies catalogName.SchemaName.TableName.
                     * @param _resource Resource.
ResourceType: originates from the ResourceType returned by the GetGrantPrivilegesSTD API in the TCCATALOG module, and change to capitalize the first letter, such as METALAKE corresponding to METALAKE.
ResourceUri depends on ResourceType. fixed as default for Metalake. use the three-segment format of catalog for other categories, such as.
-Metalake, fixed as default.
-Catalog. specifies the catalogName.
-Schema. valid values: catalogName.SchemaName.
-Table. specifies catalogName.SchemaName.TableName.
                     * 
                     */
                    void SetResource(const PrivilegeResource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Filtering conditions (this parameter is not supported).
                     * @return Filters Filtering conditions (this parameter is not supported).
                     * 
                     */
                    std::vector<SecurityFilter> GetFilters() const;

                    /**
                     * 设置Filtering conditions (this parameter is not supported).
                     * @param _filters Filtering conditions (this parameter is not supported).
                     * 
                     */
                    void SetFilters(const std::vector<SecurityFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting field (this parameter is not supported).
                     * @return OrderFields Sorting field (this parameter is not supported).
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置Sorting field (this parameter is not supported).
                     * @param _orderFields Sorting field (this parameter is not supported).
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取Page parameter (this parameter is not supported).
                     * @return Page Page parameter (this parameter is not supported).
                     * 
                     */
                    Page GetPage() const;

                    /**
                     * 设置Page parameter (this parameter is not supported).
                     * @param _page Page parameter (this parameter is not supported).
                     * 
                     */
                    void SetPage(const Page& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * Resource.
ResourceType: originates from the ResourceType returned by the GetGrantPrivilegesSTD API in the TCCATALOG module, and change to capitalize the first letter, such as METALAKE corresponding to METALAKE.
ResourceUri depends on ResourceType. fixed as default for Metalake. use the three-segment format of catalog for other categories, such as.
-Metalake, fixed as default.
-Catalog. specifies the catalogName.
-Schema. valid values: catalogName.SchemaName.
-Table. specifies catalogName.SchemaName.TableName.
                     */
                    PrivilegeResource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Filtering conditions (this parameter is not supported).
                     */
                    std::vector<SecurityFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting field (this parameter is not supported).
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * Page parameter (this parameter is not supported).
                     */
                    Page m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPERMISSIONSREQUEST_H_
