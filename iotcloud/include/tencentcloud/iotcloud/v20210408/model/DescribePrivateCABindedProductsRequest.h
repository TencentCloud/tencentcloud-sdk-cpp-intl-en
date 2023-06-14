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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECABINDEDPRODUCTSREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECABINDEDPRODUCTSREQUEST_H_

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
                * DescribePrivateCABindedProducts request structure.
                */
                class DescribePrivateCABindedProductsRequest : public AbstractModel
                {
                public:
                    DescribePrivateCABindedProductsRequest();
                    ~DescribePrivateCABindedProductsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Certificate name
                     * @return CertName Certificate name
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置Certificate name
                     * @param _certName Certificate name
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取Offset for query
                     * @return Offset Offset for query
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset for query
                     * @param _offset Offset for query
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of records to return, which is 20 by default and cannot exceed 200
                     * @return Limit Maximum number of records to return, which is 20 by default and cannot exceed 200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of records to return, which is 20 by default and cannot exceed 200
                     * @param _limit Maximum number of records to return, which is 20 by default and cannot exceed 200
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Certificate name
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * Offset for query
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of records to return, which is 20 by default and cannot exceed 200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECABINDEDPRODUCTSREQUEST_H_
