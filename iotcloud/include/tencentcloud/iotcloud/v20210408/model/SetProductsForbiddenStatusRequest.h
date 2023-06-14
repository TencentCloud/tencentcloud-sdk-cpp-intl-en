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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_SETPRODUCTSFORBIDDENSTATUSREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_SETPRODUCTSFORBIDDENSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * SetProductsForbiddenStatus request structure.
                */
                class SetProductsForbiddenStatusRequest : public AbstractModel
                {
                public:
                    SetProductsForbiddenStatusRequest();
                    ~SetProductsForbiddenStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of products to enable or disable
                     * @return ProductId List of products to enable or disable
                     * 
                     */
                    std::vector<std::string> GetProductId() const;

                    /**
                     * 设置List of products to enable or disable
                     * @param _productId List of products to enable or disable
                     * 
                     */
                    void SetProductId(const std::vector<std::string>& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取`0`: enable; `1`: disable
                     * @return Status `0`: enable; `1`: disable
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置`0`: enable; `1`: disable
                     * @param _status `0`: enable; `1`: disable
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * List of products to enable or disable
                     */
                    std::vector<std::string> m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * `0`: enable; `1`: disable
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_SETPRODUCTSFORBIDDENSTATUSREQUEST_H_
