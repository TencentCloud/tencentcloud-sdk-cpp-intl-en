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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPOVERVIEWREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeBackupOverview request structure.
                */
                class DescribeBackupOverviewRequest : public AbstractModel
                {
                public:
                    DescribeBackupOverviewRequest();
                    ~DescribeBackupOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TencentDB product type to be queried. Currently, only `mysql` is supported.
                     * @return Product TencentDB product type to be queried. Currently, only `mysql` is supported.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置TencentDB product type to be queried. Currently, only `mysql` is supported.
                     * @param _product TencentDB product type to be queried. Currently, only `mysql` is supported.
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * TencentDB product type to be queried. Currently, only `mysql` is supported.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPOVERVIEWREQUEST_H_
