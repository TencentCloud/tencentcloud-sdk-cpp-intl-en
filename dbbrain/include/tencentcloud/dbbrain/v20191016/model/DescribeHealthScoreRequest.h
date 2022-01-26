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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEHEALTHSCOREREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEHEALTHSCOREREQUEST_H_

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
                * DescribeHealthScore request structure.
                */
                class DescribeHealthScoreRequest : public AbstractModel
                {
                public:
                    DescribeHealthScoreRequest();
                    ~DescribeHealthScoreRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The instance ID that needs to obtain the health score
                     * @return InstanceId The instance ID that needs to obtain the health score
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The instance ID that needs to obtain the health score
                     * @param InstanceId The instance ID that needs to obtain the health score
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Time to obtain the health score
                     * @return Time Time to obtain the health score
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Time to obtain the health score
                     * @param Time Time to obtain the health score
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL (compatible with MySQL)). Default value: `mysql`.
                     * @return Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL (compatible with MySQL)). Default value: `mysql`.
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL (compatible with MySQL)). Default value: `mysql`.
                     * @param Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL (compatible with MySQL)). Default value: `mysql`.
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * The instance ID that needs to obtain the health score
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Time to obtain the health score
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL (compatible with MySQL)). Default value: `mysql`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEHEALTHSCOREREQUEST_H_
