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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETEAPIDOCREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETEAPIDOCREQUEST_H_

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
                * DeleteAPIDoc request structure.
                */
                class DeleteAPIDocRequest : public AbstractModel
                {
                public:
                    DeleteAPIDocRequest();
                    ~DeleteAPIDocRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API document ID.
                     * @return ApiDocId API document ID.
                     * 
                     */
                    std::string GetApiDocId() const;

                    /**
                     * 设置API document ID.
                     * @param _apiDocId API document ID.
                     * 
                     */
                    void SetApiDocId(const std::string& _apiDocId);

                    /**
                     * 判断参数 ApiDocId 是否已赋值
                     * @return ApiDocId 是否已赋值
                     * 
                     */
                    bool ApiDocIdHasBeenSet() const;

                private:

                    /**
                     * API document ID.
                     */
                    std::string m_apiDocId;
                    bool m_apiDocIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETEAPIDOCREQUEST_H_
