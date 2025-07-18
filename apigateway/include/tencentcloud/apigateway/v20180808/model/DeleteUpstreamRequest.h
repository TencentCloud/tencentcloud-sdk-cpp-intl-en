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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETEUPSTREAMREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETEUPSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DeleteUpstream request structure.
                */
                class DeleteUpstreamRequest : public AbstractModel
                {
                public:
                    DeleteUpstreamRequest();
                    ~DeleteUpstreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the upstream to be deleted
                     * @return UpstreamId ID of the upstream to be deleted
                     * 
                     */
                    std::string GetUpstreamId() const;

                    /**
                     * 设置ID of the upstream to be deleted
                     * @param _upstreamId ID of the upstream to be deleted
                     * 
                     */
                    void SetUpstreamId(const std::string& _upstreamId);

                    /**
                     * 判断参数 UpstreamId 是否已赋值
                     * @return UpstreamId 是否已赋值
                     * 
                     */
                    bool UpstreamIdHasBeenSet() const;

                private:

                    /**
                     * ID of the upstream to be deleted
                     */
                    std::string m_upstreamId;
                    bool m_upstreamIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETEUPSTREAMREQUEST_H_
