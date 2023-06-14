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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESTROYPREPAIDINSTANCERESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESTROYPREPAIDINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DestroyPrepaidInstance response structure.
                */
                class DestroyPrepaidInstanceResponse : public AbstractModel
                {
                public:
                    DestroyPrepaidInstanceResponse();
                    ~DestroyPrepaidInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Order ID
                     * @return DealId Order ID
                     * 
                     */
                    std::string GetDealId() const;

                    /**
                     * 判断参数 DealId 是否已赋值
                     * @return DealId 是否已赋值
                     * 
                     */
                    bool DealIdHasBeenSet() const;

                private:

                    /**
                     * Order ID
                     */
                    std::string m_dealId;
                    bool m_dealIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESTROYPREPAIDINSTANCERESPONSE_H_
