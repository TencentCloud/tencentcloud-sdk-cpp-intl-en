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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETAGSOFINSTANCEIDSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETAGSOFINSTANCEIDSREQUEST_H_

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
                * DescribeTagsOfInstanceIds request structure.
                */
                class DescribeTagsOfInstanceIdsRequest : public AbstractModel
                {
                public:
                    DescribeTagsOfInstanceIdsRequest();
                    ~DescribeTagsOfInstanceIdsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance list. Instance ID can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API. The length of the array passed in is not limited.
                     * @return InstanceIds Instance list. Instance ID can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API. The length of the array passed in is not limited.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance list. Instance ID can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API. The length of the array passed in is not limited.
                     * @param _instanceIds Instance list. Instance ID can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API. The length of the array passed in is not limited.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Pagination offset.
                     * @return Offset Pagination offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset.
                     * @param _offset Pagination offset.
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
                     * 获取Page size. Defaults to 15.
                     * @return Limit Page size. Defaults to 15.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Page size. Defaults to 15.
                     * @param _limit Page size. Defaults to 15.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Instance list. Instance ID can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API. The length of the array passed in is not limited.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Pagination offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page size. Defaults to 15.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETAGSOFINSTANCEIDSREQUEST_H_
