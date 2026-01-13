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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEASYNCREQUESTINFOREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEASYNCREQUESTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeAsyncRequestInfo request structure.
                */
                class DescribeAsyncRequestInfoRequest : public AbstractModel
                {
                public:
                    DescribeAsyncRequestInfoRequest();
                    ~DescribeAsyncRequestInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the ID of the asynchronous request to be queried. When an asynchronous process is involved in the API operation (such as [CreateBackupDBInstance](https://www.tencentcloud.com/document/product/240/46599?from_cn_redirect=1)), the response value of AsyncRequestId is the ID to be filled in for this parameter.
                     * @return AsyncRequestId Specifies the ID of the asynchronous request to be queried. When an asynchronous process is involved in the API operation (such as [CreateBackupDBInstance](https://www.tencentcloud.com/document/product/240/46599?from_cn_redirect=1)), the response value of AsyncRequestId is the ID to be filled in for this parameter.
                     * 
                     */
                    std::string GetAsyncRequestId() const;

                    /**
                     * 设置Specifies the ID of the asynchronous request to be queried. When an asynchronous process is involved in the API operation (such as [CreateBackupDBInstance](https://www.tencentcloud.com/document/product/240/46599?from_cn_redirect=1)), the response value of AsyncRequestId is the ID to be filled in for this parameter.
                     * @param _asyncRequestId Specifies the ID of the asynchronous request to be queried. When an asynchronous process is involved in the API operation (such as [CreateBackupDBInstance](https://www.tencentcloud.com/document/product/240/46599?from_cn_redirect=1)), the response value of AsyncRequestId is the ID to be filled in for this parameter.
                     * 
                     */
                    void SetAsyncRequestId(const std::string& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                private:

                    /**
                     * Specifies the ID of the asynchronous request to be queried. When an asynchronous process is involved in the API operation (such as [CreateBackupDBInstance](https://www.tencentcloud.com/document/product/240/46599?from_cn_redirect=1)), the response value of AsyncRequestId is the ID to be filled in for this parameter.
                     */
                    std::string m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEASYNCREQUESTINFOREQUEST_H_
