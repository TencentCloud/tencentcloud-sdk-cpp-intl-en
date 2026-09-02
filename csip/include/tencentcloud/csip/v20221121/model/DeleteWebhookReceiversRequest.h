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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEWEBHOOKRECEIVERSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEWEBHOOKRECEIVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DeleteWebhookReceivers request structure.
                */
                class DeleteWebhookReceiversRequest : public AbstractModel
                {
                public:
                    DeleteWebhookReceiversRequest();
                    ~DeleteWebhookReceiversRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of robot IDs
Input parameter limit: up to 50 at a time
                     * @return IDList List of robot IDs
Input parameter limit: up to 50 at a time
                     * 
                     */
                    std::vector<int64_t> GetIDList() const;

                    /**
                     * 设置List of robot IDs
Input parameter limit: up to 50 at a time
                     * @param _iDList List of robot IDs
Input parameter limit: up to 50 at a time
                     * 
                     */
                    void SetIDList(const std::vector<int64_t>& _iDList);

                    /**
                     * 判断参数 IDList 是否已赋值
                     * @return IDList 是否已赋值
                     * 
                     */
                    bool IDListHasBeenSet() const;

                private:

                    /**
                     * List of robot IDs
Input parameter limit: up to 50 at a time
                     */
                    std::vector<int64_t> m_iDList;
                    bool m_iDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEWEBHOOKRECEIVERSREQUEST_H_
