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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/AuditInstanceFilter.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeAuditInstanceList request structure.
                */
                class DescribeAuditInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeAuditInstanceListRequest();
                    ~DescribeAuditInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Service type. Valid values: `dcdb` (TDSQL for MySQL), `mariadb` (TencentDB for MariaDB).
                     * @return Product Service type. Valid values: `dcdb` (TDSQL for MySQL), `mariadb` (TencentDB for MariaDB).
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: `dcdb` (TDSQL for MySQL), `mariadb` (TencentDB for MariaDB).
                     * @param _product Service type. Valid values: `dcdb` (TDSQL for MySQL), `mariadb` (TencentDB for MariaDB).
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Use the value of `Product` for this parameter, such as `dcdb` and `mariadb`.
                     * @return NodeRequestType Use the value of `Product` for this parameter, such as `dcdb` and `mariadb`.
                     * 
                     */
                    std::string GetNodeRequestType() const;

                    /**
                     * 设置Use the value of `Product` for this parameter, such as `dcdb` and `mariadb`.
                     * @param _nodeRequestType Use the value of `Product` for this parameter, such as `dcdb` and `mariadb`.
                     * 
                     */
                    void SetNodeRequestType(const std::string& _nodeRequestType);

                    /**
                     * 判断参数 NodeRequestType 是否已赋值
                     * @return NodeRequestType 是否已赋值
                     * 
                     */
                    bool NodeRequestTypeHasBeenSet() const;

                    /**
                     * 获取Audit status. Valid values: `0` (Not enabled), `1` (Enabled). Default value: `0`.
                     * @return AuditSwitch Audit status. Valid values: `0` (Not enabled), `1` (Enabled). Default value: `0`.
                     * 
                     */
                    int64_t GetAuditSwitch() const;

                    /**
                     * 设置Audit status. Valid values: `0` (Not enabled), `1` (Enabled). Default value: `0`.
                     * @param _auditSwitch Audit status. Valid values: `0` (Not enabled), `1` (Enabled). Default value: `0`.
                     * 
                     */
                    void SetAuditSwitch(const int64_t& _auditSwitch);

                    /**
                     * 判断参数 AuditSwitch 是否已赋值
                     * @return AuditSwitch 是否已赋值
                     * 
                     */
                    bool AuditSwitchHasBeenSet() const;

                    /**
                     * 获取The offset. Default value: `0`.
                     * @return Offset The offset. Default value: `0`.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The offset. Default value: `0`.
                     * @param _offset The offset. Default value: `0`.
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
                     * 获取The number of queried items. Default value: `20`. Max value: `100`.
                     * @return Limit The number of queried items. Default value: `20`. Max value: `100`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of queried items. Default value: `20`. Max value: `100`.
                     * @param _limit The number of queried items. Default value: `20`. Max value: `100`.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filters for querying instances
                     * @return Filters Filters for querying instances
                     * 
                     */
                    std::vector<AuditInstanceFilter> GetFilters() const;

                    /**
                     * 设置Filters for querying instances
                     * @param _filters Filters for querying instances
                     * 
                     */
                    void SetFilters(const std::vector<AuditInstanceFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Service type. Valid values: `dcdb` (TDSQL for MySQL), `mariadb` (TencentDB for MariaDB).
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Use the value of `Product` for this parameter, such as `dcdb` and `mariadb`.
                     */
                    std::string m_nodeRequestType;
                    bool m_nodeRequestTypeHasBeenSet;

                    /**
                     * Audit status. Valid values: `0` (Not enabled), `1` (Enabled). Default value: `0`.
                     */
                    int64_t m_auditSwitch;
                    bool m_auditSwitchHasBeenSet;

                    /**
                     * The offset. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of queried items. Default value: `20`. Max value: `100`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filters for querying instances
                     */
                    std::vector<AuditInstanceFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_
