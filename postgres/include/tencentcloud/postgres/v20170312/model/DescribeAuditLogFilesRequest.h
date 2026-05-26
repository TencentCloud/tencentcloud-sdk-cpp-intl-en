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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEAUDITLOGFILESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEAUDITLOGFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAuditLogFiles request structure.
                */
                class DescribeAuditLogFilesRequest : public AbstractModel
                {
                public:
                    DescribeAuditLogFilesRequest();
                    ~DescribeAuditLogFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID</p>
                     * @return InstanceId <p>Instance ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID</p>
                     * @param _instanceId <p>Instance ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Product name</p><p>Input parameter limit: postgres</p>
                     * @return Product <p>Product name</p><p>Input parameter limit: postgres</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>Product name</p><p>Input parameter limit: postgres</p>
                     * @param _product <p>Product name</p><p>Input parameter limit: postgres</p>
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
                     * 获取<p>Log file name</p>
                     * @return FileName <p>Log file name</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>Log file name</p>
                     * @param _fileName <p>Log file name</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>Query limit</p><p>Value range: [1, 300]</p>
                     * @return Limit <p>Query limit</p><p>Value range: [1, 300]</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Query limit</p><p>Value range: [1, 300]</p>
                     * @param _limit <p>Query limit</p><p>Value range: [1, 300]</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Offset</p><p>Value range: [0, 1000]</p>
                     * @return Offset <p>Offset</p><p>Value range: [0, 1000]</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset</p><p>Value range: [0, 1000]</p>
                     * @param _offset <p>Offset</p><p>Value range: [0, 1000]</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Product name</p><p>Input parameter limit: postgres</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>Log file name</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>Query limit</p><p>Value range: [1, 300]</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset</p><p>Value range: [0, 1000]</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEAUDITLOGFILESREQUEST_H_
