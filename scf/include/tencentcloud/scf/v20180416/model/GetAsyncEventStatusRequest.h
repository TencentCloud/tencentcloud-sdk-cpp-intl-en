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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETASYNCEVENTSTATUSREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETASYNCEVENTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetAsyncEventStatus request structure.
                */
                class GetAsyncEventStatusRequest : public AbstractModel
                {
                public:
                    GetAsyncEventStatusRequest();
                    ~GetAsyncEventStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the async execution request
                     * @return InvokeRequestId ID of the async execution request
                     * 
                     */
                    std::string GetInvokeRequestId() const;

                    /**
                     * 设置ID of the async execution request
                     * @param _invokeRequestId ID of the async execution request
                     * 
                     */
                    void SetInvokeRequestId(const std::string& _invokeRequestId);

                    /**
                     * 判断参数 InvokeRequestId 是否已赋值
                     * @return InvokeRequestId 是否已赋值
                     * 
                     */
                    bool InvokeRequestIdHasBeenSet() const;

                private:

                    /**
                     * ID of the async execution request
                     */
                    std::string m_invokeRequestId;
                    bool m_invokeRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETASYNCEVENTSTATUSREQUEST_H_
