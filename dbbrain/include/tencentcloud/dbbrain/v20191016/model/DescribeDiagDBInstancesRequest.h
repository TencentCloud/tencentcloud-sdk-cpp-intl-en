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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEDIAGDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEDIAGDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * DescribeDiagDBInstances request structure.
                */
                class DescribeDiagDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDiagDBInstancesRequest();
                    ~DescribeDiagDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether it is an instance supported by DBbrain. It is fixed to “true”.
                     * @return IsSupported Whether it is an instance supported by DBbrain. It is fixed to “true”.
                     */
                    bool GetIsSupported() const;

                    /**
                     * 设置Whether it is an instance supported by DBbrain. It is fixed to “true”.
                     * @param IsSupported Whether it is an instance supported by DBbrain. It is fixed to “true”.
                     */
                    void SetIsSupported(const bool& _isSupported);

                    /**
                     * 判断参数 IsSupported 是否已赋值
                     * @return IsSupported 是否已赋值
                     */
                    bool IsSupportedHasBeenSet() const;

                    /**
                     * 获取Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @return Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @param Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Pagination parameter indicating the offset.
                     * @return Offset Pagination parameter indicating the offset.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination parameter indicating the offset.
                     * @param Offset Pagination parameter indicating the offset.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Pagination parameter indicating the number of entries for each page.
                     * @return Limit Pagination parameter indicating the number of entries for each page.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination parameter indicating the number of entries for each page.
                     * @param Limit Pagination parameter indicating the number of entries for each page.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Query by instance name.
                     * @return InstanceNames Query by instance name.
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置Query by instance name.
                     * @param InstanceNames Query by instance name.
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取Query by instance ID.
                     * @return InstanceIds Query by instance ID.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Query by instance ID.
                     * @param InstanceIds Query by instance ID.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Query by region.
                     * @return Regions Query by region.
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置Query by region.
                     * @param Regions Query by region.
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * Whether it is an instance supported by DBbrain. It is fixed to “true”.
                     */
                    bool m_isSupported;
                    bool m_isSupportedHasBeenSet;

                    /**
                     * Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Pagination parameter indicating the offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination parameter indicating the number of entries for each page.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Query by instance name.
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * Query by instance ID.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Query by region.
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEDIAGDBINSTANCESREQUEST_H_
